# Differential simulation: golden VDP1 (renamed REF_) vs the shrunk VDP1, Verilator.
#   make -C sim vdp1          run the default regression (N scenarios, 6 PPM dumps)
#   make -C sim vdp1-ppm      same, dump every scenario's framebuffers as PPM
#   make -C sim/vdp1 N=200 SEED=7 run    custom run
REF  := ../../ref/Saturn_MiSTer/rtl/Saturn/VDP1
DUT  := ../../src/fpga/saturn/Saturn/VDP1
N    ?= 40
SEED ?= 1
PPM  ?= 6
VFLAGS = --cc --exe --build -j 4 --top-module diff_top -Mdir obj -Wno-fatal -Wno-lint -Wno-style \
         -Wno-PROCASSWIRE -Wno-COMBDLY -Wno-WIDTH -Wno-UNOPTFLAT --x-initial 0 --x-assign 0 -O3 \
         -CFLAGS "-O2 -std=c++17" $(VEXTRA)
SRC = gen/REF_VDP1_pkg.sv gen/REF_VDP1.sv $(DUT)/VDP1_pkg.sv $(DUT)/VDP1.sv altdpram.v gen/diff_top.sv

all: run

gen/REF_VDP1.sv: $(REF)/VDP1.sv
	@mkdir -p gen
	perl -pe 's/\bVDP1/REF_VDP1/g' $< > $@
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
