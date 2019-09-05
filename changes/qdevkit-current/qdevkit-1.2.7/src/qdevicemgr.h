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

#ifndef QDEVICEMGR_H
#define QDEVICEMGR_H

#include <QThread>
#include <libkitclient>
#include <libkitclient/qtapi>
#include <libkitclient/ip>
#include "component.h"
#include "qdevkit_export.h"

class QDEVKIT_EXPORT QDeviceMgr : public QThread, DeviceMgr, Component
{
   Q_OBJECT
   //Q_PROPERTY(int countAcquired READ countAcquired)
   //Q_PROPERTY(int countFree READ countFree)
   //Q_PROPERTY(int count READ count)

   public:
      QDeviceMgr(QDevKit* app);
      ~QDeviceMgr();

      /* Device sharing. */
      IPBackend* network();

      QtAPI::Device* operator[](int deviceId) {
         return device(deviceId);
      }

      int interval();
      int setInterval(int interval);

      /* Scriptable API */
      Q_INVOKABLE QtAPI::Device* device(int deviceId = -1);
      Q_INVOKABLE QtAPI::Device* acquire(int deviceId = -1);
      Q_INVOKABLE void release(QtAPI::Device* device);

		DeviceMgr::List& list(); //device list
		void updateDevice(int deviceId = -1);

		void lock();
		void unlock();

   public slots:
      void start();
      void stop();
      void reload();

   signals:
      void acquired(int deviceId);
      void released(int deviceId);
      void found(int deviceId);
      void lost(int deviceId);

   protected:
      void run();
      void deviceAcquired(int deviceId);
      void deviceReleased(int deviceId);
      void deviceFound(int deviceId);
      void deviceLost(int deviceId);

   protected slots:
      void notifyFound(int deviceId);
      void notifyLost(int deviceId);

   private:
      class Private;
      Private *d;
};

#endif
