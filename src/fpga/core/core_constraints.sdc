#
# user core constraints
#
# Clocks: clk_74a / clk_74b / bridge_spiclk come from apf_constraints.sdc. The system PLL (ic|saturn|pll) is
# referenced from clk_74a; its five outputs are one synchronous family:
#   counter[0] clk_sys    57.27 MHz at compile time (53.4 .. 57.3 MHz at run time, PLL reconfiguration)
#   counter[1] clk_ram    2 x clk_sys, phase aligned
#   counter[2] clk_vid    clk_sys / 4 (APF pixel clock)
#   counter[3] clk_vid_90 clk_vid + 90 degrees
#   counter[4] clk_ram_cap clk_ram + 90 degrees (unused since the SDRAM read capture moved into the I/O cell register)
# Analysis runs at the fastest mode (NTSC, 352 wide); every other mode is slower.
#

set clk_sys   {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[0].output_counter|divclk}
set clk_ram   {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[1].output_counter|divclk}
set clk_vid   {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[2].output_counter|divclk}
set clk_vid90 {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[3].output_counter|divclk}
set clk_ramc  {ic|saturn|pll|altera_pll_i|cyclonev_pll|counter[4].output_counter|divclk}

# clk_74a (bridge, settings, loader, PLL management) and the PLL family are asynchronous to each other. The crossings
# are 2-flop synchronisers (pads, settings, reset, RTC toggle), the gray-pointer FIFO in load_pocket and held
# payloads (cd_stream request registers and ring words, stable for a bridge word time). No pair is timed.
set_clock_groups -asynchronous \
 -group { bridge_spiclk } \
 -group { clk_74a } \
 -group { clk_74b } \
 -group [list $clk_sys $clk_ram $clk_vid $clk_vid90 $clk_ramc]

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

# SCSPP slot pipeline. SCSP_CE (saturn_pocket) is SCSP_2X_CE & SCSP_DIV: SCSP_2X_CE is a ce_gent pulse at 45.1584 MHz
# out of clk_sys (53.4 .. 57.3 MHz, so never two clk_sys in a row) and SCSP_DIV halves it, so two SCSP_CE pulses are
# at least two clk_sys apart. In SCSPP, CLK_DIV toggles on every CE and CYCLE_NUM advances on CE & CLK_DIV: CYCLE0_CE
# (CYCLE_NUM even) and CYCLE1_CE (odd) alternate, two CE apart, at least four clk_sys between one and the next.
# SCR_SCR3's read output register (altsyncram outdata_reg_b, clocken3 = CYCLE0_CE) changes at CYCLE0_CE edges only;
# OP6 is written at SLOT1_CE (CYCLE1_CE & CYCLE_NUM[2:1] == 3) only; OP7.SD is written at SLOT1_CE only, from
# SCR_SCR3 (TL, SDIR) and OP6 (LEVEL, WD) through LevelAddTL and VolCalc (two DSP multiplies, 17.6 ns). Every launch is
# at least four clk_sys before the capture edge: two periods are claimed. The enable path (CE, CLK_DIV, CYCLE_NUM)
# stays single-cycle. Same argument for the OP4 stage into OP5 and for OP7 / EFREG into ACC_L/ACC_R (also written at
# DSEL); DSEL and SCR_G7's output stay single-cycle. Schedule per register: docs/fit-status.md, SCSP multicycles.
set scsp_sd [get_registers {*|SCSP|OP7.SD[*]}]
set_multicycle_path -setup -from [get_registers {*|SCSP|SCR_SCR3|*|q_b[*]}] -to $scsp_sd 2
set_multicycle_path -hold  -from [get_registers {*|SCSP|SCR_SCR3|*|q_b[*]}] -to $scsp_sd 1
set_multicycle_path -setup -from [get_registers {*|SCSP|OP6.LEVEL[*] *|SCSP|OP6.WD[*]}] -to $scsp_sd 2
set_multicycle_path -hold  -from [get_registers {*|SCSP|OP6.LEVEL[*] *|SCSP|OP6.WD[*]}] -to $scsp_sd 1
set scsp_op4 [get_registers {*|SCSP|OP4.* *|SCSP|OP4_SCR2.* *|SCSP|OP4_SCR5.* *|SCSP|OP4_SCR6.* *|SCSP|SCNT[*] *|SCSP|OP4_WD0[*] *|SCSP|OP4_WD1[*] *|SCSP|SCR_SCR1|*|q_b[*] *|SCSP|LFO_RAM_4|*|q_b[*] *|SCSP|EVOL_RAM_4|*|q_b[*]}]
set scsp_op5 [get_registers {*|SCSP|OP5.* *|SCSP|EVOL_RAM_D[*] *|SCSP|MONITOR_EG[*] *|SCSP|MONITOR_SGC[*]}]
set_multicycle_path -setup -from $scsp_op4 -to $scsp_op5 2
set_multicycle_path -hold  -from $scsp_op4 -to $scsp_op5 1
set scsp_acc [get_registers {*|SCSP|ACC_L[*] *|SCSP|ACC_R[*]}]
set_multicycle_path -setup -from [get_registers {*|SCSP|OP7.* *|SCSP|EFREG_RAM|*|q_b[*]}] -to $scsp_acc 2
set_multicycle_path -hold  -from [get_registers {*|SCSP|OP7.* *|SCSP|EFREG_RAM|*|q_b[*]}] -to $scsp_acc 1

