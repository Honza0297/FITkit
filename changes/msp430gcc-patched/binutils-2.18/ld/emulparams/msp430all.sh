#!/bin/sh

# This called by genscripts_extra.sh

MSP430_NAME=${EMULATION_NAME}

SCRIPT_NAME=elf32msp430
TEMPLATE_NAME=generic
EXTRA_EM_FILE=genelf
OUTPUT_FORMAT="elf32-msp430"
MACHINE=
MAXPAGESIZE=1
EMBEDDED=yes

if [ "${MSP430_NAME}" = "msp430x110" ] ; then
ARCH=msp:11
ROM_START=0xfc00
ROM_SIZE=0x3e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x1101" ] ; then
ARCH=msp:110
ROM_START=0xfc00
ROM_SIZE=0x3e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x1111" ] ; then
ARCH=msp:110
ROM_START=0xf800
ROM_SIZE=0x07e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x112" ] ; then
ARCH=msp:11
ROM_START=0xf000
ROM_SIZE=0xfe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x1121" || "${MSP430_NAME}" = "msp430x1122" ]] ; then
ARCH=msp:110
ROM_START=0xf000
ROM_SIZE=0x0fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x1132" ] ; then
ARCH=msp:110
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x122" || "${MSP430_NAME}" = "msp430x1222" ]] ; then
ARCH=msp:12
ROM_START=0xf000
ROM_SIZE=0xfe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x123" || "${MSP430_NAME}" = "msp430x1232" ]] ; then
ARCH=msp:12
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x133" || "${MSP430_NAME}" = "msp430x1331" ]] ; then
ARCH=msp:13
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x135" || "${MSP430_NAME}" = "msp430x1351" ]] ; then
ARCH=msp:13
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x147" ||  "${MSP430_NAME}" = "msp430x1471" ]] ; then
ARCH=msp:14
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x148" || "${MSP430_NAME}" = "msp430x1481" ]] ; then
ARCH=msp:14
ROM_START=0x4000
ROM_SIZE=0xbfe0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x149" || "${MSP430_NAME}" = "msp430x1491" ]] ; then
ARCH=msp:14
ROM_START=0x1100
ROM_SIZE=0xeee0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x155" ] ; then
ARCH=msp:15
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x156" ] ; then
ARCH=msp:15
ROM_START=0xa000
ROM_SIZE=0x5fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x157" ] ; then
ARCH=msp:15
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x167" ] ; then
ARCH=msp:16
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x168" ] ; then
ARCH=msp:16
ROM_START=0x4000
ROM_SIZE=0xbfe0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x169" ] ; then
ARCH=msp:16
ROM_START=0x1100
ROM_SIZE=0xeee0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x1610" ] ; then
ARCH=msp:16
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x1100
RAM_SIZE=0x1400
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x1611" ] ; then
ARCH=msp:16
ROM_START=0x4000
ROM_SIZE=0xbfe0
RAM_START=0x1100
RAM_SIZE=0x2800
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x1612" ] ; then
ARCH=msp:16
ROM_START=0x2500
ROM_SIZE=0xdae0
RAM_START=0x1100
RAM_SIZE=0x1400
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2001" || "${MSP430_NAME}" = "msp430x2002" || "${MSP430_NAME}" = "msp430x2003" ]] ; then
ARCH=msp:20
ROM_START=0xFC00
ROM_SIZE=0x03e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2011" || "${MSP430_NAME}" = "msp430x2012" || "${MSP430_NAME}" = "msp430x2013" ]] ; then
ARCH=msp:20
ROM_START=0xF800
ROM_SIZE=0x07e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x2101" ] ; then
ARCH=msp:21
ROM_START=0xFC00
ROM_SIZE=0x03e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2111" || "${MSP430_NAME}" = "msp430x2112" ]] ; then
ARCH=msp:21
ROM_START=0xF800
ROM_SIZE=0x07e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2121" || "${MSP430_NAME}" = "msp430x2122" ]] ; then
ARCH=msp:21
ROM_START=0xf000
ROM_SIZE=0x0fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2131" || "${MSP430_NAME}" = "msp430x2132" ]] ; then
ARCH=msp:21
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2232" || "${MSP430_NAME}" = "msp430x2234" ]] ; then
ARCH=msp:22
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2252" || "${MSP430_NAME}" = "msp430x2254" ]] ; then
ARCH=msp:22
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2272" || "${MSP430_NAME}" = "msp430x2274" ]] ; then
ARCH=msp:22
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x233" ] ; then
ARCH=msp:24
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=0x0400
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x235" ] ; then
ARCH=msp:24
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x2330" ] ; then
ARCH=msp:23
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=0x0400
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x2350" ] ; then
ARCH=msp:23
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x2370" ] ; then
ARCH=msp:23
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x247" || "${MSP430_NAME}" = "msp430x2471" ]] ; then
ARCH=msp:24
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x248" || "${MSP430_NAME}" = "msp430x2481" ]] ; then
ARCH=msp:24
ROM_START=0x4000
ROM_SIZE=0xbfe0
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x249" || "${MSP430_NAME}" = "msp430x2491" ]] ; then
ARCH=msp:24
ROM_START=0x1100
ROM_SIZE=0xeee0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x2410" ] ; then
ARCH=msp:24
ROM_START=0x2100
ROM_SIZE=0xdee0
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x2416" || "${MSP430_NAME}" = "msp430x2616" ]] ; then
if [ "${MSP430_NAME}" = "msp430x2416" ] ; then
ARCH=msp:241
else
ARCH=msp:26
fi
ROM_START=0x2100
ROM_SIZE=0x16f00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x2417" || "${MSP430_NAME}" = "msp430x2617" ]] ; then
if [ "${MSP430_NAME}" = "msp430x2417" ] ; then
ARCH=msp:241
else
ARCH=msp:26
fi
ROM_START=0x3100
ROM_SIZE=0x16f00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=8192
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x2418" || "${MSP430_NAME}" = "msp430x2618" ]] ; then
if [ "${MSP430_NAME}" = "msp430x2418" ] ; then
ARCH=msp:241
else
ARCH=msp:26
fi
ROM_START=0x3100
ROM_SIZE=0x1cf00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=8192
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x2419" || "${MSP430_NAME}" = "msp430x2619" ]] ; then
if [ "${MSP430_NAME}" = "msp430x2419" ] ; then
ARCH=msp:241
else
ARCH=msp:26
fi
ROM_START=0x2100
ROM_SIZE=0x1df00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffc0
fi

