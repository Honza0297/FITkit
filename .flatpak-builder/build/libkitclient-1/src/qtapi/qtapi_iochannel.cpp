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

#include "qtapi_iochannel.h"
#include "deviceutils.h"

namespace QtAPI
{

IOChannel::IOChannel(Device* parent, ::IOChannel* channel)
   : QObject(parent), mChannel(channel)
{
}

IOChannel::~IOChannel()
{
}

int IOChannel::isOpen() const
{
   return mChannel->isOpen();
}

const QString IOChannel::vendor() const
{
   return QString::fromStdString(mChannel->vendor());
}

const QString IOChannel::product() const
{
   return QString::fromStdString(mChannel->product());
}
const QString IOChannel::serial() const
{
   return QString::fromStdString(mChannel->serial());
}

int IOChannel::bytesIn() const
{
   return mChannel->bytesIn();
}

int IOChannel::open()
{
   return mChannel->open();
}
int IOChannel::close()
{
   return mChannel->close();
}

int IOChannel::flush(int mask)
{
   if(mask == -1)
      return mChannel->flush();
   else
      return mChannel->flush(mask);
}

int IOChannel::flushInput()
{
   return mChannel->flush(::Device::Input);
}

int IOChannel::flushOutput()
{
   return mChannel->flush(::Device::Output);
}

int IOChannel::setMode(const int mask, const int mode)
{
   return mChannel->setMode(mask, mode);
}

int IOChannel::setDtr(bool state)
{
   return mChannel->setDtr(state);
}

int IOChannel::setRts(bool state)
{
   return mChannel->setRts(state);
}

int IOChannel::setBaudRate(const int rate)
{
   return mChannel->setBaudRate(rate);
}

int IOChannel::configure(::Device::Bits bits, ::Device::StopBits s_bits, ::Device::Parity parity)
{
   return mChannel->configure(bits, s_bits, parity);
}

int IOChannel::configure(int bits, int s_bits, QString parity)
{
   return mChannel->configure(int2bits(bits), int2sbits(s_bits), str2parity(parity.toStdString().c_str()));
}

int IOChannel::read(char* dest, const int count, const int timeout)
{
   return mChannel->read(dest, count, timeout);
}

int IOChannel::read(char* dest, int count)
{
   return read(dest, count, 0);
}

QByteArray IOChannel::read(int count, const int timeout)
{
   QByteArray ba(count,'\0');

   int res = read(ba.data(), count, timeout);
   if (res < 1)
   {
      ba.clear();
   } else {
      ba.truncate(res);
   }
   return ba;
}

int IOChannel::readsome(char* dest, const int count, const int timeout)
{
   return mChannel->readsome(dest, count, timeout);
}

int IOChannel::write(const char* src, const int count)
{
   return mChannel->write(src, count);
}

int IOChannel::write(const char* src)
{
   return write(src, strlen(src));
}

int IOChannel::write(const QByteArray& src, const int count)
{
   int len = (count < 0) ? src.length() : count;
   return mChannel->write(src.data(), len);
}

int IOChannel::start()
{
   return mChannel->start();
}

int IOChannel::terminate()
{
   return mChannel->terminate();
}

};

#include "qtapi_iochannel.moc"
