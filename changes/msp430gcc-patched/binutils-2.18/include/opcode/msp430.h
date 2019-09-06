/* Opcode table for the TI MSP430 microcontrollers

   Copyright 2002, 2004 Free Software Foundation, Inc.
   Contributed by Dmitry Diky <diwil@mail.ru>
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef __MSP430_H_
#define __MSP430_H_

struct msp430_operand_s
{
  int ol;	/* Operand length words.  */
  int am;	/* Addr mode.  */
  int reg;	/* Register.  */
  int mode;	/* Operand mode.  */
#define OP_REG		0
#define OP_EXP		1
#ifndef DASM_SECTION
  expressionS	exp;
#endif
};

#define BYTE_OPERATION          (1 << 6)  /* Byte operation flag for 430 instructions.  */
#define BYTE_OPERATION_X        (1 << 22) /* Byte operation flag for 430x instructions.  */
#define NON_ADDR_OPERATION      (1 << 6)  /* Address operation flag for 430x instructions.  */

typedef enum 
{ 
  DEFAULT_OP,   // instruction has no modifier
  WORD_OP,      // .w
  BYTE_OP,      // .b
  ADDR_OP       // .a
} 
opwidth_t;

typedef enum
{ 
  CORE_430,     // 1xxx, 2xxx, 3xxx, 4xxx
  CORE_430X,    // 241x, 26xx, 46xx
  CORE_430X2,   // 5xxx
}
core_t;

typedef enum
{
  FMT_EMULATED = 0,
  FMT_DOUBLE_OPERAND,
  FMT_SINGLE_OPERAND,
  FMT_JUMP,
  FMT_EMULATED_POLYMORPH_JUMP,
  FMT_EMULATED_LONG_POLYMORPH_JUMP,
  FMT_X_DOUBLE_OPERAND,
  FMT_X_SINGLE_OPERAND,
  FMT_X_EXCEPTION,
  FMT_X_EMULATED,
  FMT_X_ADDRESS,

  FMT_X = FMT_X_DOUBLE_OPERAND,
  FMT_MASK = 0x000f,

  /* allowed modifiers: .b, .w, .a */
  MOD_NONE = 0, 
  MOD_W = 1 << 4, 
  MOD_B = 1 << 5, 
  MOD_A = 1 << 6,
  MOD_MASK = 0x0070,
  
  /* opcode variant */
  VAR_MASK = 0x0380,
} 
format_t;

#define OP_V(x) (x << 7)

struct  msp430_opcode_s
{
  char *name;
  format_t fmt;
  unsigned int insn_opnumb;
  unsigned int bin_opcode;
  unsigned int bin_mask;
};

#define opcode_format(opcode)   (opcode->fmt & FMT_MASK)
#define opcode_modifier(opcode) (opcode->fmt & MOD_MASK)
#define opcode_variant(opcode)  ((opcode->fmt & VAR_MASK) >> 7)

/* opcode variants:  */
enum
{   
   V_NONE = 0,          // ordinary instruction

   /* FMT_EMULATED: */
   V_NOOP,              // no operands: set/clear bit instructions, reti
   V_SHIFT,             // shift instructions
   V_BR,                // br instruction
   
   /* FMT_SINGLE_OPERAND: */
   V_RETI = 1,          // reti
   V_CALL = 2,          // hex operand in disassembly

   /* FMT_X_SINGLE_OPERAND: */
                        // V_NONE - #N operand disallowed
   V_SWPSXT = 1,        // #N operand disallowed, special A/L, B/W bits case with .a modifier
   V_PUSHX,             // #N operand allowed

   /* FMT_X_EXCEPTIONS: */
   V_CALLA = 0,         // calla 
   V_ROTM,              // two operands, rotations
   V_POPM,              // two operands, popm
   V_PUSHM,             // two operands, pushm

   /* FMT_X_EMULATED: */
                        // V_NONE - substituted by 430x double operand instruction
   V_X_SHIFT,           // shifts
   V_RETA,              // reta, short instruction, no operands
   V_EMU_ADDR,          // substituted by address instruction other than mova 
   V_BRA,               // bra, substituted by mova address instruction == format II exception instruction
   // clra emulated by msp430 instruction

   /* FMT_X_ADDRESS: */
   V_MOVA = 1,          // mova, more address modes allowed
};

#define MSP_INSN(name, format, opnumb, bin, mask) { #name, format, opnumb, bin, mask }

