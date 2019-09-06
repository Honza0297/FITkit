/* tc-msp430.c -- Assembler code for the Texas Instruments MSP430

  Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007
  Free Software Foundation, Inc.
  Contributed by Dmitry Diky <diwil@mail.ru>

  This file is part of GAS, the GNU Assembler.

  GAS is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3, or (at your option)
  any later version.

  GAS is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with GAS; see the file COPYING.  If not, write to
  the Free Software Foundation, 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1301, USA.  */

#include <limits.h>

#include "as.h"
#include "subsegs.h"
#include "opcode/msp430.h"
#include "safe-ctype.h"
#include "dwarf2dbg.h"

/*
   We will disable polymorphs by default because it is dangerous.
   The potential problem here is the following: assume we got the
   following code:

	jump .l1
	nop
	jump  subroutine	; external symbol
      .l1:
	nop
	ret
   
   In case of assembly time relaxation we'll get:
	0: jmp .l1 <.text +0x08> (reloc deleted)
	2: nop
	4: br subroutine
    .l1:
	8: nop
	10: ret

   If the 'subroutine' wiys thin +-1024 bytes range then linker
   will produce
	0: jmp .text +0x08
	2: nop
	4: jmp subroutine
	.l1:
	6: nop
	8: ret	; 'jmp .text +0x08' will land here. WRONG!!!


   The workaround is the following:
   1. Declare global var enable_polymorphs which set to 1 via option -mP.
   2. Declare global var enable_relax	which set to 1 via option -mQ.

   If polymorphs are enabled, and relax isn't, treat all jumps as long jumps,
   do not delete any relocs and leave them for linker.
   
   If relax is enabled, relax at assembly time and kill relocs as necessary.
 */

int msp430_enable_relax;
int msp430_enable_polys;
int msp430x_repeats;    // It's not a right way to use global variable, but I don't know other way how to do it

/* GCC uses the some condition codes which we'll
   implement as new polymorph instructions.
  
   COND	EXPL	   SHORT JUMP	LONG JUMP
   ===============================================
   eq	==	   jeq 		jne +4; br lab
   ne	!=	   jne 		jeq +4; br lab

   ltn honours no-overflow flag
   ltn	<	   jn 		jn +2;  jmp +4; br lab

   lt	<	   jl 		jge +4;	br lab 
   ltu	<	   jlo 		lhs +4; br lab
   le	<= see below
   leu	<= see below

   gt	>  see below
   gtu	>  see below
   ge	>=	   jge 		jl +4; br lab
   geu	>=	   jhs 		jlo +4; br lab
   ===============================================

   Therefore, new opcodes are (BranchEQ -> beq; and so on...)
   beq,bne,blt,bltn,bltu,bge,bgeu
   'u' means unsigned compares 
  
   Also, we add 'jump' instruction:
   jump	UNCOND	-> jmp		br lab

   They will have opcode_format() == FMT_EMULATED_POLYMORPH_JUMP, 
   and opcode_variant() == number of instruction.  */

struct rcodes_s 
{
  char * name;
  int    index;	/* Corresponding opcode_variant().  */
  int    sop;	/* Opcode if jump length is short.  */
  long   lpos;	/* Label position.  */
  long   lop0;	/* Opcode 1 _word_ (16 bits).  */
  long   lop1;	/* Opcode second word.  */
  long   lop2;	/* Opcode third word.  */
};

