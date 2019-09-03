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

#include "ftdi/ftdidevice.h"
#include <ftdi.h>
#include <pthread.h>
#include <cstring>
#include <cstdio>
#include <cerrno>
#include <ctime>

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
//clock_gettime is not implemented on OSX
#define CLOCK_REALTIME 0
int clock_gettime(int /*clk_id*/, struct timespec* t) {
	clock_serv_t cclock;
	mach_timespec_t mts;
	host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
	clock_get_time(cclock, &mts);
	mach_port_deallocate(mach_task_self(), cclock);
	t->tv_sec = mts.tv_sec;
	t->tv_nsec = mts.tv_nsec;
	return 0;
}
#endif

/* Internal data */
static const int READ_BLOCK_SZ = 1024;

/* This is workaround.
   Thread can't have an entrypoint in
   member function.
 */
static void* readThreadEntryPoint(void* caller)
{
   reinterpret_cast<FTDIChannel*>(caller)->start();
   return NULL;
}

class FTDIChannel::Private
{
   public:
      Private()
            : open(false), terminated(false), bytesRequested(0)
      {
         // Initialize context
         ftdi = ftdi_new();

         // Initialize mutex
         pthread_mutex_init(&bufferLock, NULL);
         pthread_mutex_init(&readLock, NULL);
         pthread_mutex_init(&requestLock, NULL);
         pthread_cond_init(&bytesReady, NULL);
      }

      ~Private()
      {
         // Delete ftdi context
         ftdi_free(ftdi);

         // Destroy mutexes
         pthread_mutex_destroy(&bufferLock);
         pthread_mutex_destroy(&readLock);
         pthread_mutex_destroy(&requestLock);
         pthread_cond_destroy(&bytesReady);
      }

      // Raw read
      int bulkRead(char *buf, int count)
      {
         return ftdi_read_data(ftdi, (unsigned char*) buf, count);
      }

      // Locks
      int lockBuffer()
      {
         return pthread_mutex_lock(&bufferLock);
      }
      int lockRead()
      {
         return pthread_mutex_lock(&readLock);
      }
      int lockRequest()
      {
         return pthread_mutex_lock(&requestLock);
      }

      // Unlocks
      int unlockBuffer()
      {
         return pthread_mutex_unlock(&bufferLock);
      }

      int unlockRead()
      {
         return pthread_mutex_unlock(&readLock);
      }

      int unlockRequest()
      {
         return pthread_mutex_unlock(&requestLock);
      }

      // Signals
      int signalBytesReady()
      {
         bytesRequested = 0;
         return pthread_cond_signal(&bytesReady);
      }

      int waitBytesReady(int count, struct timespec *timeout = 0)
      {
         bytesRequested = count;

         // Block
         if (timeout == 0)
            return pthread_cond_wait(&bytesReady, &requestLock);

         return pthread_cond_timedwait(&bytesReady, &requestLock, timeout);
      }

      // Properties
      bool                 open;
      bool                 terminated;
      struct ftdi_context* ftdi;   //!< libftdi context
      std::string          inbuf;
      pthread_t            readThread;
      pthread_mutex_t      bufferLock;
      pthread_mutex_t      readLock;
      pthread_mutex_t      requestLock;
      pthread_cond_t       bytesReady;
      int                  bytesRequested;
};

FTDIChannel::FTDIChannel(FTDIData* data, Device::ChannelId id)
      : IOChannel(data, id), latency_ms(2), d(new Private())
{
}

FTDIChannel::~FTDIChannel()
{
   // Close
   close();

   delete d;
}

int FTDIChannel::isOpen()
{
    FTDIData* ftdi = data<FTDIData*>();
    ftdi->lockData();
    int ret = d->open;
    ftdi->unlockData();
    
    return ret;
}

int FTDIChannel::bytesIn()
{
   if (!isOpen())
      return NotOpen;

   d->lockBuffer();
   int ret = d->inbuf.size();
   d->unlockBuffer();
   return ret;
}

