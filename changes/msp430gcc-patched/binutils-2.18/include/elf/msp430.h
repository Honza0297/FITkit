/* MSP430 ELF support for BFD.
   Copyright (C) 2002, 2003, 2004 Free Software Foundation, Inc.
   Contributed by Dmitry Diky <diwil@mail.ru>

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _ELF_MSP430_H
#define _ELF_MSP430_H

#include "elf/reloc-macros.h"

/* Processor specific flags for the ELF header e_flags field.  */
#define EF_MSP430_MACH 		0xff

#define E_MSP430_MACH_MSP430x11   11
#define E_MSP430_MACH_MSP430x11x1 110
#define E_MSP430_MACH_MSP430x12   12
#define E_MSP430_MACH_MSP430x13   13
#define E_MSP430_MACH_MSP430x14   14
#define E_MSP430_MACH_MSP430x15   15
#define E_MSP430_MACH_MSP430x16   16
#define E_MSP430_MACH_MSP430x20   20
#define E_MSP430_MACH_MSP430x21   21
#define E_MSP430_MACH_MSP430x22   22
#define E_MSP430_MACH_MSP430x23   23
#define E_MSP430_MACH_MSP430x24   24
#define E_MSP430_MACH_MSP430x241  241
#define E_MSP430_MACH_MSP430x26   26
#define E_MSP430_MACH_MSP430x31   31
#define E_MSP430_MACH_MSP430x32   32
#define E_MSP430_MACH_MSP430x33   33
#define E_MSP430_MACH_MSP430x41   41
#define E_MSP430_MACH_MSP430x42   42
#define E_MSP430_MACH_MSP430x43   43
#define E_MSP430_MACH_MSP430x44   44
#define E_MSP430_MACH_MSP430x46   46
#define E_MSP430_MACH_MSP430x47   47
#define E_MSP430_MACH_MSP430x471  471
#define E_MSP430_MACH_MSP430x54   54

/* Relocations.  */
START_RELOC_NUMBERS (elf_msp430_reloc_type)
     RELOC_NUMBER (R_MSP430_NONE,		0)
     RELOC_NUMBER (R_MSP430_32,			1)
     RELOC_NUMBER (R_MSP430_10_PCREL,		2)
     RELOC_NUMBER (R_MSP430_16, 		3)
     RELOC_NUMBER (R_MSP430_16_PCREL, 		4)
     RELOC_NUMBER (R_MSP430_16_BYTE, 		5)
     RELOC_NUMBER (R_MSP430_16_PCREL_BYTE, 	6)
     RELOC_NUMBER (R_MSP430_2X_PCREL,		7)
     RELOC_NUMBER (R_MSP430_RL_PCREL,		8)
     RELOC_NUMBER (R_MSP430X_SRC_BYTE,		9)
     RELOC_NUMBER (R_MSP430X_SRC,		10)
     RELOC_NUMBER (R_MSP430X_DST_BYTE,		11)
     RELOC_NUMBER (R_MSP430X_DST,		12)
     RELOC_NUMBER (R_MSP430X_DST_2ND_BYTE,	13)
     RELOC_NUMBER (R_MSP430X_DST_2ND,		14)
     RELOC_NUMBER (R_MSP430X_PCREL_SRC_BYTE,	15)
     RELOC_NUMBER (R_MSP430X_PCREL_SRC,		16)
     RELOC_NUMBER (R_MSP430X_PCREL_DST_BYTE,	17)
     RELOC_NUMBER (R_MSP430X_PCREL_DST,		18)
     RELOC_NUMBER (R_MSP430X_PCREL_DST_2ND,	19)
     RELOC_NUMBER (R_MSP430X_PCREL_DST_2ND_BYTE,	20)
     RELOC_NUMBER (R_MSP430X_S_BYTE,		21)
     RELOC_NUMBER (R_MSP430X_S,			22)
     RELOC_NUMBER (R_MSP430X_D_BYTE,		23)
     RELOC_NUMBER (R_MSP430X_D,			24)
     RELOC_NUMBER (R_MSP430X_PCREL_D,		25)
     RELOC_NUMBER (R_MSP430X_INDXD,		26)
     RELOC_NUMBER (R_MSP430X_PCREL_INDXD,	27)

END_RELOC_NUMBERS (R_MSP430_max)

#endif /* _ELF_MSP430_H */
