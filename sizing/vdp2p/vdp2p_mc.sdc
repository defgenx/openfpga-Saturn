# Multicycle constraints for VDP2P. Include from the core SDC. Patterns match both the standalone wrapper (VDP2P:u|...)
# and the integrated instance (...|VDP2P:VDP2|...).
# Sources below change only at a dot event (DOT_CE_R/DOT_CE_F, at least 4 clk_sys apart) or by a CPU register write:
# every destination register samples them at an event or later, so two clock periods are available.
foreach src {HRES VRES CELLX H_CNT V_CNT HCT VCT} {
	set r [get_registers -nowarn "*VDP2P:*|$src\[*\]"]
	if {[get_collection_size $r] > 0} {
		set_multicycle_path -setup -end 2 -from $r
		set_multicycle_path -hold  -end 1 -from $r
	}
}
# Cycle pattern and map offset tables: written by the CPU only.
foreach pat {"*VDP2P_REGRAM:*|*"} {
	set r [get_keepers -nowarn $pat]
	if {[get_collection_size $r] > 0} {
		set_multicycle_path -setup -end 2 -from $r
		set_multicycle_path -hold  -end 1 -from $r
	}
}