#define MSP430_RLC(n,i,sop,o1) \
  {#n, i, sop, 2, (o1 + 2), 0x4010, 0}

static struct rcodes_s msp430_rcodes[] = 
{
  MSP430_RLC (beq,  0, 0x2400, 0x2000),
  MSP430_RLC (bne,  1, 0x2000, 0x2400),
  MSP430_RLC (blt,  2, 0x3800, 0x3400),
  MSP430_RLC (bltu, 3, 0x2800, 0x2c00),
  MSP430_RLC (bge,  4, 0x3400, 0x3800),
  MSP430_RLC (bgeu, 5, 0x2c00, 0x2800),
  {"bltn",          6, 0x3000, 3, 0x3000 + 1, 0x3c00 + 2,0x4010},
  {"jump",          7, 0x3c00, 1, 0x4010, 0, 0},
  {0,0,0,0,0,0,0}
};
#undef MSP430_RLC


/* More difficult than above and they have format 5.
   
   COND	EXPL	SHORT			LONG
   =================================================================
   gt	>	jeq +2; jge label	jeq +6; jl  +4; br label
   gtu	>	jeq +2; jhs label	jeq +6; jlo +4; br label
   leu	<=	jeq label; jlo label	jeq +2; jhs +4; br label
   le	<=	jeq label; jl  label	jeq +2; jge +4; br label
   =================================================================  */

struct hcodes_s 
{
  char * name;	
  int    index;		/* Corresponding opcode_variant().  */
  int    tlab;		/* Number of labels in short mode.  */
  int    op0;		/* Opcode for first word of short jump.  */
  int    op1;		/* Opcode for second word of short jump.  */
  int    lop0;		/* Opcodes for long jump mode.  */
  int    lop1;
  int    lop2;
};

static struct hcodes_s msp430_hcodes[] = 
{
  {"bgt",  0, 1, 0x2401, 0x3400, 0x2403, 0x3802, 0x4010 },
  {"bgtu", 1, 1, 0x2401, 0x2c00, 0x2403, 0x2802, 0x4010 },
  {"bleu", 2, 2, 0x2400, 0x2800, 0x2401, 0x2c02, 0x4010 },
  {"ble",  3, 2, 0x2400, 0x3800, 0x2401, 0x3402, 0x4010 },
  {0,0,0,0,0,0,0,0}
};

const char comment_chars[] = ";";
const char line_comment_chars[] = "#";
const char line_separator_chars[] = "{";
const char EXP_CHARS[] = "eE";
const char FLT_CHARS[] = "dD";

/* Handle  long expressions.  */
extern LITTLENUM_TYPE generic_bignum[];

static struct hash_control *msp430_hash;

/* Relaxations.  */
#define STATE_UNCOND_BRANCH	1	/* jump */
#define STATE_NOOV_BRANCH	3	/* bltn */
#define STATE_SIMPLE_BRANCH	2	/* bne, beq, etc... */
#define STATE_EMUL_BRANCH	4

#define CNRL	2
#define CUBL	4
#define CNOL	8
#define CSBL	6
#define CEBL	4

/* Length.  */
#define STATE_BITS10	1	/* wild guess. short jump */
#define STATE_WORD	2	/* 2 bytes pc rel. addr. more */
#define STATE_UNDEF	3	/* cannot handle this yet. convert to word mode */

#define ENCODE_RELAX(what,length) (((what) << 2) + (length))
#define RELAX_STATE(s)            ((s) & 3)
#define RELAX_LEN(s)	          ((s) >> 2)
#define RELAX_NEXT(a,b)	          ENCODE_RELAX (a, b + 1)

relax_typeS md_relax_table[] =
{
  /* Unused.  */
  {1, 1, 0, 0},
  {1, 1, 0, 0},
  {1, 1, 0, 0},
  {1, 1, 0, 0},

  /* Unconditional jump.  */
  {1, 1, 8, 5},
  {1024, -1024, CNRL, RELAX_NEXT (STATE_UNCOND_BRANCH, STATE_BITS10)},	/* state 10 bits displ */
  {0, 0, CUBL, RELAX_NEXT (STATE_UNCOND_BRANCH, STATE_WORD)},		/* state word */
  {1, 1, CUBL, 0},							/* state undef */

  /* Simple branches.  */
  {0, 0, 8, 9},
  {1024, -1024, CNRL, RELAX_NEXT (STATE_SIMPLE_BRANCH, STATE_BITS10)},	/* state 10 bits displ */
  {0, 0, CSBL, RELAX_NEXT (STATE_SIMPLE_BRANCH, STATE_WORD)},		/* state word */
  {1, 1, CSBL, 0},

  /* blt no overflow branch.  */
  {1, 1, 8, 13},
  {1024, -1024, CNRL, RELAX_NEXT (STATE_NOOV_BRANCH, STATE_BITS10)},	/* state 10 bits displ */
  {0, 0, CNOL, RELAX_NEXT (STATE_NOOV_BRANCH, STATE_WORD)},		/* state word */
  {1, 1, CNOL, 0},

  /* Emulated branches.  */
  {1, 1, 8, 17},
  {1020, -1020, CEBL, RELAX_NEXT (STATE_EMUL_BRANCH, STATE_BITS10)},	/* state 10 bits displ */
  {0, 0, CNOL, RELAX_NEXT (STATE_EMUL_BRANCH, STATE_WORD)},		/* state word */
  {1, 1, CNOL, 0}
};


#define MAX_OP_LEN	256

struct mcu_type_s
{
  char * name;
  int isa;
  int mach;
};

enum
{
  CORE_MASK = 0x3,
  CPU4_BUG = 1 << 2,    // push #4, push #8 cannot use CG
  CPU7_BUG = 1 << 3,    // CALL and PUSH with @SP+, @SP, and X(SP) uses the SP to calculate the address, then decrements it
  CPU8_BUG = 1 << 4,    // using odd values with SP
  CPU11_BUG = 1 << 5,   // When addressing the program counter (PC) in register mode and the PC is the destination, the
                        // status register (SR) may be erroneous. The instructions BIS, BIC, and MOV do not affect SR contents.
  CPU12_BUG = 1 << 6,   // Any instruction immediately following a CMP(.B) or BIT(.B) instruction where the PC is the 
                        // destination address using register mode is ignored or erroneously executed. 
                        // *** we can issue warning if any instruction other than nop follows cmp(.b) or bit(.b) ***
  CPU13_BUG = 1 << 7,   // Performing arithmetic operations with the status register as the destination address does not 
                        // update the status register as intended. The result in SR can be invalid, leading to erroneous low-
                        // power mode entry. *** we can issue warning ***
  CPU16_BUG = 1 << 8,   // With indexed addressing mode and instructions calla, mova and bra
                        // it is not possible to reach memory above 64k if the register content is <64k. 
};
static core_t msp430_core( struct mcu_type_s const * mcu )
{
  return (core_t)(mcu->isa & CORE_MASK);
}

#define MSP430_ISA_11           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_110          (CORE_430 | CPU4_BUG)
#define MSP430_ISA_12           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_13           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_14           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_15           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_16           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_20           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_21           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_21x1         (CORE_430 | CPU4_BUG|CPU11_BUG|CPU12_BUG|CPU13_BUG)
#define MSP430_ISA_22           (CORE_430)
#define MSP430_ISA_23           (CORE_430)
#define MSP430_ISA_24           (CORE_430 | CPU8_BUG)
#define MSP430_ISA_241          (CORE_430X | CPU7_BUG|CPU8_BUG|CPU16_BUG)
#define MSP430_ISA_26           (CORE_430X | CPU7_BUG|CPU8_BUG|CPU16_BUG)
#define MSP430_ISA_31           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_32           (CORE_430 | CPU4_BUG) 
#define MSP430_ISA_33           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_41           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_42           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_43           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_44           (CORE_430 | CPU4_BUG)
#define MSP430_ISA_46           (CORE_430X | CPU7_BUG|CPU8_BUG)
#define MSP430_ISA_47           (CORE_430)
#define MSP430_ISA_471          (CORE_430X)
#define MSP430_ISA_54           (CORE_430X2)

#define CHECK_RELOC_MSP430                  ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430_16_BYTE : BFD_RELOC_MSP430_16)
#define CHECK_RELOC_MSP430_PCREL            ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430_16_PCREL_BYTE : BFD_RELOC_MSP430_16_PCREL)
#define CHECK_RELOC_MSP430X_SRC             ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430X_SRC_BYTE : BFD_RELOC_MSP430X_SRC)
#define CHECK_RELOC_MSP430X_PCREL_SRC       ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430X_PCREL_SRC_BYTE : BFD_RELOC_MSP430X_PCREL_SRC)
#define CHECK_RELOC_MSP430X_DST             ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430X_DST_BYTE : BFD_RELOC_MSP430X_DST)
#define CHECK_RELOC_MSP430X_PCREL_DST       ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430X_PCREL_DST_BYTE : BFD_RELOC_MSP430X_PCREL_DST)
#define CHECK_RELOC_MSP430X_DST_2ND         ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430X_DST_2ND_BYTE : BFD_RELOC_MSP430X_DST_2ND)
#define CHECK_RELOC_MSP430X_PCREL_DST_2ND   ((imm_op || op_width == BYTE_OP) ? BFD_RELOC_MSP430X_PCREL_DST_2ND_BYTE : BFD_RELOC_MSP430X_PCREL_DST_2ND)

static struct mcu_type_s const mcu_types[] =
{
  {"msp1",         MSP430_ISA_11,  bfd_mach_msp11},
  {"msp2",         MSP430_ISA_14,  bfd_mach_msp14},
  {"msp3",         MSP430_ISA_46,  bfd_mach_msp46},
  {"msp4",         MSP430_ISA_47,  bfd_mach_msp47},
  {"msp5",         MSP430_ISA_471, bfd_mach_msp471},
  {"msp6",         MSP430_ISA_54,  bfd_mach_msp54},
  {"msp430x110",   MSP430_ISA_11,  bfd_mach_msp11},
  {"msp430x112",   MSP430_ISA_11,  bfd_mach_msp11},
  {"msp430x1101",  MSP430_ISA_110, bfd_mach_msp110},
  {"msp430x1111",  MSP430_ISA_110, bfd_mach_msp110},
  {"msp430x1121",  MSP430_ISA_110, bfd_mach_msp110},
  {"msp430x1122",  MSP430_ISA_11,  bfd_mach_msp110},
  {"msp430x1132",  MSP430_ISA_11,  bfd_mach_msp110},

  {"msp430x122",   MSP430_ISA_12,  bfd_mach_msp12},
  {"msp430x123",   MSP430_ISA_12,  bfd_mach_msp12},
  {"msp430x1222",  MSP430_ISA_12,  bfd_mach_msp12},
  {"msp430x1232",  MSP430_ISA_12,  bfd_mach_msp12},

  {"msp430x133",   MSP430_ISA_13,  bfd_mach_msp13},
  {"msp430x135",   MSP430_ISA_13,  bfd_mach_msp13},
  {"msp430x1331",  MSP430_ISA_13,  bfd_mach_msp13},
  {"msp430x1351",  MSP430_ISA_13,  bfd_mach_msp13},
  {"msp430x147",   MSP430_ISA_14,  bfd_mach_msp14},
  {"msp430x148",   MSP430_ISA_14,  bfd_mach_msp14},
  {"msp430x149",   MSP430_ISA_14,  bfd_mach_msp14},
  {"msp430x1471",  MSP430_ISA_14,  bfd_mach_msp14},
  {"msp430x1481",  MSP430_ISA_14,  bfd_mach_msp14},
  {"msp430x1491",  MSP430_ISA_14,  bfd_mach_msp14},

  {"msp430x155",   MSP430_ISA_15,  bfd_mach_msp15},
  {"msp430x156",   MSP430_ISA_15,  bfd_mach_msp15},
  {"msp430x157",   MSP430_ISA_15,  bfd_mach_msp15},
  {"msp430x167",   MSP430_ISA_16,  bfd_mach_msp16},
  {"msp430x168",   MSP430_ISA_16,  bfd_mach_msp16},
  {"msp430x169",   MSP430_ISA_16,  bfd_mach_msp16},
  {"msp430x1610",  MSP430_ISA_16,  bfd_mach_msp16},
  {"msp430x1611",  MSP430_ISA_16,  bfd_mach_msp16},
  {"msp430x1612",  MSP430_ISA_16,  bfd_mach_msp16},

  {"msp430x2001",  MSP430_ISA_20,  bfd_mach_msp20},
  {"msp430x2011",  MSP430_ISA_20,  bfd_mach_msp20},

  {"msp430x2002",  MSP430_ISA_20,  bfd_mach_msp20},
  {"msp430x2012",  MSP430_ISA_20,  bfd_mach_msp20},

  {"msp430x2003",  MSP430_ISA_20,  bfd_mach_msp20},
  {"msp430x2013",  MSP430_ISA_20,  bfd_mach_msp20},

  {"msp430x2101",  MSP430_ISA_21x1,  bfd_mach_msp21},
  {"msp430x2111",  MSP430_ISA_21x1,  bfd_mach_msp21},
  {"msp430x2112",  MSP430_ISA_21,  bfd_mach_msp21},
  {"msp430x2121",  MSP430_ISA_21x1,  bfd_mach_msp21},
  {"msp430x2122",  MSP430_ISA_21,  bfd_mach_msp21},
  {"msp430x2131",  MSP430_ISA_21x1,  bfd_mach_msp21},
  {"msp430x2132",  MSP430_ISA_21,  bfd_mach_msp21},

  {"msp430x2232",  MSP430_ISA_22,  bfd_mach_msp22},
  {"msp430x2234",  MSP430_ISA_22,  bfd_mach_msp22},
  {"msp430x2252",  MSP430_ISA_22,  bfd_mach_msp22},
  {"msp430x2254",  MSP430_ISA_22,  bfd_mach_msp22},
  {"msp430x2272",  MSP430_ISA_22,  bfd_mach_msp22},
  {"msp430x2274",  MSP430_ISA_22,  bfd_mach_msp22},

  {"msp430x233",   MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x235",   MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x2330",  MSP430_ISA_23,  bfd_mach_msp23},
  {"msp430x2350",  MSP430_ISA_23,  bfd_mach_msp23},
  {"msp430x2370",  MSP430_ISA_23,  bfd_mach_msp23},

  {"msp430x247",   MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x2471",  MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x248",   MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x2481",  MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x249",   MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x2491",  MSP430_ISA_24,  bfd_mach_msp24},
  {"msp430x2410",  MSP430_ISA_24,  bfd_mach_msp24},

  {"msp430x2416",  MSP430_ISA_241, bfd_mach_msp241},
  {"msp430x2417",  MSP430_ISA_241, bfd_mach_msp241},
  {"msp430x2418",  MSP430_ISA_241, bfd_mach_msp241},
  {"msp430x2419",  MSP430_ISA_241, bfd_mach_msp241},
  
  {"msp430x2616",  MSP430_ISA_26,  bfd_mach_msp26},
  {"msp430x2617",  MSP430_ISA_26,  bfd_mach_msp26},
  {"msp430x2618",  MSP430_ISA_26,  bfd_mach_msp26},
  {"msp430x2619",  MSP430_ISA_26,  bfd_mach_msp26},
  
  {"msp430x311",   MSP430_ISA_31,  bfd_mach_msp31},
  {"msp430x312",   MSP430_ISA_31,  bfd_mach_msp31},
  {"msp430x313",   MSP430_ISA_31,  bfd_mach_msp31},
  {"msp430x314",   MSP430_ISA_31,  bfd_mach_msp31},
  {"msp430x315",   MSP430_ISA_31,  bfd_mach_msp31},
  {"msp430x323",   MSP430_ISA_32,  bfd_mach_msp32},
  {"msp430x325",   MSP430_ISA_32,  bfd_mach_msp32},
  {"msp430x336",   MSP430_ISA_33,  bfd_mach_msp33},
  {"msp430x337",   MSP430_ISA_33,  bfd_mach_msp33},

  {"msp430x412",   MSP430_ISA_41,  bfd_mach_msp41},
  {"msp430x413",   MSP430_ISA_41,  bfd_mach_msp41},
  {"msp430x415",   MSP430_ISA_41,  bfd_mach_msp41},
  {"msp430x417",   MSP430_ISA_41,  bfd_mach_msp41},

  {"msp430x423",   MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430x425",   MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430x427",   MSP430_ISA_42,  bfd_mach_msp42},

  {"msp430x4250",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430x4260",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430x4270",  MSP430_ISA_42,  bfd_mach_msp42},

  {"msp430xG4250", MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xG4260", MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xG4270", MSP430_ISA_42,  bfd_mach_msp42},

  {"msp430xE423",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xE4232", MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xE4242", MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xE4252", MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xE425",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xE427",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xE4272", MSP430_ISA_42,  bfd_mach_msp42},

  {"msp430xW423",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xW425",  MSP430_ISA_42,  bfd_mach_msp42},
  {"msp430xW427",  MSP430_ISA_42,  bfd_mach_msp42},

  {"msp430xG437",  MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430xG438",  MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430xG439",  MSP430_ISA_43,  bfd_mach_msp43},

  {"msp430x435",   MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430x4351",  MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430x436",   MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430x4361",  MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430x437",   MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430x4371",  MSP430_ISA_43,  bfd_mach_msp43},
  {"msp430x447",   MSP430_ISA_44,  bfd_mach_msp44},
  {"msp430x448",   MSP430_ISA_44,  bfd_mach_msp44},
  {"msp430x449",   MSP430_ISA_44,  bfd_mach_msp44},

  {"msp430xG4616", MSP430_ISA_46,  bfd_mach_msp46},
  {"msp430xG4617", MSP430_ISA_46,  bfd_mach_msp46},
  {"msp430xG4618", MSP430_ISA_46,  bfd_mach_msp46},
  {"msp430xG4619", MSP430_ISA_46,  bfd_mach_msp46},

  {"msp430x4783",  MSP430_ISA_47,  bfd_mach_msp47},
  {"msp430x4784",  MSP430_ISA_47,  bfd_mach_msp47},
  {"msp430x4793",  MSP430_ISA_47,  bfd_mach_msp47},
  {"msp430x4794",  MSP430_ISA_47,  bfd_mach_msp47},
  
  {"msp430x47166", MSP430_ISA_471, bfd_mach_msp471},
  {"msp430x47176", MSP430_ISA_471, bfd_mach_msp471},
  {"msp430x47186", MSP430_ISA_471, bfd_mach_msp471},
  {"msp430x47196", MSP430_ISA_471, bfd_mach_msp471},

  {"msp430x47167", MSP430_ISA_471, bfd_mach_msp471},
  {"msp430x47177", MSP430_ISA_471, bfd_mach_msp471},
  {"msp430x47187", MSP430_ISA_471, bfd_mach_msp471},
  {"msp430x47197", MSP430_ISA_471, bfd_mach_msp471},

  {"msp430x5418",  MSP430_ISA_54,  bfd_mach_msp54},
  {"msp430x5419",  MSP430_ISA_54,  bfd_mach_msp54},
  {"msp430x5435",  MSP430_ISA_54,  bfd_mach_msp54},
  {"msp430x5436",  MSP430_ISA_54,  bfd_mach_msp54},
  {"msp430x5437",  MSP430_ISA_54,  bfd_mach_msp54},
  {"msp430x5438",  MSP430_ISA_54,  bfd_mach_msp54},

  {NULL, 0, 0}
};


static struct mcu_type_s const default_mcu =
    { "msp430x11", MSP430_ISA_11, bfd_mach_msp11 };

static struct mcu_type_s const * msp430_mcu = & default_mcu;

/* Profiling capability:
   It is a performance hit to use gcc's profiling approach for this tiny target.
   Even more -- jtag hardware facility does not perform any profiling functions.
   However we've got gdb's built-in simulator where we can do anything.
   Therefore my suggestion is:

   We define new section ".profiler" which holds all profiling information.
   We define new pseudo operation .profiler which will instruct assembler to
   add new profile entry to the object file. Profile should take place at the
   present address.

   Pseudo-op format:

      .profiler flags,function_to_profile [, cycle_corrector, extra]

   where 'flags' is a combination of the following chars:
	    s - function Start
	    x - function eXit
	    i - function is in Init section
	    f - function is in Fini section
	    l - Library call
	    c - libC standard call
	    d - stack value Demand (saved at run-time in simulator)
	    I - Interrupt service routine
	    P - Prologue start
	    p - Prologue end
	    E - Epilogue start
	    e - Epilogue end
	    j - long Jump/ sjlj unwind
	    a - an Arbitrary code fragment
	    t - exTra parameter saved (constant value like frame size)
	  '""' optional: "sil" == sil

      function_to_profile - function's address
      cycle_corrector     - a value which should be added to the cycle
			      counter, zero if omitted
      extra - some extra parameter, zero if omitted.

      For example:
      ------------------------------
	.global fxx
	.type fxx,@function
      fxx:
      .LFrameOffset_fxx=0x08
      .profiler "scdP", fxx	; function entry.
				; we also demand stack value to be displayed
	push r11
	push r10
	push r9
	push r8
      .profiler "cdp",fxx,0, .LFrameOffset_fxx	; check stack value at this point
						; (this is a prologue end)
						; note, that spare var filled with the frame size
	mov r15,r8
	....
      .profiler cdE,fxx		; check stack
	pop r8
	pop r9
	pop r10
	pop r11
      .profiler xcde,fxx,3	; exit adds 3 to the cycle counter
      ret			; cause 'ret' insn takes 3 cycles
      -------------------------------

      This profiling approach does not produce any overhead and
      absolutely harmless.
      So, even profiled code can be uploaded to the MCU.  */
#define MSP430_PROFILER_FLAG_ENTRY	1	/* s */
#define MSP430_PROFILER_FLAG_EXIT	2	/* x */
#define MSP430_PROFILER_FLAG_INITSECT	4	/* i */
#define MSP430_PROFILER_FLAG_FINISECT	8	/* f */
#define MSP430_PROFILER_FLAG_LIBCALL	0x10	/* l */
#define MSP430_PROFILER_FLAG_STDCALL	0x20	/* c */
#define MSP430_PROFILER_FLAG_STACKDMD	0x40	/* d */
#define MSP430_PROFILER_FLAG_ISR	0x80	/* I */
#define MSP430_PROFILER_FLAG_PROLSTART	0x100	/* P */
#define MSP430_PROFILER_FLAG_PROLEND	0x200	/* p */
#define MSP430_PROFILER_FLAG_EPISTART	0x400	/* E */
#define MSP430_PROFILER_FLAG_EPIEND	0x800	/* e */
#define MSP430_PROFILER_FLAG_JUMP	0x1000	/* j */
#define MSP430_PROFILER_FLAG_FRAGMENT	0x2000	/* a */
#define MSP430_PROFILER_FLAG_EXTRA	0x4000	/* t */
#define MSP430_PROFILER_FLAG_notyet	0x8000	/* ? */

static int
pow2value (int y)
{
  int n = 0;
  unsigned int x;

  x = y;

  if (!x)
    return 1;

  for (; x; x = x >> 1)
    if (x & 1)
      n++;

  return n == 1;
}

/* Parse ordinary expression.  */

static char *
parse_exp (char * s, expressionS * op)
{
  char * in_save = input_line_pointer;
  input_line_pointer = s;
  expression (op);
  s = input_line_pointer;
  input_line_pointer = in_save;
  if (op->X_op == O_absent)
    as_bad (_("missing operand"));
  return s;
}


/* Delete spaces from s: X ( r 1  2)  => X(r12).  */

static void
del_spaces (char * s)
{
  while (*s)
    {
      if (ISSPACE (*s))
	{
	  char *m = s + 1;

	  while (ISSPACE (*m) && *m)
	    m++;
	  memmove (s, m, strlen (m) + 1);
	}
      else
	s++;
    }
}

static inline char *
skip_space (char * s)
{
  while (ISSPACE (*s))
    ++s;
  return s;
}

/* Extract one word from FROM and copy it to TO. Delimiters are ",;\n"  */

static char *
extract_operand (char * from, char * to, int limit)
{
  int size = 0;

  /* Drop leading whitespace.  */
  from = skip_space (from);

  while (size < limit && *from)
    {
      *(to + size) = *from;
      if (*from == ',' || *from == ';' || *from == '\n')
	break;
      from++;
      size++;
    }

  *(to + size) = 0;
  del_spaces (to);

  if(*from == ',')
    from++;

  return from;
}

static void
msp430_profiler (int dummy ATTRIBUTE_UNUSED)
{
  char   buffer[1024];
  char   f[32];
  char * str = buffer;
  char * flags = f;
  int    p_flags = 0;
  char * halt;
  int    ops = 0;
  int    left;
  char * s;
  segT   seg;
  int    subseg;
  char * end = 0;
  expressionS exp;
  expressionS exp1;

  s = input_line_pointer;
  end = input_line_pointer;

  while (*end && *end != '\n')
    end++;

  while (*s && *s != '\n')
    {
      if (*s == ',')
	ops++;
      s++;
    }

  left = 3 - ops;

  if (ops < 1)
    {
      as_bad (_(".profiler pseudo requires at least two operands."));
      input_line_pointer = end;
      return;
    }

  input_line_pointer = extract_operand (input_line_pointer, flags, 32)
                        + 1;    // skip trailing zero

  while (*flags)
    {
      switch (*flags)
	{
	case '"':
	  break;
	case 'a':
	  p_flags |= MSP430_PROFILER_FLAG_FRAGMENT;
	  break;
	case 'j':
	  p_flags |= MSP430_PROFILER_FLAG_JUMP;
	  break;
	case 'P':
	  p_flags |= MSP430_PROFILER_FLAG_PROLSTART;
	  break;
	case 'p':
	  p_flags |= MSP430_PROFILER_FLAG_PROLEND;
	  break;
	case 'E':
	  p_flags |= MSP430_PROFILER_FLAG_EPISTART;
	  break;
	case 'e':
	  p_flags |= MSP430_PROFILER_FLAG_EPIEND;
	  break;
	case 's':
	  p_flags |= MSP430_PROFILER_FLAG_ENTRY;
	  break;
	case 'x':
	  p_flags |= MSP430_PROFILER_FLAG_EXIT;
	  break;
	case 'i':
	  p_flags |= MSP430_PROFILER_FLAG_INITSECT;
	  break;
	case 'f':
	  p_flags |= MSP430_PROFILER_FLAG_FINISECT;
	  break;
	case 'l':
	  p_flags |= MSP430_PROFILER_FLAG_LIBCALL;
	  break;
	case 'c':
	  p_flags |= MSP430_PROFILER_FLAG_STDCALL;
	  break;
	case 'd':
	  p_flags |= MSP430_PROFILER_FLAG_STACKDMD;
	  break;
	case 'I':
	  p_flags |= MSP430_PROFILER_FLAG_ISR;
	  break;
	case 't':
	  p_flags |= MSP430_PROFILER_FLAG_EXTRA;
	  break;
	default:
	  as_warn (_("unknown profiling flag - ignored."));
	  break;
	}
      flags++;
    }

  if (p_flags
      && (   ! pow2value (p_flags & (  MSP430_PROFILER_FLAG_ENTRY
				     | MSP430_PROFILER_FLAG_EXIT))
	  || ! pow2value (p_flags & (  MSP430_PROFILER_FLAG_PROLSTART
				     | MSP430_PROFILER_FLAG_PROLEND
				     | MSP430_PROFILER_FLAG_EPISTART
				     | MSP430_PROFILER_FLAG_EPIEND))
	  || ! pow2value (p_flags & (  MSP430_PROFILER_FLAG_INITSECT
				     | MSP430_PROFILER_FLAG_FINISECT))))
    {
      as_bad (_("ambigious flags combination - '.profiler' directive ignored."));
      input_line_pointer = end;
      return;
    }

  /* Generate temp symbol which denotes current location.  */
  if (now_seg == absolute_section)	/* Paranoja ?  */
    {
      exp1.X_op = O_constant;
      exp1.X_add_number = abs_section_offset;
      as_warn (_("profiling in absolute section? Hm..."));
    }
  else
    {
      exp1.X_op = O_symbol;
      exp1.X_add_symbol = symbol_temp_new_now ();
      exp1.X_add_number = 0;
    }

  /* Generate a symbol which holds flags value.  */
  exp.X_op = O_constant;
  exp.X_add_number = p_flags;

  /* Save current section.  */
  seg = now_seg;
  subseg = now_subseg;

  /* Now go to .profiler section.  */
  obj_elf_change_section (".profiler", SHT_PROGBITS, 0, 0, 0, 0, 0);

  /* Save flags.  */
  emit_expr (& exp, 2);

  /* Save label value.  */
  emit_expr (& exp1, 2);

  while (ops--)
    {
      /* Now get profiling info.  */
      halt = extract_operand (input_line_pointer, str, 1024);
      /* Process like ".word xxx" directive.  */
      parse_exp (str, & exp);
      emit_expr (& exp, 2);
      input_line_pointer = halt + 1;
    }

  /* Fill the rest with zeros.  */
  exp.X_op = O_constant;
  exp.X_add_number = 0;
  while (left--)
    emit_expr (& exp, 2);

  /* Return to current section.  */
  subseg_set (seg, subseg);
}

static char *
extract_word (char * from, char * to, int limit)
{
  char *op_start;
  char *op_end;
  int size = 0;

  /* Drop leading whitespace.  */
  from = skip_space (from);
  *to = 0;

  /* Find the op code end.  */
  for (op_start = op_end = from; *op_end != 0 && is_part_of_name (*op_end);)
    {
      to[size++] = *op_end++;
      if (size + 1 >= limit)
	break;
    }

  to[size] = 0;
  return op_end;
}

#define OPTION_MMCU 'm'
#define OPTION_RELAX 'Q'
#define OPTION_POLYMORPHS 'P'

static void
msp430_set_arch (int dummy ATTRIBUTE_UNUSED)
{
  char *str = (char *) alloca (32);	/* 32 for good measure.  */

  input_line_pointer = extract_word (input_line_pointer, str, 32);

  md_parse_option (OPTION_MMCU, str);
  bfd_set_arch_mach (stdoutput, TARGET_ARCH, msp430_mcu->mach);
}

static void
show_mcu_list (FILE * stream)
{
  int i;

  fprintf (stream, _("Known MCU names:\n"));

  for (i = 0; mcu_types[i].name; i++)
    fprintf (stream, _("\t %s\n"), mcu_types[i].name);

  fprintf (stream, "\n");
}

int
md_parse_option (int c, char * arg)
{
  int i;

  switch (c)
    {
    case OPTION_MMCU:
      for (i = 0; mcu_types[i].name; ++i)
	if (strcmp (mcu_types[i].name, arg) == 0)
	  break;

      if (!mcu_types[i].name)
	{
	  show_mcu_list (stderr);
	  as_fatal (_("unknown MCU: %s\n"), arg);
	}

      if (msp430_mcu == &default_mcu || msp430_mcu->mach == mcu_types[i].mach)
	msp430_mcu = &mcu_types[i];
      else
	as_fatal (_("redefinition of mcu type %s' to %s'"),
		  msp430_mcu->name, mcu_types[i].name);
      return 1;
      break;
      
    case OPTION_RELAX:
      msp430_enable_relax = 1; 
      return 1;
      break;
      
    case OPTION_POLYMORPHS:
      msp430_enable_polys = 1;
      return 1;
      break;
    }

  return 0;
}

static void
msp430_repeat_insn (int dummy ATTRIBUTE_UNUSED);

const pseudo_typeS md_pseudo_table[] =
{
  {"arch", msp430_set_arch, 0},
  {"profiler", msp430_profiler, 0},
  {"rpt", msp430_repeat_insn, 0},
  {NULL, NULL, 0}
};

const char *md_shortopts = "m:";

struct option md_longopts[] =
{
  {"mmcu", required_argument, NULL, OPTION_MMCU},
  {"mP", no_argument, NULL, OPTION_POLYMORPHS},
  {"mQ", no_argument, NULL, OPTION_RELAX},
  {NULL, no_argument, NULL, 0}
};

size_t md_longopts_size = sizeof (md_longopts);

void
md_show_usage (FILE * stream)
{
  fprintf (stream,
	   _("MSP430 options:\n"
	     "  -mmcu=[msp430-name] select microcontroller type\n"
	     "                  msp430x110   msp430x112\n"
	     "                  msp430x1101  msp430x1111  msp430x1121\n"
	     "                  msp430x1122  msp430x1132\n"
	     "                  msp430x122   msp430x123\n"
	     "                  msp430x1222  msp430x1232\n"
	     "                  msp430x133   msp430x135\n"
	     "                  msp430x1331  msp430x1351\n"
	     "                  msp430x147   msp430x148   msp430x149\n"
	     "                  msp430x1471  msp430x1481  msp430x1491\n"
	     "                  msp430x155   msp430x156   msp430x157\n"
	     "                  msp430x167   msp430x168   msp430x169\n"
	     "                  msp430x1610  msp430x1611  msp430x1612\n"
	     "                  msp430x2001  msp430x2011\n"
	     "                  msp430x2002  msp430x2012\n"
	     "                  msp430x2003  msp430x2013\n"
	     "                  msp430x2101  msp430x2111  msp430x2121  msp430x2131\n"
	     "                  msp430x2112  msp430x2122  msp430x2132\n"
	     "                  msp430x2232  msp430x2252  msp430x2272\n"
	     "                  msp430x2234  msp430x2254  msp430x2274\n"
	     "                  msp430x233   msp430x235\n"
	     "                  msp430x2330  msp430x2350  msp430x2370\n"
	     "                  msp430x247   msp430x248   msp430x249   msp430x2410\n"
	     "                  msp430x2471  msp430x2481  msp430x2491\n"
	     "                  msp430x2416  msp430x2417  msp430x2418  msp430x2419\n"
	     "                  msp430x2616  msp430x2617  msp430x2618  msp430x2619\n"
	     "                  msp430x311   msp430x312   msp430x313   msp430x314  msp430x315\n"
	     "                  msp430x323   msp430x325\n" 
	     "                  msp430x336   msp430x337\n"
	     "                  msp430x412   msp430x413   msp430x415   msp430x417\n"
	     "                  msp430x423   msp430x425   msp430427\n"
	     "                  msp430x4250  msp430x4260  msp4304270\n"
	     "                  msp430xE423  msp430xE425  msp430E427\n"
	     "                  msp430xE4232 msp430xE4242 msp430xE4252 msp430E4272n"
	     "                  msp430xW423  msp430xW425  msp430W427\n"
	     "                  msp430xG4250 msp430xG4260 msp430G4270\n"
	     "                  msp430xG437  msp430xG438  msp430G439\n"
	     "                  msp430x435   msp430x436   msp430x437\n"
	     "                  msp430x4351  msp430x4361  msp430x4371\n"
	     "                  msp430x447   msp430x448   msp430x449\n"
	     "                  msp430xG4616 msp430xG4617 msp430xG4618 msp430xG4619\n"
	     "                  msp430x4783  msp430x4784  msp430x4793  msp430x4794\n"
	     "                  msp430x47166 msp430x47176 msp430x47186  msp430x47196\n"
	     "                  msp430x47167 msp430x47177 msp430x47187  msp430x47197\n"
	     "                  msp430x5418  msp430xG5419\n"
	     "                  msp430x5435  msp430x5436  msp430x5437  msp430x5438\n"
             
             ));
  fprintf (stream,
	   _("  -mQ - enable relaxation at assembly time. DANGEROUS!\n"
	     "  -mP - enable polymorph instructions\n"));

  show_mcu_list (stream);
}

symbolS *
md_undefined_symbol (char * name ATTRIBUTE_UNUSED)
{
  return 0;
}

static char *
extract_cmd (char * from, char * to, int limit)
{
  int size = 0;

  while (*from && ! ISSPACE (*from) && *from != '.' && limit > size)
    {
      *(to + size) = *from;
      from++;
      size++;
    }

  *(to + size) = 0;

  return from;
}

/* Turn a string in input_line_pointer into a floating point constant
   of type TYPE, and store the appropriate bytes in *LITP.  The number
   of LITTLENUMS emitted is stored in *SIZEP.  An error message is
   returned, or NULL on OK.  */

char *
md_atof (int type, char * litP, int * sizeP)
{
  int prec;
  LITTLENUM_TYPE words[4];
  LITTLENUM_TYPE *wordP;
  char *t;

  switch (type)
    {
    case 'f':
      prec = 2;
      break;
    case 'd':
      prec = 4;
      break;
    default:
      *sizeP = 0;
      return _("bad call to md_atof");
    }

  t = atof_ieee (input_line_pointer, type, words);
  if (t)
    input_line_pointer = t;

  *sizeP = prec * sizeof (LITTLENUM_TYPE);

  /* This loop outputs the LITTLENUMs in REVERSE order.  */
  for (wordP = words + prec - 1; prec--;)
    {
      md_number_to_chars (litP, (valueT) (*wordP--), sizeof (LITTLENUM_TYPE));
      litP += sizeof (LITTLENUM_TYPE);
    }

  return NULL;
}

void
md_begin (void)
{
  struct msp430_opcode_s const * opcode;
  msp430_hash = hash_new ();

  for (opcode = msp430_opcodes; opcode->name; opcode++)
    hash_insert (msp430_hash, opcode->name, (char *) opcode);

  bfd_set_arch_mach (stdoutput, TARGET_ARCH, msp430_mcu->mach);
}

static int
check_reg (char * t)
{
  /* If this is a reg numb, str 't' must be a number from 0 - 15.  */

  if (strlen (t) > 2 && *(t + 2) != '+')
    return 1;

  while (*t)
    {
      if ((*t < '0' || *t > '9') && *t != '+')
	break;
      t++;
    }

  if (*t)
    return 1;

  return 0;
}

static void 
msp430_substitute_CG(struct msp430_operand_s * op, int workaround)
{
  /* Substitute register mode with a constant generator if applicable.  */
  if( op->mode != OP_EXP || ( op->exp.X_op != O_constant && op->exp.X_op != O_big ))
    return;
  if( op->am != 3 || op->reg != 0 )     // not #N
    return;
  int x = (short) op->exp.X_add_number;	/* Extend sign.  */

  if (x == 0)
    {
      op->reg = 3;
      op->am = 0;
      op->ol = 0;
      op->mode = OP_REG;
    }
  else if (x == 1)
    {
      op->reg = 3;
      op->am = 1;
      op->ol = 0;
      op->mode = OP_REG;
    }
  else if (x == 2)
    {
      op->reg = 3;
      op->am = 2;
      op->ol = 0;
      op->mode = OP_REG;
    }
  else if (x == -1)
    {
      op->reg = 3;
      op->am = 3;
      op->ol = 0;
      op->mode = OP_REG;
    }
  else if (x == 4 && !workaround)
    {
      op->reg = 2;
      op->am = 2;
      op->ol = 0;
      op->mode = OP_REG;
    }
  else if (x == 8 && ! workaround)
    {
      op->reg = 2;
      op->am = 3;
      op->ol = 0;
      op->mode = OP_REG;
    }
}

static int
msp430_srcoperand (struct msp430_operand_s * op,
		   char * l, int * imm_op, int imm_min, int imm_max)
{
  char *__tl = l;

  /* Check if an immediate #VALUE.  The hash sign should be only at the beginning!  */
  if (*l == '#')
    {
      char *h = l;
      int vshift = -1;
      int rval = 0;

      /* Check if there is:
	 llo(x) - least significant 16 bits, x &= 0xffff
	 lhi(x) - x = (x >> 16) & 0xffff,
	 hlo(x) - x = (x >> 32) & 0xffff,
	 hhi(x) - x = (x >> 48) & 0xffff
	 The value _MUST_ be constant expression: #hlo(1231231231).  */

      *imm_op = 1;

      if (strncasecmp (h, "#llo(", 5) == 0)
	{
	  vshift = 0;
	  rval = 3;
	}
      else if (strncasecmp (h, "#lhi(", 5) == 0)
	{
	  vshift = 1;
	  rval = 3;
	}
      else if (strncasecmp (h, "#hlo(", 5) == 0)
	{
	  vshift = 2;
	  rval = 3;
	}
      else if (strncasecmp (h, "#hhi(", 5) == 0)
	{
	  vshift = 3;
	  rval = 3;
	}
      else if (strncasecmp (h, "#lo(", 4) == 0)
	{
	  vshift = 0;
	  rval = 2;
	}
      else if (strncasecmp (h, "#hi(", 4) == 0)
	{
	  vshift = 1;
	  rval = 2;
	}

      op->reg = 0;		/* Reg PC.  */
      op->am = 3;
      op->ol = 1;		/* Immediate  will follow an instruction.  */
      __tl = h + 1 + rval;
      op->mode = OP_EXP;

      parse_exp (__tl, &(op->exp));
      if (op->exp.X_op == O_constant)
	{
	  int x = op->exp.X_add_number;

	  if (vshift == 0)
	    {
	      x = x & 0xffff;
	      op->exp.X_add_number = x;
	    }
	  else if (vshift == 1)
	    {
	      x = (x >> 16) & 0xffff;
	      op->exp.X_add_number = x;
	    }
	  else if (vshift > 1)
	    {
	      if (x < 0)
		op->exp.X_add_number = -1;
	      else
		op->exp.X_add_number = 0;	/* Nothing left.  */
	      x = op->exp.X_add_number;
	    }
          if (x >= imm_max || x < imm_min)
            {
	      as_bad (_("value %d out of %d...%d (0x%X...0x%X) range."), x, imm_min, imm_max - 1, imm_min, imm_max - 1);
	      return 1;
            } 
	}
      else if (op->exp.X_op == O_symbol)
	{
	  op->mode = OP_EXP;
	}
      else if (op->exp.X_op == O_big)
	{
	  if (vshift != -1)
	    {
	      op->exp.X_op = O_constant;
	      op->exp.X_add_number = 0xffff & generic_bignum[vshift];
	    }
	  else
	    {
	      as_bad (_
		      ("unknown expression in operand %s. use #llo() #lhi() #hlo() #hhi() "),
		      l);
	      return 1;
	    }
	}
      /* Redudant (yet) check.  */
      else if (op->exp.X_op == O_register)
	as_bad
	  (_("Registers cannot be used within immediate expression [%s]"), l);
      else
	as_bad (_("unknown operand %s"), l);

      return 0;
    }

  /* Check if absolute &VALUE (assume that we can construct something like ((a&b)<<7 + 25).  */
  if (*l == '&')
    {
      char *h = l;

      op->reg = 2;		/* reg 2 in absolute addr mode.  */
      op->am = 1;		/* mode As == 01 bin.  */
      op->ol = 1;		/* Immediate value followed by instruction.  */
      __tl = h + 1;
      parse_exp (__tl, &(op->exp));
      op->mode = OP_EXP;
      if (op->exp.X_op == O_constant)
	{
	  int x = op->exp.X_add_number;

          if (x >= imm_max || x < imm_min)
	    {
	      as_bad (_("value out of range: %d"), x);
	      return 1;
	    }
	}
      else if (op->exp.X_op == O_symbol)
	;
      else
	{
	  /* Redudant (yet) check.  */
	  if (op->exp.X_op == O_register)
	    as_bad
	      (_("Registers cannot be used within absolute expression [%s]"), l);
	  else
	    as_bad (_("unknown expression in operand %s"), l);
	  return 1;
	}
      return 0;
    }

  /* Check if indirect register mode @Rn / postincrement @Rn+.  */
  if (*l == '@')
    {
      char *t = l;
      char *m = strchr (l, '+');

      if (t != l)
	{
	  as_bad (_("unknown addressing mode %s"), l);
	  return 1;
	}

      t++;
      if (*t != 'r' && *t != 'R')
	{
	  as_bad (_("unknown addressing mode %s"), l);
	  return 1;
	}

      t++;	/* Points to the reg value.  */

      if (check_reg (t))
	{
	  as_bad (_("Bad register name r%s"), t);
	  return 1;
	}

      op->mode = OP_REG;
      op->am = m ? 3 : 2;
      op->ol = 0;
      if (m)
	*m = 0;			/* strip '+' */
      op->reg = atoi (t);
      if (op->reg < 0 || op->reg > 15)
	{
	  as_bad (_("MSP430 does not have %d registers"), op->reg);
	  return 1;
	}

      return 0;
    }

  /* Check if register indexed X(Rn).  */
  do
    {
      char *h = strrchr (l, '(');
      char *m = strrchr (l, ')');
      char *t;

      *imm_op = 1;

      if (!h)
	break;
      if (!m)
	{
	  as_bad (_("')' required"));
	  return 1;
	}

      t = h;
      op->am = 1;
      op->ol = 1;
      /* Extract a register.  */
      t++;	/* Advance pointer.  */

      if (*t != 'r' && *t != 'R')
	{
	  as_bad (_
		  ("unknown operator %s. Did you mean X(Rn) or #[hl][hl][oi](CONST) ?"),
		  l);
	  return 1;
	}
      t++;

      op->reg = *t - '0';
      if (op->reg > 9 || op->reg < 0)
	{
	  as_bad (_("unknown operator (r%s substituded as a register name"),
		  t);
	  return 1;
	}
      t++;
      if (*t != ')')
	{
	  op->reg = op->reg * 10;
	  op->reg += *t - '0';

	  if (op->reg > 15)
	    {
	      as_bad (_("unknown operator %s"), l);
	      return 1;
	    }
	  if (op->reg == 2)
	    {
	      as_bad (_("r2 should not be used in indexed addressing mode"));
	      return 1;
	    }

	  if (*(t + 1) != ')')
	    {
	      as_bad (_("unknown operator %s"), l);
	      return 1;
	    }
	}

      /* Extract constant.  */
      __tl = l;
      *h = 0;
      op->mode = OP_EXP;
      parse_exp (__tl, &(op->exp));
      if (op->exp.X_op == O_constant)
	{
	  int x = op->exp.X_add_number;

          if (x > imm_max || x < imm_min)
	    {
	      as_bad (_("value out of range: %d"), x);
	      return 1;
	    }

	  if (x == 0)
	    {
	      op->mode = OP_REG;
	      op->am = 2;
	      op->ol = 0;
	      return 0;
	    }
	}
      else if (op->exp.X_op == O_symbol)
	;
      else
	{
	  /* Redudant (yet) check.  */
	  if (op->exp.X_op == O_register)
	    as_bad
	      (_("Registers cannot be used as a prefix of indexed expression [%s]"), l);
	  else
	    as_bad (_("unknown expression in operand %s"), l);
	  return 1;
	}

      return 0;
    }
  while (0);

  /* Register mode 'mov r1,r2'.  */
  do
    {
      char *t = l;

      /* Operand should be a register.  */
      if (*t == 'r' || *t == 'R')
	{
	  int x = atoi (t + 1);

	  if (check_reg (t + 1))
	    break;

	  if (x < 0 || x > 15)
	    break;		/* Symbolic mode.  */

	  op->mode = OP_REG;
	  op->am = 0;
	  op->ol = 0;
	  op->reg = x;
	  return 0;
	}
    }
  while (0);

  /* Symbolic mode 'mov a, b' == 'mov x(pc), y(pc)'.  */
  do
    {
      op->mode = OP_EXP;
      op->reg = 0;		/* PC relative... be careful.  */
      op->am = 1;
      op->ol = 1;
      __tl = l;
      parse_exp (__tl, &(op->exp));
      return 0;
    }
  while (0);

  /* Unreachable.  */
  as_bad (_("unknown addressing mode for operand %s"), l);
  return 1;
}


static int
msp430_dstoperand (struct msp430_operand_s * op, char * l, int imm_min, int imm_max)
{
  int dummy;
  int ret = msp430_srcoperand (op, l, & dummy, imm_min, imm_max);

  if (ret)
    return ret;

  if (op->am == 2)
    {
      char *__tl = "0";

      op->mode = OP_EXP;
      op->am = 1;
      op->ol = 1;
      parse_exp (__tl, &(op->exp));

      if (op->exp.X_op != O_constant || op->exp.X_add_number != 0)
	{
	  as_bad (_("Internal bug. Try to use 0(r%d) instead of @r%d"),
		  op->reg, op->reg);
	  return 1;
	}
      return 0;
    }

  if (op->am > 1)
    {
      as_bad (_
	      ("this addressing mode is not applicable for destination operand"));
      return 1;
    }
  return 0;
}

static void
msp430_repeat_insn (int dummy ATTRIBUTE_UNUSED)
{
  char operand[MAX_OP_LEN];
  struct msp430_operand_s op;
  int imm_op = 0;
  char *line = input_line_pointer;

  if (msp430_core(msp430_mcu) < CORE_430X)
    {
      as_bad (_("Repeatable instructions not allowed with %s mcu"), msp430_mcu->name);
      return;
    }

  if (msp430x_repeats)
    as_warn (_("two consecutive .rpt pseudo-ops. Previous .rpt discarded"));
  
  if (!*line || *line == '\n')
    {
      as_bad (_("rpt pseudo-op requires 1 operand"));
      return;
    }

  memset (&op, 0, sizeof (op));

  input_line_pointer = extract_operand (line, operand, sizeof(operand));

  if (msp430_srcoperand(&op, operand, &imm_op, 1, 15) != 0)
    return;
  
  if ( !(op.mode == OP_REG && op.am == 0)   // Rn
    && !(op.mode == OP_EXP && op.am == 3)   // #N
     )
    {
      as_bad (_("rpt pseudo-op requires immediate or register operand"));
      return;
    }

  if (op.am == 0)       // rpt Rn
     msp430x_repeats = (((1 << 7) | op.reg) << 1) | 1;          // last bit as .rpt flag
  else                  // rpt #N
     msp430x_repeats = ((op.exp.X_add_number - 1) << 1) | 1;    // last bit as .rpt flag
}

/* Parse instruction operands.
   Return binary opcode.  */

static unsigned int
msp430_operands (struct msp430_opcode_s const * opcode, char * line)
{
  int bin = opcode->bin_opcode;	/* Opcode mask.  */
  int __is = 0;
  char l1[MAX_OP_LEN], l2[MAX_OP_LEN];
  char *frag = 0;
  int where = 0;
  struct msp430_operand_s op1, op2;
  int res = 0;
  static short ZEROS = 0;
  int imm_op;
  opwidth_t op_width = DEFAULT_OP;
  
  /* Opcode is the one from opcodes table
     line contains something like
     [.w] @r2+, 5(R1)
     or
     .b @r2+, 5(R1)
     or
     .a @r2+, 5(R1)   */

  /* Check if byte or word operation.  */
  
  if (*line == '.' && TOLOWER (*(line + 1)) == 'b')
    {
      op_width = BYTE_OP;
    }
  else if (*line == '.' && TOLOWER (*(line + 1)) == 'w')
    {
      op_width = WORD_OP;
    }
  else if (*line == '.' && TOLOWER (*(line + 1)) == 'a')
    {
      op_width = ADDR_OP;
    }

  if ((op_width == WORD_OP && !(opcode_modifier(opcode) & MOD_W))
      || (op_width == BYTE_OP && !(opcode_modifier(opcode) & MOD_B))
      || (op_width == ADDR_OP && !(opcode_modifier(opcode) & MOD_A))
     )
    {
      static char* const modifier[] = { "", ".w", ".b", ".a" };
      as_bad (_("%s not allowed with %s instruction"),
	      modifier[op_width], opcode->name);
      return 0;
    }

   if ( opcode_format(opcode) ==  FMT_X_DOUBLE_OPERAND 
       || opcode_format(opcode) ==  FMT_X_SINGLE_OPERAND  
       || opcode_format(opcode) ==  FMT_X_EMULATED 
      )
    {
      switch(op_width)
      {
      case DEFAULT_OP:
      case WORD_OP:
          bin |= NON_ADDR_OPERATION;
          break;
      case BYTE_OP:
          bin |= NON_ADDR_OPERATION;
          bin |= BYTE_OPERATION_X;
          break;
      case ADDR_OP:
          bin |= BYTE_OPERATION_X;
          break;
      }
    }
  else
    {
      if(msp430x_repeats)
        {
          as_bad (_("%s instruction is not repeatable"), opcode->name);
          return 0;
        }

      if ( opcode_format(opcode) < FMT_X && op_width == BYTE_OP )         // 430 instructions
        {
          bin |= BYTE_OPERATION;
        }
    }
  /* skip .[abwABW].  */
  while (! ISSPACE (*line) && *line)
    line++;

  if (opcode->insn_opnumb && (!*line || *line == '\n'))
    {
      as_bad (_("instruction %s requires %d operand(s)"),
	      opcode->name, opcode->insn_opnumb);
      return 0;
    }

  memset (l1, 0, sizeof (l1));
  memset (l2, 0, sizeof (l2));
  memset (&op1, 0, sizeof (op1));
  memset (&op2, 0, sizeof (op2));

  imm_op = 0;

  switch (opcode_format(opcode))
    {
    case FMT_EMULATED:			/* Emulated.  */
      switch (opcode_variant(opcode))
	{
	case V_NOOP:
	  /* Set/clear SR bits instructions, ret, nop  */
	  __is = 2;
	  frag = frag_more (__is);
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (__is);
	  break;
	case V_NONE:
	  /* Something which works with destination operand.  */
	  line = extract_operand (line, l1, sizeof (l1));
	  res = msp430_dstoperand (&op1, l1, -(1<<15), (1<<16) );
	  if (res)
	    break;

	  bin |= (op1.reg | (op1.am << 7));
	  __is = 1 + op1.ol;
	  frag = frag_more (2 * __is);
	  where = frag - frag_now->fr_literal;
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2 * __is);

	  if (op1.mode == OP_EXP)
	    {
	      where += 2;
	      bfd_putl16 ((bfd_vma) ZEROS, frag + 2);

	      if (op1.reg)
		fix_new_exp (frag_now, where, 2,
			     &(op1.exp), FALSE, CHECK_RELOC_MSP430);
	      else
		fix_new_exp (frag_now, where, 2,
			     &(op1.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	    }
	  break;

	case V_SHIFT:
	  {
	    /* Shift instruction.  */
	    line = extract_operand (line, l1, sizeof (l1));
	    strncpy (l2, l1, sizeof (l2));
	    l2[sizeof (l2) - 1] = '\0';
	    res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<15), (1<<16));
            msp430_substitute_CG(&op1, 0);
	    res += msp430_dstoperand (&op2, l2, -(1<<15), (1<<16));

	    if (res)
	      break;	/* An error occurred.  All warnings were done before.  */

	    bin |= (op2.reg | (op1.reg << 8) | (op1.am << 4) | (op2.am << 7));

	    __is = 1 + op1.ol + op2.ol;	/* insn size in words.  */
	    frag = frag_more (2 * __is);
	    where = frag - frag_now->fr_literal;
	    bfd_putl16 ((bfd_vma) bin, frag);
	    dwarf2_emit_insn (2 * __is);
	    
	    if (op1.mode == OP_EXP)
	      {
		where += 2;	/* Advance 'where' as we do not know _where_.  */
		bfd_putl16 ((bfd_vma) ZEROS, frag + 2);

		if (op1.reg || (op1.reg == 0 && op1.am == 3))	/* Not PC relative.  */
		  fix_new_exp (frag_now, where, 2,
			       &(op1.exp), FALSE, CHECK_RELOC_MSP430);
		else
		  fix_new_exp (frag_now, where, 2,
			       &(op1.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	      }

	    if (op2.mode == OP_EXP)
	      {
                /*
                  x(Rn). x can be odd in non-byte operations
                  except x(R2) = x(0) = &TONI and x(PC) = TONI
                */
	        imm_op = (op2.mode == 1 && op2.reg != 2 && op2.reg != 0);

		bfd_putl16 ((bfd_vma) ZEROS, frag + 2 + ((__is == 3) ? 2 : 0));

		if (op2.reg)	/* Not PC relative.  */
		  fix_new_exp (frag_now, where + 2, 2,
			       &(op2.exp), FALSE, CHECK_RELOC_MSP430);
		else
		  fix_new_exp (frag_now, where + 2, 2,
			       &(op2.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	      }
	    break;
	  }
	case V_BR:
	  /* Branch instruction => mov dst, r0.  */
	  line = extract_operand (line, l1, sizeof (l1));

	  res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<15), (1<<16));
          msp430_substitute_CG(&op1, 0);
	  if (res)
	    break;

	  if (op1.mode == 1 && (op1.reg == 2 || op1.reg == 0))
            /*
              x(Rn). x can be odd in non-byte operations
              except x(R2) = x(0) = &EDE and x(PC) = EDE
            */
	    imm_op = 0;

	  bin |= ((op1.reg << 8) | (op1.am << 4));
	  __is = 1 + op1.ol;
	  frag = frag_more (2 * __is);
	  where = frag - frag_now->fr_literal;
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2 * __is);

	  if (op1.mode == OP_EXP)
	    {
	      where += 2;
	      bfd_putl16 ((bfd_vma) ZEROS, frag + 2);

	      if (op1.reg || (op1.reg == 0 && op1.am == 3))
		fix_new_exp (frag_now, where, 2,
			     &(op1.exp), FALSE, CHECK_RELOC_MSP430);
	      else
		fix_new_exp (frag_now, where, 2,
			     &(op1.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	    }
	  break;
	}
      break;

    case FMT_DOUBLE_OPERAND:		/* Format 1, double operand.  */
      line = extract_operand (line, l1, sizeof (l1));
      line = extract_operand (line, l2, sizeof (l2));
      res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<15), (1<<16));
      msp430_substitute_CG(&op1, 0);
      res += msp430_dstoperand (&op2, l2, -(1<<15), (1<<16));

      if (res)
	break;			/* Error occurred.  All warnings were done before.  */

      bin |= (op2.reg | (op1.reg << 8) | (op1.am << 4) | (op2.am << 7));

      __is = 1 + op1.ol + op2.ol;	/* insn size in words.  */
      frag = frag_more (2 * __is);
      where = frag - frag_now->fr_literal;
      bfd_putl16 ((bfd_vma) bin, frag);
      dwarf2_emit_insn (2 * __is);

      if (op1.mode == OP_EXP)
	{
	  where += 2;		/* Advance where as we do not know _where_.  */
	  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);

	  if (op1.reg || (op1.reg == 0 && op1.am == 3))	/* Not PC relative.  */
	    fix_new_exp (frag_now, where, 2,
			 &(op1.exp), FALSE, CHECK_RELOC_MSP430);
	  else
	    fix_new_exp (frag_now, where, 2,
			 &(op1.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	}

      if (op2.mode == OP_EXP)
	{
          /*
            x(Rn). x can be odd in non-byte operations
            except x(R2) = x(0) = &TONI and x(PC) = TONI
          */
	  imm_op = (op2.mode == 1 && op2.reg != 2 && op2.reg != 0);

	  bfd_putl16 ((bfd_vma) ZEROS, frag + 2 + ((__is == 3) ? 2 : 0));

	  if (op2.reg)		/* Not PC relative.  */
	    fix_new_exp (frag_now, where + 2, 2,
			 &(op2.exp), FALSE, CHECK_RELOC_MSP430);
	  else
	    fix_new_exp (frag_now, where + 2, 2,
			 &(op2.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	}
      break;

    case FMT_SINGLE_OPERAND:			/* Single-operand mostly instr.  */
      if (opcode_variant(opcode) == V_RETI)
	{
	  /* reti instruction.  */
	  frag = frag_more (2);
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2);
	  break;
	}

      line = extract_operand (line, l1, sizeof (l1));
      res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<15), (1<<16));
      if (res)
	break;		/* Error in operand.  */
      msp430_substitute_CG(&op1, (msp430_mcu->isa & CPU4_BUG) && (opcode->bin_opcode == 0x1200));

      bin |= op1.reg | (op1.am << 4);
      __is = 1 + op1.ol;
      frag = frag_more (2 * __is);
      where = frag - frag_now->fr_literal;
      bfd_putl16 ((bfd_vma) bin, frag);
      dwarf2_emit_insn (2 * __is);

      if (op1.mode == OP_EXP)
	{
	  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);

	  if (op1.reg || (op1.reg == 0 && op1.am == 3))	/* Not PC relative.  */
	    fix_new_exp (frag_now, where + 2, 2,
			 &(op1.exp), FALSE, CHECK_RELOC_MSP430);
	  else
	    fix_new_exp (frag_now, where + 2, 2,
			 &(op1.exp), TRUE, CHECK_RELOC_MSP430_PCREL);
	}
      break;

    case FMT_JUMP:			/* Conditional jumps instructions.  */
      line = extract_operand (line, l1, sizeof (l1));
      /* l1 is a label.  */
      if (l1[0])
	{
	  char *m = l1;
	  expressionS exp;

	  if (*m == '$')
	    m++;

	  parse_exp (m, &exp);
	  frag = frag_more (2);	/* Instr size is 1 word.  */

	  /* In order to handle something like:

	     and #0x8000, r5
	     tst r5
	     jz   4     ;       skip next 4 bytes
	     inv r5
	     inc r5
	     nop        ;       will jump here if r5 positive or zero

	     jCOND      -n      ;assumes jump n bytes backward:

	     mov r5,r6
	     jmp -2

	     is equal to:
	     lab:
	     mov r5,r6
	     jmp lab

	     jCOND      $n      ; jump from PC in either direction.  */

	  if (exp.X_op == O_constant)
	    {
	      int x = exp.X_add_number;

	      if (x & 1)
		{
		  as_warn (_("Even number required. Rounded to %d"), x + 1);
		  x++;
		}

	      if ((*l1 == '$' && x > 0) || x < 0)
		x -= 2;

	      x >>= 1;

	      if (x > 512 || x < -511)
		{
		  as_bad (_("Wrong displacement  %d"), x << 1);
		  break;
		}

	      bin |= x & 0x3ff;
	      bfd_putl16 ((bfd_vma) bin, frag);
	    }
	  else if (exp.X_op == O_symbol && *l1 != '$')
	    {
	      where = frag - frag_now->fr_literal;
	      fix_new_exp (frag_now, where, 2,
			   &exp, TRUE, BFD_RELOC_MSP430_10_PCREL);

	      bfd_putl16 ((bfd_vma) bin, frag);
	    }
	  else if (*l1 == '$')
	    {
	      as_bad (_("instruction requires label sans '$'"));
              break;
	    }
	  else
	    {
	      as_bad (_
		      ("instruction requires label or value in range -511:512"));
              break;
	    }
	  dwarf2_emit_insn (2 * __is);
	  break;
	}
      else
	{
	  as_bad (_("instruction requires label"));
	  break;
	}
      break;

    case FMT_EMULATED_POLYMORPH_JUMP:	/* Extended jumps.  */
      if (!msp430_enable_polys)
	{
	  as_bad(_("polymorphs are not enabled. Use -mP option to enable."));
	  break;
	}
	
      line = extract_operand (line, l1, sizeof (l1));
      if (l1[0])
	{
	  char *m = l1;
	  expressionS exp;

	  /* Ignore absolute addressing. make it PC relative anyway.  */
	  if (*m == '#' || *m == '$')
	    m++;

	  parse_exp (m, & exp);
	  if (exp.X_op == O_symbol)
	    {
	      /* Relaxation required.  */
	      struct rcodes_s rc = msp430_rcodes[opcode_variant(opcode)];

	      /* The parameter to dwarf2_emit_insn is actually the offset to the start
		 of the insn from the fix piece of instruction that was emitted.
		 Since next fragments may have variable size we tie debug info
	         to the beginning of the instruction. */
	      frag = frag_more (8);
	      dwarf2_emit_insn (0);
	      bfd_putl16 ((bfd_vma) rc.sop, frag);
	      frag = frag_variant (rs_machine_dependent, 8, 2,
				   ENCODE_RELAX (rc.lpos, STATE_BITS10), /* Wild guess.  */
				   exp.X_add_symbol,
				   0,	/* Offset is zero if jump dist less than 1K.  */
				   (char *) frag);
	      break;
	    }
	}

      as_bad (_("instruction requires label"));
      break;

    case FMT_EMULATED_LONG_POLYMORPH_JUMP:	/* Emulated extended branches.  */
      if (!msp430_enable_polys)
	{
	  as_bad(_("polymorphs are not enabled. Use -mP option to enable."));
	  break;
	}
      line = extract_operand (line, l1, sizeof (l1));
      if (l1[0])
	{
	  char * m = l1;
	  expressionS exp;

	  /* Ignore absolute addressing. make it PC relative anyway.  */
	  if (*m == '#' || *m == '$')
	    m++;

	  parse_exp (m, & exp);
	  if (exp.X_op == O_symbol)
	    {
	      /* Relaxation required.  */
	      struct hcodes_s hc = msp430_hcodes[opcode_variant(opcode)];

	      frag = frag_more (8);
	      dwarf2_emit_insn (0);
	      bfd_putl16 ((bfd_vma) hc.op0, frag);
	      bfd_putl16 ((bfd_vma) hc.op1, frag+2);

	      frag = frag_variant (rs_machine_dependent, 8, 2,
				   ENCODE_RELAX (STATE_EMUL_BRANCH, STATE_BITS10), /* Wild guess.  */
				   exp.X_add_symbol,
				   0,	/* Offset is zero if jump dist less than 1K.  */
				   (char *) frag);
	      break;
	    }
	}

      as_bad (_("instruction requires label"));
      break;

    case FMT_X_DOUBLE_OPERAND:		/* Extended Format 1 ( double operand). */
      line = extract_operand (line, l1, sizeof (l1));
      line = extract_operand (line, l2, sizeof (l2));
      res = msp430_srcoperand (&op1, l1,  &imm_op, -(1<<19), (1<<20));
      msp430_substitute_CG(&op1, 0);
      res += msp430_dstoperand (&op2, l2, -(1<<19), (1<<20));

      if (res)
	break;			/* Error occurred.  All warnings were done before.  */

      if (msp430x_repeats)
        {
          if (op1.mode != OP_REG || op2.mode != OP_REG)
            {
              as_bad(_("Repeated instruction must have register mode operands"));
              break;
            }
          bin |= msp430x_repeats >> 1;
          msp430x_repeats = 0;
        }

      bin |= (op2.reg | (op1.reg << 8) | (op1.am << 4) | (op2.am << 7)) << 16;

      __is = 2 + op1.ol + op2.ol;	/* insn size in words, opcode is 2 words wide.  */
      frag = frag_more (2 * __is);
      where = frag - frag_now->fr_literal;
      bfd_putl32 ((bfd_vma) bin, frag);
      dwarf2_emit_insn (2 * __is);

      if (op1.mode == OP_EXP)
	{
	  bfd_putl16 ((bfd_vma) ZEROS, frag + 4);

	  if (op1.reg || (op1.reg == 0 && op1.am == 3))	/* Not PC relative.  */
	    fix_new_exp (frag_now, where, 2,
			 &(op1.exp), FALSE, CHECK_RELOC_MSP430X_SRC);
	  else
	    fix_new_exp (frag_now, where , 2,
			 &(op1.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_SRC);
	}

      if (op2.mode == OP_EXP)
	{
          /*
            x(Rn). x can be odd in non-byte operations
            except x(R2) = x(0) = &TONI and x(PC) = TONI
          */
	  imm_op = (op2.mode == 1 && op2.reg != 2 && op2.reg != 0);
	  bfd_putl16 ((bfd_vma) ZEROS, frag + 4 + ((__is == 4) ? 2 : 0));

          if (op1.mode == OP_EXP)
            {
	      if (op2.reg)		/* Not PC relative.  */
		fix_new_exp (frag_now, where, 2,
				 &(op2.exp), FALSE, CHECK_RELOC_MSP430X_DST_2ND);
	      else
		fix_new_exp (frag_now, where, 2,
				 &(op2.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_DST_2ND);
            }
	  else
            {
              if (op2.reg)		/* Not PC relative.  */
		fix_new_exp (frag_now, where, 2,
				 &(op2.exp), FALSE, CHECK_RELOC_MSP430X_DST);
	      else
		fix_new_exp (frag_now, where, 2,
				 &(op2.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_DST);
            }
	}
      break;

    case FMT_X_SINGLE_OPERAND:		/* Extended format 2 (single-operand). */
      line = extract_operand (line, l1, sizeof (l1));
      res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<19), (1<<20));
      msp430_substitute_CG(&op1, 0);
      if (res)
	break;		/* Error in operand.  */

      if (opcode_variant(opcode) != V_PUSHX && op1.mode == OP_EXP && op1.am == 3) // #N
        {
          as_bad (_("bad operand [%s]"), l1);
          break;
        }

      if (msp430x_repeats)
        {
          if (op1.mode != OP_REG)
            {
              as_bad(_("Repeated instruction must have register mode operand"));
              break;
            }
          bin |= msp430x_repeats >> 1;
          msp430x_repeats = 0;
        }

      if(opcode_variant(opcode) == V_SWPSXT && op_width == ADDR_OP)
        {       // sxtx.a | swpbx.a opcode
          bin ^= BYTE_OPERATION_X;
        }
        
      bin |= (op1.reg | (op1.am << 4)) << 16;
      __is = 2 + op1.ol;		/* insn size in words, opcode is 2 words wide.  */
      frag = frag_more (2 * __is);
      where = frag - frag_now->fr_literal;
      bfd_putl32 ((bfd_vma) bin, frag);
      dwarf2_emit_insn (2 * __is);

      if (op1.mode == OP_EXP)
	{
	  bfd_putl16 ((bfd_vma) ZEROS, frag + 4);

	  if (op1.reg || (op1.reg == 0 && op1.am == 3))	/* Not PC relative.  */
	    fix_new_exp (frag_now, where, 2,
			 &(op1.exp), FALSE, CHECK_RELOC_MSP430X_DST);
	  else
	    fix_new_exp (frag_now, where, 2,
			 &(op1.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_DST);
	}
      break;

    case FMT_X_EXCEPTION:
      /* calla, pushm, popm, rrcm, rrum, rram, rlam */
      bin = opcode->bin_opcode;   // remove WB/AL bits
      line = extract_operand (line, l1, sizeof (l1));
      switch(opcode_variant(opcode))
        {
        case V_CALLA:   // calla
          res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<19), (1<<20));
          if (res)
	    break;		/* Error in operand.  */
          __is = 1 + op1.ol;
          frag = frag_more(__is * 2);

          if (op1.mode == OP_REG)
            {
              bin |= op1.reg;
              switch (op1.am)
                {
                case 0:         // Rdst
                  bin |= 0x0040;
                  break;
                case 2:         // @Rdst
                  bin |= 0x0060;
                  break;
                case 3:         // @Rdst+
                  bin |= 0x0070;
                  break;
                }
              bin |= op1.reg;
              bfd_putl16 ((bfd_vma) bin, frag);
              dwarf2_emit_insn (__is * 2);
            }
          else if (op1.mode == OP_EXP)
            {
              bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
              where = frag - frag_now->fr_literal;
              switch (op1.am)
                {
                case 1:
                  switch(op1.reg)
                    {
                    case 0:     // x(PC) = EDE
                      bin |= 0x0090;
                      bfd_putl16 ((bfd_vma) bin, frag);
                      fix_new_exp (frag_now, where, 2,
			  	    &(op1.exp), TRUE, BFD_RELOC_MSP430X_PCREL_D);
                      break;
                    case 2:     // &abs20
                      bin |= 0x0080;
                      bfd_putl16 ((bfd_vma) bin, frag);
                      fix_new_exp (frag_now, where, 2,
			  	    &(op1.exp), FALSE, BFD_RELOC_MSP430X_D);
                      break;
                    default:    //z16(Rdst)
                      bin |= 0x0050 | op1.reg;
                      bfd_putl16 ((bfd_vma) bin, frag);
                      fix_new_exp (frag_now, where, 2,
			  	    &(op1.exp), FALSE, BFD_RELOC_MSP430X_INDXD);
                      break;
                    }
                  break;
                case 3:         // calla #imm
                  bin |= 0x00b0;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  fix_new_exp (frag_now, where, 2,
                                &(op1.exp), FALSE, BFD_RELOC_MSP430X_D);
                  break;
                }
              dwarf2_emit_insn (__is * 2);
            }
          break;
        case V_ROTM:   // rxxm
          line = extract_operand(line, l2, sizeof(l2));
          res = msp430_srcoperand (&op1, l1, &imm_op, 1, 5);
          res += msp430_dstoperand (&op2, l2, -(1<<19), (1<<20));
          if(res)
             break;	/* An error occurred.  All warnings were done before.  */

          if(op_width != ADDR_OP)
            bin |= (1 << 4);

          if(op1.mode != OP_EXP || op1.am != 3) // not #imm
            {
              as_bad (_("bad operand [%s]"), l1);
              break;
            }
          
          bin |= ((op1.exp.X_add_number - 1) & 0x0003) << 10;
          
          if(op2.mode != OP_REG)
            {
              as_bad (_("bad operand [%s]"), l2);
              break;
            }
          bin |= op2.reg;

	  frag = frag_more (2);
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2);
          break;
        case V_PUSHM:
        case V_POPM:
          line = extract_operand(line, l2, sizeof(l2));
          res = msp430_srcoperand (&op1, l1, &imm_op, 1, 17);
          res += msp430_dstoperand (&op2, l2, -(1<<19), (1<<20));
          if(res)
             break;	/* An error occurred.  All warnings were done before.  */


          if(imm_op == 0)
            {
              as_bad (_("bad operand [%s]"), l1);
              break;
            }

          if(op_width != ADDR_OP)
            {
              bin |= (1 << 8);
            }
          bin |= ((op1.exp.X_add_number - 1) & 0x000F) << 4;

          if(op2.mode != OP_REG)
            {
              as_bad (_("bad operand [%s]"), l2);
              break;
            }
          if(opcode_variant(opcode) == V_POPM)
            {
              /* popm */
              bin |= (op2.reg - op1.exp.X_add_number + 1) & 0x000F;
            }
          else
            {
              /* pushm */
              bin |= op2.reg;
            }

          frag = frag_more (2);
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2);
          break;
        }
      break;
    case FMT_X_ADDRESS:
    /* mova, adda, suba, cmpa */
      line = extract_operand (line, l1, sizeof (l1));
      line = extract_operand (line, l2, sizeof (l2));
      res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<19), (1<<20));
      res += msp430_dstoperand (&op2, l2, -(1<<19), (1<<20));
      if (res)
        break;		/* Error in operand.  */

      __is = 1 + op1.ol + op2.ol; 
      frag = frag_more(__is * 2);
      where = frag - frag_now->fr_literal;
      bin = opcode->bin_opcode;   // remove WB/AL bits
      if( opcode_variant(opcode) == V_MOVA)
        {
          if (op1.mode == OP_REG && op1.am == 0)
            { // Rsrc
              if(op2.mode == OP_REG && op2.am == 0) 
                {
                  // mova Rsrc, Rdst
                  bin |= 0x00c0 | op1.reg << 8 | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                }
              else if(op2.mode == OP_EXP && op2.am == 1 && op2.reg == 2)
                {
                  // mova Rsrc, &abs20
                  bin |= 0x0060 | op1.reg << 8;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  fix_new_exp (frag_now, where, 2,
                                &(op2.exp), FALSE, BFD_RELOC_MSP430X_D);
                }
              else if(op2.mode == OP_EXP && op2.am == 1 && op2.reg == 0)
                {
                  bin |= 0x0070 | op1.reg << 8;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  fix_new_exp (frag_now, where, 2,
                                &(op2.exp), TRUE, BFD_RELOC_MSP430X_PCREL_D);
                }
              else if(op2.mode == OP_EXP && op2.am == 1)
                {
                  // mova Rsrc, z16(Rdst)
                  bin |= 0x0070 | op1.reg << 8 | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  if(op2.reg == 0)
                    // mova Rsrc, TONI == mova Rsrc, z16(PC)
                    fix_new_exp (frag_now, where, 2,
                                &(op2.exp), TRUE, BFD_RELOC_MSP430X_PCREL_INDXD);
                  else
                    fix_new_exp (frag_now, where, 2,
                                &(op2.exp), FALSE, BFD_RELOC_MSP430X_INDXD);
                }
              else
		as_bad (_("destination operand address mode not allowed with mova instruction"));
                
            }
          else if (op2.mode == OP_REG && op2.am == 0)
            { // Rdst
              if(op1.mode == OP_REG && op1.am == 2)     
                {
                  // mova @Rsrc, Rdst
                  bin |= 0x0000 | op1.reg << 8 | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                }
              else if (op1.mode == OP_REG && op1.am == 3)
                {
                  // mova @Rsrc+, Rdst
                  bin |= 0x0010 | op1.reg << 8 | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                }
              else if (op1.mode == OP_EXP && op1.am == 1 && op1.reg == 2)
                {
                  if (op1.reg == 2)
                    {
                      // mova &abs20, Rdst
                      bin |= 0x0020  | op2.reg;
                      bfd_putl16 ((bfd_vma) bin, frag);
                      dwarf2_emit_insn (__is * 2);
                      bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                      fix_new_exp (frag_now, where, 2,
                                    &(op1.exp), FALSE, BFD_RELOC_MSP430X_S);
                    }
                  else
                    {
                      // mova z16(Rsrc), Rdst
                      bin |= 0x0030 | op1.reg << 8 | op2.reg;
                      bfd_putl16 ((bfd_vma) bin, frag);
                      dwarf2_emit_insn (__is * 2);
                      bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                      if (op1.reg == 0)
                        // mova TONI, Rdst
                        fix_new_exp (frag_now, where, 2,
                                     &(op1.exp), FALSE, BFD_RELOC_MSP430X_PCREL_INDXD);
                      else
                        fix_new_exp (frag_now, where, 2,
                                     &(op1.exp), FALSE, BFD_RELOC_MSP430X_INDXD);
                    }
                }
              else if (op1.mode == OP_EXP && op1.am == 3)
                {
                  // mova #imm20, Rdst
                  bin |= 0x0080  | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  if (op2.reg == 0)
                    fix_new_exp (frag_now, where, 2,
                                  &(op1.exp), FALSE, BFD_RELOC_MSP430X_S);
                  else
                    fix_new_exp (frag_now, where, 2,
                                  &(op1.exp), FALSE, BFD_RELOC_MSP430X_S_BYTE);
                }
              else
		as_bad (_("source operand address mode not allowed with mova instruction"));
            }
          break;
        }
      else   
      /* adda, suba, cmpa */
        {
          if(op2.mode == OP_REG && op2.am == 0) 
            {
              if (op1.mode == OP_REG && op1.am == 0)
                { // Rsrc, Rdst
                  bin |= 0x0040 | op1.reg << 8 | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                }
              else if (op1.mode == OP_EXP && op1.am == 3)
                {
                  // #imm20, Rdst
                  bin |= 0x0080  | op2.reg;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  if (op2.reg == 0)
                    fix_new_exp (frag_now, where, 2,
                                  &(op1.exp), FALSE, BFD_RELOC_MSP430X_S);
                  else
                    fix_new_exp (frag_now, where, 2,
                                  &(op1.exp), FALSE, BFD_RELOC_MSP430X_S_BYTE);
                }
              else
		as_bad (_("source operand address mode not allowed with %s instruction"), opcode->name);
            }
          else   
            as_bad (_("destination operand address mode not allowed with %s instruction"), opcode->name);
          break;
        }
      break;

    case FMT_X_EMULATED:		/* Extended emulated.  */
      switch (opcode_variant(opcode))
	{
	case V_NONE:
	  /* single operand instruction emulated with Extended type 1 (double operand) instructions.  */
	  line = extract_operand (line, l1, sizeof (l1));
	  res = msp430_dstoperand (&op1, l1, -(1<<19), (1<<20) );
	  if (res)
	    break;

          if (msp430x_repeats)
            {
              if ((bin >> 20) && 0x3 == 1) 
                {
                  as_bad (_("%s instruction is not repeatable"), opcode->name);
                  break;
                }
              if (op1.mode != OP_REG)
                {
                  as_bad(_("Repeated instruction must have register mode operand"));
                  break;
                }
              bin |= msp430x_repeats >> 1;
              msp430x_repeats = 0;
            }

          bin |= (op1.reg | (op1.am << 7)) << 16;
	  __is = 2 + op1.ol;
	  frag = frag_more (2 * __is);
	  where = frag - frag_now->fr_literal;
	  bfd_putl32 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2 * __is);

	  if (op1.mode == OP_EXP)
	    {
              /*
                x(Rn). x can be odd in non-byte operations
                except x(R2) = x(0) = &TONI and x(PC) = TONI
              */
	      imm_op = (op2.mode == 1 && op2.reg != 2 && op2.reg != 0);

	      bfd_putl16 ((bfd_vma) ZEROS, frag + 4);
	      if (op1.reg || (op1.reg == 0 && op1.am == 3))
		fix_new_exp (frag_now, where, 2,
			     &(op1.exp), FALSE, CHECK_RELOC_MSP430X_DST);
	      else
		fix_new_exp (frag_now, where, 2,
			     &(op1.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_DST);
	    }
	  break;
	case V_X_SHIFT:
	  {
	    /* Shift instruction.  */
	    line = extract_operand (line, l1, sizeof (l1));
	    strncpy (l2, l1, sizeof (l2));
	    l2[sizeof (l2) - 1] = '\0';
	    res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<19), (1<<20));
            msp430_substitute_CG(&op1, 0);
	    res += msp430_dstoperand (&op2, l2, -(1<<19), (1<<20));

	    if (res)
	      break;	/* An error occurred.  All warnings were done before.  */

            if (msp430x_repeats)
              {
                if (op2.mode != OP_REG)
                  {
                    as_bad(_("Repeated instruction must have register mode operands"));
                    break;
                  }
                bin |= msp430x_repeats >> 1;
                msp430x_repeats = 0;
              }

	    bin |= (op2.reg | (op1.reg << 8) | (op1.am << 4) | (op2.am << 7)) << 16;

	    __is = 2 + op1.ol + op2.ol;	/* insn size in words.  */
	    frag = frag_more (2 * __is);
	    where = frag - frag_now->fr_literal;
	    bfd_putl32 ((bfd_vma) bin, frag);
	    dwarf2_emit_insn (2 * __is);
	    
	    if (op1.mode == OP_EXP)
	      {
		bfd_putl16 ((bfd_vma) ZEROS, frag + 4);

		if (op1.reg || (op1.reg == 0 && op1.am == 3))	/* Not PC relative.  */
		  fix_new_exp (frag_now, where, 2,
			       &(op1.exp), FALSE, CHECK_RELOC_MSP430X_SRC);
		else
		  fix_new_exp (frag_now, where, 2,
			       &(op1.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_SRC);
	      }

	    if (op2.mode == OP_EXP)
	      {
                /*
                  x(Rn). x can be odd in non-byte operations
                  except x(R2) = x(0) = &TONI and x(PC) = TONI
                */
	        imm_op = (op2.mode == 1 && op2.reg != 2 && op2.reg != 0);
                
		bfd_putl16 ((bfd_vma) ZEROS, frag + 4 + ((__is == 4) ? 2 : 0));
                if (op1.mode == OP_EXP)
	          {

		    if (op2.reg)	/* Not PC relative.  */
		      fix_new_exp (frag_now, where, 2,
			           &(op2.exp), FALSE, CHECK_RELOC_MSP430X_DST_2ND);
		    else
		      fix_new_exp (frag_now, where, 2,
			           &(op2.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_DST_2ND);
                  }
                else
	          {

		    if (op2.reg)	/* Not PC relative.  */
		      fix_new_exp (frag_now, where, 2,
			           &(op2.exp), FALSE, CHECK_RELOC_MSP430X_DST);
		    else
		      fix_new_exp (frag_now, where, 2,
			           &(op2.exp), TRUE, CHECK_RELOC_MSP430X_PCREL_DST);
                  }
	      }
          }
          break;
	case V_RETA:
	  /* reta  */
          if (msp430x_repeats)
            {
              as_bad (_("%s instruction is not repeatable"), opcode->name);
              break;
            }
          bin = opcode->bin_opcode;   // remove WB/AL bits
	  frag = frag_more (2);
	  bfd_putl16 ((bfd_vma) bin, frag);
	  dwarf2_emit_insn (2);
	  break;
        case V_EMU_ADDR:   // incda, decda, tsta
          if (msp430x_repeats)
            {
              as_bad (_("%s instruction is not repeatable"), opcode->name);
              break;
            }
          bin = opcode->bin_opcode;   // remove WB/AL bits
          line = extract_operand (line, l1, sizeof (l1));
          res = msp430_dstoperand (&op1, l1, -(1<<19), (1<<20) );
	  if (res)
	    break;

          if(op1.mode == OP_REG && op1.am == 0)     
            {
              frag = frag_more(2);
              bin |= op1.reg;
              bfd_putl16 ((bfd_vma) bin, frag);
              dwarf2_emit_insn (2);
            }
          else
            as_bad (_("destination operand address mode not allowed with %s instruction"), opcode->name);
          break;
        case V_BRA:   // bra, emulated with Address type instruction
          if (msp430x_repeats)
            {
              as_bad (_("%s instruction is not repeatable"), opcode->name);
              break;
            }

          bin = opcode->bin_opcode;   // remove WB/AL bits
          line = extract_operand (line, l1, sizeof (l1));
          res = msp430_srcoperand (&op1, l1, &imm_op, -(1<<19), (1<<20));
          if (res)
	    break;		/* Error in operand.  */

          __is = 1 + op1.ol; 
          frag = frag_more(__is * 2);
	  where = frag - frag_now->fr_literal;
          if (op1.mode == OP_REG && op1.am == 0)     
            {
              // mova Rsrc, PC
              bin |= 0x00C0 | op1.reg << 8;
              bfd_putl16 ((bfd_vma) bin, frag);
              dwarf2_emit_insn (__is * 2);
            }
          else if(op1.mode == OP_REG && op1.am == 2)     
            {
              // mova @Rsrc, PC
              bin |= 0x0000 | op1.reg << 8;
              bfd_putl16 ((bfd_vma) bin, frag);
              dwarf2_emit_insn (__is * 2);
            }
          else if (op1.mode == OP_REG && op1.am == 3)
            {
              // mova @Rsrc+, PC
              bin |= 0x0010 | op1.reg << 8;
              bfd_putl16 ((bfd_vma) bin, frag);
              dwarf2_emit_insn (__is * 2);
            }
          else if (op1.mode == OP_EXP && op1.am == 1)
            {
              if (op1.reg == 2)
                {
                  // mova &abs20, PC
                  bin |= 0x0020;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  fix_new_exp (frag_now, where, 2,
                               &(op1.exp), FALSE, BFD_RELOC_MSP430X_S);
                }
              else
                {
                  // mova z16(Rsrc), PC
                  bin |= 0x0030 | op1.reg << 8;
                  bfd_putl16 ((bfd_vma) bin, frag);
                  dwarf2_emit_insn (__is * 2);
                  bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
                  if (op1.reg == 0)
                    // mova z16(PC), PC = mova TONI, PC
                    fix_new_exp (frag_now, where, 2,
                                 &(op1.exp), TRUE, BFD_RELOC_MSP430X_PCREL_INDXD);
                  else
                    fix_new_exp (frag_now, where, 2,
                                 &(op1.exp), FALSE, BFD_RELOC_MSP430X_INDXD);
                }
            }
          else if (op1.mode == OP_EXP && op1.am == 3)
            {
              // mova #imm20, Rdst
              bin |= 0x0080;
              bfd_putl16 ((bfd_vma) bin, frag);
              dwarf2_emit_insn (__is * 2);
              bfd_putl16 ((bfd_vma) ZEROS, frag + 2);
              fix_new_exp (frag_now, where, 2,
                            &(op1.exp), FALSE, BFD_RELOC_MSP430X_S);
            }
          else
            as_bad (_("source operand address mode not allowed with bra instruction"));
        }
      break;
    default:
      as_bad (_("Ilegal instruction or not implmented opcode."));
    }

  input_line_pointer = line + 1;        // skip trailing zero
  return 0;
}

