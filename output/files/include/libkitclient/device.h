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
 *  \file    device.h                                                      *
 *  \version 2.0                                                           *
 *  \author  Marek Vavrusa <xvavru00@stud.fit.vutbr.cz>                    *
 *  \brief   Device and channel APIs.                                      *
 *                                                                         *
 ***************************************************************************/

#ifndef DEVICE_H
#define DEVICE_H

#include <vector>
#include <string>
#include <cstring>
#include "libkitclient_export.h"

#if defined(USE_QT_THREADS)
 #include <QMutex>
 #define MUTEX_TYPE QMutex
#elif defined(USE_PTHREADS)
 #include <pthread.h>
 #define MUTEX_TYPE pthread_mutex_t
#else
 #define NOLOCK
#endif 

class DeviceBackend;
class IOChannel;
using std::string;
using std::vector;

#ifdef SWIG
#undef KITCLIENT_EXPORT
#define KITCLIENT_EXPORT
#endif

/*! \brief Device descriptor API.
 *
 *  Public attributes are platform-independent.
 *  Allows implicit data sharing between several Device instances.
 */        
class KITCLIENT_EXPORT DeviceData
{

public:

   /*! \brief List of DeviceData instances. */
   typedef vector<DeviceData*> List;

   /*! \brief Default constructor. */
   DeviceData();
   
   /*! \brief Default destructor. */
   virtual ~DeviceData();
   
   /*! \brief Lock device exclusively. Internal use only. */
   int lockData();
   
   /*! \brief Unlock device. Internal use only. */
   int unlockData();

   int vid;                /* Vendor identifier */
   int pid;                /* Product identifier */
   int flags;              /* Device flags */
   DeviceBackend* backend; /* Device backend reference */
   #ifndef NOLOCK
   MUTEX_TYPE lock;        /* Device lock */
   #endif
};

/*! \brief Device proxy.
 *
 * \brief Represents a device with one or two I/O channels.
 *
 * Class acts as a virtual interface to a device.
 * This class is compulsory for every backend to implement.
 */       
class KITCLIENT_EXPORT Device
{

public:

   /*! \brief FTDI channel enumerator.
    */
   enum ChannelId { ChannelA   = 1,  //!< Use channel A
                    ChannelB   = 2   //!< Use channel B
                  };

   /*! \brief RS232 bits control.
    *   Explanation of RS232 framing at
    *   http://www.wcscnet.com/Tutorials/SerialComm/Page1.htm
    */
   enum Bits { Bits7,       //!< Character has 7 bits
               Bits8        //!< Character has 8 bits
             };

   /*! \brief RS232 stop-bits control.
    */
   enum StopBits { StopBits1,   //!< 1   Stop bit
                   StopBits15,  //!< 1.5 Stop bit
                   StopBits2    //!< 2   Stop bits
                 };

   /*! \brief RS232 parity control.
    */
   enum Parity { ParityNone,  //!< None parity bit
                 ParityOdd,   //!< Odd parity check mode
                 ParityEven,  //!< Even parity check mode
                 ParityMark,  //!< Logical 0 - no data sent
                 ParitySpace  //!< Logical 1 - no data sent
               };

   /*! \brief Data flow direction.
    */
   enum Stream { Input  = 1, //!< Input direction
                 Output = 2  //!< Output direction
               };

   /*! \brief Device state.
    */
   enum State {  Acquired    = 1 << 0, //!< Device is acquired
                 Checked     = 1 << 1, //!< Device is checked as valid
                 DeleteLater = 1 << 2, //!< Device is scheduled for deletion
                 New         = 1 << 3, //!< Device is found
                 Virtual     = 1 << 4, //!< Device is virtual
                 Shared      = 1 << 5  //!< Device is shared
              };

   // Constants
   static const int      DEFAULT_VID;       //!< Default FITKit VID
   static const int      DEFAULT_PID;       //!< Default FITKit PID
   static const int      DEFAULT_RATE;      //!< Default baud rate
   static const Bits     DEFAULT_BIT;       //!< Default character size
   static const StopBits DEFAULT_STOPBIT;   //!< Default stop bits size
   static const Parity   DEFAULT_PARITY;    //!< Default parity
   static const ChannelId  DEFAULT_CHANNEL; //!< Default FTDI channel

   /*! Create new device instance.
    */
   Device(DeviceData* data = 0);

   /*! Device destructor (virtual).
    */
   virtual ~Device();

   /*! \return Unique ID.
    */
   int id() {
      return mId;
   }

   /*! \return Device Vendor ID.*/
   int vid() {
      if(mData != 0)
         return mData->vid;
      return -1;
   }

   /*! \return Device Product ID.*/
   int pid() {
      if(mData != 0)
         return mData->pid;
      return -1;
   }

