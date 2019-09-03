/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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
#include <windows.h>
#include <winbase.h>
#include <ftd2xx.h>
#include <cstring>
#include <cstdio>

#define hReadEvent (d->hEvents[0])
#define hTerminateEvent (d->hEvents[1])
#define RINGBUFFER_SIZE 131072

class FTDIChannel::Private
{

public:

   Private()
      : ftHandle(0), inRxQueue(0), open(false), ringStart(0), ringStop(0)
   {}

   bool open;
   void *ftHandle;
   void *hEvents[2];
   int  inRxQueue;

   char ringBuffer[RINGBUFFER_SIZE];
   int ringStart;
   int ringStop;
   FTDIData* data;

   /*! \brief Set I/O timeouts.
    */
   int setTimeouts(int read_timeout, int write_timeout)
   {
      FT_STATUS ftStatus;

      ftStatus = FT_SetTimeouts(ftHandle, read_timeout, write_timeout);
      if (ftStatus == FT_OK)
         return IOChannel::Ok;

      return IOChannel::IOError;
   }

   /*! \brief Perform read from the ring buffer.
    *
    *  \return number of bytes read or error code (<0)
    */
   int bulkRead(char * dest, int count)
   {
      int rdbytes = count;
      if (rdbytes > inRxQueue) rdbytes = inRxQueue;

      for (int i=0; i < rdbytes; i++)
      {
         *dest = ringBuffer[ringStart];
         ringStart = (ringStart + 1) % RINGBUFFER_SIZE;
         dest++;
         inRxQueue--;
      }

      DEBUG_MSG("bulkRead %d bytes: readed: %d bytes \n", count, rdbytes);

      return rdbytes;
   }
};

FTDIChannel::FTDIChannel(FTDIData* data, Device::ChannelId id)
      : IOChannel(data, id), d(new Private()), latency_ms(2) {
   // Defaults
   d->data = data;

   // Initialize mutex
   hReadEvent = NULL;
   hTerminateEvent = NULL;
}

FTDIChannel::~FTDIChannel()
{
   // Close
   if (isOpen())
      close();

   delete d;
}

int FTDIChannel::isOpen()
{
    d->data->lockData();
    int ret = d->open;
    d->data->unlockData();
    return ret;
}

int FTDIChannel::bytesIn()
{
   if (!isOpen())
      return NotOpen;

   return d->inRxQueue;
}