static enum ftdi_interface ftdi_channel(Device::ChannelId channel)
{
   switch (channel)
   {
      case Device::ChannelA:
         return INTERFACE_A;
         break;
      case Device::ChannelB:
         return INTERFACE_B;
         break;
   }

   return INTERFACE_ANY;
}

int FTDIChannel::open()
{
   // Set channel prior to open
    if (isOpen()) {
        DEBUG_MSG("FTDI channel \'%c\' is already open\n",
                  channelId() == Device::ChannelA ? 'A' : 'B');
        return AlreadyOpen;
    } else {
        DEBUG_MSG("FTDI channel \'%c\' is free, opening\n",
                  channelId() == Device::ChannelA ? 'A' : 'B');
    }

   // Open device
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();
   int ret = 0;
   ftdi_set_interface(d->ftdi, ftdi_channel(channelId()));
   if (ftdi->usb_dev != 0) {
      ret = ftdi_usb_open_dev(d->ftdi, ftdi->usb_dev);
   } else {
      // Specific device not given, open first matching
      ret = ftdi_usb_open(d->ftdi, ftdi->vid, ftdi->pid);
   }

   // Can't be opened
   if (ret < 0)
   {
      DEBUG_MSG("cannot be opened: %d %s\n", ret, ftdi_get_error_string(d->ftdi));
      ftdi->unlockData();
      switch (ret)
      {
         case -3: // Unable to config
         case -6: // Unable to reset
         case -7: // Unable to set baudrate
            return CantConfig;
            break;
         case -4: // Unable to open
             
            return NotFound;
            break;
         case -5: // Unable to claim
            return CantClaim;
            break;
         default:
            return CantConfig;
            break;
      }
   }
   else {
      DEBUG_MSG("set FTDI channel \'%c\' as open\n",
                channelId() == Device::ChannelA ? 'A' : 'B');
      d->open = true;
  }
   ftdi->unlockData();

   // Default settings
   setBaudRate(Device::DEFAULT_RATE);
   configure(Device::DEFAULT_BIT, Device::DEFAULT_STOPBIT, Device::DEFAULT_PARITY);

   // Set latency & flowctl
   ftdi_setflowctrl(d->ftdi, SIO_DISABLE_FLOW_CTRL);
	if (latency_ms > 0)
      ftdi_set_latency_timer(d->ftdi, latency_ms);    // 2-4ms should be sufficient for i/o + flashing

   // Create readThread
   flush(Device::Input | Device::Output);
   pthread_create(&d->readThread, NULL, &readThreadEntryPoint, this);

   return Ok;
}

int FTDIChannel::close()
{
   if (!isOpen())
      return NotOpen;

   // Close device
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();
   DEBUG_MSG("set FTDI channel \'%c\' as closed\n",
             channelId() == Device::ChannelA ? 'A' : 'B');
   d->open = false;
   ftdi->unlockData();

   // Close readThread
   pthread_join(d->readThread, NULL);
   ftdi->lockData(); /* Relock */

   // Set DTR/RTS on exit
   ftdi_setdtr(d->ftdi, 0);
   ftdi_setrts(d->ftdi, 0);

   // Close context
   int ret = ftdi_usb_close(d->ftdi);
   ftdi->unlockData();

   // Clear buffer
   d->lockBuffer();
   d->inbuf.clear();
   d->unlockBuffer();

   if (ret == 0)
      return Ok;

   return IOError;
}

int FTDIChannel::flush(int flags)
{
   if (!isOpen())
      return NotOpen;
   
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();

   if (flags & Device::Input)
   {
      // Invalidate data in local buffer
      d->lockBuffer();
      d->inbuf.clear();
      d->unlockBuffer();

      if (ftdi_usb_purge_rx_buffer(d->ftdi) < 0) {
         ftdi->unlockData();
         return IOError;
      }
   }

   if (flags & Device::Output) {
      if (ftdi_usb_purge_tx_buffer(d->ftdi) < 0) {
         ftdi->unlockData();
         return IOError;
      }
   }
   
   ftdi->unlockData();

   return Ok;
}

