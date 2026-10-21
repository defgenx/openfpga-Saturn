#!/bin/sh
# usage: summary.sh <map.rpt>  -> ALMs, ALUTs, registers, block memory bits, M10K (est.), DSP
R=$1
a=$(grep "Estimate of Logic utilization" $R | awk -F';' '{gsub(/ /,"",$3); print $3}')
l=$(grep "Combinational ALUT usage for logic" $R | awk -F';' '{gsub(/ /,"",$3); print $3}')
m=$(grep "Memory ALUT usage" $R | awk -F';' '{gsub(/ /,"",$3); print $3}')
f=$(grep "Dedicated logic registers" $R | awk -F';' '{gsub(/ /,"",$3); print $3}' | head -1)
b=$(grep "Total block memory bits" $R | awk -F';' '{gsub(/ /,"",$3); print $3}' | head -1)
d=$(grep "Total DSP Blocks" $R | awk -F';' '{gsub(/ /,"",$3); print $3}' | head -1)
k=$(grep -c "cyclonev_ram_block" ${R%.map.rpt}.vqm 2>/dev/null || true)
echo "ALM $a  ALUT $l (+mem $m)  REG $f  blockbits $b  DSP $d  m10k_cells $k"
