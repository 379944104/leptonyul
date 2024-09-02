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

enum_start: MACRO
	IF _NARG == 0
		enum_set 0
	ELSE
		enum_set \1
	ENDC
ENDM

enum_set: MACRO
enum_value = \1
ENDM

enum_skip: MACRO
	enum_set (enum_value + 1)
ENDM

enum_elem: MACRO
\1 = enum_value
	enum_skip
ENDM

cooldown: MACRO
  ld a, \1
  or a
  jr z, .no\@
  dec a
  ld \1, a
.no\@:
ENDM

vram_bank_0: MACRO
  xor a
  ldh [$ff4f], a
ENDM

vram_bank_1: MACRO
  ld a, 1
  ldh [$ff4f], a
ENDM
