
/*
 * Copyright (c) 2003 Dmitry Dicky diwil@mail.ru
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
 * $Id: _init_section__.c,v 1.2 2003/02/07 12:56:30 diwil Exp $
 */

#include <sys/types.h>
#include <sys/unistd.h>
#include <string.h>

int _init_section__(int section)
{
  uint16_t start, stop, size, stack, ret = 0;
  void *from, *where;

  if(section == MSP430_SECTION_BSS)
  {
      (uint16_t *)start = &__bss_start;
      (uint16_t *)stop  = &__bss_end;
      bzero(&__bss_start,stop-start);
      return ret;
  } 
  else if(section == MSP430_SECTION_DATA)
  {
      (uint16_t *)start = &__data_start_rom;
      (uint16_t *)stop  = &_edata;
      from = (void *)&_etext;
      where = (void *)&__data_start;
      size = ret = stop - start;
  }
  else if(section == MSP430_SECTION_NOINIT)
  {
      (uint16_t *)start = &__noinit_start_rom;
      (uint16_t *)stop  = &__noinit_end_rom;
      from = (void *)&__noinit_start_rom;
      where = (void *)&__bss_end;
      size = ret = stop - start;
  }   
  else
    return -1;
  
  /* check if stack bottom will be overriden */
  __asm__ __volatile__("mov	r1, %0" : "=r" (stack));
  if(stack <= (uint16_t)where + size)
    return -1;
  
  while(size--)
  {
    *((char *)where)++ = *((char *)from)++;
  }
  
  return ret;
}

