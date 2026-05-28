	.section P,"ax"
	.global	_test_0
	.type	_test_0, @function
_test_0:
	bclr	#0, [r1].B
	bclr	#1, r2
	mov.B	r2, 1[r1]
	bclr	#0, 2[r1].B
	bclr	#0, 65000[r1].B
	rts
	.size	_test_0, .-_test_0
	.global	_test_1
	.type	_test_1, @function
_test_1:
	mov.L	#-2, r5
	rotl	r2, r5
	and	r5, r1
	rts
	.size	_test_1, .-_test_1
	.global	_test_2
	.type	_test_2, @function
_test_2:
	bclr	#1, r1
	rts
	.size	_test_2, .-_test_2
	.global	_test_3
	.type	_test_3, @function
_test_3:
	bset	#4, [r1].B
	bset	#1, r2
	mov.B	r2, 1[r1]
	bset	#4, 2[r1].B
	bset	#4, 65000[r1].B
	bset	r3, 5[r1].B
	rts
	.size	_test_3, .-_test_3
	.global	_test_4
	.type	_test_4, @function
_test_4:
	bset	r2, r1
	rts
	.size	_test_4, .-_test_4
	.global	_test_5
	.type	_test_5, @function
_test_5:
	bset	#8, r1
	rts
	.size	_test_5, .-_test_5
	.global	_test_6
	.type	_test_6, @function
_test_6:
	bnot	#4, [r1].B
	bnot	#1, r2
	mov.B	r2, 1[r1]
	bnot	#4, 2[r1].B
	bnot	#4, 65000[r1].B
	bnot	r3, 5[r1].B
	rts
	.size	_test_6, .-_test_6
	.global	_test_7
	.type	_test_7, @function
_test_7:
	bnot	r2, r1
	rts
	.size	_test_7, .-_test_7
	.global	_test_8
	.type	_test_8, @function
_test_8:
	bnot	#8, r1
	rts
	.size	_test_8, .-_test_8