void
md_assemble (char * str)
{
  struct msp430_opcode_s const * opcode;
  char cmd[32];
  unsigned int i = 0;

  str = skip_space (str);	/* Skip leading spaces.  */
  str = extract_cmd (str, cmd, sizeof (cmd));

  while (cmd[i] && i < sizeof (cmd))
    {
      char a = TOLOWER (cmd[i]);
      cmd[i] = a;
      i++;
    }

  if (!cmd[0])
    {
      as_bad (_("can't find opcode "));
      return;
    }

  opcode = (struct msp430_opcode_s const *) hash_find (msp430_hash, cmd);

  if (opcode == NULL)
    {
      as_bad (_("unknown opcode `%s'"), cmd);
      return;
    }

  if (msp430_core(msp430_mcu) < CORE_430X && opcode_format(opcode) >= FMT_X)
    {
      as_bad (_("Extended instruction (%s) not allowed with %s mcu"), opcode->name, msp430_mcu->name);
      return;
    }

  {
    char *__t = input_line_pointer;

    msp430_operands (opcode, str);
    input_line_pointer = __t;
  }
}

/* GAS will call this function for each section at the end of the assembly,
   to permit the CPU backend to adjust the alignment of a section.  */

valueT
md_section_align (asection * seg, valueT addr)
{
  int align = bfd_get_section_alignment (stdoutput, seg);

  return ((addr + (1 << align) - 1) & (-1 << align));
}

