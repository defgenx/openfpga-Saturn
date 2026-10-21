#!/bin/sh
# usage: run_seed.sh <build dir> <seed> <clks> [extra args]; log in <build dir>/run_<seed>.log, exit status = result
B=$1; S=$2; C=$3; shift 3
"$B/obj/Vtb_top" +seed=$S +clks=$C "$@" > "$B/run_$S.log" 2>&1 || echo FAIL $S
