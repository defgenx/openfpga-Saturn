# SH-2 differential simulation: golden SH7604 pair (REF_, from the pinned Saturn_MiSTer) vs the DUT in src/.
# make -C sim sh2            run every test
# make -C sim/sh2 one T=<name> [WAIT=1 IRQ=1]
ROOT    := $(abspath ../..)
SRC     := $(ROOT)/src/fpga/saturn
GOLD    := $(ROOT)/ref/Saturn_MiSTer/rtl
# CUTS="POCKET_CUT_A POCKET_CUT_B" builds the DUT with those macros; use BUILD=build_x to keep it apart.
CUTS    ?=
BUILD   := build
DUT_INC ?= tb/sh_pair_inst.inc

SH_FILES := SH/core/SH_pkg.sv SH/core/SH_regfile.sv SH/core/SH_core.sv \
            SH/SH7604/SH7604_pkg.sv SH/SH7604/CACHE.sv SH/SH7604/BSC.sv SH/SH7604/DMAC.sv SH/SH7604/UBC.sv \
            SH/SH7604/INTC.sv SH/SH7604/FRT.sv SH/SH7604/WDT.sv SH/SH7604/SCI.sv SH/SH7604/DIVU.sv \
            SH/SH7604/MULT.sv SH/SH7604/MSBY.sv SH/SH7604/SH7604.sv SH7604_mem.sv SH_mem.sv
DUT_SRCS := $(addprefix $(SRC)/,$(SH_FILES)) $(wildcard $(SRC)/SH/SH7604_dual/*.sv)
GOLD_SRCS := $(addprefix $(GOLD)/,$(SH_FILES))

TESTS := $(basename $(notdir $(wildcard progs/t_*.py)))
VFLAGS := --binary --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD -Wno-WIDTH -Wno-CASEINCOMPLETE \
          -Wno-UNOPTFLAT -Wno-MULTIDRIVEN -Wno-INITIALDLY -Wno-PINMISSING -Wno-DEFPARAM --x-assign 0 --x-initial 0 -j 4 $(addprefix -D,$(CUTS))

all: test

$(BUILD)/ref/.stamp: $(GOLD_SRCS) tools/ref_rename.py
	rm -rf $(BUILD)/ref && mkdir -p $(BUILD)/ref
	for f in $(SH_FILES); do python3 tools/ref_rename.py $(GOLD)/$$f $(BUILD)/ref/$$(echo $$f | sed 's|/|__|g'); done
	touch $@

$(BUILD)/env_dut.sv: tb/env.sv.in $(DUT_INC) tools/gen_env.py
	mkdir -p $(BUILD) && python3 tools/gen_env.py tb/env.sv.in $(DUT_INC) $@
$(BUILD)/env_ref.sv: tb/env.sv.in tb/sh_pair_inst.inc tools/gen_env.py tools/ref_rename.py
	mkdir -p $(BUILD) && python3 tools/gen_env.py tb/env.sv.in tb/sh_pair_inst.inc $@ ref

# ordered: packages first inside each list
REF_ORDER = $(shell for f in $(SH_FILES); do echo $(BUILD)/ref/$$(echo $$f | sed 's|/|__|g'); done)

$(BUILD)/Vtb_top: $(BUILD)/ref/.stamp $(BUILD)/env_dut.sv $(BUILD)/env_ref.sv $(DUT_SRCS) tb/tb_top.sv tb/altera_models.sv
	verilator $(VFLAGS) --top-module tb_top --Mdir $(BUILD)/obj -o ../Vtb_top \
	  tb/altera_models.sv $(REF_ORDER) $(BUILD)/env_ref.sv $(DUT_SRCS) $(BUILD)/env_dut.sv tb/tb_top.sv

$(BUILD)/prog_%.hex: progs/%.py tools/sh2asm.py progs/common.py
	mkdir -p $(BUILD) && python3 progs/$*.py $@

CYCLES ?= 1500000
CFGS ?= "0 0 0" "1 3 0" "3 8 1" "2 0 1"
test: $(BUILD)/Vtb_top $(addprefix $(BUILD)/prog_,$(addsuffix .hex,$(TESTS)))
	@fail=0; for t in $(TESTS); do for cfg in $(CFGS); do set -- $$cfg; \
	  $(BUILD)/Vtb_top +prog=$(BUILD)/prog_$$t.hex +name=$$t/wait$$1,irq$$2,fast$$3 +wait=$$1 +irq=$$2 +fast=$$3 +cycles=$(CYCLES) | grep -E "^(PASS|FAIL|MISMATCH)" || fail=1; done; done; \
	  [ $$fail = 0 ] && echo "ALL PASS" || { echo "SOME FAILED"; exit 1; }

# Like test, but counts: every run is listed and the summary shows how many matched exactly (for cut builds).
report: $(BUILD)/Vtb_top $(addprefix $(BUILD)/prog_,$(addsuffix .hex,$(TESTS)))
	@pass=0; bad=0; for t in $(TESTS); do for cfg in $(CFGS); do set -- $$cfg; \
	  r=$$($(BUILD)/Vtb_top +prog=$(BUILD)/prog_$$t.hex +name=$$t/wait$$1,irq$$2,fast$$3 +wait=$$1 +irq=$$2 +fast=$$3 +cycles=$(CYCLES) | grep -E "^(PASS|FAIL|MISMATCH)" | head -1); \
	  echo "$$r" | cut -c1-110; case "$$r" in PASS*) pass=$$((pass+1));; *) bad=$$((bad+1));; esac; done; done; \
	  echo "SUMMARY cuts='$(CUTS)': $$pass match, $$bad differ"

one: $(BUILD)/Vtb_top $(BUILD)/prog_$(T).hex
	$(BUILD)/Vtb_top +prog=$(BUILD)/prog_$(T).hex +name=$(T) +wait=$(or $(WAIT),0) +irq=$(or $(IRQ),0) +fast=$(or $(FAST),0) +cycles=$(CYCLES)

# block-level DIVU test (golden vs DUT module, random register traffic)
$(BUILD)/Vtb_divu: $(BUILD)/ref/.stamp $(DUT_SRCS) unit/tb_divu.sv tb/altera_models.sv
	verilator $(VFLAGS) --top-module tb_divu --Mdir $(BUILD)/obj_divu -o ../Vtb_divu tb/altera_models.sv \
	  $(REF_ORDER) $(DUT_SRCS) unit/tb_divu.sv
unit-divu: $(BUILD)/Vtb_divu
	@for s in 1 2 3 4 5 6; do $(BUILD)/Vtb_divu +seed=$$s +cycles=$(or $(UCYCLES),600000) | grep -E "^(PASS|FAIL|MISMATCH)" || exit 1; done

clean:
	rm -rf $(BUILD)
.PHONY: all test report one clean unit-divu
