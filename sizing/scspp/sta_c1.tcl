project_open scspp_c1
create_timing_netlist
read_sdc scspp.sdc
update_timing_netlist
report_clock_fmax_summary -file out_c1/scspp_c1.fmax.rpt
report_timing -setup -npaths 6 -detail summary -file out_c1/scspp_c1.paths.rpt
