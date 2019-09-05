/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#include <QtPlugin>
#include <QCompleter>
#include <QApplication>
#include <QStringListModel>

#include "completer.h"
#include <qdevkit/plugin.h>
#include <qdevkit/connectiontabs.h>
#include <qdevkit/mainwindow.h>
#include <libkitclient/qtapi>

Completer::Completer()
   : m_loaded(false)
{
}

bool Completer::isLoaded()
{
   return m_loaded;
}

int Completer::load()
{
   // Update state
   m_loaded = true;

   // Hook completer
   ConnectionTabs* tabs = mainWindow().tabs();
   connect(tabs, SIGNAL(beforeTabRemoved(int)),  this, SLOT(disconnectCompleter(int)));
   connect(tabs, SIGNAL(tabInserted(int)), this, SLOT(connectCompleter(int)));

   // Install completer for each tab
   for (int i = 0; i < tabs->count(); i++)
      connectCompleter(i);

   return true;
}

int Completer::unload()
{
   m_loaded = false;

   // Disconnect
   ConnectionTabs* tabs = mainWindow().tabs();
   disconnect(tabs, SIGNAL(beforeTabRemoved(int)),  this, SLOT(disconnectCompleter(int)));
   disconnect(tabs, SIGNAL(tabInserted(int)), this, SLOT(connectCompleter(int)));

   // Unhook completers
   for (int i = 0; i< tabs->count(); i++)
      disconnectCompleter(i);

   return true;
}

int Completer::configure()
{
   return true;
}

void Completer::connectCompleter(int tabId)
{
   Connection* conn = (*mainWindow().tabs())[tabId];
   if (conn == 0)
      return;

   connect(conn, SIGNAL(ready(int)), this, SLOT(deviceReady(int)));
}


void Completer::disconnectCompleter(int tabId)
{
   Connection* conn = (*mainWindow().tabs())[tabId];
   if (conn == 0)
      return;

   QStringListModel* model = qobject_cast<QStringListModel*>(conn->input()->completer()->model());
   model->setStringList(QStringList());

   disconnect(conn, SIGNAL(ready(int)), this, SLOT(deviceReady(int)));
}


void Completer::deviceReady(int deviceId)
{
   Connection* conn = (*mainWindow().tabs()).connectionFromDeviceId(deviceId);
   if(conn == 0)
   {
      qDebug("DEBUG: Completer: cannot hook to device (%d)", deviceId);
      return;
   }

   if ((!conn->isAttached()) || (!conn->isReady()))
      return;

   // Create initial completion list
   QStringList keywordList;
   QtAPI::Device* device = conn->detach();

   // Get help
   QtAPI::IOChannel& ch = *device->channelB();
   ch.flushInput();

   ch << "help\r\n";

   QString helpOutput;
   char buffer;
   int  readb = 0;
  // int cycle = 200; // 1s timeout
   while((readb = ch.read(&buffer, 1, 500)) > 0)
   {
	   if (readb > 0) {
		helpOutput.append((char)buffer);
		if(buffer == '>')
		{
			qDebug("DEBUG: Completer: got whole reply");
			break;
		}
	   }

	  /*
      if(--cycle == 0)
      {
         qDebug("DEBUG: Completer: timeout when waiting for reply.");
         break;
      }
	  */
   }

   conn->attach();

   // Parse help
   int index = 0;
   QRegExp rx("(?=\\n)\\s*([A-Z]{2,}[A-Z\\s]+)(?=\\s*[a-z\\.\"]{2,})");

   while((index = rx.indexIn(helpOutput, index)) != -1)
   {
      keywordList << rx.cap(1).trimmed();
      index += rx.matchedLength();
   }

   // Hook completer
   if(keywordList.size() != 0)
   {
      QStringListModel* model = qobject_cast<QStringListModel*>(conn->input()->completer()->model());
      model->setStringList(model->stringList() + keywordList);
   }
   else
      qDebug("DEBUG: Completer: 0 commands read.");

   // Handler complete
   qDebug("DEBUG: Completer: hook to device %d complete (%d keywords)", deviceId, keywordList.size());
}

Q_EXPORT_PLUGIN2(pnp_Completer, Completer)

#include "completer.moc"