static struct msp430_opcode_s const msp430_opcodes[] = 
{
  MSP_INSN (and,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0xf000, 0xfffff000),
  MSP_INSN (inv,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0xe330, 0xfffffff0),
  MSP_INSN (xor,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0xe000, 0xfffff000),
  MSP_INSN (setz,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xd322, 0xffffffff),
  MSP_INSN (setc,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xd312, 0xffffffff),
  MSP_INSN (eint,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xd232, 0xffffffff),
  MSP_INSN (setn,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xd222, 0xffffffff),
  MSP_INSN (bis,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0xd000, 0xfffff000),
  MSP_INSN (clrz,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xc322, 0xffffffff),
  MSP_INSN (clrc,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xc312, 0xffffffff),
  MSP_INSN (dint,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xc232, 0xffffffff),
  MSP_INSN (clrn,  FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0xc222, 0xffffffff),
  MSP_INSN (bic,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0xc000, 0xfffff000),
  MSP_INSN (bit,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0xb000, 0xfffff000),
  MSP_INSN (dadc,  FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0xa300, 0xffffff30),
  MSP_INSN (dadd,  FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0xa000, 0xfffff000),
  MSP_INSN (tst,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x9300, 0xffffff30),
  MSP_INSN (cmp,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0x9000, 0xfffff000),
  MSP_INSN (decd,  FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x8320, 0xffffff30),
  MSP_INSN (dec,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x8310, 0xffffff30),
  MSP_INSN (sub,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0x8000, 0xfffff000),
  MSP_INSN (sbc,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x7300, 0xffffff30),
  MSP_INSN (subc,  FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0x7000, 0xfffff000),
  MSP_INSN (adc,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x6300, 0xffffff30),
  MSP_INSN (rlc,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(V_SHIFT),       2, 0x6000, 0xfffff000),
  MSP_INSN (addc,  FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0x6000, 0xfffff000),
  MSP_INSN (incd,  FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x5320, 0xffffff30),
  MSP_INSN (inc,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x5310, 0xffffff30),
  MSP_INSN (rla,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(V_SHIFT),       2, 0x5000, 0xfffff000),
  MSP_INSN (add,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0x5000, 0xfffff000),
  MSP_INSN (nop,   FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0x4303, 0xffffffff),
  MSP_INSN (clr,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x4300, 0xffffff30),
  MSP_INSN (clra,  FMT_EMULATED          | MOD_NONE          | OP_V(0),             1, 0x4300, 0xffffff30),     // MOV      #0, Rdst
  MSP_INSN (ret,   FMT_EMULATED          | MOD_NONE          | OP_V(V_NOOP),        0, 0x4130, 0xffffffff),
  MSP_INSN (pop,   FMT_EMULATED          | MOD_W|MOD_B       | OP_V(0),             1, 0x4130, 0xffffff30),
  MSP_INSN (br,    FMT_EMULATED          | MOD_NONE          | OP_V(V_BR),          1, 0x4000, 0xfffff08f),
  MSP_INSN (mov,   FMT_DOUBLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             2, 0x4000, 0xfffff000),

  MSP_INSN (jmp,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x3c00, 0xfffffc00),
  MSP_INSN (jl,    FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x3800, 0xfffffc00),
  MSP_INSN (jge,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x3400, 0xfffffc00),
  MSP_INSN (jn,    FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x3000, 0xfffffc00),
  MSP_INSN (jc,    FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2c00, 0xfffffc00),
  MSP_INSN (jhs,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2c00, 0xfffffc00),
  MSP_INSN (jnc,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2800, 0xfffffc00),
  MSP_INSN (jlo,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2800, 0xfffffc00),
  MSP_INSN (jz,    FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2400, 0xfffffc00),
  MSP_INSN (jeq,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2400, 0xfffffc00),
  MSP_INSN (jnz,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2000, 0xfffffc00),
  MSP_INSN (jne,   FMT_JUMP              | MOD_NONE          | OP_V(0),             1, 0x2000, 0xfffffc00),

