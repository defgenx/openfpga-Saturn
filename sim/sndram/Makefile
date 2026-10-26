# SH-2 -> SCUP2 -> SCSPP -> sdram_pocket -> SDRAM model: word/byte write+read-back at sound RAM 0x25A00000 (Pocket build macros).
#   make -C sim sndram            (EXTRA=-DUSE_SCSP / -DUSE_SCU swap in the MiSTer originals)
ROOT := $(abspath ../..)
SRC  := $(ROOT)/src/fpga/saturn
SH   := $(SRC)/SH/sh2p
SCU  := $(SRC)/Saturn/SCUP2
MEM  := $(ROOT)/src/fpga/core/mem
B    ?= build
SHF  := SH2P_pkg SH2P_mem SH2P_regfile SH2P_dec SH2P_alu SH2P_core SH7604P_pkg SH7604P_mem SH7604P_CACHE SH7604P_BSC SH7604P_DMAC SH7604P_UBC SH7604P_INTC SH7604P_FRT SH7604P_WDT SH7604P_SCI SH7604P_DIVU SH7604P_MULT SH7604P_MSBY SH7604P
ifdef USE_SCU
SCUF := $(addprefix $(ROOT)/ref/Saturn_MiSTer/rtl/Saturn/SCU/,DSP_PKG.sv SCU_PKG.sv RAM.sv DSP.sv SCU.sv)
else
SCUF := $(foreach f,SCUP2_DSP_PKG SCUP2_RAM SCUP2_PKG SCUP2_DSP SCUP2,$(SCU)/$(f).sv)
endif
ifdef USE_SCSP
SCSPF := $(SRC)/Saturn/SCSP/SCSP_pkg.sv $(SRC)/Saturn/SCSP/SCSP.sv
else
SCSPF := $(SRC)/Saturn/SCSPP/SCSPP_pkg.sv $(SRC)/Saturn/SCSPP/SCSPP.sv
endif
FILES := ../scsp/altsyncram.v $(ROOT)/src/fpga/core/ce_gen.sv $(SRC)/Saturn/DCC.sv $(foreach f,$(SHF),$(SH)/$(f).sv) $(SCUF) $(SCSPF) $(MEM)/sdram_pocket.sv $(MEM)/sdram_clk_out.sv ../mem/models/sdram_model.sv tb_sndram.sv
DEFS := -DPOCKET_SH2P -DPOCKET_CUT_SCU_DSP -DPOCKET_CUT_SCSP_DSP $(if $(USE_SCU),,-DPOCKET_SCUP2) $(if $(USE_SCSP),,-DPOCKET_SCSPP) $(if $(USE_SCU),-DUSE_SCU) $(if $(USE_SCSP),-DUSE_SCSP) $(EXTRA)
.PHONY: run clean
run:
	@mkdir -p $(B) && python3 gen_prog.py $(B)/prog.hex $(B)/exp.hex && verilator --binary --timing -Wno-fatal -Wno-PROCASSWIRE -Wno-lint -Wno-style -Wno-TIMESCALEMOD --x-assign 0 --x-initial 0 $(DEFS) -GNEXP=$$(wc -l < $(B)/exp.hex | tr -d " ") --top-module tb_sndram --Mdir $(B)/obj -o ../Vtb -j 4 $(FILES) >$(B)/vlog.txt 2>&1 || { tail -30 $(B)/vlog.txt; exit 1; }
	@cd $(B) && ./Vtb > log.txt; grep -E "MISMATCH|done_flag|PASS|FAIL" log.txt; grep -q PASS log.txt
clean:
	rm -rf build
