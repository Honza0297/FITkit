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

#include "ftdi/ftdidevice.h"
#include "deviceutils.h"
#include <cstring>
#include <cstdio>

FTDIDevice::FTDIDevice(DeviceData* data)
   : Device(data)
{
    d = static_cast<FTDIData*>(data);
    DEBUG_MSG("FTDI: new instance (managed), DataPtr: %p\n", d);
}

FTDIDevice::~FTDIDevice()
{
   DEBUG_MSG("FTDI: destructor called\n");
   delete d;
}

IOChannel& FTDIDevice::channel(ChannelId chan)
{
   if(chan == ChannelA)
      return *d->channelA;

   if(chan == ChannelB)
      return *d->channelB;

   // Any channel
   return channel(DEFAULT_CHANNEL);
}

FTDIData::FTDIData()
   : DeviceData()
{
   // Create channels
   channelA = new FTDIChannel(this, Device::ChannelA);
   channelB = new FTDIChannel(this, Device::ChannelB);
}

FTDIData::~FTDIData()
{
   delete channelA;
   delete channelB;
}

/* Platform-specific code for USBChannel */
#ifdef __WIN32
#include "ftdidevice_win.cpp"
#endif

#ifdef __UNIX
#include "ftdidevice_unix.cpp"
#endif
