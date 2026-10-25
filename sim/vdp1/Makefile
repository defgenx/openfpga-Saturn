# Differential simulation: golden VDP1 (renamed REF_) vs the shrunk VDP1, Verilator.
#   make -C sim vdp1          run the default regression (N scenarios, 6 PPM dumps)
#   make -C sim vdp1-ppm      same, dump every scenario's framebuffers as PPM
#   make -C sim/vdp1 N=200 SEED=7 run    custom run
REF  := ../../ref/Saturn_MiSTer/rtl/Saturn/VDP1
DUT  := ../../src/fpga/saturn/Saturn/VDP1P
N    ?= 40
SEED ?= 1
PPM  ?= 6
VFLAGS = --cc --exe --build -j 4 --top-module diff_top -Mdir obj -Wno-fatal -Wno-lint -Wno-style \
         $(VFLAGS_RF) -Wno-PROCASSWIRE -Wno-COMBDLY -Wno-WIDTH -Wno-UNOPTFLAT --x-initial 0 --x-assign 0 -O3 \
         -CFLAGS "-O2 -std=c++17" $(VEXTRA)
SRC = gen/REF_VDP1_pkg.sv gen/REF_VDP1.sv $(DUT)/VDP1P_pkg.sv $(DUT)/VDP1P.sv altdpram.v gen/diff_top.sv

all: run divtest

# ROWFLOOR=1 (default): the golden copy gets the same timing changes as VDP1P under POCKET_VDP1P_ROWFLOOR (see docs/vdp1-rewrite.md)
ROWFLOOR ?= 1
ROWFLOOR_PATCH = rowfloor_patch.pl
ifeq ($(ROWFLOOR),1)
VFLAGS_RF = -DPOCKET_VDP1P_ROWFLOOR
else
VFLAGS_RF = -DPOCKET_VDP1P_NO_ROWFLOOR
endif
gen/REF_VDP1.sv: $(REF)/VDP1.sv $(ROWFLOOR_PATCH)
	@mkdir -p gen
	perl -pe 's/\bVDP1/REF_VDP1/g' $< | ROWFLOOR=$(ROWFLOOR) perl $(ROWFLOOR_PATCH) > $@
gen/REF_VDP1_pkg.sv: $(REF)/VDP1_pkg.sv
	@mkdir -p gen
	perl -pe 's/\bVDP1/REF_VDP1/g' $< > $@
gen/diff_top.sv: gen_top.py diff_top.sv.in
	python3 gen_top.py

obj/Vdiff_top: $(SRC) tb.cpp
	verilator $(VFLAGS) $(SRC) tb.cpp
	@mv obj/Vdiff_top obj/Vdiff_top.bin 2>/dev/null; mv obj/Vdiff_top.bin obj/Vdiff_top

run: obj/Vdiff_top
	@mkdir -p out
	./obj/Vdiff_top --n $(N) --seed $(SEED) --ppm $(PPM) --out out

ppm:
	$(MAKE) run PPM=100000

clean:
	rm -rf gen obj out
.PHONY: all run ppm clean

# Line coverage of both designs under the regression: make cov N=40
cov:
	rm -rf obj_cov cov
	mkdir -p cov out
	verilator $(filter-out -Mdir obj,$(VFLAGS)) -Mdir obj_cov --coverage-line --coverage-toggle $(SRC) tb.cpp
	cd cov && ../obj_cov/Vdiff_top --n $(N) --seed $(SEED) --ppm 0 --out ../out && verilator_coverage --annotate annot --annotate-min 1 coverage.dat > summary.txt 2>&1 || true
	@echo "see sim/vdp1/cov/annot"
.PHONY: cov

# Exhaustive divider equivalence (all 5-bit dividends x all 12-bit divisors)
divtest: gen/REF_VDP1.sv
	verilator --cc --exe --build -j 4 --top-module divtest -Mdir obj_div -Wno-fatal -Wno-lint -Wno-style -Wno-PROCASSWIRE -Wno-COMBDLY -Wno-WIDTH --x-initial 0 -CFLAGS "-O2" \
	  gen/REF_VDP1_pkg.sv gen/REF_VDP1.sv $(DUT)/VDP1P_pkg.sv $(DUT)/VDP1P.sv altdpram.v divtest.sv divtest.cpp
	./obj_div/Vdivtest
.PHONY: divtest
