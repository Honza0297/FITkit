/***************************************************************************
 *   Copyright (C) 2009 Marek Vavrusa <marek@vavrusa.com>                  *
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
/*! \file protocol.cpp
    \brief Protocol abstraction and packet handling in C++.
    \author Marek Vavrusa <marek@vavrusa.com>
    \addtogroup protocpp
    \ingroup proto
    @{
  */
#include "protocol.hpp"
#include "socket.hpp"
#include <cstring>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cerrno>
using namespace Proto;

Struct::Struct(ByteBuffer& sharedbuf, int pos)
   : mBuf(sharedbuf), mPos(pos), mCursor(0), mSize(0)
{
   // Seek end pos
   if(mPos < 0)
      mPos = mBuf.size();

   mCursor = mPos;
}

Struct& Struct::pushPacked(uint32_t val)
{
   // Pack number and append
   // function takes care of byte-order converting
   char buf[6];
   int size = pack_size(val, buf);
   append(buf, size);
   return *this;
}

Struct& Struct::append(const char* str, size_t size) {
   if(str != NULL) {
      if(size == 0)
         size = strlen(str);

      if (size > 0) {
          mBuf.insert(mCursor, str, size);
          mSize += size;
          mCursor += size;
      }

   }
   return *this;
}

Struct& Struct::addNumeric(uint8_t type, uint8_t len, uint32_t val)
{
   // Check
   if(len != sizeof(uint32_t) &&
      len != sizeof(uint16_t) &&
      len != sizeof(uint8_t))
      return *this;

   // BER encoding of zero is 05 00 (NULLTYPE)
   // But not in set or sequence, omitting for now.
   /*if (val == 0) {
       push((uint8_t) NullType);
       push(0x00);
       return *this;
   }*/

   // Push Type and Length
   push((uint8_t) type);
   pushPacked(len);

   // Cast to ensure correct data
   uint8_t val8 = (uint8_t)val;
   uint16_t val16 = htons((uint16_t) val);
   val = htonl(val);
   if(len == sizeof(uint32_t)) append((const char*) &val,   sizeof(uint32_t));
   if(len == sizeof(uint16_t)) append((const char*) &val16, sizeof(uint16_t));
   if(len == sizeof(uint8_t))  append((const char*) &val8,  sizeof(uint8_t));

   return *this;
}

Struct& Struct::addData(const char* data, size_t size, uint8_t type)
{
   push((uint8_t) type);
   pushPacked(size);

   if (size > 0) {
       append(data, size);
   }
   return *this;
}


Struct& Struct::addString(const char* str, uint8_t type)
{
   if(str != 0) {
      int len = strlen(str) + 1; // NULL byte
      push((uint8_t) type);
      pushPacked(len);
      append(str, len);
   }

   return *this;
}

Struct& Struct::finalize()
{
   // Remaining bufsize
   uint32_t block_size = mBuf.size() - startPos() - 1;

   // Pack number
   char buf[6];
   int len = pack_size(block_size, buf);
   mBuf.insert(startPos() + 1, buf, len);

   return *this;
}

Iterator::Iterator(Struct& block)
   : mType(InvalidType), mLength(0), mSymLength(0), mValue(0), mBlock(block), mPos(0)
{
   enter();
}

bool Iterator::scan()
{
   // Load type
   mSymLength = 1;
   const char* ptr = mBlock.data() + mPos;
   setType((uint8_t) *ptr);
   ++ptr;

   // Unpack size
   uint32_t sz;
   int szlen = unpack_size(ptr, &sz);
   ptr += szlen;
   mSymLength += szlen;
   setLength(sz);

   // Assign data
   mValue = ptr;
   mSymLength += sz;
   return true;
}

bool Iterator::next()
{
   // Shift to next symbol
   mPos += mSymLength;
   if(mPos >= (int) mBlock.size())
      return false;

   // Scan current
   return scan();
}

bool Iterator::enter()
{
   // Shift type
   mSymLength = 1;

   // Check size
   if ((size_t)(mPos + 1) >= mBlock.size()) {
       return false;
   }

   // Shift length size
   const char* ptr = mBlock.data() + mPos + mSymLength;
   uint32_t sz = 0;
   int szlen = unpack_size(ptr, &sz);
   mSymLength += szlen;

   // Load symbol
   return next();
}

int Packet::recv(int fd)
{
   // Prepare buffer
   uint32_t hsize = PACKET_MINSIZE;
   mBuf.clear();
   mBuf.resize(hsize);
   if((hsize = pkt_recv_header(fd, (char*) mBuf.data())) == 0)
      return -1;

   // Unpack payload length
   uint32_t pending = 0;
   int len = unpack_size(mBuf.data() + 1, &pending);
   mBuf.resize(hsize + pending);

   char* ptr = (char*) mBuf.data() + 1 + len;

   // Receive payload
   if(pending > 0) {
      if((hsize = recv_full(fd, ptr, pending)) == 0)
         return -1;
   }

//   //#ifdef DEBUG
//   printf("Received packet  --------------\n");
//   pkt_dump(mBuf.data(), size());
//   printf("-------------------------------\n");
//   //#endif

   return size();
}

void Packet::dump() {

   pkt_dump(mBuf.data(), size());
}

int Packet::send(int fd) {
   finalize();
   
//   printf("Sending packet  ---------------\n");
//   pkt_dump(mBuf.data(), size());
//   printf("-------------------------------\n");
     
   size_t sent = 0;
   while (sent < size()) {
       int ret = ::send(fd, mBuf.data() + sent, size() - sent, 0);
       if (ret < 0) {
          perror("DEBUG: send failed:");
           if (errno == EINTR) {
             continue;
           }
           sent = -1;
           break;
       }
       sent += ret;
   }
   
   return sent;
}
/** @} */
