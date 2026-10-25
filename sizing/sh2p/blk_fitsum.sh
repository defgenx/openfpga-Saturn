#!/bin/sh
# usage: blk_fitsum.sh <project>...  fitter ALM accounting: placed-recoverable (A-B), memory ALMs, ALUT, regs
for p in "$@"; do r=out_$p/$p.fit.rpt; [ -f $r ] || { echo "$p: no fit"; continue; }
 g() { grep -a -E "$1" $r | head -1 | awk -F';' '{v=$3; sub(/\/.*/,"",v); gsub(/[ ,]/,"",v); print v}'; }
 n=$(g "ALMs needed \[=A-B\+C\]"); a=$(g "\[A\] ALMs used in final"); b=$(g "\[B\] Estimate of ALMs recoverable"); m=$(g "\[d\] ALMs used for memory")
 u=$(g "Combinational ALUT usage for logic"); f=$(g "Dedicated logic registers  "); mu=$(g "Memory ALUT usage")
 echo "$p: ALM A-B $((a-b)) (placed $a, recoverable $b, of which memory $m; needed incl. virtual-IO artifact $n) ALUT $u memALUT $mu regs $f"; done
