#!/bin/sh
riscv64-elf-gcc -march=rv32i -mabi=ilp32 -Os -ffreestanding -fno-builtin -nostdlib -fno-pic -ffunction-sections -fdata-sections -fno-asynchronous-unwind-tables -fomit-frame-pointer -ffixed-s0 -ffixed-s1 -Wall -Wextra -Wl,--gc-sections -T link.ld -o /tmp/smpc.elf start.S smpc.c -lgcc "$@" && riscv64-elf-size /tmp/smpc.elf
