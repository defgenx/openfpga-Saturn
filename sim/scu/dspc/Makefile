# SCUP2_DSP (reference) vs SCUP2_DSPC (compact) control-port bench.   make [SEEDS="1 2 3"]
VERILATOR ?= verilator
S := ../../../src/fpga/saturn/Saturn/SCUP2
SEEDS ?= 1
B := build
all: run
$(B)/Vtb: tb_dspc.sv $(S)/SCUP2_DSPC.sv $(S)/SCUP2_DSP.sv $(S)/SCUP2_DSP_PKG.sv $(S)/SCUP2_RAM.sv
	$(VERILATOR) --binary --timing -O1 --quiet -Wno-fatal -Wno-lint -Wno-style -Wno-DEFOVERRIDE -Wno-TIMESCALEMOD --x-assign 0 --x-initial 0 \
	  --top-module tb --Mdir $(B) -o Vtb $(S)/SCUP2_DSP_PKG.sv $(S)/SCUP2_RAM.sv $(S)/SCUP2_DSP.sv $(S)/SCUP2_DSPC.sv tb_dspc.sv
run: $(B)/Vtb
	@touch prg.txt; fail=0; for s in $(SEEDS); do out=$$($(B)/Vtb +SEED=$$s 2>&1 | grep -v readmem); echo "$$out" | tail -4; echo "$$out" | grep -q '^PASS' || fail=1; done; exit $$fail
clean:
	rm -rf $(B) prg.txt