int FTDIChannel::open()
{
	int latency = latency_ms;

	// Set channel prior to open
   if (isOpen())
      return AlreadyOpen;

   FT_STATUS ftStatus;
   DWORD LocID;

   d->data->lockData();

   // Specific device not given, return
   if (d->data->LocID == -1) {
      return CantConfig - 18;
	}

   hReadEvent = CreateEvent(NULL, false, false, "");   /*auto-reset, non-signalled state*/
   if (hReadEvent == NULL) {
      d->data->unlockData();
      return CreateError;
	}

   hTerminateEvent = CreateEvent(NULL, false, false, "");   /*auto-reset, non-signalled state*/
   if (hTerminateEvent == NULL)
   {
      CloseHandle(hReadEvent);
      hReadEvent = NULL;
      d->data->unlockData();
      return CreateError;
   }

	if (latency > 0) 
	{
   	HKEY hKey;
      LONG ret;
      DWORD type, value, buflen=4;
   
      ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Services\\FTDIBUS", 0, KEY_QUERY_VALUE, &hKey);
      if (ret == ERROR_SUCCESS )
      {
         ret = RegQueryValueEx(hKey, "MinLatency", NULL, &type, (LPBYTE) &value, &buflen);
         if ((ret == ERROR_SUCCESS) && (type == REG_DWORD)) {
            DEBUG_MSG("open(): registry min. latency value: %d\n", value);
   
            if ((latency < (int)value) && (value > 0))
            {
               DEBUG_MSG("open(): latency changed to: %d\n", value);
               latency = value;
            }
         }
   
         RegCloseKey(hKey);
      }
   }

   LocID = (channelId() == Device::ChannelB) ? d->data->channelB_LocID : d->data->channelA_LocID;
   DEBUG_MSG("open(): ChannelId = %c, LocID = %d\n", (channelId() == Device::ChannelA) ? 'a' : 'b', LocID);

   ftStatus = FT_OpenEx((void *) LocID, FT_OPEN_BY_LOCATION, &d->ftHandle);
   if (ftStatus == FT_DEVICE_NOT_FOUND) { d->data->unlockData(); return NotFound;}
   if (ftStatus == FT_DEVICE_NOT_OPENED) { d->data->unlockData(); return CantClaim;}
   if (ftStatus != FT_OK) {d->data->unlockData(); return CantConfig;}

   d->open = true;
   d->data->unlockData();

   d->inRxQueue = 0;
   ftStatus = FT_SetEventNotification(d->ftHandle, FT_EVENT_RXCHAR, hReadEvent);
   if (ftStatus != FT_OK)
   {
      close();
      return CantConfig - 10;
   }

   //disable flow control
   ftStatus = FT_SetFlowControl(d->ftHandle, FT_FLOW_NONE, 0, 0);
   if (ftStatus != FT_OK)
   {
      close();
      return CantConfig - 11;
   }

	if (latency > 0) 
	{
      //set latency timer to 1ms (faster response in case of small packets)
      ftStatus = FT_SetLatencyTimer(d->ftHandle, (unsigned char)latency);
      if (ftStatus != FT_OK)
      {
         close();
         return CantConfig - 12;
      }
   }

   //set default read/write timeouts
   if (!d->setTimeouts(0/*blocking read*/, 1000/*1s*/))
   {
      close();
      return CantConfig - 13;
   }

   //set default baud rate
   if (!setBaudRate(Device::DEFAULT_RATE))
   {
      close();
      return CantConfig - 14;
   }

   //set line properties
   if (!configure(Device::DEFAULT_BIT, Device::DEFAULT_STOPBIT, Device::DEFAULT_PARITY))
   {
      close();
      return CantConfig - 15;
   }

   if (!flush(Device::Input | Device::Output))
   {
      close();
      return CantConfig - 16;
   }

   return Ok;
}

int FTDIChannel::close()
{
   FT_STATUS ftStatus;

   if (!isOpen())
      return NotOpen;

	//TODO: CHECK TERMINATE READ
   terminate();

   d->data->lockData();

   CloseHandle(hTerminateEvent);
   hTerminateEvent = NULL;

   CloseHandle(hReadEvent);
   hReadEvent = NULL;

   // Reset DTR/RTS
   FT_ClrDtr(d->ftHandle);
   FT_ClrRts(d->ftHandle);

   ftStatus = FT_Close(d->ftHandle);
   if (ftStatus == FT_OK)
   {
      d->ftHandle = NULL;
      d->open = false;
      d->data->unlockData();
      return Ok;
   }

   d->data->unlockData();
   return IOError;
}

int FTDIChannel::flush(int flags)
{
   FT_STATUS ftStatus;
   DWORD mask;

   if (!isOpen())
      return NotOpen;

   mask = 0;
   if (flags & FTDIDevice::Input) mask |= FT_PURGE_RX;
   if (flags & FTDIDevice::Output) mask |= FT_PURGE_TX;

   ftStatus = FT_Purge(d->ftHandle, mask);
   if (ftStatus == FT_OK)
      return Ok;

   return IOError;
}

int FTDIChannel::setBaudRate(int rate)
{
   FT_STATUS ftStatus;

   if (!isOpen())
      return NotOpen;

   ftStatus = FT_SetBaudRate(d->ftHandle, rate);
   if (ftStatus == FT_OK)
      return Ok;

   return IOError;
}

