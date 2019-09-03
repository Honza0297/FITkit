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
 *                                                                         *
 *  \file    ipproto.h                                                     *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Implementation of the transport protocol.                     *
 *                                                                         *
 ***************************************************************************/

#ifndef IPPROTO_H
#define IPPROTO_H
#include "liburpc_copy/protobase.h"
#include "libkitclient_export.h"

/** Virtual device opcode definition.
 */
typedef enum {

   // Device API
   NullRequest           = CallType,       // ping
   DevIsOpen             = CallType  +  1, // int isOpen()
   DevBytesIn            = CallType  +  2, // int bytesIn()
   DevOpen               = CallType  +  3, // int open()
   DevClose              = CallType  +  4, // int close()
   DevFlush              = CallType  +  5, // int flush(int flags)
   DevSetBaudRate        = CallType  +  6, // int setBaudRate(int rate)
   DevConfigure          = CallType  +  7, // int configure(int bits, int s_bits, int parity)
   DevSetMode            = CallType  +  8, // int setMode(int mask, int mode)
   DevSetDtr             = CallType  +  9, // int setDtr(bool state)
   DevSetRts             = CallType  + 10, // int setRts(bool state)
   DevRead               = CallType  + 11, // int read(char* dest, int count, int timeout)
   DevReadSome           = CallType  + 12, // int readsome(char* dest, int count, int timeout)
   DevWrite              = CallType  + 13, // int write(char* src, int count)
   DevStart              = CallType  + 14, // int start()
   DevTerminate          = CallType  + 15, // int terminate()

   // Backend API
   BackendUpdate         = CallType  + 16, // void update(DeviceData::List&)
   BackendIsDevReady     = CallType  + 17, // bool isReady(DeviceData*)
   BackendDevInitialize  = CallType  + 18, // int initialize(DeviceData*)
   BackendAcquired       = CallType  + 19, // void deviceAcquired(int deviceId)
   BackendReleased       = CallType  + 20  // void deviceReleased(int deviceId)

} Call;

#endif
