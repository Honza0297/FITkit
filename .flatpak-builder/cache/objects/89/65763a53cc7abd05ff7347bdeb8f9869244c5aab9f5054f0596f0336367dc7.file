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
/*! \file protobase.h
    \brief Protocol definitions and base functions.
    \author Marek Vavrusa <marek@vavrusa.com>
    \addtogroup proto
    @{
  */
#pragma once
#ifndef __protobase_h__
#define __protobase_h__
#include "pstdint.h"
#include "common.h"

/** ASN.1 class tags.
  * Type octet, bits 7-8
  */
typedef enum {
    ASNUniversal   = 0x00,  /*!< Class bits: [0 0] */
    ASNApplication = 0x40,  /*!< Class bits: [0 1] */
    ASNContext     = 0x80,  /*!< Class bits: [1 0] */
    ASNPrivate     = 0xC0,  /*!< Class bits: [1 1] */
} ASNClass;

/** ASN.1 semantic types.
  */
typedef enum {

   // Basic types
   InvalidType    = 0x00,
   BoolType       = 0x01,
   IntegerType    = 0x02,
   UnsignedType   = 0x03,
   NullType       = 0x05,
   OctetType      = 0x04,
   SequenceType   = 0x10,
   EnumType       = 0x0A,
   SetType        = 0x11,
   StructureType  = 0x20,
   RawType        = StructureType + 1,
   CallType       = StructureType + ASNApplication,

} ASNType;

/** 1B op + 1B prefix + 4B length. */
#define PACKET_MINSIZE (sizeof(uint8_t)+sizeof(uint8_t)+sizeof(uint32_t))

#ifdef __cplusplus
extern "C"
{
#endif

/** Receive packet header.
  * Ensure buf is at least PACKET_MINSIZE.
  * \return header size on success, 0 on error
  */
URPC_EXPORT uint32_t pkt_recv_header(int fd, char* buf);

/** Block until all pending data is received.
  */
URPC_EXPORT uint32_t recv_full(int fd, char* buf, uint32_t pending);

/** Pack size to byte array.
  * \warning Array has to be at least 5B long for uint32.
  * \return packed size length (1 - 4B), -1 on error
  */
URPC_EXPORT int pack_size(uint32_t val, char* dst);

/** Unpack size from byte array.
  * \warning Array has to be at least 5B long for uint32.
  * \return packed size length (1 - 4B)
  */
URPC_EXPORT int unpack_size(const char* src, uint32_t* dst);

/** Dump packet (debugging).
  */
URPC_EXPORT void pkt_dump(const char* pkt, uint32_t size);

/** Interpret data as unsigned integer.
  */
URPC_EXPORT unsigned as_uint(void* data, uint32_t bytes);

/** Interpret data as signed integer.
  */
URPC_EXPORT int as_int(void* data, uint32_t bytes);

/** Interpret data as string.
  */
URPC_EXPORT const char* as_string(void* data, uint32_t bytes);

/** Create SHM segment.
  */
#ifdef __WIN32
#else
URPC_EXPORT int ipc_init();

/** Close SHM segment.
  */
URPC_EXPORT int ipc_teardown(int);

/** Return host socket descriptor.
  * Retrieve socket descriptor from SHM.
  */
URPC_EXPORT int ipc_get_remote();

/** Save host socket descriptor.
  * Save socket descriptor to SHM.
  * Store host loglevel.
  */
URPC_EXPORT int ipc_set_remote(int fd);
#endif

#ifdef __cplusplus
}
#endif

#endif // __protobase_h__
/** @} */
