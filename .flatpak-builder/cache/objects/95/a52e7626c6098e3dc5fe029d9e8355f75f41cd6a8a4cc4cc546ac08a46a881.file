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
 *  \file    ftdidevice.h                                                  *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Implementation of an FTDI device with 1-2 I/O channels.       *
 *                                                                         *
 ***************************************************************************/

#ifndef FTDIDEVICE_H
#define FTDIDEVICE_H

/* Includes */
#include "device.h"
#include "libkitclient_export.h"
class FTDIData;
class FTDIChannel;

/*! \class FTDIData
 *  \brief Data core of the FTDIDevice class.
 */
class KITCLIENT_EXPORT FTDIData : public DeviceData
{

   friend class FTDIDevice;
   friend class FTDIBackend;
   friend class FTDIChannel;

public:

   /*! \brief Default constructor.
    */
   FTDIData();

   /*! \brief Default destructor.
    */
   ~FTDIData();

protected:

   // Channels
   FTDIChannel* channelA;      /* First or only channel */
   FTDIChannel* channelB;      /* Second or only channel */

   // libftdi
#ifdef __UNIX
   struct usb_device* usb_dev; /* Assigned USB device */
#endif

   // ftd2xx
#ifdef __WIN32
   int  LocID;                 /* Assigned USB device location identifier */
   int  channelA_LocID;        /* First or only channel location identifier */
   int  channelB_LocID;        /* Second or only channel location identifier */
#endif
};

/*! \class FTDIDevice
 *  \brief Represents FTDI device with 1-2 I/O channels.
 *
 */
class KITCLIENT_EXPORT FTDIDevice : public Device
{

public:

   /*! Create new device instance.
    */
   FTDIDevice(DeviceData* data);

   /*! Device destructor (virtual).
    */
   ~FTDIDevice();

   /*! \brief Device channel accessor.
     * \param chan Channel identifier ( Device::ChannelA, Device::ChannelB)
     * \return Reference to requested channel.
     */
   IOChannel& channel(const ChannelId chan);

protected:

   FTDIData* d; /* Private data */
};

/*! \class FTDIChannel
 *  \brief Represents FTDI channel as I/O device.
 */
class KITCLIENT_EXPORT FTDIChannel : public IOChannel
{

public:

   /*! \brief Constructor. */
   explicit FTDIChannel(FTDIData* data, Device::ChannelId id);

   /*! \brief Destructor. */
   ~FTDIChannel();

   /*! \brief Returns true if channel is open.
    * \return true if device is open
    */
   int isOpen();

   /*! \brief Count bytes in buffer.
    * \return NotOpen if channel is not open.
    * \return number of bytes in buffer
    */
   int bytesIn();

   /*! \brief Open channel.
    *
    * Opens channel and sets default line properties,
    * then creates event handler
    *
    * \return >0 success
    * \return <1 codes from OpenResult
    */
   int open();

   /*! \brief Close channel.
    *
    * \return  NotOpen if it's not open
    * \return <0 Error closing the channel
    * \return >0 Success
    */
   int close();

   /*! \brief Flush buffers.
    *
    * \param flags Bit-array of what should be flushed.
    * \return  NotOpen Channel was not open
    * \return <=0 Error when flushing
    * \return  >0 Success
    */
   int flush(int flags = Device::Input | Device::Output);

   /*! \brief Set rate in bauds.
    *
    * Function handles adjusting of
    * given rate to nearest possible baudrate.
    *
    * \param rate given rate in bauds
    * \return  NotOpen Channel was not open
    * \return <=0 Error setting baudrate
    * \return  >0 Success
    */
   int setBaudRate(int rate);

   /*! \brief Set RS232 line framing properties.
    *
    * \param     bits number of data bits
    * \param stopbits number of stopbits
    * \param   parity parity mode
    * \return  NotOpen Channel was not open
    * \return     <=0 Error when setting line property
    * \return      >0 Success
    */
   int configure(Device::Bits bits, Device::StopBits s_bits, Device::Parity parity);

   /*! \brief FT2232 mode manipulators.
    *
    * Sets FT2232 manipulators (see FT2232 manual)
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   int setMode(int mask, int mode);

   /*! \brief Set DTR line mode.
    *
    * Sets DTR (Data Terminal Ready)
    * carrier signal to given state.
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   int setDtr(bool state);

   /*! \brief Set RTS line mode.
    *
    * Sets RTS (Request To Send)
    * carrier signal to given state.
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   int setRts(bool state);

   /*! \brief Receive string data of maximum length.
    *
    *  \note This function blocks for amount of time specified
    *  by timeout, or until some bytes are read.
    *
    *  \param    dest Destination buffer
    *  \param   count Maximal number of bytes to be read
    *  \param timeout How long should call block
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of read bytes.
    */
   int read(char* dest, int count, int timeout);

   /*! \brief Receive string data of maximum length.
    *
    *  \note This function blocks for amount of time specified
    *  by timeout, or until some bytes are read.
    *
    *  \note Equals to read() if not reimplemented.
    *
    *  \param    dest Destination buffer
    *  \param  maxlen Maximal number of bytes to be read
    *  \param timeout How long should call block
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of read bytes.
    */
   int readsome(char* dest, int maxlen, int timeout);

   /*! \brief Send data of given size.
    *
    *  \note This function blocks until all bytes are written.
    *
    *  \param   src Source data to be sent.
    *  \param count Number of bytes to be sent.
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of written bytes.
    */
   int write(const char* src, int count);

   /*! \brief Start reader thread for polled mode. */
   int start();

   /*! \brief Terminate reader thread. */
   int terminate();

   /*! \brief Change D2XX latency (<1 = default FTDI settings). Latency is changed only during open() */
	void setLatency(int latency) { latency_ms = latency; }

private:
   int read(char* dest, const int maxlen, int waitlen, int timeout);
   int latency_ms;

   class Private;
   Private *d;
};

#endif