int FTDIChannel::setBaudRate(int rate)
{
   if (!isOpen())
      return NotOpen;
   
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();

   int ret = 0;
   if ((ret = ftdi_set_baudrate(d->ftdi,  rate)) == 0) {
      ftdi->unlockData();
      return Ok;
   }
   
   ftdi->unlockData();

   return CantConfig;
}

int FTDIChannel::configure(Device::Bits bits, Device::StopBits stopbits, Device::Parity parity)
{
   if (!isOpen())
      return NotOpen;

   // Translate enumerators
   enum ftdi_bits_type     ft_bit    = BITS_7;
   enum ftdi_stopbits_type ft_sbit   = STOP_BIT_1;
   enum ftdi_parity_type   ft_parity = NONE;

   switch (bits)
   {
      case  Device::Bits7:
         ft_bit = BITS_7;
         break;
      case  Device::Bits8:
         ft_bit = BITS_8;
         break;
   }

   switch (stopbits)
   {
      case Device::StopBits1:
         ft_sbit = STOP_BIT_1;
         break;
      case Device::StopBits2:
         ft_sbit = STOP_BIT_2;
         break;
      case Device::StopBits15:
         ft_sbit = STOP_BIT_15;
         break;
   }

   switch (parity)
   {
      case Device::ParityNone:
         ft_parity = NONE;
         break;
      case Device::ParityOdd:
         ft_parity = ODD;
         break;
      case Device::ParityEven:
         ft_parity = EVEN;
         break;
      case Device::ParityMark:
         ft_parity = MARK;
         break;
      case Device::ParitySpace:
         ft_parity = SPACE;
         break;
   }
   
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();

   DEBUG_MSG("configure(): bits %d sbits %d parity %d\n", ft_bit, ft_sbit, ft_parity);
   if (ftdi_set_line_property(d->ftdi, ft_bit, ft_sbit, ft_parity) == 0) {
      ftdi->unlockData();
      return Ok;
   }
   
   ftdi->unlockData();

   return CantConfig;
}

int FTDIChannel::setMode(int mask, int mode)
{
   if (!isOpen())
      return NotOpen;

   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();
   
   int ret = 0;
   if ((ret = ftdi_set_bitmode(d->ftdi, (mask & 0xFF), (mode & 0xFF))) == 0) {
      ftdi->unlockData();
      return Ok;
   }
   
   ftdi->unlockData();

   return IOError;
}

int FTDIChannel::setDtr(bool state)
{
   if (!isOpen())
      return NotOpen;
   
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();

   if (ftdi_setdtr(d->ftdi, state) == 0) {
      ftdi->unlockData();
      return Ok;
   }
   
   ftdi->unlockData();

   return CantConfig;
}

int FTDIChannel::setRts(bool state)
{
   if (!isOpen())
      return NotOpen;
   
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();

   if (ftdi_setrts(d->ftdi, state) == 0) {
      ftdi->unlockData();
      return Ok;
   }
   
   ftdi->unlockData();

   return CantConfig;
}

int FTDIChannel::read(char * dest, int count, int timeout)
{
   return read(dest, count, count, timeout);
}

int FTDIChannel::readsome(char* dest, int maxlen, int timeout)
{
    return read(dest, maxlen, 1, timeout);
}

