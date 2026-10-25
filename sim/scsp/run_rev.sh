#!/bin/sh
# usage: run_rev.sh <git rev> <seeds> <rounds>   run the lock-step test on SCSPP as of a commit (separate build dir)
R=$1; SEEDS=$2; ROUNDS=$3
H=$(cd "$(dirname "$0")/../.." && pwd)
T=/private/tmp/claude-503/rev_$R; rm -rf $T; mkdir -p $T/src
git -C $H show $R:src/fpga/saturn/Saturn/SCSPP/SCSPP.sv > $T/src/SCSPP.sv
git -C $H show $R:src/fpga/saturn/Saturn/SCSPP/SCSPP_pkg.sv > $T/src/SCSPP_pkg.sv
make -C $H/sim/scsp NEW=$T/src B=$T/b SEEDS="$SEEDS" ROUNDS=$ROUNDS run 2>&1 | grep -v "^- \|^%Warn\|^ "
