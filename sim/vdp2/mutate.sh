#!/bin/sh
# Mutation check of the differential test: apply one sed expression to a VDP2 source, rebuild, run seeds,
# restore the file from git. usage: mutate.sh <VDP2.sv|VDP2_pkg.sv|VDP2_mem.sv> '<sed expr>' ['<seed list command>']
# Prints the failing seeds (empty output = mutation not detected). Requires the file to be committed.
F=../../src/fpga/saturn/Saturn/VDP2/$1
cd "$(dirname "$0")" || exit 1
trap 'git checkout -q -- $F' EXIT
sed -i '' "$2" $F
git diff --quiet -- $F && { echo "sed expression changed nothing"; exit 2; }
make vdp2-build >/dev/null 2>&1 || { echo "build failed"; exit 2; }
eval "${3:-seq 1 60}" | xargs -P 8 -I{} sh -c './build/obj/Vtb_top +seed={} +clks=1500000 | grep FAIL | cut -c1-60' | sort | head -5
