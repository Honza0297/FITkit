if(QT4_FOUND)
    # Update sources
    set(libkitclient_cpp
        ${libkitclient_cpp}
        qtapi/qtapi_device.cpp
        qtapi/qtapi_iochannel.cpp)

    # Update headers
    set(libkitclient_h
        ${libkitclient_h}
        qtapi/qtapi_device.h
        qtapi/qtapi_iochannel.h
        qtapi/qtapi)
    message(STATUS "Qt4 found: building Qt APIs")
else(QT4_FOUND)
    message(STATUS "Qt4 not found: disabling Qt APIs")
endif(QT4_FOUND)
