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
 * $Id: floatdisf.c,v 1.6 2004/05/28 10:11:47 diwil Exp $
 */


#define HIDDEN          (1l << 23)

/* 64 bit int to 32 bit float */

/* TESTED */

long __floatdisf(long long a1)
{
	register short sign;
	register short exp = (63<<7) + (126<<7);
	register unsigned long a2;

	if(!a1) return 0l;
	
	if(a1<0)
	{
		sign = 0x8000;
		a1 = -a1;
	}
	else
	{
		sign = 0;
	}

	while ((unsigned long long)a1 < (1ull << 62))
	{
		a1 <<= 1;
		exp -= (1 << 7);
	}

	/* _correct_ rounding */
	if((a1&(0x7full<<32)) == (0x40ull<<32))
	{
	  if(a1&(1ull<<39))
	    a1 += 0x40ull<<32;
	}
	else
	{
	  a1 += 0x3full<<32;
	}

	if((unsigned long long)a1 >= (1ull << 63))
	{
	  a1 >>= 1;
	  exp += (1<<7);
	}
	
	a2 = (unsigned long long)a1 >> 32;
	a2 >>= 7;
	a2 &= ~HIDDEN ;
	a2 &= 0x7FFFFFul;

	exp |= sign;

	a2 = ((long)exp << 16) | a2;

	return a2;
}

#if 0
#include <stdio.h>

int main()
{
  long long i;
  union {
    float f;
    long l;
  } n1,n2;


  for(i = 0x10000000 ; i < 0x7fffffff; i++)
  {

    n1.f = (float)i;

    n2.l = floatdisf(i);

    if(n1.l != n2.l)
    {
      printf("rerr: %qd true:%x (%f), got:%x (%f)\n", i, n1.l,n1.f, n2.l, n2.f);
    }

  }

  return 0;

}
#endif

