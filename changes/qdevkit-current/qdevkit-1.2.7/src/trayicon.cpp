/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
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

#include <QSystemTrayIcon>
#include <QApplication>
#include <QSettings>
#include <QIcon>
#include <QMenu>

#include "trayicon.h"
#include "qdevkit.h"
#include "actioncollection.h"
#include "mainwindow.h"

TrayIcon::TrayIcon(QDevKit* app)
   : QSystemTrayIcon(app), Component(app)
{}

void TrayIcon::setup()
{
   // Set icon
   setIcon(QIcon(":/icons/22x22/qdevkit.png"));

   // Create menu
   ActionCollection& mainActions = mainWindow().actionCollection();
   QMenu* menu = new QMenu(tr("QDevKit"), &mainWindow());
   menu->addAction(mainActions["addLocal"]);
   menu->addAction(mainActions["addRemote"]);
   menu->addSeparator();
   menu->addAction(mainActions["settings"]);
   menu->addSeparator();
   menu->addAction(mainActions["exit"]);

   setContextMenu(menu);

   // Load settings
   reloadSettings();

   // Connect click events
   connect( this, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this,   SLOT(clicked(QSystemTrayIcon::ActivationReason)));

   // Listen to settings reload
   connect(&app(), SIGNAL(settingsReloaded()), this, SLOT(reloadSettings()));
}

void TrayIcon::clicked(QSystemTrayIcon::ActivationReason reason)
{
   switch(reason)
   {
       // Clicked
       case QSystemTrayIcon::DoubleClick:
       case QSystemTrayIcon::Trigger:
           mainWindow().setHidden(mainWindow().isVisible());
           break;
	   case QSystemTrayIcon::Unknown:
	   case QSystemTrayIcon::Context:
	   case QSystemTrayIcon::MiddleClick:
       default:
           break;
   }
}

void TrayIcon::showMessage(const QString& title, const QString& msg, int timeout)
{
   if(app().settingsValue("General/TrayMessages", false).toBool())
      QSystemTrayIcon::showMessage(title, msg, QSystemTrayIcon::Information, timeout);
}

void TrayIcon::setToolTip(const QString& msg)
{
   return QSystemTrayIcon::setToolTip(msg);
}

void TrayIcon::reloadSettings()
{
   setVisible(app().settingsValue("General/TrayShow", false).toBool());
}

void TrayIcon::setVisible(bool state)
{
   // Quit on last window close if tray is hidden
   qApp->setQuitOnLastWindowClosed(!state);
   QSystemTrayIcon::setVisible(state);
}

#include "trayicon.moc"
