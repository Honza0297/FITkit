from memory import Memory, Segment

class FKMemory(Memory):

    def loadTITextFromString(self, sdata):
        """load data from a string in TI-Text format"""
        startAddr   = 0
        segmentdata = []
        #Convert data for MSP430, TXT-File is parsed line by line
        for line in sdata.splitlines():       #Read one line
            #print ">",line,"<"
            if not line: break #EOF
            l = line.strip()
            if l[0] == 'q': break
            elif l[0] == '@':        #if @ => new address => send frame and set new addr.
                #create a new segment
                if segmentdata:
                    self.segments.append( Segment(startAddr, ''.join(segmentdata)) )
                startAddr = int(l[1:],16)
                segmentdata = []
            else:
                for i in l.split():
                    try:
                        segmentdata.append(chr(int(i,16)))
                    except ValueError, e:
                        raise FileFormatError('File is no valid TI-Text (%s)' % e)
        if segmentdata:
            self.segments.append( Segment(startAddr, ''.join(segmentdata)) )
