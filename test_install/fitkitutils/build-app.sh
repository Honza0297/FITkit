#!/bin/bash
# Build and install an app or a set of apps.

# Preferences
BUILD_TYPE="Debug"
INSTALL_PREFIX="/usr/local"
MAKEOPTS="-j3"
SU_CMD="sudo" # sudo || su -c

# Preconfigure
base=$(pwd)
bdir="${base}/builds";
apps="libkitclient pythonqt fcmake fkflash qdevkit qdevkit-plugins";
applist=$*
do_clean=1


# Help
function exit_help() {
   echo "$0 app1 app2 ..."
   echo "Build and install an app or a set of apps."
   echo "  Parameters: "
   echo "     --fast  Do not make clean."
   echo
   echo "  Default apps: ${apps}"
   echo "  Build directory: ${bdir}"
   echo "  Build type: ${BUILD_TYPE}"
   echo "  Install prefix: ${INSTALL_PREFIX}"
   echo "  Make options: ${MAKEOPTS}"
   echo "  Sudo backends: ${SU_CMD}"
   exit 1
}

# Exit reporting
function exit_report()
{
   app="$1"
   stage="$2"
   echo "-- Application: $app ($stage)"
   echo "-- There was an error, exitting."
   exit 1
}

# Check for help
list=()
for arg in $applist;
do
   if [[ "${arg}" == "-h" || "${arg}" == "--help" ]];
   then
      exit_help
   else
   if [[ "${arg}" == "--fast" || "${arg}" == "-f" ]];
   then
      do_clean=0;
   else
      list="$list $arg"
   fi
   fi
done
applist=$list;

# Run builds
[[ -z "$applist" ]] && applist=$apps;
echo "-- List of apps to build: $applist"
echo "-- Will build: $applist";
for i in $applist;
do
app=$i;
appsrc="${base}/$app";
appbin="${bdir}/$app";

# Check directories
[[ ! -e "${appbin}" ]] && mkdir -p "${appbin}";
[[ ! -e "${appsrc}" ]] && echo "-- Not found: $app" && exit 1

# Refresh build & make
echo "-- Building: $app";
echo "-- Package:  $pkg";
echo "-- Refreshing CMake";
cd "${appbin}" &>/dev/null || (echo "-- Not found: $appbin" && exit 1)
cmake "${appsrc}" -DCMAKE_BUILD_TYPE=${BUILD_TYPE} -DPACKAGE=$pkg -DCMAKE_INSTALL_PREFIX="${INSTALL_PREFIX}" || exit_report "$app" "1/5 - CMake"
[[ "${do_clean}" == 1 ]] && make clean 
make ${MAKEOPTS} || exit_report "$app" "3/5 - building"
${SU_CMD} make uninstall || echo "-- Uninstall failed."
${SU_CMD} make install || exit_report "$app" "4/5 - installing"

done
