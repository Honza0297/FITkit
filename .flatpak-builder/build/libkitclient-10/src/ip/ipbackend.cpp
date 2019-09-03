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

#include "liburpc_copy/clientsocket.hpp"
#include "liburpc_copy/protocol.hpp"
#include "ip/ipbackend.h"
#include "ip/ipdevice.h"
#include "ip/ipservice.h"
#include "ip/ipdiscovery.h"
#include "ip/ipproto.h"
#include "deviceutils.h"
#include <QList>
#include <QHash>
#include <QMutex>

class IPBackend::Private
{

public:

    Private(IPBackend* _backend = 0)
        : backend(_backend), service(0), discovery(0) {
        is_initialized = false;
    }

    /* Attributes. */
    bool is_initialized;
    IPBackend* backend;
    IPService* service;
    IPDiscovery* discovery;
    QHash< ClientSocket*, QHash<int,int> > cache;
    QList<ClientSocket*> clients;
    QMutex lock;
};

IPBackend::IPBackend(DeviceMgr* mgr)
    : DeviceBackend(mgr), d(new Private(this))
{
}

IPBackend::~IPBackend()
{
    // Disconnect clients
    d->lock.lock();
    foreach(ClientSocket* sock, d->clients) {
        sock->close();
        delete sock;
    }
    d->lock.unlock();

    // Stop discovery
    if(d->discovery != NULL) {
       d->discovery->stop();
       delete d->discovery;
    }

    // Stop service
    if(d->service != NULL) {
       d->service->close();
       delete d->service;
    }
    delete d;

    DEBUG_MSG("IPBackend::~IPBackend() finished\n");
}

ClientSocket* IPBackend::connect(const char* host, int port, int flags)
{
    // Find existing connection
    d->lock.lock();
    foreach(ClientSocket* s, d->clients) {
        if (strcmp(s->host(), host) == 0 && s->port() == port) {
            s->lock();
            if (!s->isOpen()) {
                d->lock.unlock();
                if (s->connect(host, port) != Socket::Ok) {
                    DEBUG_MSG("IPBackend: failed to reconnect to %s:%d\n",
                              host, port);
                    s->unlock();
                    return 0;
                }
                d->lock.lock();
                
                DEBUG_MSG("IPBackend: reconnected to %s:%d\n", host, port);
                s->setFlags(s->flags() | flags);
            }
            
            s->unlock();
            d->lock.unlock();
            return s;
        }
    }
    d->lock.unlock();

    ClientSocket* sock = new ClientSocket();
    sock->lock();
    int ret = sock->connect(host, port);
    if (ret == Socket::Ok) {
        DEBUG_MSG("IPBackend: connected to %s:%d\n", host, port);
        sock->setFlags(flags);
        d->lock.lock();
        d->clients.append(sock);
        d->lock.unlock();
        sock->unlock();
        return sock;
    } else {
       sock->unlock();
    }

    DEBUG_MSG("IPBackend: connection to %s:%d failed\n", host, port);
    delete sock;
    return 0;
}

int IPBackend::disconnect(ClientSocket* host)
{
    // Check host
    if (!host) {
        return -1;
    }

    // Close socket
    host->lock();
    host->setFlags(host->flags() & !IPBackend::Discovered);
    int ret = host->close();
    host->unlock();

    /*! \todo ClientSocket must be deleted at some point.
     *        It must not be stored in DeviceTree or somewhere else.
     */
    return ret;
}

QList<ClientSocket*> IPBackend::clients()
{
    return d->clients;
}

IPDiscovery* IPBackend::discovery()
{
    return d->discovery;
}

IPService* IPBackend::service()
{
    return d->service;
}

int IPBackend::listen(const char* host, int port)
{
    // Create discovery service
    if(d->discovery == NULL) {
        d->discovery = new IPDiscovery(this);
    }

    // Check service
    if(d->service == NULL) {
        d->service = new IPService(this);
    }

    return d->service->listen(host, IPBackend::Port);
}

bool IPBackend::start()
{
    if(d->service) {
        d->service->start();
    }

    return true;
}

