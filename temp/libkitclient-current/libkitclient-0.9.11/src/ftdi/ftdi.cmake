# Prerequisites
if(${UNIX})
    find_library(LIBFTDI NAMES ftdi1 ftdi libftdi libftdi1)
    if(NOT EXISTS ${LIBFTDI})
        message(FATAL_ERROR "libftdi not found, please install libftdi-dev")
    endif(NOT EXISTS ${LIBFTDI})
endif(${UNIX})

# Update sources
set(libkitclient_cpp
    ${libkitclient_cpp}
    ftdi/ftdibackend.cpp
    ftdi/ftdidevice.cpp)

# Update headers
set(libkitclient_h
    ${libkitclient_h}
    ftdi/ftdibackend.h
    ftdi/ftdidevice.h
    ftdi/ftdi)

