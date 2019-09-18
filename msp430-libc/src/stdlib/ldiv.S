/* ldiv() is the same as __divmodsi4() in libgcc */

	.section .text
	.global ldiv
ldiv:
;; save clobbers first
        push    r8
        push    r9
        push    r10
        push    r11
;; mov registers.
        mov     r13, r11	;; denom
        mov     r12, r10
        mov     r15, r13	;; num
        mov     r14, r12
;; divide
        call    #__divmodsi4
;; result is in there already...
;; restore regs and return.
        pop     r11
        pop     r10
        pop     r9
        pop     r8
        ret

