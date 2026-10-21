project_open core_fmax
create_timing_netlist -model slow
read_sdc
update_timing_netlist
report_timing -setup -npaths 40 -detail summary -panel_name p -file out_core_fmax/paths.txt
