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
#include <QApplication>
#include <QStringListModel>

#include <QProgressDialog>
#include <QDialog>
#include <QSettings>
#include <QFile>
#include <QLabel>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QMessageBox>

#include "filetransfer.h"
#include <qdevkit/plugin.h>
#include <qdevkit/connectiontabs.h>
#include <qdevkit/mainwindow.h>
#include <libkitclient/qtapi>

FileTransfer::FileTransfer()
   : m_loaded(false), m_fs(0), m_maxFileSize(-1), m_btOk(0)
{
}

bool FileTransfer::isLoaded()
{
   return m_loaded;
}

int FileTransfer::load()
{
   // Update state
   m_loaded = true;

   // Hook plugin
   ConnectionTabs* tabs = mainWindow().tabs();
   connect(tabs, SIGNAL(beforeTabRemoved(int)),  this, SLOT(disconnectPlugin(int)));
   connect(tabs, SIGNAL(tabInserted(int)), this, SLOT(connectPlugin(int)));

   // Install plugin for each tab
   for (int i = 0; i < tabs->count(); i++)
       connectPlugin(i);

   return true;
}

int FileTransfer::unload()
{
   m_loaded = false;

   // Unhook plugin
   ConnectionTabs* tabs = mainWindow().tabs();
   disconnect(tabs, SIGNAL(beforeTabRemoved(int)),  this, SLOT(disconnectPlugin(int)));
   disconnect(tabs, SIGNAL(tabInserted(int)), this, SLOT(connectPlugin(int)));

   // Uninstall plugin for each tab
   for (int i = 0; i< tabs->count(); i++)
       disconnectPlugin(i);

   return true;
}

int FileTransfer::configure()
{
   return true;
}

void FileTransfer::connectPlugin(int tabId)
{
   Connection* conn = (*mainWindow().tabs())[tabId];
   if (conn == 0)
      return;

   connect(conn, SIGNAL(commandReceived(int,QString,QStringList)),
           this, SLOT(commandReceived(int,QString,QStringList)));
}

void FileTransfer::disconnectPlugin(int tabId)
{
   Connection* conn = (*mainWindow().tabs())[tabId];
   if (conn == 0)
      return;

   disconnect(conn, SIGNAL(commandReceived(int,QString,QStringList)),
              this, SLOT(commandReceived(int,QString,QStringList)));
}

void FileTransfer::fileChanged()
{
   //kontrola existence, velikosti + enable OK tlacitka
   if ((m_btOk != 0) && (m_fs != 0))
   {
      QFileInfo fi = QFileInfo(m_fs->file());
      m_btOk->setEnabled(fi.isFile() && ((m_maxFileSize == -1) || (fi.size() <= m_maxFileSize)));

      if (m_btOk->isEnabled())
      {
         QSettings set;
         set.setValue("FileTransferPlugin/RecentFile", m_fs->file());
      }
   }
}

QString FileTransfer::selectFile(const QStringList& parameters)
{
   //parse parameters
   QMap<QString,QString> params;

   foreach (QString param, parameters)
   {
     int idx = param.indexOf('=');
     if (idx > -1)
        params.insert(param.mid(0,idx) /* param name */, param.mid(idx+1) /* param value */);
   }

   bool ok;
   m_maxFileSize = params.value("maxsize","-1").toInt(&ok);
   if (!ok) m_maxFileSize = -1;

   //create dialog
   QDialog dlg;
   dlg.setWindowTitle(tr("File transfer"));
   dlg.setMinimumWidth(400);

   m_btOk = new QPushButton(QIcon(":/icons/22x22/bt-ok.png"), tr("&Accept"), &dlg);
   m_btOk->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
   QPushButton* btCancel = new QPushButton(QIcon(":/icons/22x22/bt-cancel.png"), tr("&Cancel"), &dlg);
   btCancel->setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
   connect(m_btOk,     SIGNAL(clicked()), &dlg, SLOT(accept()));
   connect(btCancel, SIGNAL(clicked()), &dlg, SLOT(reject()));

   QLabel* labTitle = new QLabel(&dlg);
   labTitle->setText(params.value("title","Select a file"));

   QHBoxLayout* ltButtons = new QHBoxLayout();
   ltButtons->setAlignment(Qt::AlignCenter);
   ltButtons->addWidget(m_btOk);
   ltButtons->addWidget(btCancel);

   m_fs = new FileSelector(&dlg);
   m_fs->setMode(FileSelector::File);
   //set the default path
   QSettings set;
   set.beginGroup("FileTransferPlugin");
   m_fs->setDefault((set.contains("RecentFile")) ? set.value("RecentFile").toString() : loader()->path());
   set.endGroup();

   m_fs->setFilePattern("File (" + params.value("mask","*.*") + ")");
   connect(m_fs, SIGNAL(changed()), this, SLOT(fileChanged()));

   QGridLayout* lt = new QGridLayout(&dlg);
   lt->addWidget(labTitle, 0, 0);
   lt->addWidget(m_fs, 1, 0);
   lt->addLayout(ltButtons, 2, 0, 1, 2);

   fileChanged();

   QString result;
   if (dlg.exec() == QDialog::Accepted)
      result = m_fs->file();

   //is it necessary?
   delete m_btOk;
   m_btOk = 0;
   delete m_fs;
   m_fs = 0;
   return result;
}