/* If you define this macro, it should return the offset between the
   address of a PC relative fixup and the position from which the PC
   relative adjustment should be made.  On many processors, the base
   of a PC relative instruction is the next instruction, so this
   macro would return the length of an instruction.  */

long
md_pcrel_from_section (fixS * fixp, segT sec)
{
  if (fixp->fx_addsy != (symbolS *) NULL
      && (!S_IS_DEFINED (fixp->fx_addsy)
	  || (S_GET_SEGMENT (fixp->fx_addsy) != sec)))
    return 0;

  return fixp->fx_frag->fr_address + fixp->fx_where;
}

/* Replaces standard TC_FORCE_RELOCATION_LOCAL.
   Now it handles the situation when relocations
   have to be passed to linker. */
int
msp430_force_relocation_local(fixS *fixp)
{
  if (msp430_enable_polys
        && !msp430_enable_relax)
    return 1;
  else
    return (!fixp->fx_pcrel
	    || generic_force_reloc(fixp));
}


/* GAS will call this for each fixup.  It should store the correct
   value in the object file.  */
void
md_apply_fix (fixS * fixp, valueT * valuep, segT seg)
{
  unsigned char * where;
  unsigned long insn;
  long value;

  if (fixp->fx_addsy == (symbolS *) NULL)
    {
      value = *valuep;
      fixp->fx_done = 1;
    }
  else if (fixp->fx_pcrel)
    {
      segT s = S_GET_SEGMENT (fixp->fx_addsy);

      if (fixp->fx_addsy && (s == seg || s == absolute_section))
	{
	  /* FIXME: We can appear here only in case if we perform a pc
	     relative jump to the label which is i) global, ii) locally
	     defined or this is a jump to an absolute symbol.
	     If this is an absolute symbol -- everything is OK.
	     If this is a global label, we've got a symbol value defined
	     twice:
               1. S_GET_VALUE (fixp->fx_addsy) will contain a symbol offset
	          from this section start
               2. *valuep will contain the real offset from jump insn to the
	          label
	     So, the result of S_GET_VALUE (fixp->fx_addsy) + (* valuep);
	     will be incorrect. Therefore remove s_get_value.  */
	  value = /* S_GET_VALUE (fixp->fx_addsy) + */ * valuep;
	  fixp->fx_done = 1;
	}
      else
	value = *valuep;
    }
  else
    {
      value = fixp->fx_offset;

      if (fixp->fx_subsy != (symbolS *) NULL)
	{
	  if (S_GET_SEGMENT (fixp->fx_subsy) == absolute_section)
	    {
	      value -= S_GET_VALUE (fixp->fx_subsy);
	      fixp->fx_done = 1;
	    }
	  else
	    {
	      /* We don't actually support subtracting a symbol.  */
	      as_bad_where (fixp->fx_file, fixp->fx_line,
			    _("expression too complex"));
	    }
	}
    }

  fixp->fx_no_overflow = 1;

  /* if polymorphs are enabled and relax disabled. 
     do not kill any relocs and pass them to linker. */
  if (msp430_enable_polys 
      && !msp430_enable_relax)
    {
      if (!fixp->fx_addsy || (fixp->fx_addsy 
	  && S_GET_SEGMENT (fixp->fx_addsy) == absolute_section))
	fixp->fx_done = 1;	/* it is ok to kill 'abs' reloc */
      else
      	fixp->fx_done = 0;
    }

  if (fixp->fx_done)
    {
      /* Fetch the instruction, insert the fully resolved operand
	 value, and stuff the instruction back again.  */

      where = (unsigned char *) fixp->fx_frag->fr_literal + fixp->fx_where;

      insn = bfd_getl16 (where);

      switch (fixp->fx_r_type)
	{
	case BFD_RELOC_MSP430X_PCREL_D:
	case BFD_RELOC_MSP430X_PCREL_INDXD:
            value -= 2;         // operand located 2 bytes after opcode
            break;
	case BFD_RELOC_MSP430X_PCREL_SRC:
	case BFD_RELOC_MSP430X_PCREL_SRC_BYTE:
	case BFD_RELOC_MSP430X_PCREL_DST:
	case BFD_RELOC_MSP430X_PCREL_DST_BYTE:
            value -= 4;         // operand located 4 bytes after opcode
            break;
	case BFD_RELOC_MSP430X_PCREL_DST_2ND:
	case BFD_RELOC_MSP430X_PCREL_DST_2ND_BYTE:
            value -= 6;         // operand located 6 bytes after opcode
            break;
        default:
            break;
        }

      switch (fixp->fx_r_type)
	{
	case BFD_RELOC_MSP430_10_PCREL:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd address operand: %ld"), value);

	  /* Jumps are in words.  */
	  value >>= 1;
	  --value;		/* Correct PC.  */

	  if (value < -512 || value > 511)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("operand out of range: %ld"), value);

	  value &= 0x3ff;	/* get rid of extended sign */
	  bfd_putl16 ((bfd_vma) (value | insn), where);
	  break;

	case BFD_RELOC_MSP430_RL_PCREL:
	case BFD_RELOC_MSP430_16_PCREL:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd address operand: %ld"), value);

	  /* Nothing to be corrected here.  */
	  if (value < -32768 || value > 65535)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("operand out of range: %ld"), value);

	  value &= 0xffff;	/* Get rid of extended sign.  */
	  bfd_putl16 ((bfd_vma) value, where);
	  break;

	case BFD_RELOC_MSP430_16_PCREL_BYTE:
	  /* Nothing to be corrected here.  */
	  if (value < -32768 || value > 65535)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("operand out of range: %ld"), value);

	  value &= 0xffff;	/* Get rid of extended sign.  */
	  bfd_putl16 ((bfd_vma) value, where);
	  break;

	case BFD_RELOC_32:
	  bfd_putl16 ((bfd_vma) value, where);
	  break;

	case BFD_RELOC_MSP430_16:
	case BFD_RELOC_16:
	case BFD_RELOC_MSP430_16_BYTE:
	  value &= 0xffff;
	  bfd_putl16 ((bfd_vma) value, where);
	  break;

	case BFD_RELOC_MSP430X_SRC:
	case BFD_RELOC_MSP430X_PCREL_SRC:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd operand: %ld"), value);
        case BFD_RELOC_MSP430X_SRC_BYTE:
	case BFD_RELOC_MSP430X_PCREL_SRC_BYTE:
	  value &= 0xfffff;
          bfd_putl16 ((bfd_vma)(bfd_getl16 (where) & 0xf87f) | ((value >> 9) & 0x0780), where);
          /* 16 least-significant bits */
	  bfd_putl16 ((bfd_vma) (value & 0xffff), where + 4);
	  break;
	case BFD_RELOC_MSP430X_DST:
	case BFD_RELOC_MSP430X_PCREL_DST:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd operand: %ld"), value);
	case BFD_RELOC_MSP430X_DST_BYTE:
	case BFD_RELOC_MSP430X_PCREL_DST_BYTE:
          bfd_putl16 ((bfd_vma)(bfd_getl16 (where) & 0xfff0) | ((value >> 16) & 0x000f), where);
          /* 16 least-significant bits */
          value &= 0xfffff;
	  bfd_putl16 ((bfd_vma) (value & 0xffff), where + 4);
	  break;
	case BFD_RELOC_MSP430X_DST_2ND:
	case BFD_RELOC_MSP430X_PCREL_DST_2ND:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd operand: %ld"), value);
	case BFD_RELOC_MSP430X_DST_2ND_BYTE:
	case BFD_RELOC_MSP430X_PCREL_DST_2ND_BYTE:
          value &= 0xfffff;
          bfd_putl16 ((bfd_vma)(bfd_getl16 (where) & 0xfff0) | ((value >> 16) & 0x000f), where);
          /* 16 least-significant bits */
	  bfd_putl16 ((bfd_vma) (value & 0xffff), where + 6);
	  break;
	case BFD_RELOC_MSP430X_S:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd operand: %ld"), value);
	case BFD_RELOC_MSP430X_S_BYTE:
	  value &= 0xfffff;
          bfd_putl16 ((bfd_vma)(bfd_getl16 (where) & 0xf0ff) | ((value >> 8) & 0x0f00), where);
          /* 16 least-significant bits */
	  bfd_putl16 ((bfd_vma) (value & 0xffff), where + 2);
	  break;
	case BFD_RELOC_MSP430X_D:
	case BFD_RELOC_MSP430X_PCREL_D:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd operand: %ld"), value);
	case BFD_RELOC_MSP430X_D_BYTE:
          value &= 0xfffff;
          bfd_putl16 ((bfd_vma)(bfd_getl16 (where) & 0xfff0) | ((value >> 16) & 0x000f), where);
          /* 16 least-significant bits */
	  bfd_putl16 ((bfd_vma) (value & 0xffff), where + 2);
	  break;
	case BFD_RELOC_MSP430X_PCREL_INDXD:
	  if (value & 1)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("odd operand: %ld"), value);
	case BFD_RELOC_MSP430X_INDXD:
	  if (value < -32768 || value > 65535)
	    as_bad_where (fixp->fx_file, fixp->fx_line,
			  _("operand out of range: %ld"), value);

	  value &= 0xffff;	/* Get rid of extended sign.  */
	  bfd_putl16 ((bfd_vma) value, where + 2);
	  break;

	default:
	  as_fatal (_("line %d: unknown relocation type: 0x%x"),
		    fixp->fx_line, fixp->fx_r_type);
	  break;
	}
    }
  else
    {
      fixp->fx_addnumber = value;
    }
}

