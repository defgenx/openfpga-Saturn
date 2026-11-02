# Memory subsystem simulations (iverilog). `make -C sim mem` runs everything.
IVL ?= iverilog
VVP ?= vvp
SRC := ../../src/fpga/core/mem
FLAGS := -g2012 -Wall -Wno-timescale

all: elab sdram psram ddram fb load boot

build:
	mkdir -p build

SDSRC := $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv
build/tb_sdram: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)

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
	$(IVL) $(FLAGS) -DSRAMAA_PS=35000 -o $@ tb_fb.sv $(FBSRC)

fb: build/tb_fb
	$(VVP) build/tb_fb

build/tb_load: tb_load.sv $(SRC)/load_pocket.sv | build
	$(IVL) $(FLAGS) -o $@ tb_load.sv $(SRC)/load_pocket.sv

load: build/tb_load
	$(VVP) build/tb_load

build/tb_boot: tb_boot.sv models/psram_bench.sv models/psram_model.sv $(SRC)/ddram_pocket.sv $(SRC)/psram_sync.sv $(SRC)/load_pocket.sv $(SRC)/ram_reset.sv | build
	$(IVL) $(FLAGS) -o $@ tb_boot.sv models/psram_bench.sv models/psram_model.sv $(SRC)/ddram_pocket.sv $(SRC)/psram_sync.sv $(SRC)/load_pocket.sv $(SRC)/ram_reset.sv

# BIOS load while reset is high; +OLD reproduces the pre-fix rst_ram and must lose the BIOS
boot: build/tb_boot
	$(VVP) build/tb_boot
	$(VVP) build/tb_boot +OLD

# OVL: DQ contention limit. The schedule puts a write two pin cycles after a read of another bank, 4 ns of overlap with
# that read's tLZ (docs/memory.md section 3); the bench's own default (1100 ps) fails until the schedule changes.
OVL ?= +OVERLAP_PS=5000
sdram: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=300 $(OVL)
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=300 $(OVL)
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300 $(OVL)

clean:
	rm -rf build

# the whole subsystem elaborates (no stimulus)
elab:
	$(IVL) $(FLAGS) -o /dev/null $(SRC)/mem_pocket.sv $(SDSRC) $(SRC)/psram_sync.sv \
	  $(SRC)/ddram_pocket.sv $(SRC)/load_pocket.sv $(SRC)/ram_reset.sv $(SRC)/sram_pocket.sv $(SRC)/vdp1_fb_pocket.sv 2>&1 | grep -v sorry; test $${PIPESTATUS[0]} -eq 0

# 64 ms of VDP2/SCSP traffic against the 64 ms retention limit (about 10 minutes)
long: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=66000 +TREF_US=64000 $(OVL)

# runs that must FAIL: always-busy VDP2 never scrubs banks 0/1; a 35 ns SRAM (read sampled 34.9 ns after the address)
negative: build/tb_sdram build/tb_fb build/tb_fb_slow
	-$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=3000 +TREF_US=2000 $(OVL) | tail -3
	-$(VVP) build/tb_fb_slow +N=100 | tail -3

.PHONY: all elab long negative sdram psram ddram fb load boot clean mc-check

# data-eye sweep: extra delay on the SDRAM clock path (ps), rising-edge capture and falling-edge capture
build/tb_sdram_neg: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -DCAPNEG -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)

skew: build/tb_sdram build/tb_sdram_neg
	@for sk in -4000 -3000 -2000 -1500 -1000 -500 0 500 1000 2000 3000 3500 4000; do \
	  printf "rising-edge capture, clock skew %6d ps: " $$sk; $(VVP) build/tb_sdram +PROFILE=2 +RUN_US=40 +CAPPS=$$sk | grep "data errors" ; done
	@for sk in -4000 -3000 -2000 -1000 0 1000 2000 3000 4000; do \
	  printf "falling-edge capture, clock skew %6d ps: " $$sk; $(VVP) build/tb_sdram_neg +PROFILE=2 +RUN_US=40 +CAPPS=$$sk | grep "data errors" ; done

# Hold exceptions of core_constraints.sdc (SDRAM request registers capture at odd clk_ram edges only): make mc-check
build/tb_sdram_mc: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -DMC_CHECK -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)
mc-check: build/tb_sdram_mc
	$(VVP) build/tb_sdram_mc +PROFILE=0 +RUN_US=300 $(OVL) | grep -E 'MC_CHECK|PASS|FAIL'
	$(VVP) build/tb_sdram_mc +PROFILE=1 +RUN_US=300 $(OVL) | grep -E 'MC_CHECK|PASS|FAIL'
	$(VVP) build/tb_sdram_mc +PROFILE=2 +RUN_US=300 $(OVL) | grep -E 'MC_CHECK|PASS|FAIL'
