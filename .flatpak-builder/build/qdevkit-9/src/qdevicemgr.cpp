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

#include <QVariant>
#include <QHash>
#include <QMutex>
#include <QSettings>
#include <libkitclient/qtapi>
#include "qdevicemgr.h"
#include "qdevkit.h"
#include "scriptengine.h"
#include "trayicon.h"
#include <QDebug>

enum State {
   Dead = 0,
   Idle,
   Running
};

class QDeviceMgr::Private
{
   public:
      Private()
      : interval(1000), state(Idle), network(0)
      {
      }

      int interval;
      volatile State state;
      QHash<int, QtAPI::Device*> hash;
      IPBackend* network;
      QMutex discoverLock; /*! Locked when discover is in progress. */
      QMutex runningLock;  /*! Locked when discovery loop is running. */
	   //DeviceMgr devmgr;

};


QDeviceMgr::QDeviceMgr(QDevKit* app)
   : QThread(app), DeviceMgr(), Component(app), d(new Private)
{
   // Register scriptables
   scriptEngine().registerClass(&QtAPI::Device::staticMetaObject);
   scriptEngine().registerClass(&QtAPI::IOChannel::staticMetaObject);

   // Create network sharing service
   d->network = new IPBackend(this);
   d->network->listen("0.0.0.0", IPBackend::Port);
	DeviceMgr::registerBackend(d->network);

   // Load dependent services
   reload();

   // Connect to settings events
   connect(app, SIGNAL(settingsReloaded()), this, SLOT(reload()));

   qDebug("QDeviceMgr: initialized");
}

QDeviceMgr::~QDeviceMgr()
{
   foreach(QtAPI::Device* dev, d->hash.values()) {
      if (dev != 0)
          dev->deleteLater();
   }

   // Stop and spin for finishing probing
   d->discoverLock.lock();
   stop();
   d->discoverLock.unlock();
   d->runningLock.lock();

   delete d->network;
   delete d;
   d->runningLock.unlock();
   qDebug("QDeviceMgr: cleanup finished");
}

IPBackend* QDeviceMgr::network()
{
   return d->network;
}

int QDeviceMgr::interval()
{
   return d->interval;
}

int QDeviceMgr::setInterval(int interval)
{
   int old = d->interval;
   d->interval = interval;
   return old;
}

void QDeviceMgr::start()
{
   d->state = Running;
   QThread::start();
}

void QDeviceMgr::stop()
{
   d->state = Idle;
}

void QDeviceMgr::reload()
{
    // Start discovery
    QSettings set;
    if (set.value("Remote/UseDiscovery", true).toBool()) {
        d->network->discovery()->start();
    } else {
        d->network->discovery()->stop();
        d->network->discovery()->wait(1500);

        // Disconnect all discovered nodes
        QList<ClientSocket*> clients = d->network->clients();
        foreach (ClientSocket* client, clients) {
            if (client->flags() & IPBackend::Discovered) {
                d->network->disconnect(client);
            }
        }

    }
}

void QDeviceMgr::run()
{
   // Loop while running
   d->runningLock.lock();
   while(d->state == Running) {

      // Discover
      d->discoverLock.lock();
      if (d->state != Running) {
         d->discoverLock.unlock();
         break;
      }
      DeviceMgr::discover();
      d->discoverLock.unlock();

      // Sleep
      msleep(d->interval);
   }

   // Mark as dead
   DeviceMgr::unregisterBackend(d->network);
   qDebug("QDeviceMgr: network service stopped");
   d->state = Dead;
   d->runningLock.unlock();
}

void QDeviceMgr::notifyFound(int deviceId)
{
   // Get device
	QtAPI::Device* dev = d->hash.value(deviceId, NULL);
	if (dev == NULL) return;

   QString msg;
   msg += tr("DeviceID:\t%1").arg(deviceId) + '\n';
   msg += tr("Product:\t") + dev->channelA()->product() + '\n';
   msg += tr("Serial:\t") + dev->channelA()->serial();

   tray().showMessage(tr("Device connected."), msg, 3000);
}

void QDeviceMgr::notifyLost(int deviceId)
{
   // Get device
	QtAPI::Device* dev = d->hash.value(deviceId, NULL);
	if (dev == NULL) return;

   QString msg;
   msg += tr("DeviceID:\t%1").arg(deviceId) + '\n';
   msg += tr("Product:\t") + dev->channelA()->product() + '\n';
   msg += tr("Serial:\t") + dev->channelA()->serial();

   tray().showMessage(tr("Device disconnected."), msg, 3000);
}

void QDeviceMgr::deviceAcquired(int deviceId)
{
   emit(acquired(deviceId));
}

void QDeviceMgr::deviceReleased(int deviceId)
{
   emit(released(deviceId));
}

void QDeviceMgr::deviceFound(int deviceId)
{
   qDebug() << "QDeviceMgr deviceFound(" << deviceId << ")"; 
	if (deviceId < 0) return;

   // Create wrapper 
   QtAPI::Device* dev = new QtAPI::Device(DeviceMgr::device(deviceId));
   d->hash.insert(deviceId, dev);

   // Notify
   notifyFound(deviceId);

   // Emit signal
   emit(found(deviceId));
}

void QDeviceMgr::deviceLost(int deviceId)
{
   qDebug() << "QDeviceMgr deviceLost(" << deviceId << ")"; 
	if (deviceId < 0) return;

	// Notify
   notifyLost(deviceId);

   // Emit signal
   emit(lost(deviceId));

   // Delete wrapper
   QtAPI::Device* dev = d->hash.take(deviceId);
   if(dev != NULL) {
      dev->deleteLater();
   }
}

QtAPI::Device* QDeviceMgr::device(int deviceId)
{
   qDebug() << "QDeviceMgr device(" << deviceId << ")"; 

	return d->hash.value(deviceId, NULL);
}

QtAPI::Device* QDeviceMgr::acquire(int deviceId)
{
   qDebug() << "QDeviceMgr acquire(" << deviceId << ")"; 

	if (DeviceMgr::acquire(deviceId) != 0)
       return d->hash.value(deviceId, NULL);

   return 0;
}

void QDeviceMgr::release(QtAPI::Device* device)
{
	if (device != 0)
      DeviceMgr::release(device->backend());
}

void QDeviceMgr::updateDevice(int deviceId)
{
   // Get device
	QtAPI::Device* dev = d->hash.value(deviceId, NULL);
	if ((dev == NULL) || (deviceId < 0)) return;

	DeviceMgr::update(dev->backend());
}


DeviceMgr::List& QDeviceMgr::list()
{
	return DeviceMgr::list();
} 

void QDeviceMgr::lock()
{
	DeviceMgr::lock();
}


void QDeviceMgr::unlock()
{
	DeviceMgr::unlock();
}  


#include "qdevicemgr.moc"
