project_open cpu_sta
create_timing_netlist -model slow
read_sdc
update_timing_netlist
foreach b {dmac divu cache bsc frt intc wdt msby} {
  set r [get_registers -nowarn "*$b*"]
  if {[get_collection_size $r] > 0} {
    report_timing -setup -npaths 3 -detail summary -from $r -panel_name "from_$b" -file out_cpu_sta/from_$b.txt
    report_timing -setup -npaths 3 -detail summary -to $r -panel_name "to_$b" -file out_cpu_sta/to_$b.txt
  }
}
