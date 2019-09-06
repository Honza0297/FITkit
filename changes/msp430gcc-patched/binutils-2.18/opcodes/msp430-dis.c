/* Disassemble MSP430 instructions.
   Copyright (C) 2002, 2004, 2005, 2007 Free Software Foundation, Inc.
   
   Contributed by Dmitry Diky <diwil@mail.ru>
        
   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <sys/types.h>

#include "dis-asm.h"
#include "opintl.h"
#include "libiberty.h"

#define DASM_SECTION
#include "opcode/msp430.h"
#undef DASM_SECTION


#define PS(x)   (0xffff & (x))

static unsigned short
msp430dis_opcode (bfd_vma addr, disassemble_info *info)
{
  bfd_byte buffer[2];
  int status;

  status = info->read_memory_func (addr, buffer, 2, info);
  if (status != 0)
    {
      info->memory_error_func (status, addr, info);
      return -1;
    }
  return bfd_getl16 (buffer);
}

static unsigned short
msp430dis_operand (bfd_vma addr, disassemble_info *info, int reg, int am, int *cmd_len)
{
  static int const op_length [][5] = 
  {
  // am  | reg  0  1  2  3  >3
  /*  0  */  {  0, 0, 0, 0, 0 },    // Rn
  /*  1  */  {  2, 2, 2, 0, 2 },    // x(Rn)
  /*  2  */  {  0, 0, 0, 0, 0 },    // @Rn
  /*  3  */  {  2, 0, 0, 0, 0 },    // @Rn+
  };
  if (reg >= (int)(sizeof(op_length[0]) / sizeof(op_length[0][0])))
    reg = sizeof(op_length[0]) / sizeof(op_length[0][0])- 1;
    
  if (op_length[am][reg])
    {
      bfd_byte buffer[2];
      int status = info->read_memory_func (addr, buffer, 2, info);
      if (status != 0)
      {
        info->memory_error_func (status, addr, info);
        return -1;
      }
      *cmd_len += 2;
      return bfd_getl16 (buffer);
    }
  return 0;
}

typedef enum
{
  OP_20BIT,
  OP_16BIT,
  OP_20BIT_HEX,
  OP_16BIT_HEX,
  OP_DECIMAL,
} operand_t;

static void 
msp430x_decode_operand(int reg, int am, int addr, int dst, operand_t size, char *op, char *comm)
{
  if (op)       // if operand not hidden in emulated instruction
    switch (am)
      {
      case 0:                   // Rn
        if (reg == 3)
          {
            sprintf (op, "#0"); // constant #0
            sprintf (comm, "r3 As==00");
          }
        else
          {
            sprintf (op, "r%d", reg);
          }
        break;
      case 1:                   // x(Rn)
        if (reg == 0)           // Symbolic, ADDR
          {
            if (size == OP_20BIT || size == OP_20BIT_HEX)
              sprintf (op, "0x%05x", dst & 0xfffff);
            else
              sprintf (op, "0x%04x", dst & 0xffff);
            sprintf (comm, "PC rel. 0x%05x", ((int)addr + dst) & 0xfffff);
          }
        else if (reg == 2)      // Absolute, &ADDR
          {
            if (size == OP_20BIT || size == OP_20BIT_HEX)
              sprintf (op, "&0x%05x", dst & 0xfffff);
            else
              sprintf (op, "&0x%04x", dst & 0xffff);
          }
        else if (reg == 3)      // constant #1
          {
            sprintf (op, "#1");
            sprintf (comm, "r3 As==01");
          }
        else                    // Indexed, x(Rn)
          {
            sprintf (op, "%d(r%d)", dst, reg);
            if (size == OP_20BIT || size == OP_20BIT_HEX)
              sprintf (comm, "0x%05x(r%d)", dst & 0xfffff, reg);
            else
              sprintf (comm, "0x%04x(r%d)", dst & 0xffff, reg);
          }
        break;
      case 2:                   // @Rn
        if (reg == 2)           // constant #4
          {
            sprintf (op, "#4");
            sprintf (comm, "r2 As==10");
          }
        else if(reg == 3)       // constant #2
          {
            sprintf (op, "#2");
            sprintf (comm, "r3 As==10");
          }
        else
          {
            sprintf (op, "@r%d", reg);
          }
        break;
      case 3:                   // @Rn+
        switch  (reg)
          {
          case 0:               // immediate, #N
            switch (size)
              {
              case OP_16BIT:
                sprintf (op, "#%d", dst);
                sprintf (comm, "#0x%04x", dst & 0xffff);
                break;
              case OP_16BIT_HEX:
                sprintf (op, "#0x%04x", dst & 0xffff);
                break;
              case OP_20BIT:
                sprintf (op, "#%d", dst);
                sprintf (comm, "#0x%05x", dst & 0xfffff);
                break;
              case OP_20BIT_HEX:
                sprintf (op, "#0x%05x", dst & 0xfffff);
                break;
              default:          // #n in rxxm
                sprintf (op, "#%d", dst);
                break;
              }
            break;
          case 2:               // constant #8
            sprintf (op, "#8");
            sprintf (comm, "r2 As==11");
            break;  
          case 3:               // constant #-1
            sprintf (op, "#-1");
	    sprintf (comm, "r3 As==11");
            break;
          default:
            sprintf (op, "@r%d+", reg);
            break;
          }
        break;
      }
}

