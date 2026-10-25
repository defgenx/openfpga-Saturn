project_open blk_mult_new_t
create_timing_netlist -model slow
read_sdc
update_timing_netlist
report_timing -setup -npaths 3 -detail full_path -file out_blk_mult_new_t/paths.txt