if [ "${MSP430_NAME}" = "msp430x311" ] ; then
ARCH=msp:31
SCRIPT_NAME=elf32msp430_3
ROM_START=0xf800
ROM_SIZE=0x07e0
RAM_START=0x0200
RAM_SIZE=128
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x312" ] ; then
ARCH=msp:31
SCRIPT_NAME=elf32msp430_3
ROM_START=0xf000
ROM_SIZE=0x0fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x313" ] ; then
ARCH=msp:31
SCRIPT_NAME=elf32msp430_3
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x314" ] ; then
ARCH=msp:31
SCRIPT_NAME=elf32msp430_3
ROM_START=0xd000
ROM_SIZE=0x2fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x315" ] ; then
ARCH=msp:31
SCRIPT_NAME=elf32msp430_3
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x323" ] ; then
ARCH=msp:32
SCRIPT_NAME=elf32msp430_3
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x325" ] ; then
ARCH=msp:32
SCRIPT_NAME=elf32msp430_3
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x336" ] ; then
ARCH=msp:33
SCRIPT_NAME=elf32msp430_3
ROM_START=0xa000
ROM_SIZE=0x5fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x337" ] ; then
ARCH=msp:33
SCRIPT_NAME=elf32msp430_3
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x412" ] ; then
ARCH=msp:41
ROM_START=0xf000
ROM_SIZE=0x0fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x413" ] ; then
ARCH=msp:41
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x415" ] ; then
ARCH=msp:41
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x417" ] ; then
ARCH=msp:41
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x423" ] ; then
ARCH=msp:42
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x425" || "${MSP430_NAME}" = "msp430x4250" ]] ; then
ARCH=msp:42
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
if [ "${MSP430_NAME}" = "msp430x4250" ] ; then
RAM_SIZE=256
else
RAM_SIZE=512
fi
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x4260" ] ; then
ARCH=msp:42
ROM_START=0xa000
ROM_SIZE=0x5fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x427" || "${MSP430_NAME}" = "msp430x4270" ]] ; then
ARCH=msp:42
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
if [ "${MSP430_NAME}" = "msp430x4270" ] ; then
RAM_SIZE=256
else
RAM_SIZE=1024
fi
VECTORS_START=0xffe0
fi


if [[ "${MSP430_NAME}" = "msp430x435" || "${MSP430_NAME}" = "msp430x4351" ]] ; then
ARCH=msp:43
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x436" || "${MSP430_NAME}" = "msp430x4361" ]] ; then
ARCH=msp:43
ROM_START=0xa000
ROM_SIZE=0x5fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x437" || "${MSP430_NAME}" = "msp430x4371" ]] ; then
ARCH=msp:43
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x447" ] ; then
ARCH=msp:44
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x448" ] ; then
ARCH=msp:44
ROM_START=0x4000
ROM_SIZE=0xbfe0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430x449" ] ; then
ARCH=msp:44
ROM_START=0x1100
ROM_SIZE=0xeee0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430xE423" ||  "${MSP430_NAME}" = "msp430xW423" 
     || "${MSP430_NAME}" = "msp430xE4232" 
   ]] ; then
ARCH=msp:42
ROM_START=0xe000
ROM_SIZE=0x1fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430xE4242" ] ; then
ARCH=msp:42
ROM_START=0xd000
ROM_SIZE=0x2fe0
RAM_START=0x0200
RAM_SIZE=512
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430xE425" || "${MSP430_NAME}" = "msp430xW425"
    || "${MSP430_NAME}" = "msp430xG4250" || "${MSP430_NAME}" = "msp430xE4252" 
   ]] ; then
