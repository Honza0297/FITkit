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
#include "ip/ipdevice.h"
#include "ip/ipproto.h"
#include "deviceutils.h"
#include <cstring>
#include <cstdio>
#include <QDebug>

#ifdef __WIN32
#define sleep Sleep
#endif

IPDevice::IPDevice(DeviceData* data)
   : Device(data)
{
    d = static_cast<IPData*>(data);
	 qDebug() << "IPDevice() " << d->client;
}

IPDevice::~IPDevice()
{
   delete d;
}

IOChannel& IPDevice::channel(ChannelId chan)
{
   if(chan == ChannelA)
      return *d->channelA;

   if(chan == ChannelB)
      return *d->channelB;

   // Any channel
   return channel(DEFAULT_CHANNEL);
}

const char* IPDevice::host()
{
    return d->client->host();
}

int IPDevice::port()
{
    return d->client->port();
}

ClientSocket* IPDevice::client()
{
    return d->client;
}

IPData::IPData()
   : DeviceData(), uid(-1), client(0), channelA(0), channelB(0)
{
   // Create channels
   channelA = new IPChannel(this, Device::ChannelA);
   channelB = new IPChannel(this, Device::ChannelB);
}

IPData::~IPData()
{
   delete channelA;
   delete channelB;
}

class IPChannel::Private
{
   public:
   IPData* data;
};

IPChannel::IPChannel(IPData* data, Device::ChannelId id)
      : IOChannel(data, id), d(new Private)
{
   d->data = data;
}

IPChannel::~IPChannel()
{
   delete d;
}

void IPChannel::init(Packet& pkt)
{
   pkt.addInt32(d->data->uid);
   pkt.addInt8(channelId() == Device::ChannelA ? 'a' : 'b');
}

int IPChannel::query(Packet& pkt)
{
   ClientSocket* client = d->data->client;
   if (!client) {
       return NotFound;
   }
   if (!client->isOpen())
       return NotOpen;

   // Fetch packet opcode
   uint8_t op = pkt.op();

   // Lock
   client->lock();

   // Send
   qDebug("DEBUG: IPChannel: sent msg %u", op - CallType);
   if(pkt.send(client->sock()) < 0) {
      qDebug("DEBUG: IPChannel: failed to send %u", op - CallType);
      client->unlock();
      return IOError;
   }

   // Receive
   int ret = pkt.recv(client->sock());

   // Check
   if(pkt.op() != op) {
      ret = IOError;
   }
   qDebug("DEBUG: IPChannel: rcvd=%d msg %u", ret, pkt.op() - CallType);

   // Unlock and return
   client->unlock();
   return ret;
}

int IPChannel::isOpen()
{
   // Prepare query packet
   Packet pkt(DevIsOpen);
   init(pkt);

   int ret = query(pkt);
   if(ret <= 0)
      return 0;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::bytesIn()
{
   // Prepare query packet
   Packet pkt(DevBytesIn);
   init(pkt);

   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::open()
{
   // Prepare query packet
   Packet pkt(DevOpen);
   init(pkt);

   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   ret = it.getInt32();
   return ret;
}

int IPChannel::close()
{
   // Prepare query packet
   Packet pkt(DevClose);
   init(pkt);

   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::flush(int flags)
{
   // Prepare query packet
   Packet pkt(DevFlush);
   init(pkt);

   pkt.addInt32(flags);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::setBaudRate(int rate)
{
   // Prepare query packet
   Packet pkt(DevSetBaudRate);
   init(pkt);

   pkt.addInt32(rate);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::configure(Device::Bits bits, Device::StopBits stopbits, IPDevice::Parity parity)
{
   // Prepare query packet
   Packet pkt(DevConfigure);
   init(pkt);

   // Convert to integers
   pkt.addInt32(bits2int(bits));
   pkt.addInt32(sbits2int(stopbits));
   pkt.addInt32(parity2int(parity));

   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::setMode(int mask, int mode)
{
   // Prepare query packet
   Packet pkt(DevSetMode);
   init(pkt);

   pkt.addInt32(mask);
   pkt.addInt32(mode);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::setDtr(bool state)
{
   // Prepare query packet
   Packet pkt(DevSetDtr);
   init(pkt);

   pkt.addInt8(state);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::setRts(bool state)
{
   // Prepare query packet
   Packet pkt(DevSetRts);
   init(pkt);

   pkt.addInt8(state);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::read(char * dest, int count, int timeout)
{
   // Prepare query packet
   Packet pkt(DevRead);
   init(pkt);

   pkt.addInt32(count);
   pkt.addInt32(timeout);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   ret = it.getInt();
   if(ret > 0) {
      memcpy(dest, it.getByteArray(), ret);
   };

   return ret;
}

int IPChannel::readsome(char * dest, int count, int timeout)
{
   // Prepare query packet
   Packet pkt(DevReadSome);
   init(pkt);

   pkt.addInt32(count);
   pkt.addInt32(timeout);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   ret = it.getInt();
   if(ret > 0) {
      memcpy(dest, it.getByteArray(), ret);
   };

   return ret;
}

int IPChannel::write(const char * src, int count)
{
   // Prepare query packet
   Packet pkt(DevWrite);
   init(pkt);

   // Check count
   if (count < 0) {
       count = strlen(src);
   }

   pkt.addInt32(count);
   pkt.addData(src, count);
   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

int IPChannel::start()
{
   // Prepare query packet
   Packet pkt(DevStart);
   init(pkt);

   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}

void IPChannel::setLatency(int latency) 
{ 

}

int IPChannel::terminate()
{
   // Prepare query packet
   Packet pkt(DevTerminate);
   init(pkt);

   int ret = query(pkt);
   if(ret <= 0)
      return ret;

   // Read response
   Iterator it(pkt);
   return it.getInt();
}