/* GAS will call this to generate a reloc, passing the resulting reloc
   to `bfd_install_relocation'.  This currently works poorly, as
   `bfd_install_relocation' often does the wrong thing, and instances of
   `tc_gen_reloc' have been written to work around the problems, which
   in turns makes it difficult to fix `bfd_install_relocation'.  */

/* If while processing a fixup, a reloc really needs to be created
   then it is done here.  */

arelent *
tc_gen_reloc (asection * seg ATTRIBUTE_UNUSED, fixS * fixp)
{
  arelent * reloc;

  reloc = xmalloc (sizeof (arelent));

  reloc->sym_ptr_ptr = xmalloc (sizeof (asymbol *));
  *reloc->sym_ptr_ptr = symbol_get_bfdsym (fixp->fx_addsy);

  reloc->address = fixp->fx_frag->fr_address + fixp->fx_where;
  reloc->howto = bfd_reloc_type_lookup (stdoutput, fixp->fx_r_type);
  if (reloc->howto == (reloc_howto_type *) NULL)
    {
      as_bad_where (fixp->fx_file, fixp->fx_line,
		    _("reloc %d not supported by object file format"),
		    (int) fixp->fx_r_type);
      return NULL;
    }

  if (fixp->fx_r_type == BFD_RELOC_VTABLE_INHERIT
      || fixp->fx_r_type == BFD_RELOC_VTABLE_ENTRY)
    reloc->address = fixp->fx_offset;

  reloc->addend = fixp->fx_offset;

  return reloc;
}