ARCH=msp:42
ROM_START=0xc000
ROM_SIZE=0x3fe0
RAM_START=0x0200
if [ "${MSP430_NAME}" = "msp430xG4250" ] ; then
RAM_SIZE=256
else
RAM_SIZE=512
fi
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430xG4260" ] ; then
ARCH=msp:42
ROM_START=0xa000
ROM_SIZE=0x5fe0
RAM_START=0x0200
RAM_SIZE=256
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430xE427" || "${MSP430_NAME}" = "msp430xW427"
    || "${MSP430_NAME}" = "msp430xG4270" || "${MSP430_NAME}" = "msp430xE4272" 
   ]] ; then
ARCH=msp:42
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
if [ "${MSP430_NAME}" = "msp430xG4270" ] ; then
RAM_SIZE=256
else
RAM_SIZE=1024
fi
VECTORS_START=0xffe0
fi


if [ "${MSP430_NAME}" = "msp430xG437" ] ; then
ARCH=msp:43
ROM_START=0x8000
ROM_SIZE=0x7fe0
RAM_START=0x0200
RAM_SIZE=1024
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430xG438" ] ; then
ARCH=msp:43
ROM_START=0x4000
ROM_SIZE=0xbef0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430xG439" ] ; then
ARCH=msp:43
ROM_START=0x1100
ROM_SIZE=0xeee0
RAM_START=0x0200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [ "${MSP430_NAME}" = "msp430xG4616" ] ; then
ARCH=msp:46
ROM_START=0x2100
ROM_SIZE=0x17000
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffc0
fi

if [ "${MSP430_NAME}" = "msp430xG4617" ] ; then
ARCH=msp:46
ROM_START=0x3100
ROM_SIZE=0x17000
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=8192
VECTORS_START=0xffc0
fi

if [ "${MSP430_NAME}" = "msp430xG4618" ] ; then
ARCH=msp:46
ROM_START=0x3100
ROM_SIZE=0x1D000
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=8192
VECTORS_START=0xffc0
fi

if [ "${MSP430_NAME}" = "msp430xG4619" ] ; then
ARCH=msp:46
ROM_START=0x2100
ROM_SIZE=0x1E000
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x4783" ||  "${MSP430_NAME}" = "msp430x4784" ]] ; then
ARCH=msp:47
ROM_START=0x4000
ROM_SIZE=0xbfe0
RAM_START=0x200
RAM_SIZE=2048
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x4793" ||  "${MSP430_NAME}" = "msp430x4794" ]] ; then
ARCH=msp:47
ROM_START=0x1100
ROM_SIZE=0xeee0
RAM_START=0x200
RAM_SIZE=2560
VECTORS_START=0xffe0
fi

if [[ "${MSP430_NAME}" = "msp430x47166" ||  "${MSP430_NAME}" = "msp430x47167" ]] ; then
ARCH=msp:471
ROM_START=0x2100
ROM_SIZE=0x16f00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x47176" ||  "${MSP430_NAME}" = "msp430x47177" ]] ; then
ARCH=msp:471
ROM_START=0x3100
ROM_SIZE=0x16f00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=8192
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x47186" ||  "${MSP430_NAME}" = "msp430x47187" ]] ; then
ARCH=msp:471
ROM_START=0x3100
ROM_SIZE=0x1cf00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=8192
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x47196" ||  "${MSP430_NAME}" = "msp430x47197" ]] ; then
ARCH=msp:471
ROM_START=0x2100
ROM_SIZE=0x1df00
INFO_START=0x1000
INFO_SIZE=256
BOOT_START=0x0c00
BOOT_SIZE=1024
RAM_START=0x1100
RAM_SIZE=4096
VECTORS_START=0xffc0
fi

if [[ "${MSP430_NAME}" = "msp430x5418" || "${MSP430_NAME}" = "msp430x5419" ]] ; then
ARCH=msp:54
ROM_START=0x5c00
ROM_SIZE=0x20000
INFO_START=0x1800
INFO_SIZE=512
BOOT_START=0x1000
BOOT_SIZE=2048
RAM_START=0x1c00
RAM_SIZE=16384
VECTORS_START=0xff80
fi

if [[ "${MSP430_NAME}" = "msp430x5435" || "${MSP430_NAME}" = "msp430x5436" ]] ; then
ARCH=msp:54
ROM_START=0x5c00
ROM_SIZE=0x30000
INFO_START=0x1800
INFO_SIZE=512
BOOT_START=0x1000
BOOT_SIZE=2048
RAM_START=0x1c00
RAM_SIZE=16384
VECTORS_START=0xff80
fi

if [[ "${MSP430_NAME}" = "msp430x5437" || "${MSP430_NAME}" = "msp430x5438" ]] ; then
ARCH=msp:54
ROM_START=0x5c00
ROM_SIZE=0x40000
INFO_START=0x1800
INFO_SIZE=512
BOOT_START=0x1000
BOOT_SIZE=2048
RAM_START=0x1c00
RAM_SIZE=16384
VECTORS_START=0xff80
fi

STACK=$(printf "0x%x" $(( RAM_START + RAM_SIZE )) )
VECTORS_SIZE=$((0x10000 - VECTORS_START))