# ---------------------------------------------------------------------------------- SDRAM
# dram_clk is the inverted clk_ram through a DDIO (sdram_clk_out.sv). Datasheet values as quoted in docs/memory.md:
# input setup 1.5 ns, hold 1.0 ns, output valid 5.5 ns max, hold 2.5 ns min.
create_generated_clock -name dram_clk_pin -source [get_pins $clk_ram] -invert [get_ports dram_clk]
set sdram_out [get_ports {dram_a[*] dram_ba[*] dram_dq[*] dram_dqm[*] dram_ras_n dram_cas_n dram_we_n dram_cke}]
set_output_delay -clock dram_clk_pin -max 1.5  -add_delay $sdram_out
set_output_delay -clock dram_clk_pin -min -1.0 -add_delay $sdram_out
set_input_delay  -clock dram_clk_pin -max 5.5 -add_delay [get_ports {dram_dq[*]}]
set_input_delay  -clock dram_clk_pin -min 2.5 -add_delay [get_ports {dram_dq[*]}]
# Read data (CL3): the SDRAM launches word 0 at its 2nd clock edge after the READ edge and word 1 at the 3rd. The
# I/O cell input register (sdram_pocket cap_p) takes word 0 at READ + 4 clk_ram edges (cap_sel 0, the default; as
# Saturn_MiSTer's sdram1.sv at the same clk_ram), which is 1.5 clk_ram after the launch edge: the 2nd clk_ram edge
# after it. The hold check stays at the default edge (the 1st after the launch): word 1, launched one SDRAM clock
# later, must not reach the register before that capture. cap_sel 1 / 2 (READ + 5 / + 6) are runtime experiments
# outside the datasheet window (docs/memory.md section 3) and are not timed.
set_multicycle_path -setup -end -from [get_clocks dram_clk_pin] -to [get_clocks $clk_ram] 2

