#!/bin/bash
# usage: report.sh <name>...  prints ALUTs / registers / M10K bits / DSP of the VDP1 hierarchy root
for n in "$@"; do
  R=$n/out/$n.map.rpt
  [ -f $R ] || { echo "$n: no report"; continue; }
  grep -m1 "^; |VDP1 " $R | awk -F';' -v n=$n '{gsub(/ +/," ",$3); gsub(/ +/," ",$4); gsub(/ +/," ",$5); gsub(/ +/," ",$6); print n ":" "ALUT" $3 "regs" $4 "bits" $5 "DSP" $6}'
done
