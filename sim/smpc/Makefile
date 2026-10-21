# SMPC LLE (HMCS400 + firmware read from ref/) vs SMPC_HLE: same bus traffic, vblank and pads; compare data and timing.
#   make -C sim smpc     (or make -C sim/smpc run)
ROOT := $(abspath ../..)
SRC  := $(ROOT)/src/fpga/saturn/Saturn
MIF  := $(ROOT)/ref/Saturn_MiSTer/rtl/Saturn/SMPC/smpc.mif
B    ?= build
FILES := $(SRC)/SMPC/HMCS400_pkg.sv $(SRC)/SMPC/HMCS400_core.sv $(SRC)/SMPC/HMCS400_mem.sv $(SRC)/SMPC/SMPC_pkg.sv \
         $(SRC)/SMPC/SMPC.sv $(SRC)/SMPC_HLE.sv
VFLAGS := --binary --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD -Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-UNOPTFLAT \
          -Wno-MULTIDRIVEN -Wno-INITIALDLY -Wno-PINMISSING -Wno-DEFPARAM --x-assign 0 --x-initial 0 -DSIM -DPOCKET_CUT_SMPC_HLE -j 4

.PHONY: run clean
run: $(B)/log.txt
	python3 tools/cmp.py $(B)/log.txt $(TOL)

$(B)/smpc.hex: $(MIF) tools/mif2hex.py
	mkdir -p $(B) && python3 tools/mif2hex.py $< $@
$(B)/Vtb: $(FILES) tb_smpc.sv ../sh2/tb/altera_models.sv
	mkdir -p $(B)/obj && verilator $(VFLAGS) --top-module tb_smpc --Mdir $(B)/obj -o ../Vtb ../sh2/tb/altera_models.sv $(FILES) tb_smpc.sv
$(B)/log.txt: $(B)/Vtb $(B)/smpc.hex
	cd $(B) && ./Vtb > log.txt
clean:
	rm -rf $(B)
