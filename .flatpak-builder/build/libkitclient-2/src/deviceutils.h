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
 *  \file    deviceutils.h                                                       *
 *  \version 2.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Utilities for conversion of strings or integers to enums.     *
 *                                                                         *
 ***************************************************************************/

#ifndef DEVICEUTILS_H
#define DEVICEUTILS_H

#include <stdarg.h>
#include <stdio.h>
#include "libkitclient_export.h"
#include "device.h"

#ifdef SWIG
#undef KITCLIENT_EXPORT
#define KITCLIENT_EXPORT
#endif

/* Debugging */
static inline void DEBUG_MSG(const char *fmt, ...)
{
#ifdef DEBUG
	va_list ap;
	va_start (ap, fmt);
	vfprintf(stderr, fmt, ap);
	va_end (ap);
#else
	fmt = fmt;
#endif
}

/*
 * String conversions
 */

/*! \brief Converts cstring to Device::ChannelId enum.
 *  Acceptable values: "Channel A", "Channel B"
 */        
KITCLIENT_EXPORT Device::ChannelId str2channel(const char* key);

/*! \brief Converts cstring to Device::Bits enum.
 *  Acceptable values: "7", "8"
 */
KITCLIENT_EXPORT Device::Bits str2bits(const char* key);
  
/*! \brief Converts cstring to Device::StopBits enum.
 *  Acceptable values: "1", "1.5", "2"
 */
KITCLIENT_EXPORT Device::StopBits str2sbits(const char* key);

/*! \brief Converts cstring to Device::Parity enum.
 *  Acceptable values: "None", "Odd", "Even", "Mark", "Space"
 */
KITCLIENT_EXPORT Device::Parity str2parity(const char* key);

/*! \brief Converts cstring to Device::ChannelId enum.
 *  Return values: "Channel A", "Channel B"
 */ 
KITCLIENT_EXPORT const char* channel2str(Device::ChannelId val);

/*! \brief Converts cstring to Device::Bits enum.
 *  Return values: "7", "8"
 */ 
KITCLIENT_EXPORT const char* bits2str(Device::Bits val);

/*! \brief Converts cstring to Device::StopBits enum.
 *  Return values: "1", "1.5", "2"
 */  
KITCLIENT_EXPORT const char* sbits2str(Device::StopBits val);

/*! \brief Converts cstring to Device::Parity enum.
 *  Return values: "None", "Odd", "Even", "Mark", "Space"
 */  
KITCLIENT_EXPORT const char* parity2str(Device::Parity val);

/*
 * Integer conversions
 */

/*! \brief Converts integer to Device::ChannelId enum.
 *  Acceptable values: 0 => ChannelA, 1 => ChannelB
 */  
KITCLIENT_EXPORT Device::ChannelId int2channel(int key);

/*! \brief Converts integer to Device::Bits enum.
 *  Acceptable values: 7, 8
 */   
KITCLIENT_EXPORT Device::Bits int2bits(int key);

/*! \brief Converts integer to Device::StopBits enum.
 *  Acceptable values: 1, 15, 2
 */  
KITCLIENT_EXPORT Device::StopBits  int2sbits(int key);

/*! \brief Converts integer to Device::Parity enum.
 *  Acceptable values: 0 => None, 1 => Odd, 2 => Even, 3 => Mark, 4 => Space
 */  
KITCLIENT_EXPORT Device::Parity int2parity(int key);

/*! \brief Converts Device::ChannelId enum to integer.
 *  Return values: 0 => ChannelA, 1 => ChannelB
 */ 
KITCLIENT_EXPORT int channel2int(Device::ChannelId val);

/*! \brief Converts Device::Bits enum to integer.
 *  Return values: 7, 8
 */ 
KITCLIENT_EXPORT int bits2int(Device::Bits val);

/*! \brief Converts Device::StopBits enum to integer.
 *  Return values: 1, 15, 2
 */  
KITCLIENT_EXPORT int sbits2int(Device::StopBits val);

/*! \brief Converts Device::Parity enum to integer.
 *  Return values: 0 => None, 1 => Odd, 2 => Even, 3 => Mark, 4 => Space
 */  
KITCLIENT_EXPORT int parity2int(Device::Parity val);

#endif
