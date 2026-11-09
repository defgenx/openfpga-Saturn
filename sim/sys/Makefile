# Full-system simulation: core_top (the Pocket top) in the ap_core.qsf build configuration, Pocket memory models
# from sim/mem, host bridge model that loads slot 0 through bridge_loader / load_pocket. Needs verilator >= 5.
#   make -C sim sys                   boot test ROM (sim/sys/gen_rom.py) on the full system
#   make -C sim sys BIOS=<file>       a real BIOS image instead (never copied into the repo)
#   make -C sim sys CYCLES=<n>        clk_sys cycle limit (default 20 M), FRAMES=<dir> for PPM dumps, TRACE=1 for all MSH bus cycles
#   +CKPT_US=<n> on the binary        fork checkpoint, replays with replay.sh (docs/sim.md "Checkpoints"); J=<n> build jobs
ROOT   := $(abspath ../..)
B      ?= build
CYCLES ?= 20000000
GAP    ?= 86
MACROS ?= macros_qsf.f
MODELS := ../mem/models/psram_model.sv ../mem/models/sdram_model.sv ../mem/models/sram_model.sv
SIMSRC := models/pll_sim.sv models/altera_mf_sim.sv
J      ?= 8
VFLAGS := --cc --exe --build --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD -Wno-PROCASSWIRE -Wno-BLKANDNBLK \
          --no-assert --x-assign 0 --x-initial 0 --top-module tb_sys -O3 -CFLAGS -O2 $(if $(THREADS),--threads $(THREADS)) \
          -CFLAGS -DSIM_THREADS=$(or $(THREADS),1) --output-split 20000 --output-split-cfuncs 8000 -j $(J)
ARGS   := +CYCLES=$(CYCLES) +GAP=$(GAP) +SD_TRP_PS=17400 $(if $(TRACE),+TRACE) $(if $(FRAMES),+FRAMES=$(abspath $(FRAMES)))

.PHONY: all run rom clean
all: run

$(B)/files.f: prep.py qip2f.py $(wildcard $(ROOT)/src/fpga/core/*.sv $(ROOT)/src/fpga/core/*.v $(ROOT)/src/fpga/core/*/*.sv $(ROOT)/src/fpga/saturn/*/*.sv $(ROOT)/src/fpga/saturn/*/*/*.sv)
	python3 prep.py $(ROOT) $(B)

$(B)/obj/Vtb_sys: Makefile $(B)/files.f tb_sys.sv sim_main.cpp $(MACROS) $(SIMSRC) $(MODELS)
	verilator $(VFLAGS) -f $(MACROS) -F $(B)/files.f $(SIMSRC) $(MODELS) tb_sys.sv $(abspath sim_main.cpp) -Mdir $(B)/obj -o Vtb_sys > $(B)/verilator.log 2>&1 || (tail -30 $(B)/verilator.log; false)

# the boot test ROM (no Sega code) unless BIOS names an image
rom: $(B)/rom.bin
$(B)/rom.bin: gen_rom.py ../sh2/tools/sh2asm.py
	mkdir -p $(B) && python3 gen_rom.py $@

run: $(B)/obj/Vtb_sys $(if $(BIOS),,rom)
	mkdir -p $(B)/run && cp $(ROOT)/src/fpga/*.hex $(ROOT)/src/fpga/*.mem $(B)/run/
	cd $(B)/run && ../obj/Vtb_sys +BIOS=$(if $(BIOS),$(abspath $(BIOS)),$(abspath $(B))/rom.bin) $(ARGS) | tee sim.log

clean:
	rm -rf $(B)
