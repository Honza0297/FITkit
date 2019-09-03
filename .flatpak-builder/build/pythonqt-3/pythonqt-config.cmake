# Simple module export for CMake projects
# Needed variables:
# * PROJECT_NAME
# * MAJOR_VERSION
# * MINOR_VERSION
# * PATCH_VERSION

# Get uppercase
string(TOUPPER PythonQt PythonQt_u)
string(TOLOWER PythonQt PythonQt_lc)

# Build version string
set(vs_PythonQt "")
set(vs_m_PythonQt 2)
set(vs_n_PythonQt 1)
set(vs_p_PythonQt 0)

# Default values
if(NOT vs_m_PythonQt)
    set(vs_m_PythonQt 0)
endif(NOT vs_m_PythonQt)
if(NOT vs_n_PythonQt)
    set(vs_n_PythonQt 0)
endif(NOT vs_n_PythonQt)

# Complete version string
set(vs_PythonQt ${vs_m_PythonQt}.${vs_n_PythonQt})
if(vs_p_PythonQt)
    set(vs_PythonQt ${vs_PythonQt}.${vs_p_PythonQt})
endif(vs_p_PythonQt)

# Set project version
set(${prj_name_u}_vs_PythonQt ${vs_PythonQt})

# Include library
set(soname_PythonQt PythonQt)
string(REGEX REPLACE "^lib" "" soname_PythonQt ${soname_PythonQt})
find_library(so_PythonQt NAMES ${soname_PythonQt})

# Set include path
get_filename_component(PythonQt_bpath ${so_PythonQt} PATH)
get_filename_component(
    PythonQt_path
    ${PythonQt_bpath}/../include
    ABSOLUTE)
get_filename_component(
    PythonQt_ppath
    ${PythonQt_path}/../include/PythonQt
    ABSOLUTE)

# Export libraries
set(${PythonQt_u}_LIBRARIES
    ${so_PythonQt})

# Export include directories
set(${PythonQt_u}_INCLUDE_PATH
    ${PythonQt_path}
    ${PythonQt_ppath})
