lda: MACRO
    ld a, \2
    ld \1, a
ENDM

bge: MACRO
    jr nc, \1
ENDM

blt: MACRO
    jr c, \1
ENDM

hswap: MACRO
	ldh a, \1
	push af
	ldh a, \2
	ldh \1, a
	pop af
	ld \2, a
ENDM

add_hl_a: MACRO
	rst $08
ENDM
