project_open m68k_fx68k
create_timing_netlist
read_sdc m68k.sdc
read_sdc fx68k_core.sdc
update_timing_netlist
report_clock_fmax_summary -file out_fx68k/m68k_fx68k.fmax.rpt
report_timing -setup -npaths 8 -detail summary -file out_fx68k/m68k_fx68k.paths.rpt