int FTDIChannel::configure(Device::Bits bits, Device::StopBits stopbits, Device::Parity parity)
{
   FT_STATUS ftStatus;
   UCHAR ft_wordlen = FT_BITS_8;
   UCHAR ft_sbit = FT_STOP_BITS_1;
   UCHAR ft_parity = FT_PARITY_EVEN;

   if (!isOpen())
      return NotOpen;

   switch (bits)
   {
      case FTDIDevice::Bits7:
         ft_wordlen = FT_BITS_7;
         break;
      case FTDIDevice::Bits8:
         ft_wordlen = FT_BITS_8;
         break;
   }

   switch (stopbits)
   {
      case FTDIDevice::StopBits1:
         ft_sbit = FT_STOP_BITS_1;
         break;
      case FTDIDevice::StopBits2:
         ft_sbit = FT_STOP_BITS_2;
         break;
      case FTDIDevice::StopBits15:
         ft_sbit = FT_STOP_BITS_1_5;
         break;
   }

   switch (parity)
   {
      case FTDIDevice::ParityNone:
         ft_parity = FT_PARITY_NONE;
         break;
      case FTDIDevice::ParityOdd:
         ft_parity = FT_PARITY_ODD;
         break;
      case FTDIDevice::ParityEven:
         ft_parity = FT_PARITY_EVEN;
         break;
      case FTDIDevice::ParityMark:
         ft_parity = FT_PARITY_MARK;
         break;
      case FTDIDevice::ParitySpace:
         ft_parity = FT_PARITY_SPACE;
         break;
   }

   ftStatus = FT_SetDataCharacteristics(d->ftHandle, ft_wordlen, ft_sbit, ft_parity);
   if (ftStatus == FT_OK)
      return Ok;

   return IOError;
}

int FTDIChannel::setMode(int mask, int mode)
{
   FT_STATUS ftStatus;

   if (!isOpen())
      return NotOpen;

   ftStatus = FT_SetBitMode(d->ftHandle, (mask & 0xFF), (mode & 0xFF));
   if (ftStatus == FT_OK)
      return Ok;

   return IOError;
}

int FTDIChannel::setDtr(bool state)
{
   FT_STATUS ftStatus;
   if (!isOpen())
      return NotOpen;

   if (state)
   {
      ftStatus = FT_SetDtr(d->ftHandle);
   }
   else
   {
      ftStatus = FT_ClrDtr(d->ftHandle);
   }

   if (ftStatus == FT_OK)
      return Ok;

   return IOError;
}

int FTDIChannel::setRts(bool state)
{
   FT_STATUS ftStatus;
   if (!isOpen())
      return NotOpen;

   if (state)
   {
      ftStatus = FT_SetRts(d->ftHandle);
   }
   else
   {
      ftStatus = FT_ClrRts(d->ftHandle);
   }

   if (ftStatus == FT_OK)
      return Ok;

   return IOError;
}

int FTDIChannel::start()
{
   return Ok;
}

int FTDIChannel::terminate()
{
   if (!isOpen())
      return NotOpen;

   SetEvent(hTerminateEvent);

   return Ok;
}

int FTDIChannel::read(char *dest, int count, int timeout)
{
    return read(dest, count, count, timeout);
}

int FTDIChannel::readsome(char *dest, int maxlen, int timeout)
{
    return read(dest, maxlen, 1, timeout);
}

