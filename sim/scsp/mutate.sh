#!/bin/sh
# usage: mutate.sh "<perl substitution>" [seeds]
# Applies a mutation to the SCSP under test and reports whether the lock-step test catches it.
# MUT_DIR is the scratch build directory (default build_mut). MUT_EXTRA adds verilator flags (e.g. -DPOCKET_SCSP_DSP_COMPACT); GOLD overrides the reference RTL directory.
HERE=$(cd "$(dirname "$0")" && pwd)
SRC=$HERE/../../src/fpga/saturn/Saturn/SCSPP
M=${MUT_DIR:-$HERE/build_mut}
rm -rf $M; mkdir -p $M/src
cp $SRC/SCSPP_pkg.sv $M/src/
perl -0pe "$1" $SRC/SCSPP.sv > $M/src/SCSPP.sv
if cmp -s $SRC/SCSPP.sv $M/src/SCSPP.sv; then echo "mutation did not apply"; exit 2; fi
make -s -C $HERE NEW=$M/src B=$M/b EXTRA="$MUT_EXTRA" ${GOLD:+GOLD=$GOLD} build_mut_exe >/dev/null 2>&1 || { echo "build failed"; exit 2; }
for s in ${2:-1 2 3}; do
  if ! $M/b/obj/Vtb_top +seed=$s +rounds=${ROUNDS:-150} +wav=$M/w >$M/log 2>&1; then echo "CAUGHT (seed $s): $(grep -m1 MISMATCH $M/log)"; exit 0; fi
done
echo "NOT CAUGHT"; exit 1
