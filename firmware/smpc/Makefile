# Firmware of SMPC_SERV (RV32IC, SERV). Output: ../../src/fpga/saturn/Saturn/SMPC_SERV/smpc_fw.hex (one 32-bit word per line).
CC      := riscv64-elf-gcc
OBJCOPY := riscv64-elf-objcopy
OBJDUMP := riscv64-elf-objdump
SIZE    := riscv64-elf-size
CFLAGS  := -march=rv32ic -mabi=ilp32 -Os -ffreestanding -fno-builtin -nostdlib -fno-pic -ffunction-sections -fdata-sections \
           -fno-asynchronous-unwind-tables -fomit-frame-pointer -fno-jump-tables -ffixed-s0 -ffixed-s1 -Wall -Wextra $(EXTRA)
LDFLAGS := -nostdlib -Wl,--gc-sections -T link.ld
OUT     := ../../src/fpga/saturn/Saturn/SMPC_SERV
ROMW    ?= 512

all: build/smpc.elf $(OUT)/smpc_fw.hex
	$(SIZE) build/smpc.elf
build/smpc.elf: smpc.c hw.h start.S link.ld
	@mkdir -p build
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ start.S smpc.c -lgcc
	$(OBJDUMP) -d -S $@ > build/smpc.lst
$(OUT)/smpc_fw.hex: build/smpc.elf mkhex.py
	@mkdir -p $(OUT)
	$(OBJCOPY) -O binary -j .text $< build/smpc.bin
	python3 mkhex.py build/smpc.bin $(ROMW) $@
clean:
	rm -rf build
