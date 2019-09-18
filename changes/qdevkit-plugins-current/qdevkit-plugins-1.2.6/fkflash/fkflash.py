#!/app/bin/python
# -*- coding: utf-8 -*-
# vim: set ts=4 et enc=utf-8:
# Serial FITKIT Bootstrap Loader software
'''
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
'''
from PythonQt import *

import traceback
import sys
import os
import time

DEBUG_LEVEL = 0
DEVICE = None

class Serial:
    def __init__(self, channel):
        self.channel = channel

    def __getattr__(self, name):
        return getattr(self.channel, name)

    def setLineProperties(self, databits, stopbits, parity):
        return self.channel.configure(int(databits),int(stopbits),parity)

    def flushInput(self):
        self.channel.flushInput()

    def flushOutput(self):
        self.channel.flushOutput()

    def write(self, str):
        self.channel.write(str, len(str))


    def read(self, reqlen, timeout=1000):
        return str(self.channel.read(reqlen, timeout))


def tr(msg, arg=None):
    try:
       lc = app.settingsValue("General/Locale")
    except:
       lc = "en"

    en_cs = {
       'Programming' : u"Programování",
       'Error' : "Chyba",
       'Exception occurs' : u"Vyvolána vyjímka",
       "Can't open FTDI channel B. FITkit is probably used in another application." : u"Nelze otevřít komunikační kanál B. FITkit je zřejme používán jinou aplikací",    
       "Can't import fkutils library.\n\nRegistered search paths:\n%s" : u"Nepodařilo se naimportovat knihovnu fkutils.\n\nRegistrované cesty:\n%s",
       "Can't open file %s": u"Nelze otevřít soubor %s",
       "Error occurs during password transmittion": u"Kritická chyba během přenosu hesla",
       "Unknown CPU ID %04X" : u"Neznámé CPU ID %04X"
    }

    if (lc == 'cs') and (msg in en_cs):
        msg = en_cs[msg]

    if (arg):
        return msg % arg
    else:
        return msg