int
md_estimate_size_before_relax (fragS * fragP ATTRIBUTE_UNUSED,
			       asection * segment_type ATTRIBUTE_UNUSED)
{
  if (fragP->fr_symbol && S_GET_SEGMENT (fragP->fr_symbol) == segment_type)
    {
      /* This is a jump -> pcrel mode. Nothing to do much here.
         Return value == 2.  */
      fragP->fr_subtype =
	  ENCODE_RELAX (RELAX_LEN (fragP->fr_subtype), STATE_BITS10);
    }
  else if (fragP->fr_symbol)
    {
      /* Its got a segment, but its not ours.   Even if fr_symbol is in
	 an absolute segment, we dont know a displacement until we link
	 object files. So it will always be long. This also applies to
	 labels in a subsegment of current. Liker may relax it to short
	 jump later. Return value == 8.  */
      fragP->fr_subtype =
	  ENCODE_RELAX (RELAX_LEN (fragP->fr_subtype), STATE_WORD);
    }
  else
    {
      /* We know the abs value. may be it is a jump to fixed address.
         Impossible in our case, cause all constants already handeled. */
      fragP->fr_subtype =
	  ENCODE_RELAX (RELAX_LEN (fragP->fr_subtype), STATE_UNDEF);
    }

  return md_relax_table[fragP->fr_subtype].rlx_length;
}

