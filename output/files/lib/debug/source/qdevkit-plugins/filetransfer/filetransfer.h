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

#ifndef FILETRANSFER_H
#define FILETRANSFER_H

#include <QObject>
#include <QPushButton>
#include <qdevkit/plugininterfaces.h>
#include <qdevkit/fileselector.h>

class QDKPLUGIN_EXPORT FileTransfer : public QObject, public PluginInterface
{
   Q_OBJECT
   Q_INTERFACES(PluginInterface)
   
   private:
      bool           m_loaded;
      FileSelector*  m_fs;
      int            m_maxFileSize;
      QPushButton*   m_btOk;

      QString selectFile(const QStringList& parameters);

   private slots:
      void connectPlugin(int tabId);
      void disconnectPlugin(int tabId);

      void commandReceived(int deviceId, const QString& command, const QStringList& parameters);
      void fileChanged();

   public:
      FileTransfer();

      bool isLoaded();
      int load();
      int unload();
      int configure();
};

#endif
