# Memory subsystem simulations (iverilog). `make -C sim mem` runs everything.
IVL ?= iverilog
VVP ?= vvp
SRC := ../../src/fpga/core/mem
FLAGS := -g2012 -Wall -Wno-timescale

all: elab sdram sdram-scsp psram ddram fb load boot

build:
	mkdir -p build

SDSRC := $(SRC)/sdram_pocket.sv $(SRC)/sdram_clk_out.sv
build/tb_sdram: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)

build/tb_psram: tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv | build
	$(IVL) $(FLAGS) -o $@ tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv

psram: build/tb_psram
	$(VVP) build/tb_psram +N=1500

# the dies start in the mode another core left: our own BCR, sync variable LC3, sync fixed LC6, sync fixed LC8
psram-modes: | build
	@for b in 651F 1D1F 751F 451F; do \
	  $(IVL) $(FLAGS) -DSTART_BCR=16\'h$$b -o build/tb_psram_$$b tb_psram.sv models/psram_model.sv $(SRC)/psram_sync.sv && \
	  printf "start BCR %s: " $$b && $(VVP) build/tb_psram_$$b +N=300 | grep -E 'PASS|FAIL'; done

build/tb_ddram: tb_ddram.sv models/psram_bench.sv models/psram_model.sv $(SRC)/ddram_pocket.sv $(SRC)/psram_sync.sv | build
	$(IVL) $(FLAGS) -o $@ tb_ddram.sv models/psram_bench.sv models/psram_model.sv $(SRC)/ddram_pocket.sv $(SRC)/psram_sync.sv

ddram: build/tb_ddram
	$(VVP) build/tb_ddram

FBSRC := $(SRC)/vdp1_fb_pocket.sv $(SRC)/sram_pocket.sv models/sram_model.sv
build/tb_fb: tb_fb.sv $(FBSRC) | build
	$(IVL) $(FLAGS) -o $@ tb_fb.sv $(FBSRC)

build/tb_fb_slow: tb_fb.sv $(FBSRC) | build
	$(IVL) $(FLAGS) -DSRAMAA_PS=66000 -o $@ tb_fb.sv $(FBSRC)

build/tb_fb_nowait: tb_fb.sv $(FBSRC) | build
	$(IVL) $(FLAGS) -DFBD_NOWAIT -o $@ tb_fb.sv $(FBSRC)

build/tb_fb_al: tb_fb.sv $(FBSRC) | build
	$(IVL) $(FLAGS) -DCLK_ALIGNED -o $@ tb_fb.sv $(FBSRC)

# then with the PLL's clock phase and random SRAM power-up contents
fb: build/tb_fb build/tb_fb_al
	$(VVP) build/tb_fb
	$(VVP) build/tb_fb_al +MEMRAND | grep -E 'PASS|FAIL'

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

# SDARGS: three WRITEs follow the last word of a read burst at the next clock (datasheet "Read to Write", Figure 6), which
# overlaps the worst-case tHZ (6 ns) of that word by 1.6 ns at these pad delays; the model accepts tRP from 17.4 ns and
# counts it (bank 3 alternates B1 and SCSP every 8 clk_ram). Both are in docs/memory.md section 3.
SDARGS ?= +OVERLAP_PS=1700 +SD_TRP_PS=17400
sdram: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=300 $(SDARGS)
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=300 $(SDARGS)
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300 $(SDARGS)
	$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=300 +W320 $(SDARGS)
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300 +W320 $(SDARGS)
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300 +RESTART_US=20 $(SDARGS)
	$(VVP) build/tb_sdram +PROFILE=2 +RUN_US=300 +RESTART_US=20 +W320 $(SDARGS)

# SCSP sound-RAM deadline with the SCSPP request timing and PLL-aligned clocks (docs/memory.md section 3, SCSP):
# 320 and 352 enables at their clocks (NTSC, PAL), and the 320 enables at the 352 clock
build/tb_sdram_scsp: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -DSCSP_EXACT -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)
sdram-scsp: build/tb_sdram_scsp
	@for a in "+W320 +CE_IN=53748200" "+W320 +CE_IN=53375000" "+CE_IN=57272800" "+CE_IN=56875000" "+CE_IN=53748200" "+W320 +CE_IN=53748200 +RESTART_US=20"; do \
	  printf "%s: " "$$a"; $(VVP) build/tb_sdram_scsp +PROFILE=2 +RUN_US=300 $(SDARGS) $$a | grep -E 'margin|PASS|FAIL' | tr '\n' ' '; echo; done

