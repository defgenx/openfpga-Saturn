# Multicycle constraints for VDP2P. Include from the core SDC. Patterns match both the standalone wrapper (VDP2P:u|...)
# and the integrated instance (...|VDP2P:VDP2|...).
# Sources below change only at a dot event (DOT_CE_R/DOT_CE_F, at least 4 clk_sys apart) or by a CPU register write:
# every destination register samples them at an event or later, so two clock periods are available.
foreach src {HRES VRES CELLX H_CNT V_CNT HCT VCT NPN_FETCH NCH_FETCH NVCS_FETCH RBG_FETCH RCH_FETCH CT_FETCH LS_FETCH LW_FETCH RPA_FETCH RPB_FETCH RCTA_FETCH RCTB_FETCH LN_FETCH BACK_FETCH DOT_FETCH SCRNX SCRNY} {
	foreach pat [list "*VDP2P:*|$src" "*VDP2P:*|$src\[*\]"] {
		set r [get_registers -nowarn $pat]
		if {[get_collection_size $r] > 0} {
			set_multicycle_path -setup -end 2 -from $r
			set_multicycle_path -hold  -end 1 -from $r
		}
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
# CPU-written configuration registers (written at most once per bus cycle; a write landing in a fetch evaluation window is
# the register write skew deviation of docs/vdp2.md, so the capture sees the old or the new value).
set r [get_registers -nowarn "*VDP2P:*|REGS.*"]
if {[get_collection_size $r] > 0} {
	set_multicycle_path -setup -end 2 -from $r
	set_multicycle_path -hold  -end 1 -from $r
}
# Pipeline tap write pointers advance at dot events only.
set r [get_registers -nowarn "*VDP2P_DTAP:*|wp\[*\]"]
if {[get_collection_size $r] > 0} {
	set_multicycle_path -setup -end 2 -from $r
	set_multicycle_path -hold  -end 1 -from $r
}