# ---------------------------------------------------------------------------------- PSRAM
# Chip clock = clk_ram / 2 from the p_clk register (psram_sync.sv), forwarded on cram*_clk. The pin clock is a
# generated clock on the port, so its route and output buffer are in every check. AS1C8M16PL at <= 83 MHz, plus 0.5 ns
# per board trace (docs/memory.md section 4): tSP 3, tCSP 4 (CE#), tHD 2, tACLK 9, tKOH 2 ns.
foreach n {0 1} {
	# -no_duplicates: the fitter may keep a fabric copy of a register it packs into the pin
	set pclk [get_registers -no_duplicates "*|psram${n}|p_clk"]
	create_generated_clock -name cram${n}_clk_reg -source [get_pins $clk_ram] -divide_by 2 $pclk
	create_generated_clock -name cram${n}_clk_pin -source $pclk [get_ports cram${n}_clk]
	set cram_out [get_ports "cram${n}_a\[*\] cram${n}_dq\[*\] cram${n}_adv_n cram${n}_cre cram${n}_oe_n cram${n}_we_n cram${n}_ub_n cram${n}_lb_n"]
	set cram_ce  [get_ports "cram${n}_ce0_n cram${n}_ce1_n"]
	set_output_delay -clock cram${n}_clk_pin -max 3.5  -add_delay $cram_out
	set_output_delay -clock cram${n}_clk_pin -max 4.5  -add_delay $cram_ce
	set_output_delay -clock cram${n}_clk_pin -min -2.5 -add_delay [add_to_collection $cram_out $cram_ce]
	set_input_delay  -clock cram${n}_clk_pin -max 10.0 -add_delay [get_ports "cram${n}_dq\[*\] cram${n}_wait"]
	set_input_delay  -clock cram${n}_clk_pin -min 2.0  -add_delay [get_ports "cram${n}_dq\[*\] cram${n}_wait"]
	# a read word is taken at the clk_ram edge where the next chip clock rises (one chip cycle after its launch edge)
	set_multicycle_path -setup -end 2 -from [get_clocks cram${n}_clk_pin] -to [get_clocks $clk_ram]
	set_multicycle_path -hold  -end 1 -from [get_clocks cram${n}_clk_pin] -to [get_clocks $clk_ram]
	# every pin register changes only at F edges (half a clk_ram before a chip clock edge): the hold check is against
	# the chip edge before, not one at the launch instant
	set_multicycle_path -hold  -start 1 -from [get_clocks $clk_ram] -to [get_clocks cram${n}_clk_pin]

	# psram_sync is a half-rate machine: `ph` toggles every clk_ram and the pin registers and the segment state (the
	# F-edge registers below) are written only at edges where ph is 1, from registers that are themselves written
	# only at those edges, so a path between two of them has two clk_ram periods. The ddram_pocket request registers
	# are written only when busy is low, which is also only at F edges (busy_i needs ph, rlast follows an R edge).
	# Not in the set: ph, rst_pend (set at any edge), reset, init_go, the R-edge registers p_clk, smp, rvalid, rlast
	# and the input register dq_r; paths from those stay single-cycle.
	set pf [get_registers "*|psram${n}|p_a* *|psram${n}|p_dq* *|psram${n}|p_oe* *|psram${n}|p_adv_n* *|psram${n}|p_cre* *|psram${n}|p_we_n* *|psram${n}|p_ce_n* *|psram${n}|p_bm_n* *|psram${n}|st* *|psram${n}|tmr* *|psram${n}|cop* *|psram${n}|cpass* *|psram${n}|clk_run* *|psram${n}|last* *|psram${n}|cur_we* *|psram${n}|act_* *|psram${n}|w_cur* *|psram${n}|w_rem* *|psram${n}|smp_last*"]
	set_multicycle_path -setup -from $pf -to $pf 2
	set_multicycle_path -hold  -from $pf -to $pf 1
	set ab [lindex {a b} $n]
	set rq [get_registers "*|ddram|${ab}_addr* *|ddram|${ab}_wd* *|ddram|${ab}_be* *|ddram|${ab}_read* *|ddram|${ab}_write* *|ddram|${ab}_chan*"]
	set_multicycle_path -setup -from $rq -to $pf 2
	set_multicycle_path -hold  -from $rq -to $pf 1
}

# ddram_pocket WRAM-H line tags: the hit test runs at a read-request edge (ramh_rd && !ramh_rd_old). ramh_rd is a clk_sys
# signal, so those edges are the clk_ram edges that follow a clk_sys edge, and two of them are at least four clk_ram
# apart (ramh_rd has to fall and rise again). A missed line's tag is written at the edge after the request edge
# (ramh_alloc) and the tags reach ramh_alloc, ramh_plru, ramh_curr and ramh_read_busy only through the hit test, so a
# tag has two clk_ram periods before it can be used. ramh_dirty is not in the set: a write (ramh_wr, registered on
# clk_ram in saturn_pocket) can invalidate a line at the edge after its allocation.
set ramh_tag [get_registers "*|ddram|ramh_tag*"]
set ramh_rd_dst [get_registers "*|ddram|ramh_alloc* *|ddram|ramh_plru* *|ddram|ramh_curr* *|ddram|ramh_read_busy*"]
set_multicycle_path -setup -from $ramh_tag -to $ramh_rd_dst 2
set_multicycle_path -hold  -from $ramh_tag -to $ramh_rd_dst 1
# The tag write (ramh_alloc) and the fill address (a_addr while ramh_read_busy) take ramh_addr at the edge after a
# request edge or later, two clk_ram after the clk_sys edge that launched it; the master holds the address under WAIT
# until the fill is done. ramh_addr is the only clk_sys signal that reaches these registers.
set_multicycle_path -setup -from [get_clocks $clk_sys] -to $ramh_tag 2
set_multicycle_path -hold  -from [get_clocks $clk_sys] -to $ramh_tag 1
set_multicycle_path -setup -from [get_clocks $clk_sys] -to [get_registers "*|ddram|a_addr*"] 2
set_multicycle_path -hold  -from [get_clocks $clk_sys] -to [get_registers "*|ddram|a_addr*"] 1

