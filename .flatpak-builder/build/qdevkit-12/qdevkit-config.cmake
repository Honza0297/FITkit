# Simple module export for CMake projects
# Needed variables:
# * PROJECT_NAME
# * MAJOR_VERSION
# * MINOR_VERSION
# * PATCH_VERSION

# Get uppercase
string(TOUPPER qdevkit qdevkit_u)
string(TOLOWER qdevkit qdevkit_lc)

# Build version string
set(vs_qdevkit "")
set(vs_m_qdevkit 1)
set(vs_n_qdevkit 2)
set(vs_p_qdevkit 7)

# Default values
if(NOT vs_m_qdevkit)
    set(vs_m_qdevkit 0)
endif(NOT vs_m_qdevkit)
if(NOT vs_n_qdevkit)
    set(vs_n_qdevkit 0)
endif(NOT vs_n_qdevkit)

# Complete version string
set(vs_qdevkit ${vs_m_qdevkit}.${vs_n_qdevkit})
if(vs_p_qdevkit)
    set(vs_qdevkit ${vs_qdevkit}.${vs_p_qdevkit})
endif(vs_p_qdevkit)

# Set project version
set(${prj_name_u}_vs_qdevkit ${vs_qdevkit})

# Include library
set(soname_qdevkitui ${qdevkit_lc}ui)
set(soname_qdevkit ${qdevkit_lc}core)
string(REGEX REPLACE "^lib" "" soname_qdevkitui ${soname_qdevkitui})
string(REGEX REPLACE "^lib" "" soname_qdevkit ${soname_qdevkit})
find_library(so_qdevkitui NAMES ${soname_qdevkitui})
find_library(so_qdevkit NAMES ${soname_qdevkit})

# Set include path
get_filename_component(qdevkit_bpath ${so_qdevkit} PATH)
get_filename_component(
    qdevkit_path
    ${qdevkit_bpath}/../include
    ABSOLUTE)

# Export libraries
set(${qdevkit_u}_LIBRARIES ${so_qdevkit})
set(${qdevkit_u}UI_LIBRARIES ${so_qdevkitui})

# Export include directories
set(${qdevkit_u}_INCLUDE_PATH
    ${qdevkit_path})
