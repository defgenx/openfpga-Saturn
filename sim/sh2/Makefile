# SH-2 differential simulation: golden SH7604 pair (REF_, from the pinned Saturn_MiSTer) vs the DUT in src/.
# make -C sim sh2            run every test
# make -C sim/sh2 one T=<name> [WAIT=1 IRQ=1]
ROOT    := $(abspath ../..)
SRC     := $(ROOT)/src/fpga/saturn
GOLD    := $(ROOT)/ref/Saturn_MiSTer/rtl
# CUTS="POCKET_CUT_A POCKET_CUT_B" builds the DUT with those macros; use BUILD=build_x to keep it apart.
CUTS    ?=
# DUT=sh2p builds the rewrite (src/fpga/saturn/SH/sh2p, module SH7604P); default is the old core in src/.../SH/{core,SH7604}
DUT     ?= old
ifeq ($(DUT),sh2p)
BUILD   := build_p
DUT_INC ?= $(BUILD)/sh_pair_inst_p.inc
P_INC_SRC := $(if $(findstring DIVU_SHARED,$(CUTS)),tb/sh_pair_inst_divs.inc,tb/sh_pair_inst.inc)
else
BUILD   := build
DUT_INC ?= $(if $(findstring DIVU_SHARED,$(CUTS)),tb/sh_pair_inst_divs.inc,tb/sh_pair_inst.inc)
endif

SH_FILES := SH/core/SH_pkg.sv SH/core/SH_regfile.sv SH/core/SH_core.sv \
            SH/SH7604/SH7604_pkg.sv SH/SH7604/CACHE.sv SH/SH7604/BSC.sv SH/SH7604/DMAC.sv SH/SH7604/UBC.sv \
            SH/SH7604/INTC.sv SH/SH7604/FRT.sv SH/SH7604/WDT.sv SH/SH7604/SCI.sv SH/SH7604/DIVU.sv \
            SH/SH7604/MULT.sv SH/SH7604/MSBY.sv SH/SH7604/SH7604.sv SH7604_mem.sv SH_mem.sv
SH2P_FILES := SH2P_pkg.sv SH2P_mem.sv SH2P_regfile.sv SH2P_dec.sv SH2P_alu.sv SH2P_core.sv SH7604P_pkg.sv SH7604P_mem.sv SH7604P_CACHE.sv SH7604P_BSC.sv \
              SH7604P_DMAC.sv SH7604P_UBC.sv SH7604P_INTC.sv SH7604P_FRT.sv SH7604P_WDT.sv SH7604P_SCI.sv SH7604P_DIVU.sv \
              SH7604P_MULT.sv SH7604P_MSBY.sv SH7604P.sv $(notdir $(wildcard $(SRC)/SH/sh2p/SH2P_x_*.sv)) $(notdir $(wildcard $(SRC)/SH/sh2p/SH7604P_x_*.sv))
