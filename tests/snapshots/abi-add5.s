	.section P,"ax"
	.section	.text.add5,"ax",@progbits
	.global	_add5
	.type	_add5, @function
_add5:
	push.l	r7
	sub	#4, r0
	add	r2, r1
	add	r3, r1
	add	r4, r1
	add	12[r0].L, r1
	rtsd	#8, r7-r7
	.size	_add5, .-_add5
