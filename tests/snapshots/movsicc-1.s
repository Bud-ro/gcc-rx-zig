	.section P,"ax"
	.section	.text.stzreg_beq,"ax",@progbits
	.global	_stzreg_beq
	.type	_stzreg_beq, @function
_stzreg_beq:
	cmp	#0, r1
	mov.L	r2, r1
	beq 1f
	mov r3, r1
1:
	rts
	.size	_stzreg_beq, .-_stzreg_beq
	.global	_Xb
	.section	.bss.Xb,"aw",@nobits
	.balign 4
	.type	_Xb, @object
	.size	_Xb, 4
_Xb:
	.zero	4
	.global	_Xa
	.section	.bss.Xa,"aw",@nobits
	.balign 4
	.type	_Xa, @object
	.size	_Xa, 4
_Xa:
	.zero	4