  MSP_INSN (reti,  FMT_SINGLE_OPERAND    | MOD_NONE          | OP_V(V_RETI),        0, 0x1300, 0xffffffc0),
  MSP_INSN (call,  FMT_SINGLE_OPERAND    | MOD_NONE          | OP_V(V_CALL),        1, 0x1280, 0xffffffc0),
  MSP_INSN (push,  FMT_SINGLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             1, 0x1200, 0xffffff80),
  MSP_INSN (sxt,   FMT_SINGLE_OPERAND    | MOD_NONE          | OP_V(0),             1, 0x1180, 0xffffffc0),
  MSP_INSN (rra,   FMT_SINGLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             1, 0x1100, 0xffffff80),
  MSP_INSN (swpb,  FMT_SINGLE_OPERAND    | MOD_NONE          | OP_V(0),             1, 0x1080, 0xffffffc0),
  MSP_INSN (rrc,   FMT_SINGLE_OPERAND    | MOD_W|MOD_B       | OP_V(0),             1, 0x1000, 0xffffff80),


  /* emulated instructions placed just before instruction emulated by for disassembly search */
  MSP_INSN (popx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x41301800, 0xff30f800), // MOVX     @SP+, dst
  MSP_INSN (clrx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x43001800, 0xff30f800), // MOVX     #0, dst
  MSP_INSN (movx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0x40001800, 0xf000f800),
  MSP_INSN (incx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x53101800, 0xff30f800), // ADDX     #1, dst
  MSP_INSN (incdx, FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x53201800, 0xff30f800), // ADDX     #2, dst
  MSP_INSN (rlax,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(V_X_SHIFT),     1, 0x50001800, 0xf000f800), // ADDX     dst, dst
  MSP_INSN (addx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0x50001800, 0xf000f800),
  MSP_INSN (adcx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x63001800, 0xff30f800), // ADDCX    #0, dst
  MSP_INSN (rlcx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(V_X_SHIFT),     1, 0x60001800, 0xf000f800), // ADDCX    dst, dst
  MSP_INSN (addcx, FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0x60001800, 0xf000f800),
  MSP_INSN (sbcx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x73001800, 0xff30f800), // SUBCX    #0, dst
  MSP_INSN (subcx, FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0x70001800, 0xf000f800),
  MSP_INSN (decx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x83101800, 0xff30f800), // SUBX     #1, dst
  MSP_INSN (decdx, FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x83201800, 0xff30f800), // SUBX     #2, dst
  MSP_INSN (subx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0x80001800, 0xf000f800),
  MSP_INSN (tstx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x93001800, 0xff30f800), // CMPX     #0, dst
  MSP_INSN (cmpx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0x90001800, 0xf000f800),
  MSP_INSN (dadcx, FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0xa3001800, 0xff30f800), // DADDX    #0, dst
  MSP_INSN (daddx, FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0xa0001800, 0xf000f800),
  MSP_INSN (bitx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0xb0001800, 0xf000f800),
  MSP_INSN (bicx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0xc0001800, 0xf000f800),
  MSP_INSN (bisx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0xd0001800, 0xf000f800),
  MSP_INSN (invx,  FMT_X_EMULATED        | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0xe3301800, 0xff30f800), // XORX     #-1, dst
  MSP_INSN (xorx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0xe0001800, 0xf000f800),
  MSP_INSN (andx,  FMT_X_DOUBLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             2, 0xf0001800, 0xf000f800),
  
  MSP_INSN (rrcx,  FMT_X_SINGLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x10001800, 0xff80f800),
  MSP_INSN (swpbx, FMT_X_SINGLE_OPERAND  | MOD_W|MOD_A       | OP_V(V_SWPSXT),      1, 0x10801800, 0xffc0f800),
  MSP_INSN (rrax,  FMT_X_SINGLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(0),             1, 0x11001800, 0xff80f800),
  MSP_INSN (sxtx,  FMT_X_SINGLE_OPERAND  | MOD_W|MOD_A       | OP_V(V_SWPSXT),      1, 0x11801800, 0xffc0f800),
  MSP_INSN (pushx, FMT_X_SINGLE_OPERAND  | MOD_W|MOD_B|MOD_A | OP_V(V_PUSHX),       1, 0x12001800, 0xff80f800),