bool IPBackend::stop()
{
    if(d->discovery) {
        d->discovery->stop();
        d->discovery->wait(1500);
    }
    if(d->service) {
        d->service->stop();
        d->service->wait(1500);
    }

    return true;
}

Device* IPBackend::create(DeviceData* data)
{
    qDebug("DEBUG: IPBackend: create() forming device from IPData ptr=%p",
           data);
    IPDevice* dev = new IPDevice(data);
    qDebug("DEBUG: IPBackend: create() new device ID=%u, ptr=%p",
           dev->id(), dev);
    return static_cast<Device*>(dev);
}

bool IPBackend::isReady(DeviceData* dev)
{
   // Check data cast
   IPData* data = static_cast<IPData*>(dev);
   if(data == 0) {
      return false;
   }

   // Check connection
   if (!data->client->isOpen()) {
       return false;
   }

   // Prepare packet
   Packet pkt(BackendIsDevReady);
   pkt.addInt32(data->uid);

   // Query
   int ret = query(data->client, pkt);
   if (ret < 0) {
       disconnect(data->client);
       return false;
   }

   // Check
   if(pkt.op() != BackendIsDevReady) {
      qDebug("DEBUG: IPBackend: isReady() received wrong packet %d",
             pkt.op() - CallType);
      disconnect(data->client);
      return false;
   }

   // Get reply
   Iterator it(pkt);
   return it.getInt();
}

bool IPBackend::prepare()
{
   d->lock.lock();
   bool ret = d->clients.size() > 0;
   d->lock.unlock();
   return ret;
}

bool IPBackend::initialize(Device* dev)
{
   //! \todo Check remotely.
   return true;
}

void IPBackend::update(DeviceData::List& incoming)
{
    // Update clients
    d->lock.lock();
    DeviceData::List::iterator di;
    QList<ClientSocket*>::iterator ci;
    for(ci = d->clients.begin(); ci < d->clients.end(); ++ci) {

        // Get client
        ClientSocket* client = *ci;
        qDebug("DEBUG: IPBackend: updating client %p", client);

        // Check client
        if (!client->isOpen()) {
            // Check if has any devices
           qDebug("DEBUG: IPBackend: client %p disconnected, closing devices",
                  client);
            int numDevices = 0;
            for(di = incoming.begin(); di < incoming.end(); ++di) {
                IPData* cdata = static_cast<IPData*>(*di);
                cdata->lockData();
                if (cdata->client == client) {
                    ++numDevices;
                }
                cdata->unlockData();
            }

            // Delete if not open and has not any device
            if (numDevices == 0) {
                qDebug("DEBUG: IPBackend: deleting disconnected ClientSocket");
                d->clients.erase(ci);
                delete client;
                break;
            }
            
            qDebug("DEBUG: IPBackend: client %p not open, but has open devices\n",
                   client);
            continue;
        }

        // Update cache
        QHash<int,int>& cache = d->cache[client];
        cache.clear();

        // Prepare query packet
        Packet pkt(BackendUpdate);
        pkt.addInt8(1);

        // Query
        int ret = query(client, pkt);
        if (ret < 0) {
            qDebug("DEBUG: IPBackend: update() = %d", ret);
            disconnect(client);
            continue;
        }

        // Check
        if(pkt.op() != BackendUpdate) {
           qDebug("DEBUG: IPBackend: update() received wrong packet %d",
                  pkt.op() - CallType);
           d->lock.unlock();
           return;
        }

        // Evaluate
        Iterator it(pkt);
        while(it.enter()) {

            /* Get ID and status.
                Packet(12B) = {
                  int32 UID,
                  int32 VID,
                  int32 PID
                }
             */
            int uid = it.getInt();
            int vid = it.getInt();
            int pid = it.getInt();
            int flags = it.getInt();

            // Find device
            bool exists = false;
            for(di = incoming.begin(); di < incoming.end(); ++di) {
                IPData* cdata = static_cast<IPData*>(*di);
                cdata->lockData();
                if(cdata->uid == uid && cdata->client == client) {
                    // Store old flags to cache
                    cache.insert(uid, cdata->flags);

                    // Pass on Acquired
                    cdata->flags |= Device::Checked;
                    cdata->flags &= ~Device::Acquired;
                    cdata->flags |= flags & (Device::Acquired);
                    exists = true;
                    cdata->unlockData();
                    qDebug("DEBUG: IPBackend: update() updated device %d",
                           uid);
                    break;
                }
                cdata->unlockData();
            }

            // Create device if not found
            if(!exists) {
                IPData* data = new IPData();
                qDebug("DEBUG: IPBackend: update() new IPData with uid %d, "
                       "ptr=%p, client=%p",
                       uid, data, client);
                data->vid = vid;
                data->pid = pid;
                data->uid = uid;
                data->client = client;
                data->flags = Device::New|Device::Checked|Device::Virtual;
                cache.insert(uid, data->flags);
                data->flags |= flags & (Device::Acquired);
                data->backend = this;
                incoming.push_back(data);
            }
        }
    }
    
    d->lock.unlock();
}

