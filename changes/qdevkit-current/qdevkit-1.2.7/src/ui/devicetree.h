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

#ifndef DEVICETREE_H
#define DEVICETREE_H

#include <QTreeWidget>
#include <QMap>

#include "component.h"
#include "qdevkitui_export.h"

class ClientSocket;
typedef QMap<int, QTreeWidgetItem*> DeviceMap;
typedef DeviceMap::iterator DeviceMapIterator;

class DeviceTreePrivate;

class QDEVKITUI_EXPORT DeviceTree : public QTreeWidget, Component
{
   Q_OBJECT

   public:
      explicit DeviceTree(QDevKit* app, QWidget* parent = 0);
      ~DeviceTree();

      /* Scriptable API */
      Q_INVOKABLE int selectedDevice();
      Q_INVOKABLE int devices();

      QTreeWidgetItem* insertClient(ClientSocket* client);

   public slots:
      void showLocal();
      void selectFirstDevice();
      void selectDevice(int deviceId);

   signals:
      void deviceHovered(int deviceId);
      void deviceSelected(int deviceId);
      void deviceActivated(int deviceId);

   protected:
      void contextMenuEvent(QContextMenuEvent * event);

   protected slots:
      void itemHover(QTreeWidgetItem* item, int col);
      void itemSelect(QTreeWidgetItem* item, int col);
      void itemActivate(QTreeWidgetItem* item, int col);
      void itemEnable(int deviceId);
      void itemDisable(int deviceId);
      void itemAppend(int deviceId);
      void itemDelete(int deviceId);
      void sharingToggle(bool val);
      void disconnectHost();

   private:
      DeviceTreePrivate *d;
      void createMenu();

};

#endif
