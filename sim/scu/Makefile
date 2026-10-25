# Differential simulation: golden SCU (ref/, renamed REF_*) vs src/.../SCU on identical stimulus.
#   make            build + run the regression (system level, both RAMH_SLOW settings, and DSP alone)
#   make cover      one seed with line coverage of the golden RTL (stimulus-quality check)
VERILATOR ?= verilator
SRC   ?= ../../src/fpga/saturn/Saturn/SCU
# DUT=SCUP selects the area-first rewrite (src/.../SCUP: modules SCUP and SCUP_DSP)
DUT   ?= SCU
REFD  := ../../ref/Saturn_MiSTer/rtl/Saturn/SCU
B     := build
FILES := SCU_PKG DSP_PKG RAM DSP SCU
ifeq ($(DUT),SCUP)
SRC   := ../../src/fpga/saturn/Saturn/SCUP
B     := build_scup
FILES := SCUP_DSP_PKG SCUP_RAM SCUP_PKG SCUP_DSP SCUP
endif
ifeq ($(DUT),SCUP2)
SRC   := ../../src/fpga/saturn/Saturn/SCUP2
B     := build_scup2
FILES := SCUP2_DSP_PKG SCUP2_RAM SCUP2_PKG SCUP2_DSP SCUP2
endif
SEEDS ?= 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
CYCLES ?= 3000000
VFLAGS := --quiet --cc --exe --build -O2 --x-assign 0 --x-initial 0 -Wno-fatal -Wno-lint -Wno-style \
          -Wno-DEFOVERRIDE -CFLAGS -O2 -CFLAGS -I$(abspath $(B)) -j 4

.PHONY: all run cover clean
all: run

$(B)/ref/%.sv: $(REFD)/%.sv
	@mkdir -p $(B)/ref
	perl -pe 's/\b(SCU|SCU_DSP|SCU_PKG|SCUDSP_PKG|DSP_PRG_RAM|DSP_DATA_RAM|SCU_CBUS_CACHE)\b/REF_$$1/g' $< > $@

REFFILES := SCU_PKG DSP_PKG RAM DSP SCU
REFSV := $(foreach f,$(REFFILES),$(B)/ref/$(f).sv)
DUTSV := $(foreach f,$(FILES),$(SRC)/$(f).sv)
DEPS  := tb_common.h $(REFSV) $(DUTSV)

GEN := $(B)/tb_scu.sv $(B)/tb_scu_names.h $(B)/tb_dsp.sv $(B)/tb_dsp_names.h
$(GEN): gen_tb.py
	@mkdir -p $(B)
	python3 gen_tb.py $(DUT) $(B)

$(B)/slow%/Vtb_scu: $(DEPS) $(B)/tb_scu.sv tb_scu.cpp $(B)/tb_scu_names.h
	$(VERILATOR) $(VFLAGS) --top-module tb_scu -GRAMH_SLOW=$* --Mdir $(B)/slow$* $(REFSV) $(DUTSV) $(B)/tb_scu.sv tb_scu.cpp
	@touch $@

$(B)/dsp/Vtb_dsp: $(DEPS) $(B)/tb_dsp.sv tb_dsp.cpp $(B)/tb_dsp_names.h
	$(VERILATOR) $(VFLAGS) --top-module tb_dsp --Mdir $(B)/dsp $(REFSV) $(DUTSV) $(B)/tb_dsp.sv tb_dsp.cpp
	@touch $@

run: $(B)/slow0/Vtb_scu $(B)/slow1/Vtb_scu $(B)/dsp/Vtb_dsp
	@touch prg.txt
	@fail=0; for s in $(SEEDS); do \
	   for r in 0 1; do \
	     out=$$($(B)/slow$$r/Vtb_scu $$s $(CYCLES) 2>&1 | grep -v readmem); \
	     echo "$$out" | grep -q '^PASS' || { echo "scu seed $$s RAMH_SLOW=$$r:"; echo "$$out" | tail -3; fail=1; }; \
	   done; \
	   out=$$($(B)/dsp/Vtb_dsp $$s $(CYCLES) 2>&1 | grep -v readmem); \
	   echo "$$out" | grep -q '^PASS' || { echo "dsp seed $$s:"; echo "$$out" | tail -3; fail=1; }; \
	 done; \
	 if [ $$fail = 0 ]; then echo "scu differential: ALL PASS ($(words $(SEEDS)) seeds x (2 SCU + 1 DSP))"; else echo "scu differential: FAIL"; exit 1; fi

cover: $(REFSV) $(DUTSV) $(GEN)
	@touch prg.txt
	$(VERILATOR) $(VFLAGS) --coverage-line --top-module tb_scu -GRAMH_SLOW=0 --Mdir $(B)/cov $(REFSV) $(DUTSV) $(B)/tb_scu.sv tb_scu.cpp
	$(B)/cov/Vtb_scu 5 $(CYCLES) | grep -v readmem
	verilator_coverage --annotate $(B)/cov_ann --annotate-min 1 coverage.dat > /dev/null

clean:
	rm -rf $(B) prg.txt coverage.dat
