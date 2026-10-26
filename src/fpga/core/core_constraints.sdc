#
# user core constraints
#
# Clocks: clk_74a / clk_74b / bridge_spiclk come from apf_constraints.sdc. The system PLL (ic|saturn|pll) is
# referenced from clk_74a; its four outputs are one synchronous family:
#   counter[0] clk_sys    57.27 MHz at compile time (53.4 .. 57.3 MHz at run time, PLL reconfiguration)
#   counter[1] clk_ram    2 x clk_sys, phase aligned
#   counter[2] clk_vid    clk_sys / 4 (APF pixel clock)
#   counter[3] clk_vid_90 clk_vid + 90 degrees
# Analysis runs at the fastest mode (NTSC, 352 wide); every other mode is slower.
#

set clk_sys   {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[0].output_counter|divclk}
set clk_ram   {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[1].output_counter|divclk}
set clk_vid   {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[2].output_counter|divclk}
set clk_vid90 {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[3].output_counter|divclk}

# clk_74a (bridge, settings, loader, PLL management) and the PLL family are asynchronous to each other. The crossings
# are 2-flop synchronisers (pads, settings, reset, RTC toggle), the gray-pointer FIFO in load_pocket and held
# payloads (cd_stream request registers and ring words, stable for a bridge word time). No pair is timed.
set_clock_groups -asynchronous \
 -group { bridge_spiclk } \
 -group { clk_74a } \
 -group { clk_74b } \
 -group [list $clk_sys $clk_ram $clk_vid $clk_vid90]

# SH_core advances on CE_R only (every second clk_sys), so a register-to-register path inside the core has two
# clk_sys periods. The unconstrained core is a 19 ns path (docs/sh2.md); clk_sys is 17.5 ns.
# Falling-edge M10K reads (*_FERAM, docs/fit-status.md): the read address is captured on the falling edge, so a path
# into a FERAM address register keeps its half period; a path out of one starts half a period late and ends at a CE_R
# register, so it has 1.5 periods (setup multiplier 2 from a falling launch).
foreach cpu {MSH SSH} {
	set cpu_all [get_registers "*|$cpu|*"]
	set core_q [remove_from_collection [get_registers "*|$cpu|core|*"] [get_registers "*|$cpu|*|ram_block*~PORT_B_*"]]
	set_multicycle_path -setup -from [get_registers "*|$cpu|core|*"] -to $core_q 2
	set_multicycle_path -hold  -from [get_registers "*|$cpu|core|*"] -to $core_q 1
	# INTC registers other than VBREQ/VBA (CE_F), INT_ACTIVE (free running), BUS_DO (CE_F) and the RAM ports change on CE_R
	# only (SH7604P_INTC); so do DMAC VCRDMA* and DIVU VEC8. The core reads them on CE_R.
	set ce_r_src [remove_from_collection [get_registers "*|$cpu|intc|*"] [get_registers "*|$cpu|intc|VBREQ* *|$cpu|intc|VBA* *|$cpu|intc|INT_ACTIVE* *|$cpu|intc|BUS_DO* *|$cpu|intc|*|ram_block*"]]
	set ce_r_src [add_to_collection $ce_r_src [get_registers "*|$cpu|dmac|VCRDMA* *|$cpu|divu|VEC8*"]]
	set_multicycle_path -setup -from $ce_r_src -to $core_q 2
	set_multicycle_path -hold  -from $ce_r_src -to $core_q 1
	set_multicycle_path -setup -fall_from [get_clocks $clk_sys] -to $cpu_all 2
	set_multicycle_path -hold  -fall_from [get_clocks $clk_sys] -to $cpu_all 1
}

# VDP2P advances on CE_R (every second clk_sys) like the golden VDP2: register-to-register paths inside it have two
# clk_sys periods (docs/vdp2-rewrite.md: -1.47 ns at one period, all failing paths are clock-enable paths).
set_multicycle_path -setup -from [get_registers "*|VDP2|*"] -to [get_registers "*|VDP2|*"] 2
set_multicycle_path -hold  -from [get_registers "*|VDP2|*"] -to [get_registers "*|VDP2|*"] 1

