# SH-1 differential simulation: golden SH7034/SH1 (ref/, renamed REF_*) vs the pruned one in src/.
# Firmware is read from ref/ at run time and never copied into the repo.
ROOT    := $(abspath ../..)
REFRTL  := $(ROOT)/ref/Saturn_MiSTer/rtl
SRC     := $(ROOT)/src/fpga/saturn
FW      ?= $(REFRTL)/cdb105m.mif
CYCLES  ?= 30000000
BOOT    ?= 30000000
NCMD    ?= 12
BUILD   := build
VFLAGS  := --binary --timescale 1ns/1ps -Wno-TIMESCALEMOD --timing -Wno-fatal -Wno-lint -Wno-style -Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-UNOPTFLAT \
           -Wno-CMPCONST -Wno-IMPLICIT -Wno-PINMISSING --top-module tb --public-flat-rw -O3 -j 4

CORE    := SH_pkg.sv SH_regfile.sv SH_core.sv
SH7034  := SH7034_pkg.sv MULT.sv INTC.sv BSC.sv DMAC.sv UBC.sv ITU.sv WDT.sv SCI.sv PFC.sv RAM.sv ROM.sv SH7034.sv

REF_FILES := $(addprefix $(BUILD)/ref/,$(CORE) $(SH7034) SH1.sv models_regram.sv)
RENAME  := perl -pe 's/\b(SH7034_PKG|SH2_PKG_SV|SH2_PKG|SH7034_[A-Za-z0-9]+|SH7034|SH2_regfile|SH_regram|SH_core|SH1_MEM|SH1)\b/REF_$$1/g'

.PHONY: run clean
run: $(BUILD)/obj/Vtb
	cd $(BUILD) && ./obj/Vtb +FW=$(FW) +CYCLES=$(CYCLES) +BOOT=$(BOOT) +NCMD=$(NCMD) $(ARGS) | tee run.log
	@grep -q 'RESULT: PASS' $(BUILD)/run.log

$(BUILD)/ref/%.sv: $(REFRTL)/SH/core/%.sv
	@mkdir -p $(dir $@); $(RENAME) $< > $@
$(BUILD)/ref/%.sv: $(REFRTL)/SH/SH7034/%.sv
	@mkdir -p $(dir $@); $(RENAME) $< > $@
$(BUILD)/ref/SH1.sv: $(REFRTL)/Saturn/CD/SH1.sv
	@mkdir -p $(dir $@); $(RENAME) $< > $@
$(BUILD)/ref/models_regram.sv: models_regram.sv
	@mkdir -p $(dir $@); $(RENAME) $< > $@

SRC_FILES := $(addprefix $(SRC)/SH/core/,$(CORE)) $(addprefix $(SRC)/SH/SH7034/,SH7034_pkg.sv SH7034_fw.sv $(filter-out SH7034_pkg.sv,$(SH7034))) $(SRC)/Saturn/CD/SH1.sv

$(BUILD)/obj/Vtb: $(REF_FILES) $(SRC_FILES) models_regram.sv models_altsyncram.sv cdd.sv cd_block.sv tb.sv
	verilator $(VFLAGS) -Mdir $(BUILD)/obj \
	  $(BUILD)/ref/SH_pkg.sv $(BUILD)/ref/SH7034_pkg.sv $(filter-out $(BUILD)/ref/SH_pkg.sv $(BUILD)/ref/SH7034_pkg.sv,$(REF_FILES)) \
	  $(SRC)/SH/core/SH_pkg.sv $(SRC)/SH/SH7034/SH7034_pkg.sv $(SRC)/SH/SH7034/SH7034_fw.sv $(SRC)/Saturn/CD/YGR019_PKG.sv \
	  $(filter-out %/SH_pkg.sv %/SH7034_pkg.sv %/SH7034_fw.sv,$(SRC_FILES)) $(SRC)/Saturn/CD/YGR019.sv \
	  models_regram.sv models_altsyncram.sv cdd.sv cd_block.sv tb.sv

clean:
	rm -rf $(BUILD)