ifeq ($(DUT),sh2p)
DUT_SRCS := $(addprefix $(SRC)/SH/sh2p/,$(SH2P_FILES)) $(if $(findstring DIVU_SHARED,$(CUTS)),$(SRC)/SH/SH7604/SH7604_pkg.sv $(SRC)/SH/SH7604/DIVU_SHARED.sv)
else
DUT_SRCS := $(addprefix $(SRC)/,$(SH_FILES)) $(wildcard $(SRC)/SH/SH7604_dual/*.sv) $(SRC)/SH/SH7604/DIVU_SHARED.sv
endif
GOLD_SRCS := $(addprefix $(GOLD)/,$(SH_FILES))

TESTS := $(basename $(notdir $(wildcard progs/t_*.py)))
VFLAGS := --binary $(if $(filter sh2p,$(DUT)),-DSH2_INIT_WAIT)  --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD -Wno-WIDTH -Wno-CASEINCOMPLETE \
          -Wno-UNOPTFLAT -Wno-MULTIDRIVEN -Wno-INITIALDLY -Wno-PINMISSING -Wno-DEFPARAM --x-assign 0 --x-initial 0 -j 4 $(addprefix -D,$(CUTS))

.SECONDARY:
all: test

$(BUILD)/ref/.stamp: $(GOLD_SRCS) tools/ref_rename.py
	rm -rf $(BUILD)/ref && mkdir -p $(BUILD)/ref
	for f in $(SH_FILES); do python3 tools/ref_rename.py $(GOLD)/$$f $(BUILD)/ref/$$(echo $$f | sed 's|/|__|g'); done
	touch $@

$(BUILD)/sh_pair_inst_p.inc: $(P_INC_SRC)
	mkdir -p $(BUILD) && perl -pe 's/\bSH7604 #\(/SH7604P #(/' $< > $@

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

# Parallel version of test (JOBS processes); prints one line per run and ALL PASS / SOME FAILED.
JOBS ?= 6
ptest: $(BUILD)/Vtb_top $(addprefix $(BUILD)/prog_,$(addsuffix .hex,$(TESTS)))
	@for t in $(TESTS); do for cfg in $(CFGS); do set -- $$cfg; echo "$$t $$1 $$2 $$3"; done; done | \
	  xargs -P $(JOBS) -L1 sh -c '$(BUILD)/Vtb_top +prog=$(BUILD)/prog_$$0.hex +name=$$0/wait$$1,irq$$2,fast$$3 +wait=$$1 +irq=$$2 +fast=$$3 +cycles=$(CYCLES) | grep -E "^(PASS|FAIL|MISMATCH)" || echo "FAIL $$0 $$1 $$2 $$3 (no result)"' > $(BUILD)/ptest.log; \
	  sort $(BUILD)/ptest.log | cut -c1-100; echo "$$(grep -c '^PASS' $(BUILD)/ptest.log) PASS, $$(grep -c -E '^(FAIL|MISMATCH)' $(BUILD)/ptest.log) FAIL"; \
	  ! grep -q -E '^(FAIL|MISMATCH)' $(BUILD)/ptest.log

# Soak: random instruction soup with more seeds (SEEDS=first..last as "a b"): make DUT=sh2p soak SEED0=100 SEED1=160
SEED0 ?= 100
SEED1 ?= 140
soak: $(BUILD)/Vtb_top
	@mkdir -p $(BUILD)/soak; for s in $$(seq $(SEED0) $(SEED1)); do python3 -c "import sys; sys.path.insert(0,'progs'); from rand_gen import gen; gen($$s, '$(BUILD)/soak/p$$s.hex')" || exit 1; done
	@for s in $$(seq $(SEED0) $(SEED1)); do for cfg in $(CFGS); do set -- $$cfg; echo "$$s $$1 $$2 $$3"; done; done | \
	  xargs -P $(JOBS) -L1 sh -c '$(BUILD)/Vtb_top +prog=$(BUILD)/soak/p$$0.hex +name=soak$$0/wait$$1,irq$$2,fast$$3 +wait=$$1 +irq=$$2 +fast=$$3 +cycles=$(or $(SOAKCYC),400000) | grep -E "^(PASS|FAIL|MISMATCH)" || echo "FAIL soak$$0 $$1 $$2 $$3 (no result)"' > $(BUILD)/soak.log; \
	  echo "$$(grep -c '^PASS' $(BUILD)/soak.log) PASS, $$(grep -c -E '^(FAIL|MISMATCH)' $(BUILD)/soak.log) FAIL"; grep -E '^(FAIL|MISMATCH)' $(BUILD)/soak.log | head; ! grep -q -E '^(FAIL|MISMATCH)' $(BUILD)/soak.log

# Like test, but counts: every run is listed and the summary shows how many matched exactly (for cut builds).
report: $(BUILD)/Vtb_top $(addprefix $(BUILD)/prog_,$(addsuffix .hex,$(TESTS)))
	@pass=0; bad=0; for t in $(TESTS); do for cfg in $(CFGS); do set -- $$cfg; \
	  r=$$($(BUILD)/Vtb_top +prog=$(BUILD)/prog_$$t.hex +name=$$t/wait$$1,irq$$2,fast$$3 +wait=$$1 +irq=$$2 +fast=$$3 +cycles=$(CYCLES) | grep -E "^(PASS|FAIL|MISMATCH)" | head -1); \
	  echo "$$r" | cut -c1-110; case "$$r" in PASS*) pass=$$((pass+1));; *) bad=$$((bad+1));; esac; done; done; \
	  echo "SUMMARY cuts='$(CUTS)': $$pass match, $$bad differ"

# Contention test for POCKET_CUT_SH2_DIVU_SHARED: both CPUs divide with deterministic operands; only the final memory
# is compared (cycle timing legitimately differs; no IRQ injection, whose counters are timing dependent). Run with CUTS=POCKET_CUT_SH2_DIVU_SHARED BUILD=build_divs.
contend-mem: $(BUILD)/Vtb_top $(BUILD)/prog_t_divu_both.hex
	@for cfg in "0 0 0" "1 0 0" "3 0 1" "2 0 1"; do set -- $$cfg; \
	  $(BUILD)/Vtb_top +prog=$(BUILD)/prog_t_divu_both.hex +name=divu_both/wait$$1,irq$$2,fast$$3 +wait=$$1 +irq=$$2 +fast=$$3 +cycles=$(CYCLES) +nocmp | grep -E "^(PASS|FAIL|MISMATCH)" | head -1 | cut -c1-90; done

one: $(BUILD)/Vtb_top $(BUILD)/prog_$(T).hex
	$(BUILD)/Vtb_top +prog=$(BUILD)/prog_$(T).hex +name=$(T) +wait=$(or $(WAIT),0) +irq=$(or $(IRQ),0) +fast=$(or $(FAST),0) +cycles=$(CYCLES)

# Block-level tests: unit/tb_<blk>.sv instantiates `DUT_MOD (the new block) and REF_SH7604_<BLK> (golden) and compares every output
# every clk_sys.  make [DUT=sh2p] unit-<blk> [UCYCLES=n]; the DUT block is SH7604P_<BLK> (DUT=sh2p) or SH7604_<BLK> (old).
UNIT_PFX = $(if $(filter sh2p,$(DUT)),SH7604P_,SH7604_)
$(BUILD)/Vtb_%: $(BUILD)/ref/.stamp $(DUT_SRCS) unit/tb_%.sv tb/altera_models.sv
	verilator $(VFLAGS) -DDUT_MOD=$(UNIT_PFX)$(shell echo $* | tr a-z A-Z) --top-module tb_$* --Mdir $(BUILD)/obj_$* -o ../Vtb_$* tb/altera_models.sv \
	  $(REF_ORDER) $(DUT_SRCS) unit/tb_$*.sv
unit-%: $(BUILD)/Vtb_%
	@for s in 1 2 3 4 5 6; do $(BUILD)/Vtb_$* +seed=$$s +cycles=$(or $(UCYCLES),600000) | grep -E "^(PASS|FAIL|MISMATCH)" || exit 1; done

clean:
	rm -rf $(BUILD)
.PHONY: all test ptest soak report one clean

# POCKET_CUT_SH2_DIVU_SHARED block test: two clients on one shared divider, random simultaneous divides vs an SV model.
$(BUILD)/Vtb_divu_shared: unit/tb_divu_shared.sv $(SRC)/SH/SH7604/SH7604_pkg.sv $(SRC)/SH/SH7604/DIVU_SHARED.sv
	verilator --binary --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD -Wno-WIDTH -DPOCKET_CUT_SH2_DIVU_SHARED --x-assign 0 --x-initial 0 \
	  --top-module tb_divu_shared --Mdir $(BUILD)/obj_divu_shared -o ../Vtb_divu_shared $(SRC)/SH/SH7604/SH7604_pkg.sv $(SRC)/SH/SH7604/DIVU_SHARED.sv unit/tb_divu_shared.sv
unit-divu_shared: $(BUILD)/Vtb_divu_shared
	@$(BUILD)/Vtb_divu_shared | grep -E "^(PASS|FAIL)"