static int
msp430_nooperands (struct msp430_opcode_s const *opcode,
		   bfd_vma addr ATTRIBUTE_UNUSED,
		   unsigned short insn ATTRIBUTE_UNUSED,
		   char *comm)
{
  /* Pop with constant.  */
  if (insn == 0x43b2)
    return 0;
  if (insn == opcode->bin_opcode)
    return 2;

  if (opcode_format(opcode) == FMT_EMULATED)
    {
      if ((insn & 0x0f00) != 3 || (insn & 0x0f00) != 2)
	return 0;

      strcpy (comm, "emulated...");
    }
  else
    {
      strcpy (comm, "return from interupt");
    }

  return 2;
}

static int
msp430_singleoperand (disassemble_info *info,
		      struct msp430_opcode_s const *opcode,
		      bfd_vma addr,
		      unsigned short insn,
		      char *op,
		      char *comm)
{
  int regs = 0, regd = 0;
  int ad = 0, as = 0;
  int cmd_len = 2;
  short dst = 0;

  regd = insn & 0x0f;
  regs = (insn & 0x0f00) >> 8;
  as = (insn & 0x0030) >> 4;
  ad = (insn & 0x0080) >> 7;

  switch (opcode_format(opcode))
    {
    case FMT_EMULATED:		/* Emulated work with dst register.  */
      if (regs != 2 && regs != 3 && regs != 1)
	return 0;

      /* Check if not clr insn.  */
      if (opcode->bin_opcode == 0x4300 && (ad || as))
	return 0;

      /* Check if really inc, incd insns.  */
      if ((opcode->bin_opcode & 0xff00) == 0x5300 && as == 3)
	return 0;

      dst = msp430dis_operand (addr + cmd_len, info, regd, ad, &cmd_len);
      msp430x_decode_operand (regd, ad, addr + cmd_len, dst, OP_16BIT, op, comm);
      break;

    case FMT_SINGLE_OPERAND:	/* rrc, push, call, swpb, rra, sxt, push, call, reti etc...  */
      dst = msp430dis_operand (addr + cmd_len, info, regd, as, &cmd_len);
      if(opcode_variant(opcode) != V_CALL)
        msp430x_decode_operand (regd, as, addr + cmd_len, dst, OP_16BIT, op, comm);
      else
        msp430x_decode_operand (regd, as, addr + cmd_len, dst, OP_16BIT_HEX, op, comm);
      break;

    case FMT_JUMP:		/* Jumps.  */
      dst = (short)((insn & 0x03ff) << 6) >> 5;        // sign extension, word addr to byte addr conversion
      sprintf (op, "$%+-8d", dst + 2);
      sprintf (comm, "abs 0x%x", PS ((short) (addr) + 2 + dst));
      return 2;
    default:
      cmd_len = 0;
    }

  return cmd_len;
}

