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

#include "liburpc_copy/protocol.hpp"
#include "ip/ipbackend.h"
#include "ip/ipservice.h"
#include "ip/ipproto.h"
#include "devicemgr.h"
#include "deviceutils.h"
#include <cstdio>

struct IPService::Stash
{
    QList<int> acquired; /* List of acquired devices */
};

IPService::IPService(IPBackend* backend)
   : QThread(0), ServerSocket(), mState(Idle), mBackend(backend)
{
}

IPService::~IPService()
{
   if(isRunning())
      stop();

   DEBUG_MSG("IPService::~IPService() finished\n");
}

bool IPService::handle(int fd, Packet& pkt)
{
   // Check size
   if(pkt.size() <= 0)
      return false;

   qDebug("IPService::handle(fd=%d, pkt=%d) incoming packet",
          fd, pkt.op() - CallType);

   // Packet handling
   bool ret = true;
   switch(pkt.op())
   {
      case DevIsOpen:      devIsOpen(fd, pkt);         break;
      case DevBytesIn:     devBytesIn(fd, pkt);  break;
      case DevOpen:        devOpen(fd, pkt); break;
      case DevClose:       devClose(fd, pkt); break;
      case DevFlush:       devFlush(fd, pkt); break;
      case DevSetBaudRate: devSetBaudRate(fd, pkt); break;
      case DevConfigure:   devConfigure(fd, pkt); break;
      case DevSetMode:     devSetMode(fd, pkt); break;
      case DevSetDtr:      devSetDtr(fd, pkt); break;
      case DevSetRts:      devSetRts(fd, pkt); break;
      case DevRead:        devRead(fd, pkt); break;
      case DevReadSome:    devReadSome(fd, pkt); break;
      case DevWrite:       devWrite(fd, pkt); break;
      case DevStart:       devStart(fd, pkt); break;
      case DevTerminate:   devTerminate(fd, pkt); break;

      case BackendUpdate:         backendUpdate(fd, pkt); break;
      case BackendIsDevReady:     backendIsDevReady(fd, pkt); break;
      case BackendDevInitialize:  backendDevInitialize(fd, pkt); break;
      case BackendAcquired:       backendAcquired(fd, pkt); break;
      case BackendReleased:       backendReleased(fd, pkt); break;

      default:
         fprintf(stderr, "IPService::handle(): unhandled call type: 0x%02x (socket fd %d)", pkt.op(), fd);
         ret = false;
         break;
   }
   
   qDebug("IPService:: finished pkt");

   return ret;
}

void IPService::connected(int fd)
{
    mStash.insert(fd, new Stash);
}

void IPService::disconnected(int fd)
{
    // Fetch manager
    DeviceMgr* manager = mBackend->manager();
    if (manager == 0)
        return;

    // Fetch local stash
    Stash* stash = mStash.take(fd);

    // Free all acquired devices
    foreach(int uid, stash->acquired) {
        qDebug("Releasing device %d acquired by fd=%d", uid, fd);
        Device *dev = 0;
        DeviceMgr::List& list = manager->list();
        DeviceMgr::List::iterator di;
        for(di = list.begin(); di < list.end(); ++di) {
           if((*di)->id() == uid) {
              dev = *di;
              break;
           }
        }
        if (dev) {
            dev->closeAll();
            manager->release(manager->device(uid));
        }
    }

    delete stash;
}

void IPService::devIsOpen(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = 0;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      response = chan->isOpen();
   }

   // Respond
   Packet pkt(DevIsOpen);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devBytesIn(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = 0;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      response = chan->bytesIn();
   }

   // Respond
   Packet pkt(DevBytesIn);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devOpen(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
       response = chan->open();
   }

   // Respond
   Packet pkt(DevOpen);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devClose(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      response = chan->close();
   }

   // Respond
   Packet pkt(DevClose);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devFlush(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      int flags = it.getInt();
      response = chan->flush(flags);
   }

   // Respond
   Packet pkt(DevFlush);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devSetBaudRate(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      int rate = it.getInt();
      response = chan->setBaudRate(rate);
   }

   // Respond
   Packet pkt(DevSetBaudRate);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devConfigure(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      Device::Bits bits = int2bits(it.getInt());
      Device::StopBits sbits = int2sbits(it.getInt());
      Device::Parity parity = int2parity(it.getInt());
      response = chan->configure(bits, sbits, parity);
   }

   // Respond
   Packet pkt(DevConfigure);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devSetMode(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      int mask = it.getInt();
      int mode = it.getInt();
      response = chan->setMode(mask, mode);
   }

   // Respond
   Packet pkt(DevSetMode);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devSetDtr(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      bool state = it.getInt();
      response = chan->setDtr(state);
   }

   // Respond
   Packet pkt(DevSetDtr);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devSetRts(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      bool state = it.getInt();
      response = chan->setRts(state);
   }

   // Respond
   Packet pkt(DevSetRts);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devRead(int fd, Packet& in)
{
   // Get channel instance
   char buf[512];
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   char* mbuf = buf;
   if(chan != NULL) {
      int count = it.getInt();
      int timeout = it.getInt();
      if(count > 512) {
         mbuf = new char[count];
      }
      response = chan->read(mbuf, count, timeout);
   }

   // Respond
   Packet pkt(DevRead);
   pkt.addInt32(response);
   if(response > 0) {
      pkt.addData(mbuf, response);
   }
   pkt.send(fd);

   // Free buffer
   if(mbuf != buf) {
      delete mbuf;
   }
}

