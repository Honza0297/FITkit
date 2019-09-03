# Find SWIG
find_package(SWIG REQUIRED)
if(SWIG_FOUND)
    # Build a swig module for python
    include(${SWIG_USE_FILE})

    # Set and create the output dir
    set(OUTPUT_LIBDIR ${CMAKE_BINARY_DIR}/python)
    make_directory(${OUTPUT_LIBDIR})
    set(LIBRARY_OUTPUT_PATH ${OUTPUT_LIBDIR})
    set(CMAKE_SWIG_OUTDIR ${OUTPUT_LIBDIR})

    # Set SWIG interface file properties
    set_source_files_properties(fitkit.i PROPERTIES CPLUSPLUS ON)
    set(CMAKE_SWIG_FLAGS "")

    # Unix
    if(${UNIX})
       set(CMAKE_SWIG_FLAGS "-D__UNIX -O")
    endif(${UNIX})

    # Windows
    if(${WIN32})
       set(CMAKE_SWIG_FLAGS "-D__WIN32 -O")
    endif(${WIN32})

	 # Includes
    include_directories(
        ${CMAKE_CURRENT_BINARY_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/../src)

    # Binding: Python
    find_package(PythonLibs)
    include_directories(${PYTHON_INCLUDE_PATH})
    if(NOT PYTHONLIBS_FOUND OR NOT PYTHON_INCLUDE_PATH)
        message(STATUS "Python not found, won't build Python binding")
        if(NOT PYTHON_INCLUDE_PATH)
            message(STATUS "Python.h not found, "
                           "please install Python development headers")
        endif(NOT PYTHON_INCLUDE_PATH)
    else(NOT PYTHONLIBS_FOUND OR NOT PYTHON_INCLUDE_PATH)

        # Python binding
        message(STATUS "Building binding: Python")

        # Add tests
        configure_file(test.py ${OUTPUT_LIBDIR}/test.py COPYONLY)

        # Targets
        swig_add_module(fitkit python fitkit.i)
        if(${CMAKE_BUILD_TYPE} STREQUAL Debug)
            swig_link_libraries(fitkit ${PYTHON_LIBRARIES} ${PYTHON_DEBUG_LIBRARIES} kitclient_static)
        else(${CMAKE_BUILD_TYPE} STREQUAL Debug)
            swig_link_libraries(fitkit ${PYTHON_LIBRARIES} kitclient_static)
        endif(${CMAKE_BUILD_TYPE} STREQUAL Debug)   

        # WIN32-python requires PYD extension
        if(${WIN32})
            set_target_properties(_fitkit PROPERTIES SUFFIX ".pyd")
        endif(${WIN32})

        # Find python SiteDir
        execute_process(
            COMMAND python -c "import sys;from distutils.sysconfig import get_python_lib;sys.stdout.write(get_python_lib())"
            OUTPUT_VARIABLE PYTHON_SITEDIR)

        get_filename_component(PYTHON_SITEDIR ${PYTHON_SITEDIR} ABSOLUTE)
        message(STATUS "Python site dir: ${PYTHON_SITEDIR}")

        # Fix for packaging absolute paths
        if("${CPACK_ROOTFIX}" STREQUAL "yes")
            file(RELATIVE_PATH PYTHON_SITEDIR ${CPACK_PACKAGING_INSTALL_PREFIX} ${PYTHON_SITEDIR})
        else("${CPACK_ROOTFIX}" STREQUAL "yes")
            file(RELATIVE_PATH PYTHON_SITEDIR ${CMAKE_INSTALL_PREFIX} ${PYTHON_SITEDIR})
        endif("${CPACK_ROOTFIX}" STREQUAL "yes")

        message("-- Installing python files to ${PYTHON_SITEDIR}")

        # Installs
        if(${UNIX})
            install(
                TARGETS _fitkit
                LIBRARY DESTINATION ${PYTHON_SITEDIR}
                COMPONENT python)

            install(
                FILES ${OUTPUT_LIBDIR}/fitkit.py
                DESTINATION ${PYTHON_SITEDIR}
                COMPONENT python)
        endif(${UNIX})
        if(${WIN32})
            install(
                TARGETS _fitkit
                LIBRARY DESTINATION ${PYTHON_SITEDIR}
                COMPONENT python)

            install(
                FILES ${OUTPUT_LIBDIR}/fitkit.py
                DESTINATION ${PYTHON_SITEDIR}
                COMPONENT python)
        endif(${WIN32})

        # Components
        set(CPACK_COMPONENTS_ALL ${CPACK_COMPONENTS_ALL} python pytest PARENT_SCOPE)
        set(CPACK_COMPONENT_PYTHON_DISPLAY_NAME "Python binding" PARENT_SCOPE)
        set(CPACK_COMPONENT_PYTHON_DESCRIPTION "Python binding written in SWIG")
        set(CPACK_COMPONENT_PYTHON_GROUP "Bindings" PARENT_SCOPE)
        if(${UNIX})
            set(CPACK_COMPONENT_PYTEST_DEPENDS python PARENT_SCOPE)
        endif(${UNIX})

    endif(NOT PYTHONLIBS_FOUND OR NOT PYTHON_INCLUDE_PATH)
else(SWIG_FOUND)
    message(STATUS "Swig not found, won't build language bindings")
endif(SWIG_FOUND)

include(${CMAKE_BINARY_DIR}/customize.cmake OPTIONAL)
include(${PROJECT_BINARY_DIR}/customize.cmake OPTIONAL)

