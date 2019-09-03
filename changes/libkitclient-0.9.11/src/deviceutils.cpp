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

#include "deviceutils.h"
#include <cstring>

/* Table sizes. */
#define channel_lut_sz 2
#define bits_lut_sz 2
#define sbits_lut_sz 3
#define parity_lut_sz 5

struct int_channel { int key; Device::ChannelId val; };
static struct int_channel int_channel_lut[channel_lut_sz] =
{
   { 0,  Device::ChannelA },
   { 1,  Device::ChannelB },
};

struct int_bits { int key; Device::Bits val; };
static struct int_bits int_bits_lut[bits_lut_sz] =
{
   { 7,  Device::Bits7 },
   { 8,  Device::Bits8 },
};

struct int_sbits { int key; Device::StopBits val; };
static struct int_sbits int_sbits_lut[sbits_lut_sz] =
{
   { 1,  Device::StopBits1 },
   { 15, Device::StopBits15 },
   { 2,  Device::StopBits2 },
};

struct int_parity { int key; Device::Parity val; };
static struct int_parity int_parity_lut[parity_lut_sz] =
{
   { 0,  Device::ParityNone },
   { 1,  Device::ParityOdd },
   { 2,  Device::ParityEven },
   { 3,  Device::ParityMark },
   { 4,  Device::ParitySpace },
};

struct str_channel { const char* key; Device::ChannelId  val; };
static struct str_channel str_channel_lut[channel_lut_sz] =
{
   { "Channel A",  Device::ChannelA },
   { "Channel B",  Device::ChannelB },
};

struct str_bits { const char* key; Device::Bits val; };
static struct str_bits str_bits_lut[bits_lut_sz] =
{
   { "7",  Device::Bits7 },
   { "8",  Device::Bits8 },
};

struct str_sbits { const char* key; Device::StopBits val; };
static struct str_sbits str_sbits_lut[sbits_lut_sz] =
{
   { "1",   Device::StopBits1 },
   { "1.5", Device::StopBits15 },
   { "2",   Device::StopBits2 },
};

struct str_parity { const char* key; Device::Parity val; };
static struct str_parity str_parity_lut[] =
{
   { "None",   Device::ParityNone },
   { "Odd",    Device::ParityOdd },
   { "Even",   Device::ParityEven },
   { "Mark",   Device::ParityMark },
   { "Space",  Device::ParitySpace },
};

Device::ChannelId str2channel(const char* key)
{
   for (int i = 0; i < channel_lut_sz; i++)
      if (strcmp(str_channel_lut[i].key, key) == 0)
         return str_channel_lut[i].val;

   return Device::DEFAULT_CHANNEL;
}

Device::Bits str2bits(const char* key)
{
   for (int i = 0; i < bits_lut_sz; i++)
      if (strcmp(str_bits_lut[i].key, key) == 0)
         return str_bits_lut[i].val;

   return Device::DEFAULT_BIT;
}

Device::StopBits str2sbits(const char* key)
{
   for (int i = 0; i < sbits_lut_sz; i++)
      if (strcmp(str_sbits_lut[i].key, key) == 0)
         return str_sbits_lut[i].val;

   return Device::DEFAULT_STOPBIT;
}

Device::Parity str2parity(const char* key)
{
   for (int i = 0; i < parity_lut_sz; i++)
      if (strcmp(str_parity_lut[i].key, key) == 0)
         return str_parity_lut[i].val;

   return Device::DEFAULT_PARITY;
}

const char* channel2str(Device::ChannelId val)
{
   for (int i = 0; i < channel_lut_sz; i++)
      if (str_channel_lut[i].val == val)
         return str_channel_lut[i].key;

   return channel2str(Device::DEFAULT_CHANNEL);
}

const char* bits2str(Device::Bits val)
{
   for (int i = 0; i < bits_lut_sz; i++)
      if (str_bits_lut[i].val == val)
         return str_bits_lut[i].key;

   return bits2str(Device::DEFAULT_BIT);
}

const char* sbits2str(Device::StopBits val)
{
   for (int i = 0; i < sbits_lut_sz; i++)
      if (str_sbits_lut[i].val == val)
         return str_sbits_lut[i].key;

   return sbits2str(Device::DEFAULT_STOPBIT);
}

const char* parity2str(Device::Parity val)
{
   for (int i = 0; i < parity_lut_sz; i++)
      if (str_parity_lut[i].val == val)
         return str_parity_lut[i].key;

   return parity2str(Device::DEFAULT_PARITY);
}

Device::ChannelId int2channel(int key)
{
   for (int i = 0; i < channel_lut_sz; i++)
      if (int_channel_lut[i].key == key)
         return int_channel_lut[i].val;

   return Device::DEFAULT_CHANNEL;
}

Device::Bits int2bits(int key)
{
   for (int i = 0; i < bits_lut_sz; i++)
      if (int_bits_lut[i].key == key)
         return int_bits_lut[i].val;

   return Device::DEFAULT_BIT;
}

Device::StopBits int2sbits(int key)
{
   for (int i = 0; i < sbits_lut_sz; i++)
      if (int_sbits_lut[i].key == key)
         return int_sbits_lut[i].val;

   return Device::DEFAULT_STOPBIT;
}

Device::Parity int2parity(int key)
{
   for (int i = 0; i < parity_lut_sz; i++)
      if (int_parity_lut[i].key == key)
         return int_parity_lut[i].val;

   return Device::DEFAULT_PARITY;
}

int channel2int(Device::ChannelId val)
{
   for (int i = 0; i < channel_lut_sz; i++)
      if (int_channel_lut[i].val == val)
         return int_channel_lut[i].key;

   return channel2int(Device::DEFAULT_CHANNEL);
}

int bits2int(Device::Bits val)
{
   for (int i = 0; i < bits_lut_sz; i++)
      if (int_bits_lut[i].val == val)
         return int_bits_lut[i].key;

   return bits2int(Device::DEFAULT_BIT);
}

int sbits2int(Device::StopBits val)
{
   for (int i = 0; i < sbits_lut_sz; i++)
      if (int_sbits_lut[i].val == val)
         return int_sbits_lut[i].key;

   return sbits2int(Device::DEFAULT_STOPBIT);
}

int parity2int(Device::Parity val)
{
   for (int i = 0; i < parity_lut_sz; i++)
      if (int_parity_lut[i].val == val)
         return int_parity_lut[i].key;

   return parity2int(Device::DEFAULT_PARITY);
}
