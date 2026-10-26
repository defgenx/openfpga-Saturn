# VBLANK -> SCUP2 -> SH7604P interrupt path with the build's macros (Pocket build configuration).
#   make -C sim irq
ROOT := $(abspath ../..)
SRC  := $(ROOT)/src/fpga/saturn
SH   := $(SRC)/SH/sh2p
SCU  := $(SRC)/Saturn/SCUP2
B    ?= build
SHF  := SH2P_pkg SH2P_mem SH2P_regfile SH2P_dec SH2P_alu SH2P_core SH7604P_pkg SH7604P_mem SH7604P_CACHE SH7604P_BSC SH7604P_DMAC SH7604P_UBC SH7604P_INTC SH7604P_FRT SH7604P_WDT SH7604P_SCI SH7604P_DIVU SH7604P_MULT SH7604P_MSBY SH7604P
FILES := ../sh2/tb/altera_models.sv $(SRC)/Saturn/DCC.sv $(SRC)/Saturn/SMPC_SERV.sv $(wildcard $(SRC)/Saturn/SMPC_SERV/*.v) $(wildcard $(SRC)/Saturn/CD/hle/serv/*.v) $(foreach f,$(SHF),$(SH)/$(f).sv) $(foreach f,SCUP2_DSP_PKG SCUP2_RAM SCUP2_PKG SCUP2_DSP SCUP2,$(SCU)/$(f).sv) tb_irq.sv
DEFS := -DPOCKET_SH2P -DPOCKET_SCUP2 -DPOCKET_CUT_SCU_DSP -DPOCKET_SMPC_SERV $(EXTRA)
.PHONY: run neg dup clean
# negative control: the SCU sees IVECF# stuck low (what Saturn.sv gave when .IVECF_N() was connected after .IVECF_N(MSHIVECF_N)); must FAIL
neg:
	$(MAKE) B=build_neg EXTRA=-DIVECF_UNDRIVEN run; test $$? -ne 0
dup:
	python3 dup_ports.py $(SRC)/Saturn/Saturn.sv
run: dup
	mkdir -p $(B) && python3 gen_prog.py $(B)/prog.hex && cp $(SRC)/Saturn/smpc_fw.hex $(B)/ && verilator --binary --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD --x-assign 0 --x-initial 0 $(DEFS) --top-module tb_irq --Mdir $(B)/obj -o ../Vtb -j 4 $(FILES) >/dev/null
	cd $(B) && ./Vtb | tee log.txt | grep -q PASS
clean:
	rm -rf build build_neg