static int
msp430_doubleoperand (disassemble_info *info,
		      struct msp430_opcode_s const *opcode,
		      bfd_vma addr,
		      unsigned short insn,
		      char *op1,
		      char *op2,
		      char *comm1,
		      char *comm2)
{
  int regs = 0, regd = 0;
  int ad = 0, as = 0;
  int cmd_len = 2;
  short ops;
  short opd;

  regd = insn & 0x0f;
  regs = (insn & 0x0f00) >> 8;
  as = (insn & 0x0030) >> 4;
  ad = (insn & 0x0080) >> 7;

  if (opcode_format(opcode) == FMT_EMULATED)
    {
      /* Special case: rla and rlc are the only 2 emulated instructions that
	 fall into two operand instructions.  */
      /* With dst, there are only:
	 Rm       	Register,
         x(Rm)     	Indexed,
         0xXXXX    	Relative,
         &0xXXXX    	Absolute 
         emulated_ins   dst
         basic_ins      dst, dst.  */

      if (regd != regs || as != ad)
	return 0;		/* May be 'data' section.  */

      if (ad == 0 && regd == 3) // #N
	{
	  strcpy (comm1, _("Illegal as emulation instr"));
	  return -1;
	}
      ops = msp430dis_operand (addr + cmd_len, info, regs, as, &cmd_len);
      opd = msp430dis_operand (addr + cmd_len, info, regd, ad, &cmd_len);
      /* If the 'src' field is not the same as the dst
         then this is not an rla instruction.  */
      if (ops != opd)  
        return 0;
      msp430x_decode_operand (regs, as, addr + cmd_len, ops, OP_16BIT, op1, comm1);

      *op2 = 0;
      *comm2 = 0;
      return cmd_len;
    }
  /* Two operands exactly.  */

  if (ad == 0 && regd == 3)
    {
      /* R2/R3 are illegal as dest: may be data section.  */
      strcpy (comm1, _("Illegal as 2-op instr"));
      return -1;
    }
  ops = msp430dis_operand (addr + cmd_len, info, regs, as, &cmd_len);
  msp430x_decode_operand (regs, as, addr + cmd_len, ops, OP_16BIT, op1, comm1);

  opd = msp430dis_operand (addr + cmd_len, info, regd, ad, &cmd_len);
  msp430x_decode_operand (regd, ad, addr + cmd_len, opd, OP_16BIT, op2, comm2);
  return cmd_len;
}

static int
msp430_branchinstr (disassemble_info *info,
		    struct msp430_opcode_s const *opcode ATTRIBUTE_UNUSED,
		    bfd_vma addr ATTRIBUTE_UNUSED,
		    unsigned short insn,
		    char *op1,
		    char *comm1)
{
  int regs = (insn & 0x0f00) >> 8;
  int as = (insn & 0x0030) >> 4;
  int cmd_len = 2;
  short dst;

  dst = msp430dis_operand (addr + cmd_len, info, regs, as, &cmd_len);
  msp430x_decode_operand(regs, as, addr + cmd_len, dst, OP_16BIT_HEX, op1, comm1);

  return cmd_len;
}

static opwidth_t
msp430x_opwidth(unsigned int insn)
{
    insn &= NON_ADDR_OPERATION | BYTE_OPERATION_X;
    
    if(insn == (NON_ADDR_OPERATION | BYTE_OPERATION_X))
      return BYTE_OP;
    if(insn == NON_ADDR_OPERATION)
      return WORD_OP;
    if(insn == BYTE_OPERATION_X)
      return ADDR_OP;

    return 0;   // reserved
}

