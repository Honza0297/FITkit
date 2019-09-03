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
 ***************************************************************************/

#include <cstdio>
#include <string>
#include "device.h"
#include "devicemgr.h"

#ifdef __UNIX
#include <ctime>
#include <sys/time.h>

static void csleep(unsigned int mseconds)
{
   struct timeval tv = { 0, mseconds * 1000 };
   select(0,0,0,0, &tv);
}

#else
   #include <windows.h>
   #define csleep(msecs) Sleep(msecs)
#endif

int main()
{
   // Create DeviceMgr
   DeviceMgr devices;
   printf("-- TEST 1/7: Discovery\t");
   if(devices.discover() < 1)
   {
      printf("(FAILED)\n");
      return 1;
   }
   else
      printf("(PASSED, found %d devices)\n", devices.count());

   // Find all devices
   printf("-- TEST 2/7: Inspecting device list\n");
   DeviceMgr::List& list = devices.list();
   for(DeviceMgr::List::iterator it = list.begin(); it != list.end(); it++)
   {
      Device& dev = **it;
      printf("    Device ID: %02d\n     VID: %04X, PID: %04X\n", dev.id(), dev.vid(), dev.pid());
      printf("     Serial A: %s\n     Serial B: %s\n", dev['a'].serial().c_str(), dev['b'].serial().c_str());
      printf("     Description A: %s\n     Description B: %s\n", dev['a'].product().c_str(), dev['b'].product().c_str());
   }

   // Open first device
   printf("-- TEST 3/7: Acquiring first device\t");
   Device* dev = devices.acquire();
   if(dev == 0)
   {
      printf("(FAILED)\n");
      return 1;
   }
   else
      printf("(PASSED)\n");

   printf("-- TEST 4/7: Opening device\t");
   IOChannel& b = dev->channel('b');
   int ret = 0;
   if((ret = b.open()) > 0)
      printf("(PASSED, open OK)\n");
   else
   {
      printf("(FAILED, error %d)\n", ret);
      return 1;
   }

   // Set some parameters
   printf("-- TEST 5/7: Initialize MCU \n");
   b.setRts(false);
   b.setDtr(false);
   b.setDtr(true);
   b.setRts(true);
   
   char cbuf = 0;
   while(b.read(&cbuf, 1, 100) >= 0)
   {
      if(cbuf == '>')
         break;
   }

   printf("    PASSED\n");

   printf("-- TEST 6/7: Sending \"help\" command\n");
   b.write("help\r\n");
   printf("    PASSED\n");

   printf("-- TEST 7/7: Receiving some bytes (200ms timeout)\n");
   char buf[128] = {0};
   ret = b.read(buf, 127, 200); // leave last bytes 0
   printf("%s", buf);
   printf("\n    PASSED, received %d bytes.\n", ret);

   return 0;
}