   /*! \return Flags. */
   int flags() {
      return mData->flags;
   }

   /*! Set flags. */
   int setFlags(int flags) {
      return mData->flags = flags;
   }

   /*! Add flag to device set.
    * \return new flag set
    */
   int addFlag(int flag) {
      return mData->flags |= flag;
   }

   /*! Remove flag from device set.
    * \return new flag set
    */
   int removeFlag(int flag) {
      return mData->flags &= ~(flag);
   }

   /*! \brief Instance data accessor.
    * \return member data pointer
    */
   DeviceData& data()
   { return *mData; }

   /*! \brief Close all channels.
    * \return Bit-array of closed channels
    */
   int closeAll();

   /*! \brief Device channel accessor.
     * \param chan Channel identifier ( Device::ChannelA, Device::ChannelB)
     * \return Reference to requested channel.
     */
   virtual IOChannel& channel(const ChannelId chan) = 0;

   /*! \brief Device channel accessor.
    *
    * Return only channel in case of single-channel device.
    *
    * \param chan Channel identifier ( 'a', 'b' )
    * \return Reference to requested channel.
    */
   IOChannel& channel(const char chan = 'a') {
      return channel((chan == 'a' || chan == 'A') ? ChannelA : ChannelB);
   }

   /*! \brief Device channel accessor.
    * \param chan Channel identifier ( Device::ChannelA, Device::ChannelB)
    * \return Reference to requested channel.
    */
   IOChannel& operator[](const ChannelId chan) {
      return channel(chan);
   }

   /*! \brief Device channel accessor.
    * \param chan Channel identifier ( 'a', 'b' )
    * \return Reference to requested channel.
    */
   IOChannel& operator[](const char chan) {
      return channel(chan);
   }

protected:

   /*! \brief Set Unique ID.
     *  \return New identifier.
     */
   int setId(int id) {
      return mId = id;
   }

private:
   int mId;                    /* Identifier */
   DeviceData* mData;          /* Device data */
   static unsigned smUniqueId; /* Unique identifier counter. */
};

/*! \brief Device channel interface.
 *
 *  Channel is I/O interface for device.
 */ 
class KITCLIENT_EXPORT IOChannel
{

public:

   /* Constructor is defined as protected, see protected. */

   /*! \brief Destructor. */
   virtual ~IOChannel();

   /*! \brief State flags. */
   enum StateFlags { Ok             =  1, //!< Operation went OK
                     NotOpen        = -1, //!< Device is not open
                     NotFound       = -2, //!< Device was not found
                     AlreadyOpen    = -3, //!< Device channel already open
                     CantClaim      = -4, //!< Can't claim, bad permissions?
                     CantConfig     = -5, //!< Can't configure device
                     IOError        = -6, //!< Unknown I/O error
                     CreateError    = -7  //!< Failed to create
                   };

   /*! \return Associated channel ID. */
   const Device::ChannelId channelId() const {
      return mChannelId;
   }

   /*! \return Device vendor string. */
   const string& vendor() const {
      return mVendor;
   }

   /*! \return Device product string. */
   const string& product() const {
      return mProduct;
   }

   /*! \return Device serial number string. */
   const string& serial() const {
      return mSerial;
   }

   /*! \brief Set vendor string. */
   IOChannel& setVendor(const string& s = string()) {
      mVendor = s; return *this;
   }

   /*! \brief Set product string. */
   IOChannel& setProduct(const string& s = string()) {
      mProduct = s; return *this;
   }

   /*! \brief Set serial string. */
   IOChannel& setSerial(const string& s = string()) {
      mSerial = s; return *this;
   }

   /*! \brief Returns true if channel is open.
    * \return true if device is open
    */
   virtual int isOpen() = 0;

   /*! \brief Count bytes in buffer.
    * \return NotOpen if channel is not open.
    * \return number of bytes in buffer
    */
   virtual int bytesIn() = 0;

   /*! \brief Open channel.
    *
    * Opens channel and sets default line properties,
    * then creates event handler
    *
    * \return >0 success
    * \return <1 codes from OpenResult
    */
   virtual int open() = 0;

   /*! \brief Close channel.
    *
    * \return  NotOpen if it's not open
    * \return <0 Error closing the channel
    * \return >0 Success
    */
   virtual int close() = 0;

   /*! \brief Flush buffers.
    *
    * \param flags Bit-array of what should be flushed.
    * \return  NotOpen Channel was not open
    * \return <=0 Error when flushing
    * \return  >0 Success
    */
   virtual int flush(int flags = Device::Input | Device::Output) = 0;

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
   virtual int setBaudRate(int rate) = 0;