void IPBackend::updateFinalize(DeviceMgr::List& devices)
{
    // Process all devices
    d->lock.lock();
    for (DeviceMgr::iterator it = devices.begin(); it != devices.end(); ++it) {

        // Assert IPDevice
        IPDevice* device = static_cast<IPDevice*>(*it);
        if (device == 0) {
            continue;
        }

        // Evaluate flags from cache
        IPData* data = static_cast<IPData*>(&device->data());
        QHash<int,int>& cache = d->cache[data->client];

        // Compare flags
        int oldflags = cache.take(data->uid);

        // Gained Acquired state
        int flagdiff = oldflags ^ device->flags();
        if (flagdiff & Device::Acquired) {
            // Notify manager, this won't result in DeviceBackend callbacks
            if (data->flags & Device::Acquired) {
                manager()->deviceAcquired(device->id());
            } else {
                manager()->deviceReleased(device->id());
            }
        }
    }
    
    d->lock.unlock();

    // Broadcast to discovery service
    d->discovery->broadcast(IPDiscovery::Announce);
}

void IPBackend::deviceAcquired(int deviceId)
{
    // Get device
    Device* bdevice = manager()->device(deviceId);
    if (bdevice == 0) {
        return;
    }

    // Get client socket
    IPDevice* device = static_cast<IPDevice*>(bdevice);
    if (device == 0) {
        return;
    }

    IPData* data = static_cast<IPData*>(&device->data());
    if (data->backend != this) {
        return;
    }

    // Prepare query packet
    Packet pkt(BackendAcquired);
    pkt.addInt32(data->uid);

    // Query
    int ret = query(data->client, pkt);
    if (ret < 0) {
        return;
    }

    // Wait for reply
    if (pkt.op() != BackendAcquired) {
        qDebug("DEBUG: IPBackend::deviceAcquired() received wrong packet %d",
               pkt.op() - CallType);
    }
}

void IPBackend::deviceReleased(int deviceId)
{
    // Get device
    Device* bdevice = manager()->device(deviceId);
    if (bdevice == 0) {
        return;
    }

    // Get client socket
    IPDevice* device = static_cast<IPDevice*>(bdevice);
    if (device == 0) {
        return;
    }

    IPData* data = static_cast<IPData*>(&device->data());
    if (data->backend != this) {
        return;
    }

    // Prepare query packet
    Packet pkt(BackendReleased);
    pkt.addInt32(data->uid);

    // Query
    int ret = query(data->client, pkt);
    if (ret < 0) {
        return;
    }

    // Wait for reply
    if (pkt.op() != BackendReleased) {
        qDebug("IPBackend: deviceReleased() received wrong packet %d",
               pkt.op() - CallType);
    }
}

int IPBackend::query(ClientSocket* client, Packet &pkt)
{
    // Query
    if (!client->isOpen())
        return -1;

    int ret = 0;
    client->lock();
    ret = pkt.send(client->sock());
    if (ret >= 0) {
       qDebug("DEBUG: IPBackend: sent msg %u", pkt.op() - CallType);
       ret = pkt.recv(client->sock());
    } else {
       qDebug("DEBUG: IPBackend: failed to send msg %u", pkt.op() - CallType);
    }
    qDebug("DEBUG: IPBackend: rcvd msg %u", pkt.op() - CallType);
    client->unlock();

    return ret;
}
