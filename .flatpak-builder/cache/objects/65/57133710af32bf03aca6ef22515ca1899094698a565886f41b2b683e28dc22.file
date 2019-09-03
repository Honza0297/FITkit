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
 *                                                                         *
 *  \file    qtapi_iochannel.h                                             *
 *  \version 1.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Qt API for IOChannel with signals, slots and scriptable API.  *
 *                                                                         *
 ***************************************************************************/

#ifndef QTAPI_IOCHANNEL_H
#define QTAPI_IOCHANNEL_H

#include "qtapi_device.h"
#include "libkitclient_export.h"
#include <QObject>

/*! \brief API namespace.
 */
namespace QtAPI
{

/*! \brief IOChannel Qt API.
 */
class KITCLIENT_EXPORT IOChannel : public QObject
{
   Q_OBJECT

public:

   /*! \brief Imported state enumerator. */
   enum StateFlags {
      Ok          = ::IOChannel::Ok,          //!< Operation went OK
      NotOpen     = ::IOChannel::NotOpen,     //!< Device is not open
      NotFound    = ::IOChannel::NotFound,    //!< Device was not found
      AlreadyOpen = ::IOChannel::AlreadyOpen, //!< Device channel already open
      CantClaim   = ::IOChannel::CantClaim,   //!< Can't claim, bad permissions?
      CantConfig  = ::IOChannel::CantConfig,  //!< Can't configure device
      IOError     = ::IOChannel::IOError      //!< Unknown I/O error
                   };

   /*! \brief Device open state property. */
   Q_PROPERTY(int isOpen READ isOpen)

   /*! \brief Vendor string property. */
   Q_PROPERTY(QString vendor READ vendor)

   /*! \brief Product string property. */
   Q_PROPERTY(QString product READ product)

   /*! \brief Serial number property. */
   Q_PROPERTY(QString serial READ serial)

   /*! \brief Incoming buffer length property. */
   Q_PROPERTY(int bytesIn READ bytesIn)

   /*! \brief IOChannel wrapper constructor.
    */
   IOChannel(Device* parent, ::IOChannel* channel);

   /*! \brief Wrapper destructor.
    *  \warning Parent device and channel instances are not deleted.
    */
   ~IOChannel();

   /*! \brief Returns true if channel is open.
    * \return true if device is open
    */
   int isOpen() const;

   /*! \return Device vendor string. */
   const QString vendor() const;

   /*! \return Device product string. */
   const QString product() const;

   /*! \return Device serial number string. */
   const QString serial() const;

   /*! \brief Count bytes in buffer.
    * \return NotOpen if channel is not open.
    * \return number of bytes in buffer
    */
   int bytesIn() const;

   /*! \brief Set RS232 line framing properties.
    *
    * \param     bits number of data bits
    * \param stopbits number of stopbits
    * \param   parity parity mode
    * \return  NotOpen Channel was not open
    * \return     <=0 Error when setting line property
    * \return      >0 Success
    */
   int configure(::Device::Bits bits, ::Device::StopBits s_bits, ::Device::Parity parity);

   /*! \brief Set RS232 line framing properties.
    *
    * \param     bits number of data bits
    * \param stopbits number of stopbits
    * \param   parity parity mode
    * \return  NotOpen Channel was not open
    * \return     <=0 Error when setting line property
    * \return      >0 Success
    */
   Q_INVOKABLE int configure(int bits, int s_bits, QString parity);

   /*! \brief Receive string data of maximum length.
    *
    *  This function blocks for amount of time specified
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
   int read(char* dest, const int count, const int timeout);

   /*! \brief Receive string data of maximum length.
    *
    *  This function blocks for amount of time specified
    *  by timeout, or until some bytes are read.
    *
    *  \param    dest Destination buffer
    *  \param   count Maximal number of bytes to be read
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of read bytes.
    */
   int read(char* dest, int count);

   /*! \brief Receive string data of maximum length.
    *
    *  This function blocks for amount of time specified
    *  by timeout, or until some bytes are read.
    *
    *  \param   count Maximal number of bytes to be read
    *  \param timeout How long should call block
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of read bytes.
    */
   Q_INVOKABLE QByteArray read(int count, const int timeout);

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
   int readsome(char* dest, const int maxlen, const int timeout);


   /*! \brief Send data of given size.
    *
    *  This function blocks until all bytes are written.
    *
    *  \param   src Source data to be sent.
    *  \param count Number of bytes to be sent.
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of written bytes.
    */
   int write(const char* src, const int count);

   /*! \brief Send string data.
    *
    *  This function blocks until all bytes are written.
    *
    *  \param   src Source data to be sent.
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of written bytes.
    */
   int write(const char* src);

   /*! \brief Send data of given size.
    *
    *  This function blocks until all bytes are written.
    *
    *  \param   src Source data to be sent.
    *  \param count Number of bytes to be sent (-1 means whole QByteArray).
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of written bytes.
    */
   Q_INVOKABLE int write(const QByteArray& src, const int count = -1);


   /*! \brief High-level API for write.
    * \return self reference
    */
   IOChannel& operator<< (const QByteArray& src) {
      write(src.constData(), src.length());
      return *this;
   }

   /*! \brief High-level API for write.
    * \return self reference
    */
   IOChannel& operator<< (const QString& src) {
      write(src.toLatin1().constData(), src.length());
      return *this;
   }

   /*! \brief High-level API for write.
    * \return self reference
    */
   IOChannel& operator<< (const char* src){
      write(src);
      return *this;
   }

public slots:

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
   int flush(int mask = Device::Input | Device::Output);

   /*! \brief Flush input buffers.
    * \return  NotOpen Channel was not open
    * \return <=0 Error when flushing
    * \return  >0 Success
    */
   int flushInput();

   /*! \brief Flush output buffers.
    * \return  NotOpen Channel was not open
    * \return <=0 Error when flushing
    * \return  >0 Success
    */
   int flushOutput();

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
   int setBaudRate(const int rate);

   /*! \brief FT2232 mode manipulators.
    *
    * Sets FT2232 (see FT2232 manual)
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   int setMode(const int mask, const int mode);

   /*! \brief Start reader thread for polled mode. */
   int start();

   /*! \brief Terminate reader thread. */
   int terminate();

private:
   ::IOChannel* mChannel;
};

};

#endif