   /*! \brief Set RS232 line framing properties.
    *
    * \param     bits number of data bits
    * \param stopbits number of stopbits
    * \param   parity parity mode
    * \return  NotOpen Channel was not open
    * \return     <=0 Error when setting line property
    * \return      >0 Success
    */
   virtual int configure(Device::Bits bits, Device::StopBits s_bits, Device::Parity parity) = 0;

   /*! \brief FT2232 mode manipulators.
    *
    * Sets FT2232 manipulators (see FT2232 manual)
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   virtual int setMode(int mask, int mode) = 0;

   /*! \brief Set DTR line mode.
    *
    * Sets DTR (Data Terminal Ready)
    * carrier signal to given state.
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   virtual int setDtr(bool state) = 0;

   /*! \brief Set RTS line mode.
    *
    * Sets RTS (Request To Send)
    * carrier signal to given state.
    *
    * \return  NotOpen Channel was not open
    * \return     <=0 Error
    * \return      >0 Success
    */
   virtual int setRts(bool state) = 0;

   /*! \brief Reset MCU by a sequence of DTR/RTS signals. */
   int resetMCU() {
      int ret = setRts(false);
      ret += setDtr(false);
      ret += setRts(true);
      ret += setDtr(true);
      return ret;
   }

   /*! \brief Receive string data of specified length.
    *
    *  \note This function blocks for amount of time specified
    *  by timeout, or until all bytes are read.
    *
    *  \param    dest Destination buffer
    *  \param   count Specified number of bytes to be read
    *  \param timeout How long should call block
    *
    *  \return IOError I/O error
    *  \return NotOpen Device not connected
    *  \return >0      Number of read bytes
    */
#ifdef SWIG
   SWIG_BEFORE_IOChannel_read
#endif
   virtual int read(char* dest, int count, int timeout) = 0;
#ifdef SWIG
   SWIG_AFTER_IOChannel_read
#endif
#ifndef SWIG
   /*! \brief Receive bytes of specified length.
    *
    *  \note This function blocks until all bytes are read.
    *
    *  \param    dest Destination buffer
    *  \param   count Number of bytes to be read
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of read bytes.
    */
   int read(char* dest, int count) {
      return read(dest, count, 0);
   }
#endif

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
#ifdef SWIG
   SWIG_BEFORE_IOChannel_read
#endif
   virtual int readsome(char* dest, int maxlen, int timeout) {
       return read(dest, maxlen, timeout);
   }

#ifdef SWIG
   SWIG_AFTER_IOChannel_read
#endif
#ifndef SWIG
   /*! \brief Receive string data of maximum length.
    *
    *  \note This function blocks until bytes are available.
    *
    *  \param   dest Destination buffer
    *  \param maxlen Maximal number of bytes to be read
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of read bytes.
    */
   int readsome(char* dest, int maxlen) {
      return readsome(dest, maxlen, 0);
   }
#endif

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
#ifdef SWIG
   SWIG_BEFORE_IOChannel_write
#endif
   virtual int write(const char* src, int count) = 0;
#ifdef SWIG
   SWIG_AFTER_IOChannel_write
#endif
#ifndef SWIG
   /*! \brief Send data of given size.
    *
    *  This function blocks until all bytes are written.
    *
    *  \param   src Source data to be sent.
    *
    *  \return IOError I/O error.
    *  \return NotOpen Device not connected.
    *  \return >0      Number of written bytes.
    */
   int write(const char* src) {
      return write(src, strlen(src));
   }
#endif

   /*! \brief Start reader thread for polled mode. */
   virtual int start() = 0;

   /*! \brief Terminate reader thread. */
   virtual int terminate() = 0;

	virtual void setLatency(int latency) = 0;
	
   /*! \brief High-level API for write.
    * \return self reference on success
    */
   IOChannel& operator<< (const string& src) {
      write(src.c_str(), src.size());
      return *this;
   }

   /*! \brief High-level API for write.
    * \return self reference on success
    */
   IOChannel& operator<< (const char* src){
      write(src);
      return *this;
   }

protected:

   /*! \brief Return associated data instance. */
   template<class T>
   T data() {
      return static_cast<T>(mData);
   }

   /*! \brief Constructor is protected to prevent virtual class instantiation.
    */
   explicit IOChannel(DeviceData* data, Device::ChannelId id);

private:

   /* Members */

   string mVendor;               /* Vendor string */
   string mProduct;              /* Product description */
   string mSerial;               /* Vendor serial */
   DeviceData* mData;            /* Pointer do data instance */
   Device::ChannelId mChannelId; /* Channel identifier */

   class Private;
   Private *d;

   // Disable copy constructor
   IOChannel(const IOChannel &) {}
   IOChannel& operator=(const IOChannel &) { return *this; }
};

#endif
