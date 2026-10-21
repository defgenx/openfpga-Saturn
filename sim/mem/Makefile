# Memory subsystem simulations (iverilog). `make -C sim mem` runs everything.
IVL ?= iverilog
VVP ?= vvp
SRC := ../../src/fpga/core/mem
FLAGS := -g2012 -Wall -Wno-timescale

all: sdram psram

build:
	mkdir -p build

build/tb_sdram: tb_sdram.sv models/sdram_model.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv | build
	$(IVL) $(FLAGS) -o $@ tb_sdram.sv models/sdram_model.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv

build/tb_psram: tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv | build
	$(IVL) $(FLAGS) -o $@ tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv

psram: build/tb_psram
	$(VVP) build/tb_psram +N=1500

sdram: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=300
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=300
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300

clean:
	rm -rf build