static int
msp430x_singleoperand (disassemble_info *info,
		      struct msp430_opcode_s const *opcode,
		      bfd_vma addr,
		      unsigned int insn,
		      char *op,
		      char *comm,
                      int *repeats)
{
  int reg = (insn >> 16) & 0xf;
  int am = (insn >> 20) & 0x3;
  int cmd_len = 4;
  int dst = 0;

  if ( opcode_variant(opcode) < V_PUSHX )
    if ((am == 3 && reg == 0)           // #N operand
        || (am == 0 && reg == 3)        // R3 is illegal as dest: may be data section. 
       )
        {
          strcpy (comm, _("Illegal as 1-op instr"));
          return -1;
        }
 
  // extract repeat count if any
  if ( am == 0 )                // extension word for register mode
    {
      if (insn & 0x008f)        // repetitions
      {
        if (insn & 0x0080)
          *repeats = insn & 0xf;        // positive number is Rn
        else
          *repeats = 0 - (insn & 0xf);  // negative number is #N
      }
    }

  // extract operands
  dst = msp430dis_operand(addr + cmd_len, info, reg, am, &cmd_len) | ((insn & 0x0000000f) << 16);
  dst = (dst << 12) >> 12;      // sign extension
  msp430x_decode_operand(reg, am, addr + cmd_len, dst, OP_20BIT, op, comm);

  return cmd_len; 
}

static int
msp430x_exception (disassemble_info *info,
		      struct msp430_opcode_s const *opcode,
		      bfd_vma addr,
		      unsigned int insn,
		      char *op1,
		      char *op2,
		      char *comm1,
		      char *comm2,
		      opwidth_t *op_width)
{
  int reg = 0;
  int cmd_len = 2;
  int n = 0;
  int dst = 0;
  
  reg = insn & 0xf;

  switch(opcode_variant(opcode))
    {
    case V_CALLA:
      switch((insn >> 4) & 0xf)
        {
        case 4:     // Rdst
          msp430x_decode_operand(reg, 0, 0, 0, 0, op1, comm1);
          break;
        case 5:     // x(Rdst)
          dst = (short)msp430dis_operand(addr + cmd_len, info, reg, 1, &cmd_len);
          msp430x_decode_operand(reg, 1, addr + cmd_len, dst, OP_16BIT, op1, comm1);
          break;
        case 6:     // @Rdst
          msp430x_decode_operand(reg, 2, 0, 0, 0, op1, comm1);
          break;
        case 7:     // @Rdst+
          msp430x_decode_operand(reg, 3, 0, 0, 0, op1, comm1);
          break;
        case 8:     // &abs20
          dst = msp430dis_operand(addr + cmd_len, info, 2, 1, &cmd_len) | ((insn & 0x000f) << 16);
          msp430x_decode_operand(2, 1, addr + cmd_len, dst, OP_20BIT_HEX, op1, comm1);
          break;
        case 9:     // EDE
          dst = msp430dis_operand(addr + cmd_len, info, 0, 1, &cmd_len) | ((insn & 0x000f) << 16);
          msp430x_decode_operand(0, 1, addr + cmd_len, dst, OP_20BIT, op1, comm1);
          break;
        case 0xb:   // #imm20
          dst = msp430dis_operand(addr + cmd_len, info, 0, 3, &cmd_len) | ((insn & 0x000f) << 16);
          msp430x_decode_operand(0, 3, addr + cmd_len, dst, OP_20BIT_HEX, op1, comm1);
          break;
        }
      break;
    case V_PUSHM:
      n = ((insn >> 4) & 0xf) + 1;
      msp430x_decode_operand(0, 3, 0, n, OP_DECIMAL, op1, comm1);   // #N
      msp430x_decode_operand(reg, 0, 0, 0, 0, op2, comm2);          // Rdst
      if ((insn & 0x0100) == 0)
        *op_width = ADDR_OP;
      break;
    case V_POPM:
      n = ((insn >> 4) & 0xf) + 1;
      reg = (reg + n - 1) & 0xf;
      msp430x_decode_operand(0, 3, 0, n, OP_DECIMAL, op1, comm1);   // #N
      msp430x_decode_operand(reg, 0, 0, 0, 0, op2, comm2);          // Rdst
      if ((insn & 0x0100) == 0)
        *op_width = ADDR_OP;
      break;
    case V_ROTM:
      n = ((insn >> 10) & 0x3) + 1;
      msp430x_decode_operand(0, 3, 0, n, OP_DECIMAL, op1, comm1);   // #N
      msp430x_decode_operand(reg, 0, 0, 0, 0, op2, comm2);          // Rdst
      if ((insn & 0x0010) == 0)
        *op_width = ADDR_OP;
      break;
    default:
      break;
    }
  return cmd_len; 
}