#define STX  0x01
#define ETX  0x03
#define SOT  0x02
#define EOT  0x04
#define ACK  0x06
#define NAK  0x15
#define PACKET_SIZE 264

void FileTransfer::commandReceived(int deviceId, const QString& command, const QStringList& parameters)
{
   Connection* conn = (*mainWindow().tabs()).connectionFromDeviceId(deviceId);
   if ((conn == 0) || (command != "UPLOADFILE"))
      return;

   QtAPI::Device* device = conn->detach();

   // Get help
   QtAPI::IOChannel& ch = *device->channelB();

   char buf[16];
   unsigned char data[266];

   ch.write("\x06",1); //confirm the request

   //wait for FITkit response
   buf[0] = 0x00;
   if (ch.read(buf,1,1500) != 1) {
      QMessageBox::critical(0, tr("FileTransfer plugin"), tr("Timeout during initialization"), QMessageBox::Ok);
      return;
   }
   if (buf[0] != 0x06) { //NAK received?
      QMessageBox::critical(0, tr("FileTransfer plugin"), tr("Connection refused"), QMessageBox::Ok);
      return;
   }

   //create progress dialog
   QProgressDialog* pd = new QProgressDialog("Operation in progress.", "Cancel", 0, 0);
   pd->setWindowModality(Qt::WindowModal);

   while (1)
   {

      QString fileName = selectFile(parameters);
      QFile file(fileName);
      if ((fileName.isEmpty()) || (!file.exists()))
         break;
      if (!file.open(QIODevice::ReadOnly))
         break;

      int packets = QFileInfo(fileName).size();
      packets = (packets % PACKET_SIZE > 0) ? packets/PACKET_SIZE + 1 : packets/PACKET_SIZE;

      //show progress dialog
      pd->setMaximum(packets);
      pd->show();
      QApplication::processEvents();

      //read first block
      int readed = file.read((char *)(data + 1), PACKET_SIZE);
      for (int i=readed;i<PACKET_SIZE;i++) data[i+1] = 0x00;

      //send data
      int tries = 3;
      for (int j=0; j < packets;) {
         if (pd->wasCanceled())
            break;
         pd->setValue(j);
         QApplication::processEvents();

         ch.write("\x02",1); //SOT


         //wait for ACK of packet transfer
         if (ch.read(buf,1,2000) != 1) {
            QMessageBox::critical(0, tr("FileTransfer plugin"), tr("Timeout: wait for next packet ACK"), QMessageBox::Ok);
            break;
         }
         if (buf[0] != 0x06) //NAK? next packed has been refused (maybe size limit exceed)
            break;

         //calculate checksum
         data[0] = 0x00;
         for (int i=1; i<265; i++) data[0] = (data[0] + data[i]) & 0xFF;
         //send the data
         ch.write((char *)data, 265);
         tries--;

         if (ch.read(buf,1,2000) != 1) {
            QMessageBox::critical(0, tr("FileTransfer plugin"), tr("Timeout: wait for packed written ACK"), QMessageBox::Ok);
            break;
         }
         //process the response
         if (buf[0] == 0x06) //ACK - data successfully written
         {
            j++;
            //read next data block
            readed = file.read((char *)(data + 1), 264);
            for (int i=readed;i<264;i++) data[i+1] = 0x00;
            tries = 3;
         } else if (buf[0] == 0x15) { //NAK - invalid checksum?, try again
            if (tries == 0)
            {
               QMessageBox::critical(0, tr("FileTransfer plugin"),
                     tr("Packet didn't transfered, number of tries exceed"), QMessageBox::Ok);
               break;
            }
         } else {
            QMessageBox::critical(0, tr("FileTransfer plugin"), tr("Invalid response"), QMessageBox::Ok);
            break;
         }

      }//for

      file.close();
      break;
   }//while

   delete pd;

   //send EOT to end the transmission (used if an error occurs)
   ch.write("\x04",1);
   //wait for ACK
   ch.read(buf,1);

   conn->attach();
}

Q_EXPORT_PLUGIN2(pnp_FileTransfer, FileTransfer)

#include "filetransfer.moc"
