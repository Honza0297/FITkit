# -*- coding: utf-8 -*-
# vim: set ts=4 et enc=utf-8:

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
import struct
import segutils
import hashlib
import time
import os

BSLERROR_OK               = 0
BSLERROR_TIMEOUT          = 1
BSLERROR_INIT_RESPONSE    = 2
BSLERROR_INFO_INVALIDCMD  = 3
BSLERROR_INFO_CHECKSUM    = 4
BSLERROR_PROGRAM_RESPONSE = 5 #Invalid response
BSLERROR_PROGRAM_FAIL     = 6 #Blok se nepodarilo ani jednou prenest bez chyb
BSLERROR_FLASH_INIT       = 7 #FPGA: Nedockali jsme se smazani bloku v externi FLASH
BSLERROR_FLASH_COMMAND    = 8 #FPGA: Invalid command
BSLERRORS = ["FKBSL: Timeout","INIT: No response","INFO: Invalid command","INFO: Invalid checksum","PROG: Invalid response","PROG: Communication failed","FLASH: Init timeout","FLASH: Invalid command"]

class FITkit_Info:
    """Info page contains 264B and is located inside external FLASH at page 0
       Structure
         MCU [0 - 127]
           + 0      01 - programmed, 00 - unprogramed
           + 1-3    3B flash write counter
           + 4-19   MD5 digest of HEX file
           + 20-23  file modification timestamp
           + 24-27  programming timestamp
           + 28-127 Description (C-like string, up to 99 chars)
         FPGA BIN [128 - 255]
           + 0      01 - programmed, 00 - unprogramed
           + 1-3    3B flash write counter
           + 4-19   MD5 digest of BIN file
           + 20-23  file modification timestamp
           + 24-27  programming timestamp
           + 28-127 Description (C-like string, up to 99 chars)
         ID [256-263]
           + 0-7    string "FINFO v1"
    """
    def __init__(self, rawdata):
        self.data = rawdata
        id = struct.pack("8B",*self.data[256:264])
        self.version = 1
        if (id == "FINFO v1"):
            self.version = 1
        else:
            #unknown data (the content probably erased or corrupted)
            self.data = [0]*264

    def get_versionID(self):
        return struct.pack("8B",*self.data[256:264])

    def listtimestamp(self, data):
        """Convert 4 chars to timestamp"""
        if (len(data) != 4):
            raise Exception("Timestamp list must have 4 items")
        
        tst  = ((data[0] & 0xFF) << 24) + ((data[1] & 0xFF) << 16)
        tst += ((data[2] & 0xFF) <<  8) + (data[3] & 0xFF)
        return tst

    def timestamplist(self, tst):
        """Convert timestamp to 4 chars"""
        return ((tst >> 24) & 0xFF,(tst >> 16) & 0xFF,(tst >> 8) & 0xFF,tst & 0xFF)

    def get_hexInfo(self):
        hexdigest = "\0"*16
        hexdescr = ''
        mtimestamp = 0
        ftimestamp = 0
        cntr = 0
        if (self.data[0] == 0x01): #HEX is available
            #counter value
            cntr = (self.data[1] << 16) + (self.data[2] << 8) + self.data[3]

            #MD5 digest
            hexdigest = tuple(self.data[4:4+16])
            hexdigest = struct.pack("16B", *hexdigest)

            #modification timestamp
            mtimestamp = self.listtimestamp(self.data[20:24])

            #flashing timestamp
            ftimestamp = self.listtimestamp(self.data[24:28])

            #description
            for i in range(28,28+100):
                if (self.data[i] == 0x00):
                    break
                hexdescr += chr(self.data[i])
        return hexdigest, cntr, mtimestamp, ftimestamp, hexdescr

    def get_binInfo(self):
        bindigest = "\0"*16
        bindescr = ''
        mtimestamp = 0
        ftimestamp = 0
        cntr = 0
        if (self.data[128] == 0x01): #BIN je naprogramovan
            #counter value
            cntr = (self.data[128+1] << 16) + (self.data[128+2] << 8) + self.data[128+3]

            #MD5 digest
            bindigest = tuple(self.data[128+4:128+4+16])
            bindigest = struct.pack("16B", *bindigest)

            #modification timestamp
            mtimestamp = self.listtimestamp(self.data[128+20:128+24])

            #flashing timestamp
            ftimestamp = self.listtimestamp(self.data[128+24:128+28])

            #description
            for i in range(128+28,128+28+100):
                if (self.data[i] == 0x00):
                    break
                bindescr += chr(self.data[i])
        return bindigest, cntr, mtimestamp, ftimestamp, bindescr

    def ord_chck(ch):
        res = ord(ch)
        if (res > 255): return ord('?')
        return res
    
    def update_hexInfo(self, digest, mtimestamp, description):
        #digest
        self.data[0] = 0x01
        self.data[4:4+16] = struct.unpack("16B", digest)
        #increment the counter
        cntr = (self.data[1] << 16) + (self.data[2] << 8) + self.data[3]
        cntr += 1
        self.data[1] = (cntr >> 16) & 0x0FF
        self.data[2] = (cntr >> 8) & 0x0FF
        self.data[3] = (cntr >> 0) & 0x0FF
        #update timestamps
        self.data[20:24] = self.timestamplist(mtimestamp)
        self.data[24:28] = self.timestamplist(int(time.time())) #now
        #update description
        self.data[28:28+100] = [0x00] * 100
        ilen = min(len(description),99)
        try:
            for i in range(0,ilen):
                self.data[28+i] = ord_chck(description[i])
        except:
            return False
        return True

    def update_binInfo(self, digest, mtimestamp, description):
        #digest
        self.data[128] = 0x01
        self.data[128+4:128+4+16] = struct.unpack("16B", digest)
        #increment the counter
        cntr = (self.data[128+1] << 16) + (self.data[128+2] << 8) + self.data[128+3]
        cntr += 1
        self.data[128+1] = (cntr >> 16) & 0x0FF
        self.data[128+2] = (cntr >> 8) & 0x0FF
        self.data[128+3] = (cntr >> 0) & 0x0FF
        #update timestamps
        self.data[128+20:128+24] = self.timestamplist(mtimestamp)
        self.data[128+24:128+28] = self.timestamplist(int(time.time())) #now
        #update description
        self.data[128+28:128+28+100] = [0x00] * 100
        ilen = min(len(description),99)
        try:
            for i in range(0,ilen):
                self.data[128+28+i] = ord_chck(description[i])
        except:
            return False
        return True

    def get_rawdata(self):
        self.data[256:264] = struct.unpack("8B","FINFO v1")
        return self.data

