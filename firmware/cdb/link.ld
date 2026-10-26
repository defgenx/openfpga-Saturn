/* ROM at 0 (also readable on the data bus), RAM at 0x80000000, MMIO at 0x40000000 */
MEMORY {
	ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 16K
	RAM (rw)  : ORIGIN = 0x80000000, LENGTH = 4K
}
ENTRY(_start)
SECTIONS {
	.text : { *(.text.start) *(.text .text.*) *(.rodata .rodata.*) *(.srodata .srodata.*) } > ROM
	.bss (NOLOAD) : { __bss_start = .; *(.sbss .sbss.*) *(.bss .bss.*) *(COMMON) . = ALIGN(4); __bss_end = .; } > RAM
	_stack_top = ORIGIN(RAM) + LENGTH(RAM);
}