clean:
	rm -rf build

# the whole subsystem elaborates (no stimulus)
elab:
	$(IVL) $(FLAGS) -o /dev/null $(SRC)/mem_pocket.sv $(SDSRC) $(SRC)/psram_sync.sv \
	  $(SRC)/ddram_pocket.sv $(SRC)/load_pocket.sv $(SRC)/ram_reset.sv $(SRC)/sram_pocket.sv $(SRC)/vdp1_fb_pocket.sv 2>&1 | grep -v sorry; test $${PIPESTATUS[0]} -eq 0

# 64 ms of VDP2/SCSP traffic against the 64 ms retention limit (about 10 minutes)
long: build/tb_sdram
	$(VVP) build/tb_sdram +PROFILE=1 +RUN_US=66000 +TREF_US=64000 $(SDARGS)

# runs that must FAIL: always-busy VDP2 never scrubs banks 0/1; a 66 ns SRAM (read sampled 69.8 ns after the address edge, 4.5 ns of pins; 62 ns passes);
# VDP1P's draw side ignoring FB_RDY (test F)
negative: build/tb_sdram build/tb_fb build/tb_fb_slow build/tb_fb_nowait
	-$(VVP) build/tb_sdram +PROFILE=0 +RUN_US=3000 +TREF_US=2000 $(SDARGS) | tail -3
	-$(VVP) build/tb_fb_slow +N=100 | tail -3
	-$(VVP) build/tb_fb_nowait +N=100 | grep -E 'tb_fb: F|PASS|FAIL'

.PHONY: all elab long negative sdram sdram-scsp psram psram-modes ddram fb load boot clean mc-check

# data-eye sweep: extra delay on the SDRAM clock path (ps), rising-edge capture and falling-edge capture
build/tb_sdram_neg: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -DCAPNEG -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)

skew: build/tb_sdram build/tb_sdram_neg
	@for sk in -4000 -3000 -2000 -1500 -1000 -500 0 500 1000 2000 3000 3500 4000; do \
	  printf "rising-edge capture, clock skew %6d ps: " $$sk; $(VVP) build/tb_sdram +PROFILE=2 +RUN_US=40 +CAPPS=$$sk $(SDARGS) | grep "data errors" ; done
	@for sk in -4000 -3000 -2000 -1000 0 1000 2000 3000 4000; do \
	  printf "falling-edge capture, clock skew %6d ps: " $$sk; $(VVP) build/tb_sdram_neg +PROFILE=2 +RUN_US=40 +CAPPS=$$sk $(SDARGS) | grep "data errors" ; done

# Hold exceptions of core_constraints.sdc (SDRAM request registers capture at odd clk_ram edges only): make mc-check
build/tb_sdram_mc: tb_sdram.sv models/sdram_model.sv $(SDSRC) | build
	$(IVL) $(FLAGS) -DMC_CHECK -o $@ tb_sdram.sv models/sdram_model.sv $(SDSRC)
mc-check: build/tb_sdram_mc
	$(VVP) build/tb_sdram_mc +PROFILE=0 +RUN_US=300 $(SDARGS) | grep -E 'MC_CHECK|PASS|FAIL'
	$(VVP) build/tb_sdram_mc +PROFILE=1 +RUN_US=300 $(SDARGS) | grep -E 'MC_CHECK|PASS|FAIL'
	$(VVP) build/tb_sdram_mc +PROFILE=2 +RUN_US=300 $(SDARGS) | grep -E 'MC_CHECK|PASS|FAIL'
	$(VVP) build/tb_sdram_mc +PROFILE=2 +RUN_US=300 +W320 $(SDARGS) | grep -E 'MC_CHECK|PASS|FAIL'
