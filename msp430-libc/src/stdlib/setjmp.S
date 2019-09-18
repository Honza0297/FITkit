/* Copyright (C) 2001 Dmitry Diky <diwil@mail.ru>

This file is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

In addition to the permissions in the GNU General Public License, the
author gives you unlimited permission to link the
compiled version of this file into combinations with other programs,
and to distribute those combinations without any restriction coming
from the use of this file.  (The General Public License restrictions
do apply in other respects; for example, they cover modification of
the file, and distribution when not linked into a combine
executable.)

This file is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.  */

/*
extern int setjmp(jmp_buf __jmpb);
extern void longjmp(jmp_buf __jmpb, int __ret) __ATTR_NORETURN__;
*/

	.section .text
	.global	setjmp
	.global longjmp

setjmp:
	mov	@r1, 	0(r15)	;	save return address
	mov	r1,	2(r15)	;	stack pointer
	incd	2(r15)		;	postdec saved SP cause it contains ret addr
	mov	r2,	4(r15)	;	status register
	mov	r4,	6(r15)
	mov	r5,	8(r15)
	mov	r6,	10(r15)
	mov	r7,	12(r15)
	mov	r8,	14(r15)
	mov	r9,	16(r15)
	mov	r10,	18(r15)
	mov	r11,	20(r15)
	mov	#0, 	r15	;	return value
	ret


longjmp:
	mov	r15,		r13
	mov	r14, 		r15	; r15 now contains a return value
	mov	2(r13),		r1	; restore registers
	mov	4(r13),		r2
	mov	6(r13),		r4
	mov	8(r13),		r5
	mov	10(r13),	r6
	mov	12(r13),	r7
	mov	14(r13),	r8
	mov	16(r13),	r9
	mov	18(r13),	r10
	mov	20(r13),	r11
	br	0(r13)			; jump...

