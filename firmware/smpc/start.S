	.section .text.start
	.globl _start
_start:
	la sp, _stack_top
	.option push
	.option norelax
	la gp, __global_pointer$
	.option pop
	li s0, 0x40000000
	li s1, 0x40000080
	li t0, 0x80000000
	addi t1, t0, 256
1:	sw zero, 0(t0)
	addi t0, t0, 4
	bltu t0, t1, 1b
	call main
2:	j 2b
