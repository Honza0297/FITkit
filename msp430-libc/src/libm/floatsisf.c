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
 * $Id: floatsisf.c,v 1.6 2004/05/28 10:11:47 diwil Exp $
 */



#define EXCESS          126
#define SIGNBIT         0x80000000ul
#define HIDDEN          (1ul << 23)
#define SIGN(fp)        ((fp) & SIGNBIT)
#define EXP(fp)         (((fp) >> 23) & 0x00FFul)
#define MANT(fp)        (((fp) & 0x7FFFFFul) | HIDDEN)
#define PACK(s,e,m)     ((s) | ((e) << 23) | (m))


/* TESTED */

/* 32 bit int to 32 bit float */
long __floatsisf(long a1)
{
	register short sign;
	register short exp = (31<<7) + (EXCESS<<7);


	if(!a1) return a1;
	
	if(a1<0)
	{
		sign = 0x8000ul;
		a1 = -a1;
	}
	else
	{
		sign = 0;
	}
	
	while ((unsigned long)a1 < (1ul<<30) )
	{
		a1 <<= 1;
		exp -= (1 << 7);
	}

	/* _correct_ rounding */
	if((a1&0x7f) == 0x40)
	{
	  if(a1&(1<<7))
	    a1 += 0x3f+1;
	}
	else
	{
	  a1 += 0x3f;
	}

	if((unsigned long)a1 >= (1ul << 31))
	{
	  a1 >>= 1;
	  exp += (1<<7);
	}
	
	a1 >>= 7;
	a1 &= ~HIDDEN ;
	a1 &= 0x7FFFFFul;

	exp |= sign;
	
	a1 = ((long)exp << 16) | a1;
	  
	return a1;
}


#if 0
#include <stdio.h>

int main()
{
  int i;
  union {
    float f;
    long l;
  } n1,n2;


  floatsisf(33554431);

  for(i = 0x10000000 ; i < 0x7fffffff; i++)
  {
    
    n1.f = i;

    n2.l = floatsisf(i);

    if(n1.l != n2.l)
    {
      printf("rerr: %d true:%x (%f), got:%x (%f)\n", i, n1.l,n1.f, n2.l, n2.f);
    }
  
  }

return 0;

}

#endif


