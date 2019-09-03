if(QT4_FOUND)
    # Update sources
    set(libkitclient_cpp
        ${libkitclient_cpp}
        ip/ipbackend.cpp
        ip/ipdevice.cpp
        ip/ipservice.cpp
        ip/ipdiscovery.cpp
        ${liburpc_cpp})

    # Update headers
    set(libkitclient_h
        ${libkitclient_h}
        ip/ipbackend.h
        ip/ipdevice.h
        ip/ipservice.h
        ip/ipdiscovery.h
        ip/ip
        ${liburpc_h})
    message(STATUS "Qt4 found: building IP backend")
else(QT4_FOUND)
    message(STATUS "Qt4 not found: disabling IP backend")
endif(QT4_FOUND)