void
md_convert_frag (bfd * abfd ATTRIBUTE_UNUSED,
		 asection * sec ATTRIBUTE_UNUSED,
		 fragS * fragP)
{
  char * where = 0;
  int rela = -1;
  int i;
  struct rcodes_s * cc = NULL;
  struct hcodes_s * hc = NULL;

  switch (fragP->fr_subtype)
    {
    case ENCODE_RELAX (STATE_UNCOND_BRANCH, STATE_BITS10):
    case ENCODE_RELAX (STATE_SIMPLE_BRANCH, STATE_BITS10):
    case ENCODE_RELAX (STATE_NOOV_BRANCH, STATE_BITS10):
      /* We do not have to convert anything here.
         Just apply a fix.  */
      rela = BFD_RELOC_MSP430_10_PCREL;
      break;

    case ENCODE_RELAX (STATE_UNCOND_BRANCH, STATE_WORD):
    case ENCODE_RELAX (STATE_UNCOND_BRANCH, STATE_UNDEF):
      /* Convert uncond branch jmp lab -> br lab.  */
      cc = & msp430_rcodes[7];
      where = fragP->fr_literal + fragP->fr_fix;
      bfd_putl16 (cc->lop0, where);
      rela = BFD_RELOC_MSP430_RL_PCREL;
      fragP->fr_fix += 2;
      break;

    case ENCODE_RELAX (STATE_SIMPLE_BRANCH, STATE_WORD):
    case ENCODE_RELAX (STATE_SIMPLE_BRANCH, STATE_UNDEF):
      {
	/* Other simple branches.  */
	int insn = bfd_getl16 (fragP->fr_opcode);

	insn &= 0xffff;
	/* Find actual instruction.  */
	for (i = 0; i < 7 && !cc; i++)
	  if (msp430_rcodes[i].sop == insn)
	    cc = & msp430_rcodes[i];
	if (!cc || !cc->name)
	  as_fatal (_("internal inconsistency problem in %s: insn %04lx"),
		    __FUNCTION__, (long) insn);
	where = fragP->fr_literal + fragP->fr_fix;
	bfd_putl16 (cc->lop0, where);
	bfd_putl16 (cc->lop1, where + 2);
	rela = BFD_RELOC_MSP430_RL_PCREL;
	fragP->fr_fix += 4;
      }
      break;

    case ENCODE_RELAX (STATE_NOOV_BRANCH, STATE_WORD):
    case ENCODE_RELAX (STATE_NOOV_BRANCH, STATE_UNDEF):
      cc = & msp430_rcodes[6];
      where = fragP->fr_literal + fragP->fr_fix;
      bfd_putl16 (cc->lop0, where);
      bfd_putl16 (cc->lop1, where + 2);
      bfd_putl16 (cc->lop2, where + 4);
      rela = BFD_RELOC_MSP430_RL_PCREL;
      fragP->fr_fix += 6;
      break;

    case ENCODE_RELAX (STATE_EMUL_BRANCH, STATE_BITS10):
      {
	int insn = bfd_getl16 (fragP->fr_opcode + 2);

	insn &= 0xffff;
	for (i = 0; i < 4 && !hc; i++)
	  if (msp430_hcodes[i].op1 == insn)
	    hc = &msp430_hcodes[i];
	if (!hc || !hc->name)
	  as_fatal (_("internal inconsistency problem in %s: ext. insn %04lx"),
	      __FUNCTION__, (long) insn);
	rela = BFD_RELOC_MSP430_10_PCREL;
	/* Apply a fix for a first label if necessary.
	   another fix will be applied to the next word of insn anyway.  */
	if (hc->tlab == 2)
	  fix_new (fragP, fragP->fr_fix, 2, fragP->fr_symbol,
	      fragP->fr_offset, TRUE, rela);
	fragP->fr_fix += 2;
      }

      break;

    case ENCODE_RELAX (STATE_EMUL_BRANCH, STATE_WORD):
    case ENCODE_RELAX (STATE_EMUL_BRANCH, STATE_UNDEF):
      {
	int insn = bfd_getl16 (fragP->fr_opcode + 2);

	insn &= 0xffff;
	for (i = 0; i < 4 && !hc; i++)
	  if (msp430_hcodes[i].op1 == insn)
	    hc = & msp430_hcodes[i];
	if (!hc || !hc->name)
	  as_fatal (_("internal inconsistency problem in %s: ext. insn %04lx"),
	      __FUNCTION__, (long) insn);
	rela = BFD_RELOC_MSP430_RL_PCREL;
	where = fragP->fr_literal + fragP->fr_fix;
	bfd_putl16 (hc->lop0, where);
	bfd_putl16 (hc->lop1, where + 2);
	bfd_putl16 (hc->lop2, where + 4);
	fragP->fr_fix += 6;
      }
      break;

    default:
      as_fatal (_("internal inconsistency problem in %s:  %lx"),
		__FUNCTION__, (long) fragP->fr_subtype);
      break;
    }

  /* Now apply fix.  */
  fix_new (fragP, fragP->fr_fix, 2, fragP->fr_symbol,
	   fragP->fr_offset, TRUE, rela);
  /* Just fixed 2 bytes.  */
  fragP->fr_fix += 2;
}

