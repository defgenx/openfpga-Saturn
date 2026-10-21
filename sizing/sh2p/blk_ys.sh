#!/bin/sh
# usage: blk_ys.sh <top> <file.sv>...   quick yosys synth_intel_alm estimate (ALUTs, FFs) for the top module only
top=$1; shift
rd=""; for f in "$@"; do rd="$rd read_verilog -sv $f;"; done
yosys -p "$rd hierarchy -top $top; synth_intel_alm -family cyclonev -top $top; stat" 2>&1 | awk -v t=$top '
/^=== / {blk++} blk==1 && /MISTRAL_ALUT[0-9_A-Z]*/ {n+=$1} blk==1 && /MISTRAL_FF/ {ff+=$1} blk==1 && /MISTRAL_(MLAB|M10K)|\$mem|LUTRAM/ {mm=mm" "$2":"$1}
/ERROR/ {print}
END {printf "%s: ALUT %d FF %d%s\n", t, n, ff, mm}'
