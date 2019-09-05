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

#ifndef CONNECTION_TABS_H
#define CONNECTION_TABS_H

#include <QTabWidget>
#include <QWidget>

class ConnectionTabsPrivate;

#include "connection.h"
#include "component.h"
#include "qdevkitui_export.h"

class QDEVKITUI_EXPORT ConnectionTabs : public QTabWidget, Component
{
   Q_OBJECT

   public:
      explicit ConnectionTabs(QDevKit* app, QWidget* parent = 0);
      ~ConnectionTabs();

      /* Scriptable API */
      Q_INVOKABLE void append(Connection* conn);
      Q_INVOKABLE int indexOf(int deviceId);
      Q_INVOKABLE Connection* connection(int tabId);
      Q_INVOKABLE Connection* connectionFromDeviceId(int deviceId);
      Q_INVOKABLE Connection* current();
      Q_INVOKABLE Connection* operator[](int tabId);

   public slots:
      void open(int deviceId);
      bool canClose(int tabId);
      bool removeTab(int tabId = -1);
      void setCurrentTab(int tabId = 0);
      void connectionChange(int deviceId);
      void connectionError(int deviceId);

   signals:
      void tabReady(int tabId);
      void tabInserted(int tabId);
      void beforeTabRemoved(int tabId);
      void tabRemoved(int tabId);
      void connectionCreated(int deviceId);
      void connectionChanged(int deviceId);
      void connectionClosed(int deviceId);

   protected:
      void contextMenuEvent(QContextMenuEvent * event);
      void paintEvent(QPaintEvent * event);

   protected slots:
      void handleTabChange(int tabId);

  protected:
      void updateTab(int tabId);

   private:
      ConnectionTabsPrivate *d;
};

#endif
