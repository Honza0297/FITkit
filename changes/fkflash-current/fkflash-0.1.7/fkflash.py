#!/app/bin/python
# -*- coding: utf-8 -*-
# vim: set ts=4 et enc=utf-8:
#
# Serial Bootstrap Loader software for the FITKIT

'''
 ***************************************************************************
 *   Copyright (C) 2009 Brno University of Technology,                     *
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
 ***************************************************************************
'''

import sys
import getopt
import os
import time
from mspgcc import memory, fkmemory, bsl
from fkutils import fkbsl, bslhex
import fitkit
import xml.dom.minidom
import unicodedata

#from mspgcc.util import curry, hexdump, makeihex

VERSION = 1.7
DEBUG_LEVEL = 1
DEVICE = None

class Serial:
    def __init__(self, channel):
        self.channel = channel

    def __getattr__(self, name):
        return getattr(self.channel, name)

    def setLineProperties(self, databits, stopbits, parity):
        db = fitkit.str2bits(databits)
        sb = fitkit.str2sbits(stopbits)
        pa = fitkit.str2parity(parity)
        return self.channel.configure(db, sb, pa)

    def flushInput(self):
        self.channel.flush(fitkit.Device.Input)

    def flushOutput(self):
        self.channel.flush(fitkit.Device.Output)

    def write(self, str):
        self.channel.write(str, len(str))

    def read(self, reqlen, timeout=1000):
        #nesmi vyvolat vyjimku pri timeoutu,
        # timeout se vyuziva napr. pri opakovani dotazu
        res = self.channel.read(reqlen, timeout)
        if (res != None) and (reqlen != len(res)):
            #print "readreq:",reqlen," readed:",len(res)
            raise Exception("Read error")
 
        return res

def usage():
    """Print usage informations"""
    sys.stderr.write("----------------------------------------------------------------------\n")
    sys.stderr.write("USAGE: %s [options]\nVersion: %s\n\n" % (os.path.basename(sys.argv[0]), VERSION))
    sys.stderr.write("General options:\n")
    sys.stderr.write("  -h, --help              Show this help screen.\n")
    sys.stderr.write("  -d, --devid=0           Specify the USB device to be used.\n") 
    sys.stderr.write("  -i, --identify          FITkit version identification.\n")
    sys.stderr.write("  -f, --hexfile=file.hex  Specify HEX file to be programmed into MCU (FITkit 1.x).\n")
    sys.stderr.write("  -g, --hexfile2=file.hex Specify HEX file to be programmed into MCU (FITkit 2.x).\n")
    sys.stderr.write("  -b, --binfile=file.bin  Specify BIN file to be programmed into FPGA.\n")
    sys.stderr.write("  -w, --wait              Wait for enter before closing of application.\n")
    sys.stderr.write("  --force                 Programm MCU and FPGA even if it isn't necessary\n")

def info(text, nl=True):
    sys.stdout.write(text)
    if (nl):
        sys.stdout.write('\n')
    sys.stdout.flush()

def log(text, status=None):
    if (text != None):
        try:

            if not isinstance(text, unicode):
                text = unicode(text, 'utf-8')
            
            textc = unicodedata.normalize('NFKD', text)
            output = ''
            for c in textc:
                if not unicodedata.combining(c):
                    output += c

            info(output)
#            sys.stdout.write(output)
#            sys.stdout.flush()

            
        except:
            pass

def flash(dev, fbin, fhex, fhex2, force = False):

    if dev is 0:
       dev = DEVICE

    if (dev == None):
        return
    
    channel = dev.channel('b')
    ret = channel.open()
    if (ret < 1):
        raise Exception("Can't open")

    channel.flush()
    channel.close()

    #Run
    #---------------------------------------------------
    info("Invoking BSL")
    bslobj      = bsl.BootStrapLoader(serialport=Serial(channel))
    #extract password from file

    bslobj.data = fkmemory.FKMemory()

    timestamp = time.time()
    bslobj.comInit(0) #init port

    bslobj.passwd1 = memory.Memory(fhex).getMemrange(0xffe0, 0xffff)
    bslobj.passwd2 = memory.Memory(fhex2).getMemrange(0xffe0, 0xffff)

    bslobj.bslReset(1)

    def trypassword(passwd):
        try:
            bslobj.txPasswd(passwd)
            bslobj.passwd = passwd
            return True
        except bsl.BSLException as msg:
            if (str(msg) == bsl.LowLevel.ERR_RX_NAK):
                return False
            else:
                channel.setDtr(False)
                channel.setRts(False)
                channel.close()
                raise
        
    masserase = False
    if (not trypassword(bslobj.passwd1)) and (not trypassword(bslobj.passwd2)):
        masserase = True

    if (force):
        masserase = True
        
    if (masserase):
        info("Mass erase")
        bslobj.actionMassErase(bslreset=0)

    bslobj.actionStartBSL(
            speed=38400,
            bslreset=0,
            sendpasswd=0
        )

    info("CPU: %s; Device: %X; BSLHEX rev: %s" % (bslobj.cpu, bslobj.dev_id, bslhex.BSLHEX_REVISION))

    hexfile = None
    if (bslobj.dev_id == 0xF169):
        bslobj.data.loadTITextFromString(bslhex.BSLHEX_F1XX)
        hexfile = fhex
    elif (bslobj.dev_id == 0xF26F):
        bslobj.data.loadTITextFromString(bslhex.BSLHEX_F2XX)
        hexfile = fhex2
    else:
        bslobj.comDone()
        raise Exception("Unsupported CPU device")

    if not hexfile:
        bslobj.comDone()
        raise Exception("Wrong HEX file given")

    bslobj.actionProgram()
    bslobj.actionRun(0x228)                    #load PC and execute

    bslobj.serialport.setBaudRate(460800)
    bslobj.serialport.flushInput()

    info("Elapsed:%d" % (time.time() - timestamp))
    timestamp = time.time()

    info("Programming (BIN file: %s HEX file: %s)" % (fbin, hexfile))
    fkbslobj = fkbsl.FITkit_BSL(bslobj.serialport.read, bslobj.serialport.write)
    fkbslobj.program(hexfile, fbin, mcuerased = masserase, force=force, statusCB=log)
    info("Elapsed:%d" % (time.time() - timestamp))

    bslobj.comDone()                            #Release serial communication port
    

