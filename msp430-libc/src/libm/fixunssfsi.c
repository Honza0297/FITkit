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
 * $Id: fixunssfsi.c,v 1.5 2004/05/28 10:11:47 diwil Exp $
 */


/* TESTED */

#include <limits.h>

unsigned long __fixunssfsi(unsigned long a1)
{
	register int exp;
	union { 
		long ll;
		struct _li {int lo,hi;} li;
	} at;

	at.ll = a1;	

	if(!a1) return a1;

	if(a1 >= 0x4f800000ul )
	{
		return ULONG_MAX;
	}

	exp = at.li.hi & 0x7f80;
	
	exp >>= 7;
	
	exp = exp - 126 - 32;

	if( exp > 0 ) return (0xFFFFFFFFul);
	
	a1 &= 0x007FFFFFul;
	a1 |= 1ul << 23;
	
	a1 <<= 8;
	
	exp = -exp;
	
	while(exp--)
	{
		a1 >>= 1;
	}

	return a1;
}

