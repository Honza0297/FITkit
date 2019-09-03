'''
 ***************************************************************************
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
 ***************************************************************************
'''

import sys
import string

class IntelHEX:
    def __init__(self):
        self.segments = []

    def load(self, file):
        """Load data from file in Intel-HEX format"""
        self.segments = []
        segmentdata = []
        currentAddr = 0
        startAddr   = 0
        lines = open(file).readlines()
        for l in lines:
            if l[0] != ':': raise Exception("File Format Error\n")
            l = l.strip()   #fix CR-LF issues...
            length  = int(l[1:3],16)
            address = int(l[3:7],16)
            type    = int(l[7:9],16)
            check   = int(l[-2:],16)
            if type == 0x00:
                if currentAddr != address:
                    if segmentdata:
                        self.segments.append([startAddr, segmentdata])
                    startAddr = currentAddr = address
                    segmentdata = []
                for i in range(length):
                    segmentdata.append( chr(int(l[9+2*i:11+2*i],16)) )
                currentAddr = length + currentAddr
            elif type in (0x01, 0x02, 0x03, 0x04, 0x05):
                pass
            else:
                sys.stderr.write("Ignored unknown field (type 0x%02x) in ihex file.\n" % type)
    
        if segmentdata:
           self.segments.append([startAddr, segmentdata])

        return self.segments

    def convertToBlocks(self, blocksize = 64, maxblocksize = 2*64):
        """Prekonvertuje segmenty tak, aby vznikly segmenty velikosti BLOCKSIZE bytu
        pokud nasleduje vice bloku bezprostredne zasebou, spoji je az dosahnou velikosti MAXBLOCKSIZE
        """
        if (maxblocksize % blocksize > 0):
            raise Exception("maxblocksize musi byt nasobek blocksize")
        
        usedblocks = []
        usedblocks_len = []
    
        #serazeni segmentu podle adresy (pro optimalizaci)
        self.segments.sort(lambda a,b: a[0]-b[0])
    
        #enumerace alokovanych bloku zarovnanych na BLOCKSIZE
        for i in range(0,len(self.segments)):
            saddr = self.segments[i][0]
            lenseg = len(self.segments[i][1])
            smaxaddr = saddr+lenseg-1
            #print "segment: %X-%X" % (saddr, smaxaddr)
            baddr,bcnt = self.block_bounds(saddr, lenseg, blocksize)
            #print "         %X-%X (%d bloku)" % (baddr, baddr+bcnt*blocksize-1, bcnt)
            for i in range(baddr, baddr+bcnt*blocksize, blocksize):
                #print "%X" % i
                if not (i in usedblocks):
                    usedblocks.append(i)
                    usedblocks_len.append(1)
    
        #serazeni pouzitych bloku dle adresy a spojovani sousednich bloku
        usedblocks.sort()
        b1 = 0
        lb = len(usedblocks)
        maxlen = maxblocksize / blocksize
        while (b1 < lb) and (maxlen > 1):
            if (usedblocks_len[b1] > 0):
                baddr = usedblocks[b1]
                #bmax  = baddr + usedblocks_len[b1]*blocksize
                #print "1:",baddr,"-",baddr + usedblocks_len[b1]*blocksize, b1
                b2 = b1 + 1
                while (b2 < lb):
                    if (usedblocks_len[b2] > 0):
                        #print "   2:", usedblocks[b2], b2, lb
                        bmax  = baddr + usedblocks_len[b1]*blocksize
                        if (usedblocks[b2] == bmax) and (usedblocks_len[b1] < maxlen):
                            #print "navazuje"
                            usedblocks_len[b2] = 0
                            usedblocks_len[b1] += 1
                        else:
                            break
                    b2 += 1
            b1 += 1
    
        #vytvoreni novych segmentu a jejich naplneni daty
        self.blocks = []
        for baddr,blen in zip(usedblocks,usedblocks_len):
            if (blen == 0): continue
            bmaxaddr = baddr + blen*blocksize - 1
            #print "%X-%X" % (baddr, bmaxaddr)
            bdata = None
            for i in range(0,len(self.segments)):
                saddr = self.segments[i][0]
                lenseg = len(self.segments[i][1])
                smaxaddr = saddr+lenseg-1
                if (saddr > bmaxaddr): break
                if (smaxaddr < baddr): continue
                
                #segment zasahuje do bloku [baddr - bmaxaddr]
                sofs = max(0, baddr-saddr)
                bofs = max(0, saddr-baddr)
                seofs = min(bmaxaddr,smaxaddr) - saddr
                beofs = bofs + (seofs-sofs)
    
                if (bdata == None):
                    bdata = ['\xFF'] * (blen*blocksize)
                bdata[bofs:beofs+1] = self.segments[i][1][sofs:seofs+1]
            self.blocks.append([baddr, string.join(bdata,'')])

        return self.blocks

    def block_bounds(self, addr, len, blocksize):
        ad,am = divmod(addr, blocksize)
        if (am > 0): # o co se posunula vpred adresa, o to se musi zvetsit velikost dat
            len += am
    
        ld,lm = divmod(len, blocksize)
        if (lm > 0): 
            ld += 1
        #print "%X-%X bloku:%d" % (ad*blocksize,(ad+ld)*blocksize,ld)
        return (ad*blocksize, ld)


if (__name__ == '__main__'):
    hexfile = IntelHEX()
    hexfile.segments = [(0x4084,'MIX'),(0xFFE0,'tuvwxyz'),(0x4030,'efghijk........l.........................mn'),(0x4120,'op.........................qrs'),(0x4010,'abcd')]
    #hexfile.load('output.hex')
    result = hexfile.convertToBlocks()
    for a,d in result:
        print "addr:0x%04X len:%d" % (a, len(d))

