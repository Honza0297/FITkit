/*
 * Copyright (c) 2002 - 2004 Dmitry Dicky diwil@mail.ru
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
 * $Id: mulsf.c,v 1.10 2004/05/28 10:11:48 diwil Exp $
 */



/* TESTED */

/* long cause nobody cares */

#define EXCESS          126
#define SIGNBIT         0x80000000ul
#define HIDDEN          (1ul << 23)
#define SIGN(fp)        ((fp) & SIGNBIT)
#define EXP(fp)         (((fp) >> 23) & 0x00FFul)
#define MANT(fp)        (((fp) & 0x7FFFFFul) | HIDDEN)
#define PACK(s,e,m)     ((s) | ((e) << 23) | (m))


unsigned long
__fpmulparts(unsigned long a1, unsigned long a2)
{
  register unsigned long long result;

#if 0 
  result = (a1 >> 8) * (a2 >> 8);
  result += ((a1 & 0xFF) * (a2 >> 8)) >> 8;
  result += ((a2 & 0xFF) * (a1 >> 8)) >> 8;
#endif

  result = ((unsigned long long)a1 * (unsigned long long)a2)>>16;

  return result >>2;
}

unsigned long
__mulsf3 (long a1, long a2)
{
	register unsigned long result;
	register int sign;
	register int exp; 
	register int tmp;

	
	if(!a1 || !a2)
	  return 0l;
#if 0
	/* exp = EXP (fl1.l) - EXCESS + EXP (fl2.l); */
	__asm__ __volatile__ ( 
	"mov	%B1, %0		\n\t"
	"and	#0x7f80, %0"
		: "=r" (exp)
		: "r" (a1)
	);

	exp = 0x7f80 & (a1>>16);
	tmp = 0x7f80 & (a2>>16);
	
	__asm__ __volatile__ ( 
	"mov	%B1, %0		\n\t"
	"and	#0x7f80, %0"
		: "=r" (tmp)
		: "r" (a2)
	);
#endif
	
	exp = 0x7f80 & (a1>>16);
	tmp = 0x7f80 & (a2>>16);
	
	exp -= EXCESS<<7;
	exp += tmp;
	

	/* sign = (SIGN (a1) >> 16) ^ (SIGN (a2) >> 16); */
#if 0
	
	__asm__ __volatile__ (
	"mov	%B1, %0         \n\t"
	"xor	%B2, %0         \n\t"
	"and	#0x8000, %0"
		: "=r" (sign)
		: "r" (a1),
		  "r" (a2)
	);
#endif

	sign = ((a1^a2)>>16)&0x8000;
	
	a1 = MANT (a1);
	a2 = MANT (a2);
		

	result = __fpmulparts(a1,a2);
	
	if (result & 0x20000000ul)
	{
		/* round */
		result += 0x20ul;
		result >>= 6;
	}
	else
	{
		/* round */
		result += 0x10ul;
		result >>= 5;
		exp -= 1<<7;
	}
	
	if (result & (HIDDEN<<1))
	{
		result >>= 1;
		exp += 1<<7;
	}

	result &= ~HIDDEN;
	

	result |= ((long)(sign | exp)<<16);
#if 0	
	__asm__ __volatile__ (
	";pack\n\t"
	"bis	%2, %1  \n\t"
	"bis	%1, %B0 \n\t"
		: "+r" (result)
		: "r" (sign),
		"r" (exp)
	);
#endif	
	return result;                                                                                                            
}