void IPService::devReadSome(int fd, Packet& in)
{
   // Get channel instance
   char buf[512];
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   char* mbuf = buf;
   if(chan != NULL) {
      int count = it.getInt();
      int timeout = it.getInt();
      if(count > 512) {
         mbuf = new char[count];
      }
      response = chan->readsome(mbuf, count, timeout);
   }

   // Respond
   Packet pkt(DevReadSome);
   pkt.addInt32(response);
   if(response > 0) {
      pkt.addData(mbuf, response);
   }
   pkt.send(fd);

   // Free buffer
   if(mbuf != buf) {
      delete mbuf;
   }
}

void IPService::devWrite(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      int count = it.getInt();
      const char* data = it.getByteArray();
      response = chan->write(data, count);
   }

   // Respond
   Packet pkt(DevWrite);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devStart(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      response = chan->start();
   }

   // Respond
   Packet pkt(DevStart);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::devTerminate(int fd, Packet& in)
{
   // Get channel instance
   Iterator it(in);
   int response = -1;
   IOChannel* chan = recvChannel(it);
   if(chan != NULL) {
      response = chan->terminate();
   }

   // Respond
   Packet pkt(DevTerminate);
   pkt.addInt32(response);
   pkt.send(fd);
}

void IPService::backendUpdate(int fd, Packet &in)
{
   // Mark incoming as used
	in.clear();

   // Prepare result packet
   Packet pkt(BackendUpdate);

   // Check manager
   if(mBackend->manager() == NULL) {
      pkt.send(fd);
      return;
   }

   // Add present devices
   DeviceMgr::List& list = mBackend->manager()->list();
   DeviceMgr::List::iterator di;
   for(di = list.begin(); di < list.end(); ++di) {
      if((*di)->flags() & Device::Shared) {
         Struct block = pkt.writeBlock(StructureType);
         block.addInt32((*di)->id());
         block.addInt32((*di)->vid());
         block.addInt32((*di)->pid());
         block.addInt32((*di)->flags());
         block.finalize();
      }
   }

   // Send result
   pkt.send(fd);
}

void IPService::backendIsDevReady(int fd, Packet &in)
{
   // Prepare result packet
   Packet pkt(BackendIsDevReady);

   // Check manager
   if(mBackend->manager() == NULL) {
      pkt.addInt8(0);
      pkt.send(fd);
      return;
   }

   // Read incoming packet
   Iterator it(in);
   int uid = it.getInt();

   // Find matching device
   DeviceMgr::List& list = mBackend->manager()->list();
   DeviceMgr::List::iterator di;
   for(di = list.begin(); di < list.end(); ++di) {
      if((*di)->id() == uid) {
         DeviceData& data = (*di)->data();
         pkt.addInt8(data.backend->isReady(&data));
         break;
      }
   }

   // Send result
   pkt.send(fd);
}


void IPService::backendDevInitialize(int fd, Packet &in)
{
    in.clear();

    qDebug("!! IPService::backendDevInitialize() not implemented");
}

void IPService::backendAcquired(int fd, Packet& in)
{
    // Prepare result packet
    Packet pkt(BackendAcquired);

    // Read incoming packet
    Iterator it(in);
    int uid = it.getInt();
    DeviceMgr* manager = mBackend->manager();
    if (manager != NULL) {
        manager->acquire(uid);
        mStash[fd]->acquired.append(uid);
    }

    // Send result
    pkt.addBool(true);
    pkt.send(fd);
}

void IPService::backendReleased(int fd, Packet& in)
{
    // Prepare result packet
    Packet pkt(BackendReleased);

    // Read incoming packet
    Iterator it(in);
    int uid = it.getInt();
    DeviceMgr* manager = mBackend->manager();
    if (manager != NULL) {
        manager->release(manager->device(uid));
        mStash[fd]->acquired.removeOne(uid);
    }

    // Send result
    pkt.addBool(true);
    pkt.send(fd);
}


IOChannel* IPService::recvChannel(Iterator& it)
{
   int id = it.getInt();
   int chan_id = it.getInt();

   // Check manager
   if(mBackend->manager() != NULL) {

      // Find device and channel
      Device* dev = 0;
      
      // Find matching device
      /*! \bug Potential race condition, but not easy fix,
       *       since it may be called when on single computer
       *       update() is called and in parallel readsome() is
       *       called, this violates lock order. */
      DeviceMgr::List& list = mBackend->manager()->list();
      DeviceMgr::List::iterator di;
      for(di = list.begin(); di < list.end(); ++di) {
         if((*di)->id() == id) {
            dev = *di;
            break;
         }
      }
      if(dev != NULL) {
         IOChannel& chan = dev->channel((const char) chan_id);
         return &chan;
      }
   }

   return NULL;
}

void IPService::start()
{
   if(isRunning())
      return;

   qDebug("DEBUG: IPService: start()");
   QThread::start();
}

void IPService::stop()
{
   if(!isRunning())
      return;

   qDebug("DEBUG: IPService: stop() initiated");
   close();
}

void IPService::run()
{
   qDebug("DEBUG: IPService: run()");

   ServerSocket::run();

   qDebug("DEBUG: IPService: run() finished");
};

#include "ipservice.moc"
