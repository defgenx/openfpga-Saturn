# pll_lite against the Altera reconfiguration core, both driving a DPRIO register model (iverilog >= 12), and
# pll_lite #(.NO_RECONFIG(1)) (POCKET_PLL_NO_RECONFIG): no DPRIO access at all.
#   make -C sim pll
PLL := ../../src/fpga/core/pll_sys
.PHONY: all clean
all: build/tb.vvp build/fixed.vvp
	vvp build/tb.vvp | tee build/pll.log
	@grep -q 'RESULT: PASS' build/pll.log
	vvp build/fixed.vvp | tee build/fixed.log
	@grep -q 'RESULT: PASS' build/fixed.log
	vvp build/fixed_neg.vvp | tee build/fixed_neg.log
	@grep -q 'RESULT: FAIL' build/fixed_neg.log
build/fixed.vvp build/fixed_neg.vvp: tb_pll_fixed.sv lcell_stub.v $(PLL)/pll_lite.sv $(PLL)/altera_pll_reconfig_core.v
	@mkdir -p build
	sed '/^module generic_lcell_comb/,$$d' $(PLL)/altera_pll_reconfig_core.v > build/core_sim_f.v
	iverilog -g2012 -o build/fixed.vvp tb_pll_fixed.sv lcell_stub.v $(PLL)/pll_lite.sv build/core_sim_f.v $(PLL)/altera_std_synchronizer.v
	iverilog -g2012 -Ptb_fixed.NR=0 -o build/fixed_neg.vvp tb_pll_fixed.sv lcell_stub.v $(PLL)/pll_lite.sv build/core_sim_f.v \
	  $(PLL)/altera_std_synchronizer.v
build/tb.vvp: tb_pll_lite.sv lcell_stub.v $(PLL)/pll_lite.sv $(PLL)/altera_pll_reconfig_core.v $(PLL)/altera_pll_reconfig_top.v $(PLL)/pll_sys_cfg.v
	@mkdir -p build
	sed '/^module generic_lcell_comb/,$$d' $(PLL)/altera_pll_reconfig_core.v > build/core_sim.v
	iverilog -g2012 -o $@ tb_pll_lite.sv lcell_stub.v $(PLL)/pll_lite.sv build/core_sim.v \
	  $(PLL)/altera_pll_reconfig_top.v $(PLL)/pll_sys_cfg.v $(PLL)/altera_std_synchronizer.v
clean:
	rm -rf build