class FITkitBSLException(Exception):
    pass 

class FITkit_BSL:
    """FITkit Bootstrap Loader functions.""" 
    def __init__(self, fread, fwrite):
        self.serial_read = fread
        self.serial_write = fwrite
        self.infopage = None

    def checkResult(self, result):
        if (result == BSLERROR_OK):
            return True

        raise FITkitBSLException(BSLERRORS[result-1])

        return False

    def actionInitialize(self):
        attempts = 10
        while (attempts > 0):
            attempts -= 1
            self.serial_write('\xF0\x0F')

            response = self.serial_read(1,100) #cekat max. 100ms
            if (not response):
                continue
            elif (ord(response) == 0xF0):
                return BSLERROR_OK
            else:
                return BSLERROR_INIT_RESPONSE

        if (attempts == 0):
            return BSLERROR_TIMEOUT

        return BSLERROR_OK

    def calculateChecksum(self, data):
        sum = 0
        for b in data:
            sum += b
        return (sum & 0xFF) ^ 0xFF

    def actionReadInfo(self):
        attempts = 5
        self.infopage = None
        while (attempts > 0):
            attempts -= 1
            cmd = self.serial_read(1)
            if (not cmd):
                continue

            if (ord(cmd) == 0xFA):
                self.infopage = list(struct.unpack("264B", self.serial_read(264))) #read data (264 bytes)
                chck = self.calculateChecksum(self.infopage) #calculate checksum of received data
                res = self.serial_read(1) #read checksum
                if (not res) or (ord(res) != chck):
                    return BSLERROR_INFO_CHECKSUM
                return BSLERROR_OK
            else:
                return BSLERROR_INFO_INVALIDCMD

        if (attempts == 0):
            return BSLERROR_TIMEOUT

    def actionWriteInfo(self, data):
        self.serial_write('\xFC') 
        attempts = 5
        while (attempts > 0):
            attempts -= 1
            cmd = self.serial_read(1)          
            if (not cmd):
                continue

            cmd = ord(cmd)
            if (cmd == 0xF4):
                #page initialized, send requested data
                chck = self.calculateChecksum(data)
                allzeroes = False
                for ch in data: 
                    if (ch != 0x00): 
                        zeroes = False
                        break
                
                #create packet
                if (not zeroes):
                    packet = struct.pack("BB264B", chck,  0x01, *data)
                else:
                    #opt: block is empty, it is not necessary to send data
                    packet = struct.pack("BB", chck,  0x00)
                
                #send packed
                self.serial_write(packet)
                attempts = 5
            elif (cmd == 0xF5): #Checksum error, try to send the packet again
                self.serial_write(packet)
            elif (cmd == 0xF7): #All the blocks were written
                return BSLERROR_OK
            else:
                return BSLERROR_FLASH_COMMAND

        return BSLERROR_TIMEOUT

    def actionProgramHEX(self, filename, statusCB=None, mcuerased=False):
        blocksize = 64
        maxblocksize = 2*blocksize

        #Load Intel HEX and create 64 or 128B data blocks
        hexfile = segutils.IntelHEX()
        hexfile.load(filename)
        hexdata = hexfile.convertToBlocks(blocksize=blocksize, maxblocksize=maxblocksize)

        attempts = 5
        block = 0
        while (attempts > 0) and (block < len(hexdata)):
            if (statusCB <> None): statusCB(None, 50*block//len(hexdata))
            datablock = hexdata[block]
            addr = datablock[0]

            #prepare content of data buffer
            data = [0xFF] * maxblocksize
            data[0:len(datablock[1])] = map(lambda x: ord(x), datablock[1])
            #checksum
            chck = self.calculateChecksum(data)
            #write both blocks?
            flags_writeboth = 0x0000
            if (len(datablock[1]) == maxblocksize): #zapis obou bloku
                flags_writeboth = 0x0001
            #send packet            
            packetCmd = 0xFA #vymaze FLASH pred prvnim zapisem
            if (mcuerased):
                packetCmd = 0xFB 
            packet = struct.pack("BBBB%dB" % (maxblocksize), packetCmd, addr >> 8, (addr & 0xC0) | flags_writeboth, chck, *data)
            self.serial_write(packet)

            #Check the response
            tries = 5
            while (tries > 0):
                tries -= 1
                resp = self.serial_read(1) #read answer
                if (not resp): #timeout, try again
                   continue  

                resp = ord(resp)
                tries = 1
                break

            if (tries == 0): #No response received
                return BSLERROR_TIMEOUT

            if (resp == 0xF1): #Packet was successfully processed
                attempts = 5    #send next packet (if any)
                block += 1 
            elif (resp == 0xF2): #Checksum error, try to send the packet again
                attempts -= 1 
            else:
                return BSLERROR_PROGRAM_RESPONSE

        if (attempts == 0):
            return BSLERROR_PROGRAM_FAIL

        return BSLERROR_OK

    def actionProgramBIN(self, filename, statusCB=None):
        file = open(filename,'rb')
        filesize = int((os.stat(filename)).st_size)
    
        if (filesize <= 208*264):
            self.serial_write("\xF4") 
        elif (filesize <= 805*264):
            self.serial_write("\xF5") 
        else:
            raise Exception("Invalid file %s" % filename)

        attempts = 10
        blkcnt = 1
        while (attempts > 0):
            attempts -= 1
            cmd = self.serial_read(1, 500)
            if (not cmd): #timeout, try again
                continue 
            cmd = ord(cmd)
            if (cmd == 0xF4): #Send content of the next page
                if (statusCB <> None): 
                    statusCB(None,min(50+50*blkcnt//(filesize/264),100))
                blkcnt += 1
                databf = file.read(264)
                databf = struct.unpack("%dB" % len(databf), databf)

                #prepare content of data buffer
                data = [0x00] * 264
                data[0:len(databf)] = databf

                chck = self.calculateChecksum(data)
                allzeroes = False
                for ch in data: 
                    if (ch != 0x00): 
                        zeroes = False
                        break
                
                #create packet
                if (not zeroes):
                    packet = struct.pack("BB264B", chck,  0x01, *data)
                else:
                    #opt: block is empty, it is not necessary to send data
                    packet = struct.pack("BB", chck,  0x00)

                #send packet
                self.serial_write(packet)
                attempts = 5
            elif (cmd == 0xF5): #Checksum error, try to send the packet again
                self.serial_write(packet)
            elif (cmd == 0xF6): #All the blocks were written
                file.close()
                return BSLERROR_OK
            else:
                file.close()
                return BSLERROR_FLASH_COMMAND

        file.close()
        return BSLERROR_FLASH_INIT

    def actionEnd(self):
        self.serial_write("\xFD") 
        return BSLERROR_OK

    def program(self, hexfilename, binfilename, mcuerased, force=False, statusCB=None):
        try:
            hexfile = open(hexfilename,'rb')
            hexfile_digest = hashlib.md5(hexfile.read()).digest()
            hexfile.close()
            hexfile_mtime = int((os.stat(hexfilename)).st_mtime)

            binfile = open(binfilename,'rb')
            binfile_digest = hashlib.md5(binfile.read()).digest()
            binfile.close()
            binfile_mtime = int((os.stat(binfilename)).st_mtime)
        except Exception, msg:
            raise Exception(u"Nelze otevřít soubor HEX/BIN")

        if (statusCB <> None): statusCB(u"Navazování spojení")
        result = self.actionInitialize()
        if (not self.checkResult(result)):
            return False

        if (statusCB <> None): statusCB(u"Čtení informací")
        result = self.actionReadInfo()
        if (not self.checkResult(result)):
            return
        
        fkinfo = FITkit_Info(self.infopage)
        #if (statusCB <> None): statusCB("Version: %s" % fkinfo.get_versionID())

        hexinfo_digest, hexinfo_cntr, hexinfo_mtime, hexinfo_ftime, hexinfo_descr = fkinfo.get_hexInfo()
        bininfo_digest, bininfo_cntr, bininfo_mtime, bininfo_ftime, bininfo_descr = fkinfo.get_binInfo()
        hexequal = (hexinfo_digest == hexfile_digest) and (hexinfo_mtime == hexfile_mtime)
        binequal = (bininfo_digest == binfile_digest) and (bininfo_mtime == binfile_mtime)

        #print "Hex:",hexinfo_cntr," ",hexinfo_descr
        #if (hexinfo_digest == hexfile_digest):
        #    print "     digest: equal"
        #try:
        #    print "     modified:",time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(hexinfo_mtime))
        #    print "     flashed:",time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(hexinfo_ftime))
        #except:
        #    print

        #print "BIN:",bininfo_cntr," ",bininfo_descr
        #if (bininfo_digest == binfile_digest):
        #    print "     digest: equal"
        #try:
        #    print "     modified:",time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(bininfo_mtime))
        #    print "     flashed:",time.strftime('%Y-%m-%d %H:%M:%S',time.localtime(bininfo_ftime))
        #except:
        #    print

        if (not hexequal) or (mcuerased) or (force):
            if (statusCB <> None): statusCB(u"Programování (MCU)")
            result = self.actionProgramHEX(hexfilename, statusCB=statusCB, mcuerased = mcuerased)
            if (not self.checkResult(result)):
                return False
            if (not fkinfo.update_hexInfo(hexfile_digest,hexfile_mtime, hexfilename)):
                if (statusCB <> None): 
                    statusCB("UPDATE ERROR: filename:%s" % (hexfilename))


        if (not binequal) or (force):
            if (statusCB <> None): statusCB(u"Programování (FPGA)")
            result = self.actionProgramBIN(binfilename, statusCB=statusCB)
            if (not self.checkResult(result)):
                return False
            if (not fkinfo.update_binInfo(binfile_digest,binfile_mtime, binfilename)):
                if (statusCB <> None): 
                    statusCB("UPDATE ERROR: filename:%s" % (binfilename))

        if (statusCB <> None): statusCB(u"Zápis informací")
        result = self.actionWriteInfo(fkinfo.get_rawdata())
        if (not self.checkResult(result)):
            return
       
        self.actionEnd()
        return True