/* Relax fragment. Mostly stolen from hc11 and mcore
   which arches I think I know.  */

long
msp430_relax_frag (segT seg ATTRIBUTE_UNUSED, fragS * fragP,
		   long stretch ATTRIBUTE_UNUSED)
{
  long growth;
  offsetT aim = 0;
  symbolS *symbolP;
  const relax_typeS *this_type;
  const relax_typeS *start_type;
  relax_substateT next_state;
  relax_substateT this_state;
  const relax_typeS *table = md_relax_table;

  /* Nothing to be done if the frag has already max size.  */
  if (RELAX_STATE (fragP->fr_subtype) == STATE_UNDEF
      || RELAX_STATE (fragP->fr_subtype) == STATE_WORD)
    return 0;

  if (RELAX_STATE (fragP->fr_subtype) == STATE_BITS10)
    {
      symbolP = fragP->fr_symbol;
      if (symbol_resolved_p (symbolP))
	as_fatal (_("internal inconsistency problem in %s: resolved symbol"),
		  __FUNCTION__);
      /* We know the offset. calculate a distance.  */
      aim = S_GET_VALUE (symbolP) - fragP->fr_address - fragP->fr_fix;
    }

  if (!msp430_enable_relax)
    {
      /* Relaxation is not enabled. So, make all jump as long ones
         by setting 'aim' to quite high value. */
      aim = 0x7fff;
    }
  
  this_state = fragP->fr_subtype;
  start_type = this_type = table + this_state;

  if (aim < 0)
    {
      /* Look backwards.  */
      for (next_state = this_type->rlx_more; next_state;)
	if (aim >= this_type->rlx_backward || !this_type->rlx_backward)
	  next_state = 0;
	else
	  {
	    /* Grow to next state.  */
	    this_state = next_state;
	    this_type = table + this_state;
	    next_state = this_type->rlx_more;
	  }
    }
  else
    {
      /* Look forwards.  */
      for (next_state = this_type->rlx_more; next_state;)
	if (aim <= this_type->rlx_forward || !this_type->rlx_forward)
	  next_state = 0;
	else
	  {
	    /* Grow to next state.  */
	    this_state = next_state;
	    this_type = table + this_state;
	    next_state = this_type->rlx_more;
	  }
    }

  growth = this_type->rlx_length - start_type->rlx_length;
  if (growth != 0)
    fragP->fr_subtype = this_state;
  return growth;
}