# Request registers that capture clk_sys data only at odd clk_ram edges (the edge after a clk_sys edge): the hold check at
# the coincident edge is moved one clk_ram back. Strobe registers stay out of every -from, so their hold is still timed
# and no capture can happen at a coincident edge. Proof per group: docs/fit-status.md, odd-edge request registers.
set_multicycle_path -hold -end -rise_from [get_clocks $clk_sys] -to [get_registers {*|sdram|v_wd[*] *|sdram|v_wbe[*] *|sdram|v_row[*] *|sdram|v_col[*] *|sdram|v_wsel[*]}] 1
set_multicycle_path -hold -end -from [get_registers {*|SCSP|MEM_A[*] *|SCSP|MEM_D[*]}] -to [get_registers {*|sdram|sc_addr[*] *|sdram|sc_din[*]}] 1
set cdb_data [remove_from_collection [get_registers {*|cdb|*}] [get_registers {*|cdb|dram|RAM_WE[*] *|cdb|dram|RAM_RD *|cdb|dram|RAM_CS}]]
set_multicycle_path -hold -end -from $cdb_data -to [get_registers {*|ddram|cdram_write_data[*] *|ddram|cdram_write_addr[*] *|ddram|cdram_rcache_addr[*]}] 1
set_multicycle_path -hold -end -from [get_registers {*|cart|MEM_A[*] *|cart|MEM_DO[*]}] -to [get_registers {*|ddram|cart_rcache_addr[*] *|ddram|cart_write_addr[*] *|ddram|cart_write_data[*]}] 1

# ---------------------------------------------------------------------------------- SRAM (asynchronous)
# No clock at the chip. The reference is the OE# pin (sram_ref_pin, a generated clock on the port, sourced from the
# e_oe_n register), so pad and route delays are counted. Every other pin is held within SRAM_SKEW of it, and read data
# is valid SRAM_SKEW + tAA (10 ns) + 1 ns of board after it. The I/O cell input register takes it RD_CYC = 4 clk_ram
# after the address edge, where the next access changes the pins (sram_pocket.sv). 8.73 = clk_ram period of the
# analysed mode. docs/memory.md section 5.
set SRAM_SKEW 2.0
set eoen [get_registers -no_duplicates "*|sram|e_oe_n"]
create_generated_clock -name sram_ref -source [get_pins $clk_ram] -divide_by 1 $eoen
create_generated_clock -name sram_ref_pin -source $eoen [get_ports sram_oe_n]
set sram_out [get_ports {sram_a[*] sram_dq[*] sram_we_n sram_ub_n sram_lb_n}]
set_output_delay -clock sram_ref_pin -max [expr {8.73 - $SRAM_SKEW}] -add_delay $sram_out
set_output_delay -clock sram_ref_pin -min $SRAM_SKEW -add_delay $sram_out
set_input_delay  -clock sram_ref_pin -max [expr {$SRAM_SKEW + 11.0}] -add_delay [get_ports {sram_dq[*]}]
set_input_delay  -clock sram_ref_pin -min [expr {-$SRAM_SKEW}] -add_delay [get_ports {sram_dq[*]}]
set_multicycle_path -setup -end -from [get_clocks sram_ref_pin] -to [get_clocks $clk_ram] 4
set_multicycle_path -hold  -end -from [get_clocks sram_ref_pin] -to [get_clocks $clk_ram] 3