int FTDIChannel::read(char* dest, int maxlen,
                      int waitlen, int timeout)
{
    if (!isOpen())
       return NotOpen;

    int wait_res = 0;

    // Lock for reading
    d->lockRead();
    //DEBUG_MSG("FTDIChannel: started blocking read\n");

    if (bytesIn() < waitlen)
    {
       // Prepare wanted data
       d->lockRequest();

       // Block
       if (timeout <= 0)
          wait_res = d->waitBytesReady(waitlen);
       else
       {
          // Prepare timeout
          wait_res = EINVAL;
          while (wait_res == EINVAL)
          {
             struct timespec timeout_ts;
             clock_gettime(CLOCK_REALTIME, &timeout_ts);
             timeout_ts.tv_sec += timeout / 1000;
             timeout_ts.tv_nsec += (timeout % 1000) * 1000000;
             while (timeout_ts.tv_nsec > 999999999) {
                 timeout_ts.tv_sec += 1;
                 timeout_ts.tv_nsec -= 999999999;
             }
             wait_res = d->waitBytesReady(waitlen, &timeout_ts);
             pthread_mutex_trylock(&d->requestLock);
          }
       }

       // Unlock wanted request
       d->unlockRequest();
    }

    // Early exit
    if (d->inbuf.size() == 0) {
        d->unlockRead();
        return 0;
    }

    // Now lock incoming buffer
    d->lockBuffer();

    // Calculate chunk size
    int copied = maxlen, inqueue = d->inbuf.size();
    if (copied > inqueue)
       copied = inqueue;

    // Move bytes
    memcpy(dest, d->inbuf.c_str(), copied);
    d->inbuf.erase(0, copied);
    DEBUG_MSG("FTDIChannel: read finished, copied %d\n", copied);

    d->unlockBuffer();

    // Unlock reading
    d->unlockRead();

    return copied;
}

int FTDIChannel::write(const char * src, int count)
{
   if (!isOpen())
      return NotOpen;

   int written = 0, to_write  = (count < 0) ? strlen(src) : count;

   DEBUG_MSG("write(): will write %d\n", to_write);
#ifdef DEBUG
   // Show small messages
   int debug_len = (to_write < 50) ? to_write : 50;
   for (int i = 0; i < debug_len; i++)
   {
      fprintf(stderr, "0x%02hhx", src[i]);
      if (i != debug_len - 1)
         fprintf(stderr, " | ");
   }
   fprintf(stderr, "\n");

   for (int i = 0; i < debug_len; i++)
   {
      if (src[i] < 64)
         fprintf(stderr, " %02d ", src[i]);
      else
         fprintf(stderr, " %c  ", src[i]);
      if (i != debug_len - 1)
         fprintf(stderr, " | ");
   }
   fprintf(stderr, "\n");
#endif
   
   FTDIData* ftdi = data<FTDIData*>();
   ftdi->lockData();

   if ((written = ftdi_write_data(d->ftdi, (unsigned char*) src, to_write)) > 0)
   {
      ftdi->unlockData();
      DEBUG_MSG("write(): written %d\n", written);
      return written;
   }
   
   ftdi->unlockData();

   return IOError;
}

int FTDIChannel::terminate()
{
   d->terminated = true;
   d->signalBytesReady();
   return Ok;
}

int FTDIChannel::start()
{
   // Initialize buffer
   d->lockBuffer();
   d->inbuf.clear();
   d->inbuf.reserve(READ_BLOCK_SZ * 2);
   d->unlockBuffer();

   // Start reading
   int  bytes_in = 0;
   char buf[READ_BLOCK_SZ];
   memset(buf, 0, READ_BLOCK_SZ);
   while (isOpen())
   {
       FTDIData* ftdi = data<FTDIData*>();
       ftdi->lockData();
       bytes_in = d->bulkRead(buf, READ_BLOCK_SZ);
       ftdi->unlockData();
       
       if (bytes_in > 0)
       {
           // Append data
           d->lockBuffer();
           d->inbuf.append(buf, bytes_in);
           d->unlockBuffer();

           // Check request
           if (d->bytesRequested && bytesIn() >= d->bytesRequested)
           {
               d->lockRequest();
               d->signalBytesReady();
               d->unlockRequest();
           }

           memset(buf, 0, READ_BLOCK_SZ);
           DEBUG_MSG("readThread: got %d bytes\n", bytes_in);
       }
       else
       {
           if (bytes_in < 0)
           {
               DEBUG_MSG("read error: %s\n", ftdi_get_error_string(d->ftdi));
               close();
               break;
           }

           // Relax on no data (lesser performance impact)
           usleep(1000 * 10);
       }
   }

   return Ok;
}