static int
msp430x_doubleoperand (disassemble_info *info,
		      struct msp430_opcode_s const *opcode,
		      bfd_vma addr,
		      unsigned int insn,
		      char *op1,
		      char *op2,
		      char *comm1,
		      char *comm2,
		      opwidth_t *op_width,
		      int *repeats)
{
  int regs, regd;
  int as, ad;
  int ops, opd;
  int cmd_len = 4;

  regd = (insn >> 16) & 0xf;
  regs = (insn >> 24) & 0xf;
  as = (insn >> 20) & 0x3;
  ad = (insn >> 23) & 0x1;

  if (ad == 0 && regd == 3)
    {
      // R3 is illegal as dest: may be data section.
      if (comm1)
        strcpy (comm1, _("Illegal as 2-op instr"));
      else if (comm2)
        strcpy (comm2, _("Illegal as 2-op instr"));
      return -1;
    }
  *op_width = msp430x_opwidth(insn);
  
  // extract repeat count if any
  if ( as == 0 && ad == 0 )     // extension word for register mode
    {
      if (insn & 0x008f)        // repetitions
      {
        if (insn & 0x0080)
          *repeats = insn & 0xf;        // positive number is Rn
        else
          *repeats = 0 - (insn & 0xf);  // negative number is #N
      }
    }
  // extract operands
  ops = msp430dis_operand(addr + cmd_len, info, regs, as, &cmd_len) | ((insn & 0x00000780) << 9);
  ops = (ops << 12) >> 12;      // sign extension
  msp430x_decode_operand(regs, as, addr + cmd_len, ops, OP_20BIT, op1, comm1);

  opd = msp430dis_operand(addr + cmd_len, info, regd, ad, &cmd_len) | ((insn & 0x0000000f) << 16);
  opd = (opd << 12) >> 12;      // sign extension
  if (opcode_variant(opcode) == V_X_SHIFT && ops != opd)
    return 0;   // different operand => not emulated shift

  msp430x_decode_operand(regd, ad, addr + cmd_len, opd, OP_20BIT, op2, comm2);

  return cmd_len;
}

static int
msp430x_address (disassemble_info *info,
		    bfd_vma addr,
		    unsigned short insn,
		    char *op1,
		    char *op2,
		    char *comm1,
		    char *comm2)
{
  int cmd_len = 2;
  int dst = 0;
  typedef struct 
    {
      int as, regs;
      int ad, regd;
      int length;
    }
  operands_t;
  
  static operands_t const operands_table[] =
    {
      { 2, -1, 0, -1, 0 },  // 0 @Rsrc, Rdst
      { 3, -1, 0, -1, 0 },  // 1 @Rsrc+, Rdst
      { 1,  2, 0, -1, 2 },  // 2 &abs20, Rdst
      { 1, -1, 0, -1, 2 },  // 3 x(Rsrc), Rdst
      { 0,  0, 0,  0, 0 },  // 4
      { 0,  0, 0,  0, 0 },  // 5
      { 0, -1, 1,  2, 2 },  // 6 Rsrc, &abs20
      { 0, -1, 1, -1, 2 },  // 7 Rsrc, x(Rdst)
      { 3,  0, 0, -1, 2 },  // 8 #imm20, Rdst
      { 3,  0, 0, -1, 2 },  // 9 #imm20, Rdst
      { 3,  0, 0, -1, 2 },  // a #imm20, Rdst
      { 3,  0, 0, -1, 2 },  // b #imm20, Rdst
      { 0, -1, 0, -1, 0 },  // c Rsrc, Rdst
      { 0, -1, 0, -1, 0 },  // d Rsrc, Rdst
      { 0, -1, 0, -1, 0 },  // e Rsrc, Rdst
      { 0, -1, 0, -1, 0 },  // f Rsrc, Rdst
    };

  operands_t operands = operands_table[(insn >> 4) & 0xf];
  if(((insn >> 4) & 0xf) == 6)
    dst = msp430dis_opcode (addr + cmd_len, info) | ((insn & 0x000f) << 16);
  else if(((insn >> 4) & 0xb) == 3)
    dst = (short)msp430dis_opcode (addr + cmd_len, info);
  else if(operands.length != 0)
    dst = msp430dis_opcode(addr + cmd_len, info) | ((insn & 0x0f00) << 8);

  if(operands.regs == -1)
    operands.regs = (insn >> 8 ) & 0x000f;
  if(operands.regd == -1)
    operands.regd = (insn >> 0 ) & 0x000f;

  if (operands.regd == 3)
    {
      // R3 is illegal as dest: may be data section.
      if (comm1)
        strcpy (comm1, _("Illegal as address instr"));
      else if (comm2)
        strcpy (comm2, _("Illegal as address instr"));
      return -1;
    }
  // extract operands
  msp430x_decode_operand(operands.regs, operands.as, addr + cmd_len, dst,
                          ((insn >> 4) & 0xf) == 3 ? OP_16BIT_HEX : OP_20BIT_HEX, op1, comm1);
  msp430x_decode_operand(operands.regd, operands.ad, addr + cmd_len, dst,
                          ((insn >> 4) & 0xf) == 7 ? OP_16BIT_HEX : OP_20BIT_HEX, op2, comm2);
  return cmd_len + operands.length;
}