int FTDIChannel::read(char* dest, int maxlen,
                      int waitlen, int timeout)
{
   FT_STATUS ftStatus;
   DWORD dwEvent;
   DWORD RxBytes;
   DWORD TxBytes;
   DWORD timeoutms = (timeout <= 0) ? INFINITE : timeout;

   if ((!isOpen()) || (dest == NULL) || (maxlen <= 0))
      return NotOpen;

   int eventsignaled = 0;
   int returnval = IOError;
   while (true)
   {

      if (eventsignaled == 1)
         return returnval;

      eventsignaled = 0;
      returnval = IOError;

      if (d->inRxQueue >= waitlen) {
          //there have to be enough chars in the read queue

          if (WaitForSingleObject(hReadEvent, 0) == WAIT_OBJECT_0)
          {
             //the hReadEvent is signaled, fetch service has to be called in order to avoid starving due to
             //the fact that d->inRxQueue is much larger than count

             DEBUG_MSG("read: Event signaled\n");

             eventsignaled = 1;
          }

          returnval = d->bulkRead(dest, maxlen);

          if (eventsignaled == 0)
             return returnval;
      }

      dwEvent = WAIT_OBJECT_0;
      if (eventsignaled == 0)
         dwEvent = WaitForMultipleObjects(2, d->hEvents, false, timeoutms);    //2 events, wait for any event

      //dwEvent: WAIT_TIMEOUT, WAIT_OBJECT_0 + 0 /* char received */, WAIT_OBJECT_0 + 1 /* terminated */
      if (dwEvent == (WAIT_OBJECT_0 + 1))     //read was terminated
      {
         DEBUG_MSG("read: Read terminated\n");
         return returnval;
      }

      if (dwEvent == (WAIT_OBJECT_0 + 0))     //char(s) received
      {
         //check the result of event
         ftStatus = FT_GetStatus(d->ftHandle, &RxBytes, &TxBytes, &dwEvent);
         if (ftStatus != FT_OK)
         {
            DEBUG_MSG("read: FT_GetStatus error\n");
            return returnval;
         }

         if ((dwEvent & FT_EVENT_RXCHAR) == FT_EVENT_RXCHAR)
         {
            DEBUG_MSG("read: Event - new data received. InRxQue: %d chars\n", RxBytes);
         }
         else
         {
            DEBUG_MSG("read: Event %X. InRxQue: %d, InTxQue: %d\n", dwEvent, RxBytes, TxBytes);
         }

         //read the data from FTDI to the ring buffer

         while ((d->inRxQueue < RINGBUFFER_SIZE) && (RxBytes > 0))
         {

             if ((!isOpen()) || (dest == NULL) || (maxlen <= 0))
                return NotOpen;

             DWORD bytesbulkReaded = 0;
             char adest[256];
             int rd = 256;
             if (RxBytes < (unsigned)rd) rd = RxBytes;
             if (d->inRxQueue + rd >= RINGBUFFER_SIZE) break;

             ftStatus = FT_Read(d->ftHandle, adest, rd, &bytesbulkReaded);

             DEBUG_MSG("ringBufferRead %d bytes: readed: %d bytes \n", rd, bytesbulkReaded);

             if (ftStatus != FT_OK)
                return IOError;

             RxBytes -= bytesbulkReaded;
             for (DWORD i = 0; i < bytesbulkReaded; i++)
             {
                 d->ringBuffer[d->ringStop] = adest[i];
                 d->ringStop = (d->ringStop + 1) % RINGBUFFER_SIZE;
                 d->inRxQueue++;
             }

         }

      }

      if (dwEvent == (WAIT_TIMEOUT))     //timeout signaled
      {
         int len = (d->inRxQueue < maxlen) ? d->inRxQueue : maxlen; //returns inRxQueue chars

         //DEBUG_MSG("read: Timeout (chars: %d)\n", len);
         if (len > 0)
            return d->bulkRead(dest, len);

         return 0;
      }

   }
}

int FTDIChannel::write(const char * src, int count)
{

   FT_STATUS ftStatus = FT_OK;
   DWORD written = 0;
   int len = (count < 0) ? strlen(src) : count;

   if ((!isOpen()) || (src == NULL))
      return NotOpen;

   DEBUG_MSG("write(): will write %d bytes\n", len);
#ifdef DEBUG
   // Show small messages
   DEBUG_MSG("");
   int debug_len = (len < 50) ? len : 50;
   for (int i = 0; i < debug_len; i++)
   {
      fprintf(stderr, "0x%02hhx", (src[i] & 0xFF));
      if (i != debug_len - 1)
         fprintf(stderr, " | ");
   }
   fprintf(stderr, "\n");
   fflush(stderr);

   DEBUG_MSG("");
   for (int i = 0; i < debug_len; i++)
   {
      if (src[i] < 64)
         fprintf(stderr, " %02d ", src[i]);
      else
         fprintf(stderr, " %hhc  ", (src[i] & 0xFF));
      if (i != debug_len - 1)
         fprintf(stderr, " | ");
   }
   fprintf(stderr, "\n");
#endif

   ftStatus = FT_Write(d->ftHandle, (unsigned char*) src, len, &written);
   DEBUG_MSG("write(): written %d bytes\n", written);
   if (ftStatus == FT_OK)
   {
      //TODO: written != len
      if (written != (unsigned)len)
         return IOError;

      return written;
   }

   return IOError;
}
