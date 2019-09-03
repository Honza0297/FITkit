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
#include <csignal>
#include <string>
#include "device.h"
#include "devicemgr.h"

/* Implement custom DeviceMgr */
class MyMgr : public DeviceMgr
{
   public:
      void deviceAcquired(int deviceId)  { printf("Device %d acquired.\n", deviceId);    }
      void deviceReleased(int deviceId)  { printf("Device %d released.\n", deviceId);    }
      void deviceFound(int deviceId)
      {
        Device& dev = *device(deviceId);
        printf("Device %d connected.\n", deviceId);
        printf("    Device ID: %02d\n     VID: %04X, PID: %04X\n", deviceId, dev.vid(), dev.pid());
        printf("     Serial A: %s\n     Serial B: %s\n", dev['a'].serial().c_str(), dev['b'].serial().c_str());
        printf("     Description A: %s\n     Description B: %s\n", dev['a'].product().c_str(), dev['b'].product().c_str());
      }

      void deviceLost(int deviceId) { printf("Device %d disconnected.\n", deviceId); }
};

/* Sleep implementation */
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

/* Signal handler */
sig_atomic_t sig_term = 0;

void handle_term(int param)
{
   fprintf(stderr, "\n-- Closing\n");
   sig_term = 1;
}

int main()
{
   // Create DeviceMgr
   MyMgr devices;
   printf("-- TEST 1/3: Initial discovery\n");
   if(devices.discover() < 1)
      return 1;
   else
      printf("PASSED, found: %d devices\n", devices.count());

   // Find all devices
   printf("-- TEST 2/3: Inspecting device list\n");
   MyMgr::List& list = devices.list();
   for(MyMgr::iterator it = list.begin(); it != list.end(); it++)
   {
      Device& dev = **it;
      printf("    Device ID: %02d\n     VID: %04X, PID: %04X\n", dev.id(), dev.vid(), dev.pid());
      printf("     Serial A: %s\n     Serial B: %s\n", dev['a'].serial().c_str(), dev['b'].serial().c_str());
      printf("     Description A: %s\n     Description B: %s\n", dev['a'].product().c_str(), dev['b'].product().c_str());
   }

   printf("-- TEST 3/3: Watching device list ...\n");
   signal(SIGTERM, handle_term);
   signal(SIGINT, handle_term);
   while(!sig_term)
   {
     csleep(2000);
     devices.discover();
   }

   return 0;
}

 
