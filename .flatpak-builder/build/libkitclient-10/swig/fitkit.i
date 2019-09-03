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

/* Module interface */
%module(directors="1") fitkit
%{
   #include "libkitclient_export.h"
   #include "device.h"
   #include "devicemgr.h"
   #include "deviceutils.h"
%}

%feature("autodoc", "1");
%include "std_string.i"
%include "std_vector.i"
%include "std_list.i"
%include "typemaps.i"

/* Exception handler */
%include "exception.i"
%exception
{
   try {
      $action
   }
   catch (const std::exception& e)  {
      SWIG_exception(SWIG_RuntimeError, e.what());
   }
}

/* Templates */
%template(DeviceList) std::vector<Device*>;
%ignore std::vector<DeviceMatch>::resize(size_type); 
%ignore std::vector<DeviceMatch>::vector(size_type); 
%template(MatchList)  std::vector<DeviceMatch>;
%template(BackendList) std::vector<DeviceBackend*>;

/* Operators */
%rename(__getitem__) Device::operator[];

/* Manager */
%feature("director") DeviceMgr;
%rename(__getitem__) DeviceMgr::operator[];
%extend DeviceMgr {
  %rename (__getitem__) operator[];
  %typemap(out) Device*
  {
     if (($1) == 0) {   //NULL Device - returns None
        $result = Py_None;
     } else {
        $result = SWIG_NewPointerObj(SWIG_as_voidptr($1), SWIGTYPE_p_Device, 0 |  0 );
     }
  }
}

%define SWIG_BEFORE_IOChannel_read
   /* timeout default value - blocking read() */
   %typemap(default) int timeout 
   {
      $1 = -1;
   }
   
   /* automatic buffer allocation */
   %typemap(in) (char * dest, int count) 
   {
      if (!PyInt_Check($input)) {
          PyErr_SetString(PyExc_ValueError, "Expecting an integer");
          return NULL;
      }
      $2 = PyInt_AsLong($input);
      if ($2 <= 0) {
          PyErr_SetString(PyExc_ValueError, "Positive integer expected");
          return NULL;
      }
      $1 = (char *) malloc($2);
   }
   
   /* result generation */
   %typemap(argout,noblock=1) (char * dest, int count) 
   {
      Py_XDECREF($result); //zahodit vysledek
      if (result < 0) { //cteni zruseno pomoci terminateRead, nebo nastala jina chyba, vyvolat vyjimku
          /*TODO: lepsi predavani cisla chyby */
          char errstr[64];
          sprintf(errstr,"Read Error: %d", result);
          PyErr_SetString(PyExc_RuntimeError, errstr);
          return NULL;
      } else if (result == 0) {   //cteni neuspesne, vratime None
          $result = Py_None;
      } else { //cteni uspesne, vratime string (result = readed bytes)
          $result = PyUnicode_FromStringAndSize($1, result);
      }
      free($1);
   }
   
   /* Allow threads to run while doing read() */
   %exception read 
   %{
     Py_BEGIN_ALLOW_THREADS
     try {
         $function
     }
     catch (const std::exception& e)  {
        SWIG_exception(SWIG_RuntimeError, e.what());
     }
     Py_END_ALLOW_THREADS
   %}
%enddef

%define SWIG_AFTER_IOChannel_read
   %typemap(default) int timeout;
   %typemap(in) (char * dest, int count);
   %typemap(argout) (char * dest, int count);
%enddef

%define SWIG_BEFORE_IOChannel_write
   %typemap(default,noblock=1) const int count { 
      $1 = -1; 
   } 
   %typemap(in,noblock=1) const char* src 
     (int res, char *buf = 0, size_t size = 0, int alloc = 0) 
   { 
     res = SWIG_AsCharPtrAndSize($input, &buf, &size, &alloc);
     if (!SWIG_IsOK(res)) {
       %argument_fail(res, "(char *src, int count)", $symname, $argnum);
     }
     $1 = ($1_ltype) buf;
   }
   %typemap(check,noblock=1) const int count {
      //printf("WRITE: count:%d string length:%d\n",$1,size2);
      if (($1 == 0) || (size2 == 0) || ($1 > ((int)(size2)-1))) {
          SWIG_exception(SWIG_ValueError,"Not enough chars to write");
      }
      if ($1 < 0) {
         $1 = size2 - 1;
      }
   }
   %typemap(freearg,match="in",noblock=1) const char *src 
   {
     if (alloc$argnum == SWIG_NEWOBJ) %delete_array(buf$argnum);
   }
%enddef

%define SWIG_AFTER_IOChannel_write
   %typemap(default) const int count;
   %typemap(in) const char* src;
   %typemap(check) const int count;
%enddef

%include "device.h"
%include "devicemgr.h"
%include "deviceutils.h"

/* Pridame python kod */
%pythoncode %{
class pyDeviceMgr(DeviceMgr):

    def __init__(self, debugMessages=True):
        """Simple DeviceMgr"""
        self.debugMessages = debugMessages
        DeviceMgr.__init__(self)

    def deviceLost(self, deviceId):
        if (self.debugMessages):
            print "%s: Device %d acquired" % (self.__class__.__name__, deviceId)

    def deviceAcquired(self, deviceId):
        if (self.debugMessages):
            print "%s: Device %d acquired" % (self.__class__.__name__, deviceId)

    def deviceReleased(self, deviceId):
        if (self.debugMessages):
            print "%s: Device %d released" % (self.__class__.__name__, deviceId)

    def deviceFound(self, deviceId):
        if (self.debugMessages):
            print "%s: Device %d found" % (self.__class__.__name__, deviceId)

"""Compatibility device manager."""
class FitKitMgr (pyDeviceMgr):

    def __init__(self, vidpidpairs=[], debugMessages=True):
        """Simple DeviceMgr"""
        pyDeviceMgr.__init__(self, debugMessages)
        if not vidpidpairs: return
        for vid_pid in vidpidpairs:
            assert len(vid_pid) == 2 and (isinstance(vid_pid, list) or isinstance(vid_pid, tuple))
            for b in self.backends():
                b.addMatch(*vid_pid)

%}
