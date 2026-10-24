#!/bin/sh
# usage: sum.sh <project>...  prints Combinational ALUTs / registers / map ALMs
for p in "$@"; do r=out_$p/$p.map.rpt; [ -f $r ] || { echo "$p: no report"; continue; }
 a=$(grep "Combinational ALUT usage for logic" $r | head -1 | sed 's/[^0-9]*;[^0-9]*\([0-9]*\).*/\1/')
 g=$(grep "Dedicated logic registers" $r | head -1 | sed 's/.*; *\([0-9]*\) *;.*/\1/')
 m=$(grep "Estimate of Logic utilization" $r | head -1 | sed 's/.*; *\([0-9]*\) *;.*/\1/')
 echo "$p: ALUT $a regs $g mapALM $m"; done
