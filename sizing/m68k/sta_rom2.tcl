project_open m68k_rom2
create_timing_netlist
read_sdc m68k.sdc
read_sdc m68kp_core.sdc
update_timing_netlist
report_clock_fmax_summary -file out_rom2/m68k_rom2.fmax.rpt
report_timing -setup -npaths 8 -detail summary -file out_rom2/m68k_rom2.paths.rpt
