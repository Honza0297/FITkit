/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
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
 *  \file    ipdevice.h                                                    *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Implementation of virtual device,                             *
 *           transports calls via TCP/IP.                                  *
 *                                                                         *
 ***************************************************************************/

#ifndef IPDEVICE_H
#define IPDEVICE_H

/* Includes */
#include "device.h"
#include "libkitclient_export.h"

/*
 * Forward declarations.
 */
class IPData;
class IPChannel;
class ClientSocket;
namespace Proto
{
   class Packet;
};
using Proto::Packet;

/*! \class IPData
 *  \brief Data core of the IPDevice class.
 */
class KITCLIENT_EXPORT IPData : public DeviceData
{

   friend class IPDevice;
   friend class IPBackend;
   friend class IPService;
   friend class IPChannel;
   friend class IPDiscovery;

public:

   /*! \brief Default constructor.
    */
   IPData();

   /*! \brief Default destructor.
    */
   ~IPData();

   int uid;              /* Client-side data identifier */
   ClientSocket* client; /* Client socket instance */

protected:
   IPChannel* channelA;  /* First or only channel */
   IPChannel* channelB;  /* Second or only channel */

};

/*! \class IPDevice
 *  \brief Represents a virtual device with 1-2 I/O channels.
 *
 */
class KITCLIENT_EXPORT IPDevice : public Device
{

public:

   /*! Create new device instance.
    */
   IPDevice(DeviceData* data);

   /*! Device destructor (virtual).
    */
   ~IPDevice();

   /*! \brief Device channel accessor.
     * \param chan Channel identifier ( Device::ChannelA, Device::ChannelB)
     * \return Reference to requested channel.
     */
   IOChannel& channel(const ChannelId chan);

   /*! \brief Return associated hostname. */
   const char* host();

   /*! \brief Return associated port */
   int port();

   /*! \brief Return associated client. */
   ClientSocket* client();

protected:

   IPData* d; /* Private data */
};

/*! \class IPChannel
 *  \brief Represents a virtual channel as I/O device.
 */
class KITCLIENT_EXPORT IPChannel : public IOChannel
{

public:

   /*! \brief Constructor. */
   explicit IPChannel(IPData* data, Device::ChannelId id);

   /*! \brief Destructor. */
   ~IPChannel();

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

   void setLatency(int latency);

protected:

   /*! \brief Synchronised client query (send() + recv()).
    *  \note Method checks if incoming packet code matches.
    */
   int query(Packet& pkt);

   /*! \brief Initialize packet header with IOChannel description.
    */
   void init(Packet& pkt);

private:

   class Private;
   Private *d;
};

#endif
