#!/usr/bin/env python
'''
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
'''

from fitkit import *
from time import sleep
import sys

# Test : discovery
sys.stdout.write("-- TEST 1/12: Discovery\t\t\t")

devices = FitKitMgr(debugMessages=False)
ret = devices.discover()

if ret < 1:
   raise Exception("FAILED")
else:
  print "(PASSED, found %d devices)" % devices.count()

# Test : device list
print "-- TEST 2/12: Inspecting device list"
devlist = devices.list()
for i in range(0, len(devlist)):
   dev = devlist[i]
   print "    Device ID: %02d\n     VID: %04X, PID: %04X" % (dev.id(), dev.vid(), dev.pid())
   print "     Serial A: %s\n     Serial B: %s"           % (dev['a'].serial(),  dev['b'].serial())
   print "     Description A: %s\n     Description B: %s" % (dev['a'].product(), dev['b'].product())
print


# Test : acquire
sys.stdout.write("-- TEST 3/12: Acquiring unknown\t\t")
device = devices.acquire(1000)
if device is None:
   print "(PASSED)"
else:
   print
   raise Exception("FAILED")

sys.stdout.write("-- TEST 4/12: Acquiring first\t\t")
dev = devices.acquire()
if dev is None:
   print
   raise Exception("FAILED")
else:
   print "(PASSED)"

# Test : open
sys.stdout.write("-- TEST 5/12: Opening device\t\t")
ret = dev['b'].open()
if ret < 0:
   print
   raise Exception("FAILED, error %d" % ret)
else:
   print "(PASSED)"

# Test: RTS/DTR
sys.stdout.write("-- TEST 6/12: RTS/DTR on/off\t\t")
ret  = dev['b'].resetMCU()
if ret <= 0:
   print
   raise Exception("FAILED, error %d" % ret)
else:
   print "(PASSED)"

# Test: receive1
sys.stdout.write("-- TEST 7/12: Receiving intialization\t")
sys.stdout.flush()
buf = ""; outbuf = ""
while buf != ">":
   buf = dev['b'].read(1, 1000)
   if buf != None:
      outbuf += buf
print "(PASSED, received %d bytes)" % len(outbuf)

# Test: send
cmd = "help\r\n"
sys.stdout.write("-- TEST 8/12: Sending command \"help\"\t")
sys.stdout.flush()
ret = dev['b'].write(cmd, len(cmd))
if ret < len(cmd):
   print
   raise Exception("FAILED, error %d" % ret)
else:
   print "(PASSED)"

# Test: receive2
sys.stdout.write("-- TEST 9/12: Receiving some bytes II\t")
sys.stdout.flush()
buf = dev['b'].read(128, 1000)
if (buf == None):
   print
   raise Exception("FAILED")
else:
   print "(PASSED, received %d bytes)" % len(buf)

# Test: receive2
sys.stdout.write("-- TEST 10/12: Receiving (2s timeout)\t")
sys.stdout.flush()
buf = dev['b'].read(2048, 2000)
if (buf == None) or (buf == 2048):
   print
   raise Exception("FAILED")
else:
   print "(PASSED, received %d bytes)" % len(buf)

sys.stdout.write("-- TEST 11/12: Closing device\t\t")
ret = dev['b'].close()
if ret != IOChannel.Ok:
   print
   raise Exception("FAILED, returned %d" % ret)
else:
   print "(PASSED)"

sys.stdout.write("-- TEST 12/12: Receiving exception\t")
try:
    raise Exception("test message")
except Exception, msg:
    print "(PASSED [", msg,"])"

# Show captured
print
print "Captured initialization:"
print outbuf.__repr__()
print


