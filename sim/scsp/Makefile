# Differential test: golden SCSP (ref submodule, renamed REF_) vs the shrunk SCSP.
#   make        build and run all seeds
#   make clean
ROOT   := $(abspath ../..)
GOLD   := $(ROOT)/ref/Saturn_MiSTer/rtl/Saturn/SCSP
NEW    ?= $(ROOT)/src/fpga/saturn/Saturn/SCSPP
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
# Golden with the two MIDI buffer registers (CR2, CR3) removed: what the default
# (MIDI_REGS=0) shrunk SCSP is compared against.
$(B)/REF_SCSP_nm.sv: $(B)/REF_SCSP.sv
	perl -pe 's/if \(REG_WE\[\d\]\) CR[23]\[[0-9: ]+\] <= [^;]*;//' $< > $@
$(B)/REF_SCSP_pkg.sv: $(GOLD)/SCSP_pkg.sv | $(B)
	perl -pe 's/\bSCSP_PKG\b/REF_SCSP_PKG/g' $< > $@
$(B)/NEW_SCSPP.sv: $(NEW)/SCSPP.sv | $(B)
	$(FILTER) $< > $@
$(B)/NEW_SCSPP_pkg.sv: $(NEW)/SCSPP_pkg.sv | $(B)
	cp $< $@
$(B):
	mkdir -p $(B)

VFLAGS = --cc --exe --build -j 4 -O2 -Wno-fatal -Wno-PROCASSWIRE -Wno-lint -Wno-style --top-module tb_top

# Default build: MIDI_REGS=0 against the golden without CR2/CR3.
$(B)/obj/Vtb_top: $(B)/REF_SCSP_nm.sv $(B)/REF_SCSP_pkg.sv $(B)/NEW_SCSPP.sv $(B)/NEW_SCSPP_pkg.sv altsyncram.v tb_top.sv tb.cpp
	verilator $(VFLAGS) -Mdir $(B)/obj \
	  $(B)/NEW_SCSPP_pkg.sv $(B)/REF_SCSP_pkg.sv altsyncram.v $(B)/REF_SCSP_nm.sv $(B)/NEW_SCSPP.sv tb_top.sv tb.cpp
	@test -x $@

# MIDI_REGS=1 against the unmodified golden: full register read-back.
$(B)/objm/Vtb_top: $(B)/REF_SCSP.sv $(B)/REF_SCSP_pkg.sv $(B)/NEW_SCSPP.sv $(B)/NEW_SCSPP_pkg.sv altsyncram.v tb_top.sv tb.cpp
	verilator $(VFLAGS) -GMIDI=1 -Mdir $(B)/objm \
	  $(B)/NEW_SCSPP_pkg.sv $(B)/REF_SCSP_pkg.sv altsyncram.v $(B)/REF_SCSP.sv $(B)/NEW_SCSPP.sv tb_top.sv tb.cpp
	@test -x $@

run: $(B)/obj/Vtb_top $(B)/objm/Vtb_top
	@set -e; for s in $(SEEDS); do $(B)/obj/Vtb_top +seed=$$s +rounds=$(ROUNDS) +wav=$(B)/seed$$s; done
	@set -e; for s in $(SEEDS); do $(B)/objm/Vtb_top +seed=$$s +rounds=$(ROUNDS) +wav=$(B)/seedm$$s; done
	@cmp $(B)/seed1_ref.wav $(B)/seed1_new.wav && echo "WAV files identical"

clean:
	rm -rf $(B)

# POCKET_CUT_SCSP_DSP: shrunk SCSP built with the macro against the golden with the DSP disabled (zero program,
# EFREG return and MIXS read-back forced to 0). Run: make cut-dsp
$(B)/REF_SCSP_dspoff.sv: $(B)/REF_SCSP_nm.sv
	perl -pe 's/assign MPRO0_Q = [^;]*;/assign MPRO0_Q = \x270;/; s/assign DSP_MIXS_Q = [^;]*;/assign DSP_MIXS_Q = \x270;/; s/TEMP = LevelCalc\(EFREG_Q,OP7_SCR8\.EFSDL\);/TEMP = \x270;/' $< > $@
$(B)/objd/Vtb_top: $(B)/REF_SCSP_dspoff.sv $(B)/REF_SCSP_pkg.sv $(B)/NEW_SCSPP.sv $(B)/NEW_SCSPP_pkg.sv altsyncram.v tb_top.sv tb.cpp
	verilator $(VFLAGS) -DPOCKET_CUT_SCSP_DSP -Mdir $(B)/objd \
	  $(B)/NEW_SCSPP_pkg.sv $(B)/REF_SCSP_pkg.sv altsyncram.v $(B)/REF_SCSP_dspoff.sv $(B)/NEW_SCSPP.sv tb_top.sv tb.cpp
	@test -x $@
.PHONY: cut-dsp
cut-dsp: $(B)/objd/Vtb_top
	@set -e; for s in $(SEEDS); do $(B)/objd/Vtb_top +seed=$$s +rounds=$(ROUNDS) +wav=$(B)/seedd$$s; done
	@cmp $(B)/seedd1_ref.wav $(B)/seedd1_new.wav && echo "WAV files identical (DSP cut)"

# Used by mutate.sh: build only, into $(B).
.PHONY: build_mut_exe
build_mut_exe: $(B)/obj/Vtb_top
