# pll_lite against the Altera reconfiguration core, both driving a DPRIO register model (iverilog >= 12).
#   make -C sim pll
PLL := ../../src/fpga/core/pll_sys
.PHONY: all clean
all: build/tb.vvp
	vvp build/tb.vvp | tee build/pll.log
	@grep -q 'RESULT: PASS' build/pll.log
build/tb.vvp: tb_pll_lite.sv lcell_stub.v $(PLL)/pll_lite.sv $(PLL)/altera_pll_reconfig_core.v $(PLL)/altera_pll_reconfig_top.v $(PLL)/pll_sys_cfg.v
	@mkdir -p build
	sed '/^module generic_lcell_comb/,$$d' $(PLL)/altera_pll_reconfig_core.v > build/core_sim.v
	iverilog -g2012 -o $@ tb_pll_lite.sv lcell_stub.v $(PLL)/pll_lite.sv build/core_sim.v \
	  $(PLL)/altera_pll_reconfig_top.v $(PLL)/pll_sys_cfg.v $(PLL)/altera_std_synchronizer.v
clean:
	rm -rf build
