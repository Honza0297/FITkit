/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
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

#include "qtapi_device.h"
#include "qtapi_iochannel.h"

namespace QtAPI
{

class Device::Private
{
   public:
      Private()
      : channelA(0), channelB(0)
      {
      }

      ::Device* dev;
      IOChannel *channelA;
      IOChannel *channelB;
};

Device::Device(::Device* dev)
   : QObject(), d(new Private)
{
   // Create channel wrappers
   d->channelA = new IOChannel(this, &dev->channel(::Device::ChannelA));
   d->channelB = new IOChannel(this, &dev->channel(::Device::ChannelB));

   // Bind device to proxy
   d->dev = dev;
}

Device::~Device()
{
   delete d;
   d = 0;
}

int Device::id()
{
   return d->dev->id();
}

int Device::vid()
{
   return d->dev->vid();
}

int Device::pid()
{
   return d->dev->pid();
}

int Device::flags()
{
   return d->dev->flags();
}

int Device::setFlags(int flags)
{
   return d->dev->setFlags(flags);
}

int Device::addFlag(int flag)
{
   return d->dev->addFlag(flag);
}

int Device::removeFlag(int flag)
{
   return d->dev->removeFlag(flag);
}

::Device* Device::backend() {
   return d->dev;
}

IOChannel* Device::channelA()
{
   return d->channelA;
}

IOChannel* Device::channelB()
{
   return d->channelB;
}

IOChannel* Device::channel(const QString& chan)
{
   return (chan[0] == 'a' || chan[0] == 'A') ? channelA() : channelB();
}

};

#include "qtapi_device.moc"
