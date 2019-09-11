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
 * $Id: divsf.c,v 1.8 2004/05/28 10:11:47 diwil Exp $
 */

/* TESTED */


#define EXCESS          126
#define SIGNBIT         0x80000000ul
#define HIDDEN          (1ul << 23)
#define SIGN(fp)        ((fp) & SIGNBIT)
#define EXP(fp)         (((fp) >> 23) & 0xFF)
#define MANT(fp)        (((fp) & 0x7FFFFFul) | HIDDEN)
#define PACK(s,e,m)     ((s) | ((e) << 23) | (m))



long __divsf3 (long a1, long a2)
{
	register int  exp;	//asm("r11");
	register int  sign;	//asm("r10");
	register long mask;
	register long result;
	register int  tmp;
	
	/* sign = SIGN (fl1.l) ^ SIGN (fl2.l); */
#if 0	
	__asm__ __volatile__ (
	"mov	%B2, %0         \n\t"
	"and	#0x8000, %0     \n\t"
	"mov	%B3, %1         \n\t"
	"and	#0x8000, %1     \n\t"
	"xor	%1, %0"
		: "=r" (sign),
		  "=r" (tmp) 
		:  "r" (a1),  
		  "r" (a2)
	    );
#endif
	sign = ((a1^a2)>>16)&0x8000;
	exp = 0x7f80 & (a1>>16);
	tmp = 0x7f80 & (a2>>16);

	exp += EXCESS<<7;
	exp -= tmp;

#if 0
	__asm__ __volatile__ (
	"mov	%B1, %0         \n\t"
	"xor	%B2, %0         \n\t"
	"and	#0x8000, %0     \n\t"
		: "=r" (sign)
		:  "r" (a1),  
		  "r" (a2)
	);
	
	__asm__ __volatile__ (
	"mov	%B3, %0         \n\t"
	"and	#0x7f80, %0     \n\t"
	"mov	%B4, %1         \n\t"
	"and	#0x7f80, %1     \n\t"
	"sub	%1, %0          \n\t"
	"add	%2, %0          \n\t"
		: "=r" (exp)
		: "r"  (tmp),
		  "i"  (126<<7),
		  "r" (a1),
		  "r" (a2) 
	);
#endif
	
	a1 = MANT (a1);
	a2 = MANT (a2);
		
	/* divide by zero??? */
	if(!a2)
	{
		/* return NaN or -NaN */
		return (sign ? 0xFFFFFFFFul : 0x7FFFFFFFul);
	}
	
	/* numerator zero??? */
	if(!a1)
		return a1;
	
	
	if(a1<a2)
	{
		a1 <<= 1;
		exp -= 1<<7;
	}
	
	mask = 0x1000000ul;
	result = 0ul;
	__asm__ __volatile__ (";mask");
	while (mask)
	{
		if(a1>=a2)
		{
			result |= mask;
			a1 -= a2;
		}
		__asm__ __volatile__ (";nop");
		a1 <<= 1;
		mask >>= 1;
	}
	__asm__ __volatile__ (";round");
	/* round */
	result += 1;
	
	/* normalize down */
	/* exp++ */
	exp += 1<<7;
	result >>= 1;
	
	result &= ~HIDDEN ;
	
	/* pack up and go home */
	result |= ((long)(sign | exp)<<16);
#if 0
	__asm__ __volatile__ (
	";pack\n\t"
	"bis	%2, %1  \n\t" 
	"bis	%1, %B0 \n\t" 
		:
		: "r" (result),
		  "r" (sign),
		  "r" (exp)
	);
#endif	
	return result;
}