  MSP_INSN (calla, FMT_X_EXCEPTION       | MOD_NONE          | OP_V(V_CALLA),       1, 0x1300, 0xffffff00),
  MSP_INSN (pushm, FMT_X_EXCEPTION       | MOD_W|MOD_A       | OP_V(V_PUSHM),       2, 0x1400, 0xfffffe00),
  MSP_INSN (popm,  FMT_X_EXCEPTION       | MOD_W|MOD_A       | OP_V(V_POPM),        2, 0x1600, 0xfffffe00),
  MSP_INSN (rrcm,  FMT_X_EXCEPTION       | MOD_W|MOD_A       | OP_V(V_ROTM),        2, 0x0040, 0xfffff3e0),
  MSP_INSN (rram,  FMT_X_EXCEPTION       | MOD_W|MOD_A       | OP_V(V_ROTM),        2, 0x0140, 0xfffff3e0),
  MSP_INSN (rlam,  FMT_X_EXCEPTION       | MOD_W|MOD_A       | OP_V(V_ROTM),        2, 0x0240, 0xfffff3e0),
  MSP_INSN (rrum,  FMT_X_EXCEPTION       | MOD_W|MOD_A       | OP_V(V_ROTM),        2, 0x0340, 0xfffff3e0),

  /* Address.  */
  MSP_INSN (incda, FMT_X_EMULATED        | MOD_NONE          | OP_V(V_EMU_ADDR),    1, 0x03e0, 0xfffffff0),     // ADDA     #2, Rdst = ADDA R3, Rdst
  MSP_INSN (adda,  FMT_X_ADDRESS         | MOD_NONE          | OP_V(0),             2, 0x00a0, 0xfffff0b0),
  MSP_INSN (tsta,  FMT_X_EMULATED        | MOD_NONE          | OP_V(V_EMU_ADDR),    1, 0x03d0, 0xfffffff0),     // CMPA     #0, Rdst = CMPA R3, Rdst
  MSP_INSN (cmpa,  FMT_X_ADDRESS         | MOD_NONE          | OP_V(0),             2, 0x0090, 0xfffff0b0),
  MSP_INSN (decda, FMT_X_EMULATED        | MOD_NONE          | OP_V(V_EMU_ADDR),    1, 0x03f0, 0xfffffff0),     // SUBA     #2, Rdst = SUBA R3, Rdst
  MSP_INSN (suba,  FMT_X_ADDRESS         | MOD_NONE          | OP_V(0),             2, 0x00b0, 0xfffff0b0),
  MSP_INSN (reta,  FMT_X_EMULATED        | MOD_NONE          | OP_V(V_RETA),        0, 0x0110, 0xffffffff),     // MOVA     @SP+, PC
  MSP_INSN (bra,   FMT_X_EMULATED        | MOD_NONE          | OP_V(V_BRA),         1, 0x0000, 0xfffff0cf),     // MOVA     dst, PC
  MSP_INSN (bra,   FMT_X_EMULATED        | MOD_NONE          | OP_V(V_BRA),         1, 0x0080, 0xfffff0bf),     // MOVA     #imm20, PC; MOVA Rsrc, Rdst
  MSP_INSN (mova,  FMT_X_ADDRESS         | MOD_NONE          | OP_V(V_MOVA),        1, 0x0000, 0xfffff000),
  
  /* Simple polymorphs.  */
  MSP_INSN (beq,   FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(0),             1, 0, 0xffff),
  MSP_INSN (bne,   FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(1),             1, 0, 0xffff),
  MSP_INSN (blt,   FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(2),             1, 0, 0xffff),
  MSP_INSN (bltu,  FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(3),             1, 0, 0xffff),
  MSP_INSN (bge,   FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(4),             1, 0, 0xffff),
  MSP_INSN (bgeu,  FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(5),             1, 0, 0xffff),
  MSP_INSN (bltn,  FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(6),             1, 0, 0xffff),
  MSP_INSN (jump,  FMT_EMULATED_POLYMORPH_JUMP | MOD_NONE    | OP_V(7),             1, 0, 0xffff),

  /* Long polymorphs.  */
  MSP_INSN (bgt,   FMT_EMULATED_LONG_POLYMORPH_JUMP | MOD_NONE | OP_V(0),           1, 0, 0xffff),
  MSP_INSN (bgtu,  FMT_EMULATED_LONG_POLYMORPH_JUMP | MOD_NONE | OP_V(1),           1, 0, 0xffff),
  MSP_INSN (bleu,  FMT_EMULATED_LONG_POLYMORPH_JUMP | MOD_NONE | OP_V(2),           1, 0, 0xffff),
  MSP_INSN (ble,   FMT_EMULATED_LONG_POLYMORPH_JUMP | MOD_NONE | OP_V(3),           1, 0, 0xffff),
  /* End of instruction set.  */
  { NULL, 0, 0, 0, 0 }
};

#endif
