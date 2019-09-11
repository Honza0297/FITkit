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


;; -*- mode: asm -*-

#include <io.h>

/***************************************************************
 *	Interrupt Vectors:
 *	WARNING!!! All vectors must be defined here!!!
 *	User may not define its interrupt service routines!
 ***************************************************************/

        .weak _unexpected_
	.global _unexpected_1_
	
	.text
        .p2align 1,0

_unexpected_1_:
	br	#_unexpected_
_unexpected_:
        reti

.section .vectors, "ax", @progbits

.macro  VEC name
	.weak   \name
        .set    \name, _unexpected_1_
        .word   \name
.endm

.global InterruptVectors
        .type   InterruptVectors, @object

#if defined(__MSP430X2__)
	.size InterruptVectors, 0x80
#elif defined(__MSP430X__)
	.size InterruptVectors, 0x40
#else
	.size InterruptVectors, 0x20
#endif
    
InterruptVectors:
#if defined(__MSP430X2__)
/* 80 */	VEC vector_ff80
/* 82 */	VEC vector_ff82
/* 84 */	VEC vector_ff84
/* 86 */	VEC vector_ff86
/* 88 */	VEC vector_ff88
/* 8a */	VEC vector_ff8a
/* 8c */	VEC vector_ff8c
/* 8e */	VEC vector_ff8e
/* 90 */	VEC vector_ff90
/* 92 */	VEC vector_ff92
/* 94 */	VEC vector_ff94
/* 96 */	VEC vector_ff96
/* 98 */	VEC vector_ff98
/* 9a */	VEC vector_ff9a
/* 9c */	VEC vector_ff9c
/* 9e */	VEC vector_ff9e
/* a0 */	VEC vector_ffa0
/* a2 */	VEC vector_ffa2
/* a4 */	VEC vector_ffa4
/* a6 */	VEC vector_ffa6
/* a8 */	VEC vector_ffa8
/* aa */	VEC vector_ffaa
/* ac */	VEC vector_ffac
/* ae */	VEC vector_ffae
/* b0 */	VEC vector_ffb0
/* b2 */	VEC vector_ffb2
/* b4 */	VEC vector_ffb4
/* b6 */	VEC vector_ffb6
/* b8 */	VEC vector_ffb8
/* ba */	VEC vector_ffba
/* bc */	VEC vector_ffbc
/* be */	VEC vector_ffbe
#endif
#if defined(__MSP430X2__) || defined(__MSP430X__)
/* c0 */	VEC vector_ffc0
/* c2 */	VEC vector_ffc2
/* c4 */	VEC vector_ffc4
/* c6 */	VEC vector_ffc6
/* c8 */	VEC vector_ffc8
/* ca */	VEC vector_ffca
/* cc */	VEC vector_ffcc
/* ce */	VEC vector_ffce
/* d0 */	VEC vector_ffd0
/* d2 */	VEC vector_ffd2
/* d4 */	VEC vector_ffd4
/* d6 */	VEC vector_ffd6
/* d8 */	VEC vector_ffd8
/* da */	VEC vector_ffda
/* dc */	VEC vector_ffdc
/* de */	VEC vector_ffde
#endif
/* e0 */	VEC vector_ffe0
/* e2 */	VEC vector_ffe2
/* e4 */	VEC vector_ffe4
/* e6 */	VEC vector_ffe6
/* e8 */	VEC vector_ffe8
/* ea */	VEC vector_ffea
/* ec */	VEC vector_ffec
/* ee */	VEC vector_ffee
/* f0 */	VEC vector_fff0
/* f2 */	VEC vector_fff2
/* f4 */	VEC vector_fff4
/* f6 */	VEC vector_fff6
/* f8 */	VEC vector_fff8
/* fa */	VEC vector_fffa
/* fc */	VEC vector_fffc
		.word _reset_vector__

/* end of Interrupt vectors declarations */
