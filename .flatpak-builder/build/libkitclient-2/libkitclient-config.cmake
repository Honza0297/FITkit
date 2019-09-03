# Simple module export for CMake projects
# Needed variables:
# * PROJECT_NAME
# * MAJOR_VERSION
# * MINOR_VERSION
# * PATCH_VERSION

# Get uppercase
string(TOUPPER libkitclient libkitclient_u)
string(TOLOWER libkitclient libkitclient_lc)

# Build version string
set(vs_libkitclient "")
set(vs_m_libkitclient 0)
set(vs_n_libkitclient 9)
set(vs_p_libkitclient 11)

# Default values
if(NOT vs_m_libkitclient)
    set(vs_m_libkitclient 0)
endif(NOT vs_m_libkitclient)
if(NOT vs_n_libkitclient)
    set(vs_n_libkitclient 0)
endif(NOT vs_n_libkitclient)

# Complete version string
set(vs_libkitclient ${vs_m_libkitclient}.${vs_n_libkitclient})
if(vs_p_libkitclient)
    set(vs_libkitclient ${vs_libkitclient}.${vs_p_libkitclient})
endif(vs_p_libkitclient)

# Set project version
set(${prj_name_u}_vs_libkitclient ${vs_libkitclient})

# Include library
set(soname_FTDI ftdi)
set(soname_libkitclient ${libkitclient_lc})
string(REGEX REPLACE "^lib" "" soname_libkitclient ${soname_libkitclient})
find_library(so_libkitclient NAMES ${soname_libkitclient})
find_library(so_FTDI NAMES ${soname_FTDI})

# Set include path
get_filename_component(libkitclient_bpath ${so_libkitclient} PATH)
get_filename_component(
    libkitclient_path
    ${libkitclient_bpath}/../include
    ABSOLUTE)
get_filename_component(
    libkitclient_ppath
    ${libkitclient_path}/../include/libkitclient
    ABSOLUTE)

# Export libraries
set(${libkitclient_u}_FTDI_LIBRARIES ${so_FTDI})  
set(${libkitclient_u}_LIBRARIES ${so_libkitclient})

# Export include directories
set(${libkitclient_u}_INCLUDE_PATH
    ${libkitclient_path}
    ${libkitclient_ppath})

