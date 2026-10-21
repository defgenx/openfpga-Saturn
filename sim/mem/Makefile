# Memory subsystem simulations (iverilog). `make -C sim mem` runs everything.
IVL ?= iverilog
VVP ?= vvp
SRC := ../../src/fpga/core/mem
FLAGS := -g2012 -Wall -Wno-timescale

all: sdram psram ddram fb

build:
	mkdir -p build

build/tb_sdram: tb_sdram.sv models/sdram_model.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv | build
	$(IVL) $(FLAGS) -o $@ tb_sdram.sv models/sdram_model.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv

build/tb_psram: tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv | build
	$(IVL) $(FLAGS) -o $@ tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv

psram: build/tb_psram
	$(VVP) build/tb_psram +N=1500

build/tb_ddram: tb_ddram.sv models/psram_bench.sv models/psram_model.sv $(SRC)/ddram_pocket.sv $(SRC)/psram_sync.sv | build
	$(IVL) $(FLAGS) -o $@ tb_ddram.sv models/psram_bench.sv models/psram_model.sv $(SRC)/ddram_pocket.sv $(SRC)/psram_sync.sv

ddram: build/tb_ddram
	$(VVP) build/tb_ddram

FBSRC := $(SRC)/vdp1_fb_pocket.sv $(SRC)/sram_pocket.sv models/sram_model.sv
build/tb_fb: tb_fb.sv $(FBSRC) | build
	$(IVL) $(FLAGS) -o $@ tb_fb.sv $(FBSRC)

build/tb_fb_slow: tb_fb.sv $(FBSRC) | build
	$(IVL) $(FLAGS) -DSRAMAA_PS=30000 -o $@ tb_fb.sv $(FBSRC)

fb: build/tb_fb
	$(VVP) build/tb_fb

sdram: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=300
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=300
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300

clean:
	rm -rf build
