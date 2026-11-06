# Firmware of the HLE CD block (RV32I, SERV without the compressed decoder). Output: cdb_fw.hex ($readmemh, one 32-bit word per line) and .mif.
# The generated files are committed next to the RTL (../../src/fpga/saturn/Saturn/CD/hle/).
ARCH    ?= rv32i
CC      := riscv64-elf-gcc
OBJCOPY := riscv64-elf-objcopy
OBJDUMP := riscv64-elf-objdump
SIZE    := riscv64-elf-size
CFLAGS  := -march=$(ARCH) -mabi=ilp32 -Os -ffreestanding -fno-builtin -nostdlib -fno-pic -ffunction-sections -fdata-sections \
           -fno-asynchronous-unwind-tables -fomit-frame-pointer -Wall -Wextra -Wno-unused-parameter $(EXTRA)
LDFLAGS := -nostdlib -Wl,--gc-sections -T link.ld
OUT     := ../../src/fpga/saturn/Saturn/CD/hle
ROMW    := 4096

all: build/cdb.elf $(OUT)/cdb_fw.hex $(OUT)/cdb_fw.mif
	$(SIZE) build/cdb.elf

build/cdb.elf: cdb.c hw.h start.S link.ld
	@mkdir -p build
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ start.S cdb.c -lgcc
	$(OBJDUMP) -d -S $@ > build/cdb.lst

$(OUT)/cdb_fw.hex: build/cdb.elf mkhex.py
	$(OBJCOPY) -O binary -j .text $< build/cdb.bin
	python3 mkhex.py build/cdb.bin $(ROMW) $(OUT)/cdb_fw.hex $(OUT)/cdb_fw.mif
$(OUT)/cdb_fw.mif: $(OUT)/cdb_fw.hex

clean:
	rm -rf build
