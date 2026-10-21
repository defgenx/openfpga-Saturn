# Differential simulation of the rewritten VDP2 against the golden copy (Verilator).
#   make -C sim vdp2            builds and runs SEEDS seeds (default 28), all must match
#   make -C sim vdp2 SEEDS=100 CLKS=2000000
HERE   := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
B      := $(HERE)/build
SEEDS  ?= 28
CLKS   ?= 1500000
JOBS   ?= 4
VFLAGS := --cc --exe --build -j 8 -O2 -Wno-fatal -Wno-lint -Wno-style -Wno-PROCASSWIRE -Wno-WIDTH -Wno-CASEINCOMPLETE \
          --x-assign 0 --x-initial 0 --no-timing -DLIGHT_SATURN --top-module tb_top \
          -CFLAGS "-O2" --Mdir $(B)/obj

.PHONY: vdp2 vdp2-build vdp2-ppm clean
vdp2: vdp2-build
	@fail=0; \
	seq 1 $(SEEDS) | xargs -P $(JOBS) -I{} sh -c '$(B)/obj/Vtb_top +seed={} +clks=$(CLKS) > $(B)/run_{}.log 2>&1 || echo FAIL {}' > $(B)/fails.txt; \
	cat $(B)/run_*.log | grep -E "PASS|FAIL|MISMATCH|^  " ; \
	if [ -s $(B)/fails.txt ]; then echo "vdp2 differential test: FAILED"; exit 1; else echo "vdp2 differential test: all $(SEEDS) seeds match"; fi

vdp2-build: $(B)/obj/Vtb_top
$(B)/obj/Vtb_top: $(HERE)/tb.cpp $(HERE)/tb_top.sv $(HERE)/models.sv $(wildcard $(HERE)/../../src/fpga/saturn/Saturn/VDP2/*.sv) $(HERE)/prep.sh
	@$(HERE)/prep.sh
	@rm -f $(B)/run_*.log
	cd $(HERE) && verilator $(VFLAGS) build/ref/VDP2_pkg.sv build/ref/VDP2.sv build/ref/VDP2_mem.sv \
		build/cur/VDP2_pkg.sv build/cur/VDP2.sv build/cur/VDP2_mem.sv models.sv tb_top.sv tb.cpp

# a few frames as PPM from both (ref_/dut_ files), then byte compare
vdp2-ppm: vdp2-build
	@mkdir -p $(B)/ppm; for s in 3 7 8 13; do $(B)/obj/Vtb_top +seed=$$s +clks=3000000 +ppm=$(B)/ppm/s$$s +frames=1 | tail -1; done; \
	for f in $(B)/ppm/*_ref_*.ppm; do cmp $$f $$(echo $$f | sed 's/_ref_/_dut_/') && echo "identical: $$f"; done

clean:
	rm -rf $(B)
