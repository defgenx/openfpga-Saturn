# Memory subsystem simulations (iverilog). `make -C sim mem` runs everything.
IVL ?= iverilog
VVP ?= vvp
SRC := ../../src/fpga/core/mem
FLAGS := -g2012 -Wall -Wno-timescale

all: elab sdram psram ddram fb load

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

build/tb_load: tb_load.sv $(SRC)/load_pocket.sv | build
	$(IVL) $(FLAGS) -o $@ tb_load.sv $(SRC)/load_pocket.sv

load: build/tb_load
	$(VVP) build/tb_load

sdram: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=300
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=300
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300

clean:
	rm -rf build

# the whole subsystem elaborates (no stimulus)
elab:
	$(IVL) $(FLAGS) -o /dev/null $(SRC)/mem_pocket.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv $(SRC)/psram_sync.sv \
	  $(SRC)/ddram_pocket.sv $(SRC)/load_pocket.sv $(SRC)/sram_pocket.sv $(SRC)/vdp1_fb_pocket.sv 2>&1 | grep -v sorry; test $${PIPESTATUS[0]} -eq 0

# 64 ms of VDP2/SCSP traffic against the 64 ms retention limit (about 10 minutes)
long: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=66000 +TREF_US=64000

# runs that must FAIL: always-busy VDP2 never scrubs banks 0/1; a 30 ns SRAM
negative: build/tb_sdram build/tb_fb build/tb_fb_slow
	-$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=3000 +TREF_US=2000 | tail -3
	-$(VVP) build/tb_fb_slow +N=100 | tail -3

.PHONY: all elab long negative sdram psram ddram fb load clean

# data-eye sweep: extra delay on the SDRAM clock path (ps), rising-edge capture and falling-edge capture
build/tb_sdram_neg: tb_sdram.sv models/sdram_model.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv | build
	$(IVL) $(FLAGS) -DCAPNEG -o $@ tb_sdram.sv models/sdram_model.sv $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv

skew: build/tb_sdram build/tb_sdram_neg
	@for sk in -4000 -3000 -2000 -1500 -1000 -500 0 500 1000 2000 3000 3500 4000; do \
	  printf "rising-edge capture, clock skew %6d ps: " $$sk; $(VVP) build/tb_sdram +PROFILE=2 +RUN_US=40 +CAPPS=$$sk | grep "data errors" ; done
	@for sk in -4000 -3000 -2000 -1000 0 1000 2000 3000 4000; do \
	  printf "falling-edge capture, clock skew %6d ps: " $$sk; $(VVP) build/tb_sdram_neg +PROFILE=2 +RUN_US=40 +CAPPS=$$sk | grep "data errors" ; done