# ---------------------------------------------------------------------------------- SDRAM
# dram_clk is the inverted clk_ram through a DDIO (sdram_clk_out.sv). Datasheet values as quoted in docs/memory.md:
# input setup 1.5 ns, hold 1.0 ns, output valid 5.5 ns max, hold 2.5 ns min.
create_generated_clock -name dram_clk_pin -source [get_pins $clk_ram] -invert [get_ports dram_clk]
set sdram_out [get_ports {dram_a[*] dram_ba[*] dram_dq[*] dram_dqm[*] dram_ras_n dram_cas_n dram_we_n dram_cke}]
set_output_delay -clock dram_clk_pin -max 1.5  -add_delay $sdram_out
set_output_delay -clock dram_clk_pin -min -1.0 -add_delay $sdram_out
set_input_delay  -clock dram_clk_pin -max 5.5 -add_delay [get_ports {dram_dq[*]}]
set_input_delay  -clock dram_clk_pin -min 2.5 -add_delay [get_ports {dram_dq[*]}]
# read data is captured at READ+5 / READ+6 clk_ram edges (sdram_pocket CAP_NEG = 0), not at the next edge
set_multicycle_path -setup -end -from [get_clocks dram_clk_pin] -to [get_clocks $clk_ram] 5
set_multicycle_path -hold  -end -from [get_clocks dram_clk_pin] -to [get_clocks $clk_ram] 4

# ---------------------------------------------------------------------------------- PSRAM
# The chip clock is clk_ram / 2 from a register (psram_sync.sv). Values from docs/memory.md section 4: setup 3 ns,
# hold 2 ns at the chip, tACLK 9 ns, tKOH 2 ns.
foreach n {0 1} {
	# on the toggling register, so the pin clock carries the same insertion delay as the pin data registers
	create_generated_clock -name cram${n}_clk_pin -source [get_pins $clk_ram] -divide_by 2 [get_registers "*|psram${n}|p_clk"]
	set cram_out [get_ports "cram${n}_a\[*\] cram${n}_dq\[*\] cram${n}_adv_n cram${n}_cre cram${n}_ce0_n cram${n}_ce1_n cram${n}_oe_n cram${n}_we_n cram${n}_ub_n cram${n}_lb_n"]
	set_output_delay -clock cram${n}_clk_pin -max 3.0 -add_delay $cram_out
	set_output_delay -clock cram${n}_clk_pin -min -2.0 -add_delay $cram_out
	set_input_delay  -clock cram${n}_clk_pin -max 9.0 -add_delay [get_ports "cram${n}_dq\[*\] cram${n}_wait"]
	set_input_delay  -clock cram${n}_clk_pin -min 2.0 -add_delay [get_ports "cram${n}_dq\[*\] cram${n}_wait"]
	# read words are shifted in on the following clk_ram edges
	set_multicycle_path -setup -end -from [get_clocks cram${n}_clk_pin] -to [get_clocks $clk_ram] 2
	set_multicycle_path -hold  -end -from [get_clocks cram${n}_clk_pin] -to [get_clocks $clk_ram] 1
}

# ---------------------------------------------------------------------------------- SRAM (asynchronous)
# No clock at the chip. Outputs are registered on clk_ram; read data returns within tAA plus board (12 ns here) and
# is sampled RD_CYC - 1 = 3 clk_ram cycles after the address (sram_pocket.sv).
set sram_out [get_ports {sram_a[*] sram_dq[*] sram_oe_n sram_we_n sram_ub_n sram_lb_n}]
# The reference clock is the one the pin registers see (sram_ref on e_oe_n: same insertion delay and pad delay), so the
# check is relative to the chip pins and not to an ideal clk_ram edge.
create_generated_clock -name sram_ref -source [get_pins $clk_ram] -divide_by 1 [get_registers "*|sram|e_oe_n"]
set_output_delay -clock sram_ref -max 2.0  -add_delay $sram_out
set_output_delay -clock sram_ref -min -1.0 -add_delay $sram_out
set_input_delay  -clock sram_ref -max 12.0 -add_delay [get_ports {sram_dq[*]}]
set_input_delay  -clock sram_ref -min 0.0 -add_delay [get_ports {sram_dq[*]}]
# sram_ref is the e_oe_n register itself: that pin is the reference, its own skew check is empty
set_false_path -to [get_ports sram_oe_n]
set_multicycle_path -setup -end -from [get_clocks sram_ref] -to [get_clocks $clk_ram] 3
set_multicycle_path -hold  -end -from [get_clocks sram_ref] -to [get_clocks $clk_ram] 2
# the CD ring FSM (cd_stream) runs on clk_sys and drives the same pins through sram_pocket: clk_sys and clk_ram are
# phase aligned, so those paths are ordinary single-cycle paths of the clk_ram family.
