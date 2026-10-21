project_open cpu_sta
create_timing_netlist -model slow
read_sdc
update_timing_netlist
report_timing -setup -npaths 8000 -detail summary -panel_name p -file out_cpu_sta/paths.txt
