/* ldiv() is the same as __divmodsi4() in libgcc */

	.section .text
	.global div
div:
;; save clobbers first
        push    r10
        push    r11
;; mov registers.
        mov     r14, r10	;; denom
        mov     r15, r12	;; num
;; divide
        call    #__divmodhi4
	mov	r14, r15
	mov 	r12, r14
;; result is in there already...
;; restore regs and return.
        pop     r11
        pop     r10
        ret

