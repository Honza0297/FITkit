if(QT4_FOUND)

    # Prefix
    set(urpc_path ${CONTRIB_DIR}/liburpc_copy)

    # Sources
    set(liburpc_cpp
        ${urpc_path}/common.cpp
        ${urpc_path}/protobase.cpp
        ${urpc_path}/protocol.cpp
        ${urpc_path}/socket.cpp
        ${urpc_path}/clientsocket.cpp
        ${urpc_path}/serversocket.cpp
        ${urpc_path}/cmdflags.cpp)

    set(liburpc_h
        ${urpc_path}/liburpc_export.h
        ${urpc_path}/pstdint.h
        ${urpc_path}/common.h
        ${urpc_path}/protobase.h
        ${urpc_path}/protocol.h
        ${urpc_path}/protocol.hpp
        ${urpc_path}/socket.hpp
        ${urpc_path}/clientsocket.hpp
        ${urpc_path}/serversocket.hpp
        ${urpc_path}/cmdflags.hpp)

    # Export sources
    add_definitions("-DURPC_DO_EXPORT")
    mark_as_advanced(liburpc_cpp)
    mark_as_advanced(liburpc_h)
    message(STATUS "Qt4 found:  building liburpc")

    # Install sources
    install(FILES ${liburpc_h}
            DESTINATION include/${PROJECT_NAME})
else(QT4_FOUND)
    message(STATUS "Qt4 not found: disabling liburpc")
endif(QT4_FOUND)
