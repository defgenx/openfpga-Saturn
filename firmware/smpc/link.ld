/* ROM at 0 (2 KB), RAM at 0x80000000 (128 B) */
MEMORY {
	ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 4K
	RAM (rw)  : ORIGIN = 0x80000000, LENGTH = 256
}
ENTRY(_start)
SECTIONS {
	.text : { *(.text.start) *(.text .text.*) *(.rodata .rodata.*) *(.srodata .srodata.*) } > ROM
	.data : { *(.data .data.*) *(.sdata .sdata.*) } > RAM AT > ROM
	.bss (NOLOAD) : { *(.sbss .sbss.*) *(.bss .bss.*) *(COMMON) } > RAM
	__global_pointer$ = ORIGIN(RAM) + 0x800;
	_stack_top = ORIGIN(RAM) + LENGTH(RAM);
}
