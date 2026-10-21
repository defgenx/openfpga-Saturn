# Differential test: golden SCSP (ref submodule, renamed REF_) vs the shrunk SCSP.
#   make        build and run all seeds
#   make clean
ROOT   := $(abspath ../..)
GOLD   := $(ROOT)/ref/Saturn_MiSTer/rtl/Saturn/SCSP
NEW    ?= $(ROOT)/src/fpga/saturn/Saturn/SCSP
B      ?= build
SEEDS  ?= 1 2 3 4 5 6
ROUNDS ?= 400

# Drop the `define SIM and the synopsys translate_off regions, and make the one
# blocking write to a register read by another block non-blocking, so the
# simulated netlist matches what Quartus synthesises.
FILTER = perl -ne 'if (/synopsys translate_off/) {$$s=1} if (!$$s && !/^`define SIM/) {s/OP2\.PHASE = PHASE;/OP2.PHASE <= PHASE;/; print} if (/synopsys translate_on/) {$$s=0}'

.PHONY: all run clean
all: run

$(B)/REF_SCSP.sv: $(GOLD)/SCSP.sv | $(B)
	$(FILTER) $< | perl -pe 's/\bSCSP_PKG\b/REF_SCSP_PKG/g; s/\b(SCSP(_[A-Za-z0-9_]+)?)\b/REF_$$1/g; s/REF_REF_/REF_/g' > $@
$(B)/REF_SCSP_pkg.sv: $(GOLD)/SCSP_pkg.sv | $(B)
	perl -pe 's/\bSCSP_PKG\b/REF_SCSP_PKG/g' $< > $@
$(B)/NEW_SCSP.sv: $(NEW)/SCSP.sv | $(B)
	$(FILTER) $< > $@
$(B)/NEW_SCSP_pkg.sv: $(NEW)/SCSP_pkg.sv | $(B)
	cp $< $@
$(B):
	mkdir -p $(B)

$(B)/obj/Vtb_top: $(B)/REF_SCSP.sv $(B)/REF_SCSP_pkg.sv $(B)/NEW_SCSP.sv $(B)/NEW_SCSP_pkg.sv altsyncram.v tb_top.sv tb.cpp
	verilator --cc --exe --build -j 4 -O2 -Wno-fatal -Wno-PROCASSWIRE -Wno-lint -Wno-style \
	  --top-module tb_top -Mdir $(B)/obj \
	  $(B)/NEW_SCSP_pkg.sv $(B)/REF_SCSP_pkg.sv altsyncram.v $(B)/REF_SCSP.sv $(B)/NEW_SCSP.sv tb_top.sv tb.cpp
	@test -x $@

# Default build: MIDI registers read as 0 (tb avoids reading them back).
# The MIDI=1 build checks full register read-back.
$(B)/objm/Vtb_top: $(B)/REF_SCSP.sv $(B)/REF_SCSP_pkg.sv $(B)/NEW_SCSP.sv $(B)/NEW_SCSP_pkg.sv altsyncram.v tb_top.sv tb.cpp
	verilator --cc --exe --build -j 4 -O2 -Wno-fatal -Wno-PROCASSWIRE -Wno-lint -Wno-style -GMIDI=1 \
	  --top-module tb_top -Mdir $(B)/objm \
	  $(B)/NEW_SCSP_pkg.sv $(B)/REF_SCSP_pkg.sv altsyncram.v $(B)/REF_SCSP.sv $(B)/NEW_SCSP.sv tb_top.sv tb.cpp
	@test -x $@

run: $(B)/obj/Vtb_top $(B)/objm/Vtb_top
	@set -e; for s in $(SEEDS); do $(B)/obj/Vtb_top +nomidi +seed=$$s +rounds=$(ROUNDS) +wav=$(B)/seed$$s; done
	@set -e; for s in $(SEEDS); do $(B)/objm/Vtb_top +seed=$$s +rounds=$(ROUNDS) +wav=$(B)/seedm$$s; done
	@cmp $(B)/seed1_ref.wav $(B)/seed1_new.wav && echo "WAV files identical"

clean:
	rm -rf $(B)

# Used by mutate.sh: build only, into $(B).
.PHONY: build_mut_exe
build_mut_exe: $(B)/obj/Vtb_top