#TODO: fkflash [options] file.hex file.bin
#         na poradi souboru nezalezi, vzdy pouze dva parametry, jeden musi mit
#         priponu hex a druhy bin

def main():
    info("FITkit FLASH utility version: %s  (C) 2009-2011 Zdenek Vasicek" % VERSION)

    #Parse arguments
    #---------------------------------------------------
    try:
        opts, args = getopt.getopt(sys.argv[1:],
            "hf:g:b:ic:w",
            ["help", "hexfile=", "hexfile2=", "binfile=","identify","devid=","wait","force"]
        )
    except getopt.GetoptError:
        usage()
        sys.exit(2)

    filename_hex = None
    filename2_hex = None
    filename_bin = None
    dev_id = 0
    wait = False
    force = False
    for o, a in opts:
        if o in ("-h", "--help"):
            usage()
            sys.exit()
        elif o in ("-f", "--hexfile"):
            filename_hex = a
        elif o in ("-g", "--hexfile2"):
            filename2_hex = a
        elif o in ("-b", "--binfile"):
            filename_bin = a
        elif o in ("-d", "--devid"):
            try:
                dev_id = int(a)  #try to convert decimal
            except ValueError:
                dev_id = a       #take the string and let serial driver decide 
        elif o in ("-i", "--identify"):
            sys.stderr.write("Option %s is not implemented yet.\n" % o)
        elif o in ("-w", "--wait"):
            wait = True
        elif o in ("--force"):
            force = True
            
    #neni zadan nazev souboru, zkusime project.xml
    if ((filename_hex == None) or (filename2_hex == None)) and (filename_bin == None):
        if os.path.isfile('project.xml'):
            base = os.path.abspath('.')
            doc = xml.dom.minidom.parse('project.xml')
            if (not doc):
                sys.stderr.write("Parse error - project.xml\n")
                sys.exit(2)

            root = doc.documentElement
            if (not root) or (root.tagName != 'project'):
                sys.stderr.write("Unknown root element %s\n", doc.documentElement.tagName)
                sys.exit(2)

            outf = "output"
            if (root.hasAttribute("outputprefix")):
                outf = root.getAttribute("outputprefix")

            info("project " + outf)

            #TODO: use atribut
            bbase = os.path.join(base,"build")
            filename_bin  = os.path.join(bbase,outf+".bin")
            filename_hex  = os.path.join(bbase,outf+"_f1xx.hex")
            filename2_hex = os.path.join(bbase,outf+"_f2xx.hex")
            if (not os.path.isfile(filename_bin)): filename_bin = None
            if (not os.path.isfile(filename_hex)): filename_hex = None
            if (not os.path.isfile(filename2_hex)): filename2_hex = None

    if (len(args) > 0) or ((len(args) == 0) and (((filename_hex == None) and (filename2_hex == None)) or (filename_bin == None))):
        sys.stderr.write("Use -h for help\n")
        sys.exit(2)

    if (filename_hex) and (not os.path.isfile(filename_hex)):
        sys.stderr.write('ERROR: File "%s" does not exist\n' % filename_hex)
        sys.exit(1)

    if (filename2_hex) and (not os.path.isfile(filename2_hex)):
        sys.stderr.write('ERROR: File "%s" does not exist\n' % filename2_hex)
        sys.exit(1)

    if (not os.path.isfile(filename_bin)):
        sys.stderr.write('ERROR: File "%s" does not exist\n' % filename_bin)
        sys.exit(1)

    devices = fitkit.pyDeviceMgr(False)
    info("Find a FITkit device ", nl=False)
    for i in range(0,5):
        ret = devices.discover()
        if (ret < 1):
            time.sleep(1)
            info(".", nl=False)
    if (ret < 1):
        raise Exception("No device found")
    info("OK")

    #acquire the device
    dev = devices.acquire(dev_id)
    if (dev is None):
        raise Exception("Can't open device %d" % dev_id)

    print("Device Info: VID: %04X  PID: %04X  SN: %s DESCR: %s" % (dev.vid(), dev.pid(), dev['b'].serial(), dev['b'].product()))

    try:
        flash(dev, filename_bin, filename_hex, filename2_hex, force)
    except Exception as msg:
        info("Exception: " + repr(msg))

    devices.release(dev)

    if (wait):
        info("Press <ENTER> ...")     #display a prompt
        raw_input()                   #wait for newline


if __name__ == '__main__':
    try:
        main()
    except SystemExit:
        raise               #let pass exit() calls
    except KeyboardInterrupt:
        if DEBUG_LEVEL > 0: raise     #show full trace in debug mode
        sys.stderr.write("User abort.\n")   #short messy in user mode
        sys.exit(1)         #set errorlevel for script usage
    except Exception as msg:  #every Exception is caught and displayed
        if DEBUG_LEVEL > 0: raise     #show full trace in debug mode
        sys.stderr.write("\nAn error occoured:\n%s\n" % msg) #short messy in user mode
        sys.exit(1)         #set errorlevel for script usage