class DevFlash:
    def __init__(self, device, app_name=""):
        self.device = device
        self.messages = ""
        self.app_name = app_name
        self.win = None
        self.sbar = None
        self.slab = None
        self.stbar = None

    def log2(self, text, prefix="BSL: "):
        if (text != None): 
            self.stbar.showMessage(prefix+text,5000)
            self.messages += text
            if (not text.endswith("\n")):
                self.messages += "\n"
        app.refreshApplication()

    def log(self, text, status=None):
        if (text != None) and (self.slab != None):
            self.slab.text = text
            self.messages += text
            if (not text.endswith("\n")):
                self.messages += "\n"

        if (status != None) and (self.sbar != None):
            self.sbar.setValue(status)

        app.refreshApplication()

    def destroyWindow(self):
        if (self.win != None):
            self.win.close()
            del self.win

    def createWindow(self):
        self.win = QDialog(mainWindow)
        self.win.setWindowTitle(tr("Programming"))
        #self.win.setWindowFlags( self.win.windowFlags | 0x1000) #Qt::WindowTitleHint
        if (self.app_name):
            self.win.windowTitle += " ( " + self.app_name + " )"
        self.win.windowIcon = QIcon(":/icons/48x48/plugin.png")
        self.win.minimumWidth = 400
        #self.win.maximumWidth = 400
        self.win.modal = True

        self.sbar = QProgressBar(self.win)
        self.sbar.setMinimum(0)
        self.sbar.setMaximum(100)
        self.sbar.setValue(0)
        self.slab = QLabel(self.win)
        self.stbar = QStatusBar(self.win)
        self.stbar.setStyleSheet('color: #808080;font-family:Verdana;font-size:10px')

        box = QVBoxLayout(self.win)
        box.margin = 0

        box2 = QVBoxLayout()
        box2.setContentsMargins(10,10,10,5)
        box2.addWidget(self.slab)
        box2.addWidget(self.sbar)

        box.addLayout(box2)
        box.addStretch(0)
        box.addWidget(self.stbar)
        self.win.show()

    def flash(self, filename_bin, filename_hex, filename2_hex, force = False, tries=3):
        if (self.device == None):
            return

        self.messages = ""
        if (tries == 3):
            #self.createWindow()
    
            print("Flashing device %s" % str(self.device))
            print("BinFile: %s" % filename_bin)
            print("HexFile: %s" % filename_hex)
            print("Forcing: %s" % force)

        channel = self.device.channelB()
        ret = channel.open()
        if (ret < 1):
            raise Exception(tr("Can't open FTDI channel B. FITkit is probably used in another application.") + "[Error "+str(ret)+"]")

        channel.flush()
        channel.close() 
    
        self.log(u"Inicializace",1)
        try:
            from mspgcc import memory, fkmemory, bsl
            from fkutils import fkbsl, bslhex 
        except:
            raise Exception(tr("Can't import fkutils library.\n\nRegistered search paths:\n%s", '\n'.join(sys.path)))
    
        bslobj = bsl.BootStrapLoader(serialport=Serial(channel), statusCB=self.log2) 
        bslobj.data = fkmemory.FKMemory()
    
        timestamp = time.time()
        bslobj.comInit(0) #init port

        try:
            bslobj.passwd1 = memory.Memory(filename_hex).getMemrange(0xffe0, 0xffff)
        except:
            raise Exception(tr("Can't open file %s", filename_hex))

        try:
            bslobj.passwd2 = memory.Memory(filename2_hex).getMemrange(0xffe0, 0xffff)
        except:
            raise Exception(tr("Can't open file %s", filename2_hex))


        bslobj.bslReset(1)

        def trypassword(passwd):
            passwd = str(passwd)
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
                    if (tries > 0):
                       return flash(filename_bin, filename_hex, filename2_hex, force, tries - 1);
                    raise Exception(tr("Error occurs during password transmittion"))
        
        masserase = False
        if (not trypassword(bslobj.passwd1)) and (not trypassword(bslobj.passwd2)):
            masserase = True
    
        if (force):
            masserase = True

        if (masserase):
            bslobj.actionMassErase(bslreset=0)
    
        bslobj.actionStartBSL(speed=38400, bslreset=0, sendpasswd=0)

        hexfile = None
        if (bslobj.dev_id == 0xF169):
            bslobj.data.loadTITextFromString(bslhex.BSLHEX_F1XX)
            hexfile = filename_hex
        elif (bslobj.dev_id == 0xF26F):
            bslobj.data.loadTITextFromString(bslhex.BSLHEX_F2XX)
            hexfile = filename2_hex
        else:
            raise Exception(tr("Unknown CPU ID %04X", bslobj.dev_id))

        bslobj.actionProgram()
        bslobj.actionRun(0x228) 
    
        bslobj.serialport.setBaudRate(460800)
        bslobj.serialport.flushInput()
        self.log2("CPU: %s Device: %X BSLHEX: %s Elapsed: %d s" % (bslobj.cpu, bslobj.dev_id,  bslhex.BSLHEX_REVISION, time.time() - timestamp),"")

        timestamp = time.time()
        fkbslobj = fkbsl.FITkit_BSL(bslobj.serialport.read, bslobj.serialport.write)
        fkbslobj.program(hexfile, filename_bin, mcuerased = masserase, force=force, statusCB=self.log)
        self.log2("Elapsed: %d" % (time.time() - timestamp),"")
    
        bslobj.comDone()                            #Release serial communication port
        return

def flash(app_name, filename_bin, filename_hex, filename2_hex, force = False):
    global DEVICE
    device = DEVICE
    print("LOG flash:", DEVICE, app_name, filename_bin, filename_hex, force)
    sys.path.append(plugin.path()) 

    fkflash = DevFlash(device, app_name=app_name)

    def exceptmsg(text):
        print("Error, exception occured!")
        print(text)
        print("Detailed:") 
        print(fkflash.messages)
        print("Traceback:")
        print("------------------------------------------------")

        exceptionType, exceptionValue, exceptionTraceback = sys.exc_info()
        for l in traceback.format_tb(exceptionTraceback):
            print(" * " + str(l).strip())

    def excepthook(type, text, traceback):
        exceptmsg(text)

    sys.excepthook = excepthook
    try:
        try:
            fkflash.flash(filename_bin, filename_hex, filename2_hex, force)
        finally:
            fkflash.destroyWindow()
    except Exception as msg:
        exceptmsg(msg)
        sys.excepthook = None
