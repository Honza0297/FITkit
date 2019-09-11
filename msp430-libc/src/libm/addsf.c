/*
 * Copyright (c) 2001 Dmitry Dicky diwil@mail.ru
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS `AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $Id: addsf.c,v 1.3 2004/01/31 13:09:57 diwil Exp $
 */


/* TESTED withe SIMU */

#define HIDDEN          (1l << 23)

#define MANT(fp)        (((fp) & 0x7FFFFFl) | HIDDEN)

long __addsf3 (long a1, long a2)
{
  register long mant1, mant2;
  register int exp1, exp2;
  register int sign;

  if(!a1)
    return a2;

  if(!a2) 
    return a1;

  exp1 = (a1>>16)&0x7f80;
  exp2 = (a2>>16)&0x7f80;

  exp1 >>= 7;
  exp2 >>= 7;

  if (exp1 > exp2 + 25) return a1;
  if (exp2 > exp1 + 25) return a2;

  sign = (a1>>16)&0x8000;
  mant1 = MANT(a1);
  mant1 <<= 6;
  if(sign)
    mant1 = -mant1;


  sign = (a2>>16)&0x8000;
  mant2 = MANT(a2);
  mant2 <<= 6;
  if(sign)
    mant2 = -mant2;

  if (exp1 > exp2)
    mant2 >>= exp1 - exp2;
  else
  {
    mant1 >>= exp2 - exp1;
    exp1 = exp2;
  }

  mant1 += mant2;

  /* from this point we do not need 'mant2' anymore.*/
  if (mant1 < 0)
  {
    mant1 = -mant1;
    sign = 0x8000;
  }
  else if (!mant1)
    return 0l;
  else
    sign=0;

  while (!(mant1 & 0xE0000000))
  {
    mant1 <<= 1;
    exp1--;
  }


  if (mant1 & (1l << 30))
  {
    mant1 >>= 1;
    exp1++;
  }

  mant1 += (mant1 & 0x40) ? 0x20 : 0x1F;
  if (mant1 & (1l << 30))
  {
    mant1 >>= 1;
    exp1++;
  }  

  mant1 >>= 6;
  mant1 &= ~HIDDEN;
  exp1 <<= 7;
  mant1 |= ((long)(sign | exp1) << 16);
  return mant1;
}