static int
msp430x_emulated (disassemble_info *info,
		      struct msp430_opcode_s const *opcode,
		      bfd_vma addr,
		      unsigned int insn,
		      char *op1,
		      char *comm1,
		      opwidth_t *op_width,
		      int *repeats)
{

  switch(opcode_variant(opcode))
    {
    case V_NONE:
    case V_X_SHIFT:
      // emulated by double operand instruction
      return msp430x_doubleoperand(info, opcode, addr, insn, (char *)0, op1,
                                   (char *)0, comm1, op_width, repeats);
    case V_RETA:        // reta, substituted by mova
      return 2;
    case V_EMU_ADDR:    // substituted by other address instruction
      return msp430x_address(info, addr, insn, (char *)0, op1, 
                             (char *)0, comm1);
    case V_BRA:         // bra, substituted by mova
      return msp430x_address(info, addr, insn, op1, (char *)0,
                             comm1, (char *)0);
    default:
      break;
    }
  return 0;
}

int
print_insn_msp430 (bfd_vma addr, disassemble_info *info)
{
  void *stream = info->stream;
  fprintf_ftype prin = info->fprintf_func;
  struct msp430_opcode_s const *opcode;
  char op1[32], op2[32], comm1[64], comm2[64];
  int cmd_len = 0;
  unsigned int insn;
  int repeats = 0;
  core_t core = CORE_430;
  
  opwidth_t op_width = DEFAULT_OP;      // word instruction by default
  static char const *width_modifier[] = 
    {"", "", ".b", ".a" };
    
  insn = msp430dis_opcode (addr, info);

  if (info->mach == 241 || info->mach == 26 || info->mach == 46 || info->mach == 471)
    {
      core = CORE_430X;
    }
  else if (info->mach == 54)
    {
      core = CORE_430X2;
    }
    
  if ( (core == CORE_430 && ((int) addr & 0xffff) >= 0xffe0)
      || ( core == CORE_430X && (((int) addr & 0xfffff) >= 0xffc0) && ((int) addr & 0xfffff) < 0x10000)
      || ( core == CORE_430X2 && (((int) addr & 0xfffff) >= 0xff80) && ((int) addr & 0xfffff) < 0x10000)
     )
    {
      (*prin) (stream, "interrupt service routine at 0x%04x", 0xffff & insn);
      return 2;
    }

  if (core > CORE_430 && ((insn & 0xf800) == 0x1800))    // Extended instruction
     insn |= msp430dis_opcode(addr + 2, info) << 16;

  *comm1 = 0;
  *comm2 = 0;

  for (opcode = msp430_opcodes; opcode->name; opcode++)
    {
      if ((insn & opcode->bin_mask) == opcode->bin_opcode
//	  && opcode->bin_opcode != 0x9300       // was disasm tst instruction as cmp #0, dst?
         )
	{
	  *op1 = 0;
	  *op2 = 0;
	  *comm1 = 0;
	  *comm2 = 0;

          /* unsupported instruction */
          if(opcode_format(opcode) >= FMT_X && core < CORE_430X)
            break;

	  /* r0 as destination. Ad should be zero. Rdst=0 and Ad=0 are encoded in opcode & opcode_mask */
	  if (opcode_format(opcode) == FMT_EMULATED && opcode_variant(opcode) == V_BR)
	    {
	      cmd_len =
		msp430_branchinstr (info, opcode, addr, insn, op1, comm1);
	      if (cmd_len)
		break;
	    }
          if(opcode_format(opcode) < FMT_X)
  	    switch (opcode->insn_opnumb)
	      {
	      case 0:
	        cmd_len = msp430_nooperands (opcode, addr, insn, comm1);
	        break;
	      case 2:
	        cmd_len =
		  msp430_doubleoperand (info, opcode, addr, insn, op1, op2,
				        comm1, comm2);
	        if (insn & BYTE_OPERATION)
		  op_width = BYTE_OP;
	        break;
	      case 1:
	        cmd_len =
		  msp430_singleoperand (info, opcode, addr, insn, op1, comm1);
	        if (insn & BYTE_OPERATION && opcode_format(opcode) != FMT_JUMP)
		  op_width = BYTE_OP;
	        break;
	      default:
	        break;
	      }
          else  // 430x instruction
            switch(opcode_format(opcode))
              {
              case FMT_X_SINGLE_OPERAND:
                if( opcode_variant(opcode) == V_SWPSXT                          // swpbx, sxtx
                   && (insn & (NON_ADDR_OPERATION | BYTE_OPERATION_X)) == 0)    // .a, special case
                      insn ^= BYTE_OPERATION_X;                                 // make A/L, B/W as ordinary

                op_width = msp430x_opwidth(insn);

                if( opcode_variant(opcode) == V_SWPSXT && op_width == BYTE_OP)         // swpbx, sxtx
                  strcpy (comm1, _("Illegal A/L, B/W bits setting"));

                cmd_len = msp430x_singleoperand (info, opcode, addr, insn, op1, comm1,
				                 &repeats);
                break;
              case FMT_X_EXCEPTION:
                cmd_len = msp430x_exception (info, opcode, addr, insn, op1, op2, 
                                                 comm1, comm2, &op_width);
                break;
              case FMT_X_DOUBLE_OPERAND:
                cmd_len = msp430x_doubleoperand (info, opcode, addr, insn, op1, op2, 
                                                 comm1, comm2, &op_width, &repeats);
                break;
              case FMT_X_EMULATED:
                cmd_len = msp430x_emulated (info, opcode, addr, insn, op1,
                                            comm1, &op_width, &repeats);
                break;

              case FMT_X_ADDRESS:
                cmd_len = msp430x_address (info, addr, insn, op1, op2,
                                           comm1, comm2);
                break;
              default:
                break;
              }
	}

      if (cmd_len)
	break;
    }

  if (cmd_len < 1)
    {
      /* Unknown opcode, or invalid combination of operands.  */
      (*prin) (stream, ".word	0x%04x;	????\t%s%s", PS (insn), comm1, comm2);
      return 2;
    }

    
  if (repeats)
    {
      if (repeats < 0)
        (*prin) (stream, ".rpt\t#%d\n\t\t\t\t", 0 - repeats);
      else
        (*prin) (stream, ".rpt\tr%d\n\t\t\t\t", repeats);
    }
  
  (*prin) (stream, "%s%s", opcode->name, width_modifier[op_width]);

  if (*op1)
    (*prin) (stream, "\t%s", op1);
  if (*op2)
    (*prin) (stream, ",");

  if (strlen (op1) < 7)
    (*prin) (stream, "\t");
  if (!strlen (op1))
    (*prin) (stream, "\t");

  if (*op2)
    (*prin) (stream, "%s", op2);
  if (strlen (op2) < 8)
    (*prin) (stream, "\t");

  if (*comm1 || *comm2)
    (*prin) (stream, ";");
  if (*comm1)
    (*prin) (stream, "%s", comm1);
  if (*comm1 && *comm2)
    (*prin) (stream, ", ");
  if (*comm2)
    (*prin) (stream, "%s", comm2);
  return cmd_len;
}
