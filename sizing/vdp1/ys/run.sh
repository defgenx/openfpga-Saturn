#!/bin/sh
# Quick relative area estimate (Yosys + slang + abc, Intel ALM mapping). NOT Quartus numbers; use for deltas only.
# Run from the worktree root: sizing/vdp1/ys/run.sh <dir holding VDP1.sv and VDP1_pkg.sv> [tag]
Y=${YOSYS:-yowasp-yosys}
D=$1; T=${2:-est}
O=sizing/vdp1/ys/$T
mkdir -p $O
# slang wants output ports driven from procedural code declared as variables
perl -pe 's/^(\s*)output(\s+)\[15: 0\] VOUTO/$1output reg$2\[15: 0\] VOUTO/; s/^(\s*)output(\s+)IRQ_N/$1output reg$2IRQ_N/' $D/VDP1.sv > $O/VDP1.sv
$Y -q -p "read_slang --threads 1 --compat vcs --allow-use-before-declare --top VDP1 sizing/vdp1/ys/altdpram_sim.v $D/VDP1_pkg.sv $O/VDP1.sv; hierarchy -top VDP1; synth_intel_alm -family cyclonev -top VDP1; tee -o $O/stat.txt stat" > $O/log.txt 2>&1
grep -E "ERROR" $O/log.txt | head
grep -E "Number of cells|MISTRAL|LUT|DFF|DLATCH|ALM" $O/stat.txt | tail -30
