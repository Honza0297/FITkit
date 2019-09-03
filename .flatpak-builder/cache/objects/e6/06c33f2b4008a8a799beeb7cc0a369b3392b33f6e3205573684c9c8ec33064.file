# Simple module export for CMake projects
# Needed variables:
# * PROJECT_NAME
# * MAJOR_VERSION
# * MINOR_VERSION
# * PATCH_VERSION

# Get uppercase
string(TOUPPER fcmake fcmake_u)
string(TOLOWER fcmake fcmake_lc)

# Build version string
set(vs_fcmake "")
set(vs_m_fcmake 0)
set(vs_n_fcmake 4)
set(vs_p_fcmake 2)

# Default values
if(NOT vs_m_fcmake)
    set(vs_m_fcmake 0)
endif(NOT vs_m_fcmake)
if(NOT vs_n_fcmake)
    set(vs_n_fcmake 0)
endif(NOT vs_n_fcmake)

# Complete version string
set(vs_fcmake ${vs_m_fcmake}.${vs_n_fcmake})
if(vs_p_fcmake)
    set(vs_fcmake ${vs_fcmake}.${vs_p_fcmake})
endif(vs_p_fcmake)

# Set project version
set(${prj_name_u}_vs_fcmake ${vs_fcmake})

# Include library
set(soname_fcmake ${fcmake_lc}core)
string(REGEX REPLACE "^lib" "" soname_fcmake ${soname_fcmake})
find_library(so_fcmake NAMES ${soname_fcmake})

# Set include path
get_filename_component(fcmake_bpath ${so_fcmake} PATH)
get_filename_component(
    fcmake_path
    ${fcmake_bpath}/../include
    ABSOLUTE)
get_filename_component(
    fcmake_ppath
    ${fcmake_path}/../include/fcmake
    ABSOLUTE)

# Export libraries
set(${fcmake_u}_LIBRARIES ${so_fcmake})

# Export include directories
set(${fcmake_u}_INCLUDE_PATH
    ${fcmake_path}
    ${fcmake_ppath})

