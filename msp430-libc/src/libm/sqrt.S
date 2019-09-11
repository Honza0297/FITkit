/*
 * Copyright (c) 2002 Dmitry Dicky diwil@eis.ru
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
 * $Id: sqrt.S,v 1.1 2002/08/30 11:53:44 diwil Exp $
 */
	.file "sqrt.S"
	
	.text
	.p2align 1,0
.global	sqrt
	.type	sqrt,@function
/***********************
 * Function `sqrt':	res = (float)sqrt(float arg); 
 * 	inputs
 ***********************/

#define argsave_lo	r6
#define	argsave_hi	r7

#define	y_lo		r8
#define y_hi		r9

#define yprev_lo	r10
#define yprev_hi	r11



sqrt:
	tst	r15
	jn	.Lsqrt_err

	push	argsave_lo
	push	argsave_hi
	push	y_lo
	push	y_hi
	push	yprev_lo
	push	yprev_hi

	mov	r14, argsave_lo
	mov	r15, argsave_hi
	mov	argsave_lo, y_lo
	mov	argsave_hi, y_hi
	tst	y_lo
	jne	+2
	tst	y_hi
	jeq	.Lfinish
.Lloop:
	mov	y_lo, yprev_lo	; yprev = y
	mov	y_hi, yprev_hi
	mov	y_lo, r12
	mov	y_hi, r13
	mov	argsave_lo, r14	;	arg/y
	mov	argsave_hi, r15
	call	#__divsf3	
	mov	y_lo, r12		; +y
	mov	y_hi, r13
	call	#__addsf3
	mov	#llo(0x3f000000), r12	; *0.5
	mov	#lhi(0x3f000000), r13
	call	#__mulsf3
	mov	r14, y_lo		; result id in r15:r14
	mov	r15, y_hi

	cmp	y_lo, yprev_lo
	jne	.Lloop
	cmp	y_hi, yprev_hi
	jne	.Lloop
.Lfinish:
	mov	y_lo, r14
	mov	y_hi, r15

	pop	yprev_hi
	pop	yprev_lo
	pop	y_hi
	pop	y_lo
	pop	argsave_hi
	pop	argsave_lo
	ret

.Lsqrt_err:
	mov	#0xffff, r14
	mov	#0xffff, r15
	ret

.Lfe1:
	.size	sqrt,.Lfe1-sqrt

