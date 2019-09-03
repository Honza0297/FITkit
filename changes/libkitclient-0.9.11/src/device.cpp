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

/**
   \mainpage libkitclient API documentation

   <b>Multiplatform library for management and interaction with USB devices.</b>

   Written in <i>C++</i> and designed as an extensible and easy-to use library.

   Including <a href="http://www.swig.org">SWIG</a> Python wrapper, with possibility to add another scripting interfaces.
   \include example.cpp

   At the moment, following device backends are implemented:
   <ul>
      <li><b>FTDI</b> - FTDI devices on local USB bus</li>
      <li><b>IP</b> - devices shared over IP network from another libkitclient instance</li>
   </ul>

   Examples and tests can be found in the <i>"test"</i>, <i>"examples"</i> and <i>"swig"</i> directories.
*/

#include "device.h"

unsigned Device::smUniqueId = 0; //!< Default ID
const int               Device::DEFAULT_VID     = 0x0403;
const int               Device::DEFAULT_PID     = 0x6010;
const int               Device::DEFAULT_RATE    = 460800;
const Device::Bits      Device::DEFAULT_BIT     = Device::Bits8;
const Device::StopBits  Device::DEFAULT_STOPBIT = Device::StopBits1;
const Device::Parity    Device::DEFAULT_PARITY  = Device::ParityNone;
const Device::ChannelId Device::DEFAULT_CHANNEL = Device::ChannelB;


Device::Device(DeviceData* data)
   : mId(-1), mData(data)
{
   mId = smUniqueId++;
}

Device::~Device()
{
}

int Device::closeAll()
{
   // Close channel A
   int ret = 0;
   if(channel(ChannelA).isOpen())
      if(channel(ChannelA).close() > 0)
         ret |= ChannelA;

   // Close channel B
   if(channel(ChannelB).isOpen())
      if(channel(ChannelB).close() > 0)
         ret |= ChannelB;

   return ret;
}

DeviceData::DeviceData()
    : vid(Device::DEFAULT_VID), pid(Device::DEFAULT_PID), flags(0), backend(0)
{
   #if defined(USE_PTHREADS)
   pthread_mutex_init(&lock, NULL);
   #endif 
}

DeviceData::~DeviceData()
{
   #if defined(USE_PTHREADS)
   pthread_mutex_destroy(&lock);
   #endif 
}

int DeviceData::lockData()
{
   #if defined(USE_PTHREADS)
   pthread_mutex_lock(&lock);
   #elif defined(USE_QT_THREADS)
   lock.lock();
   #endif
	return 0;
}

int DeviceData::unlockData()
{
   #if defined(USE_PTHREADS)
   return pthread_mutex_unlock(&lock);
   #elif defined(USE_QT_THREADS)
   lock.unlock();
	return 0;
   #endif 
}

IOChannel::IOChannel(DeviceData* data, Device::ChannelId id)
    : mData(data), mChannelId(id)
{

}

IOChannel::~IOChannel()
{

}
