#!/bin/sh
# Debug build with public signals (build/dbg). usage: dbg.sh seed [clks]; prints the mismatch with extra DBG output
cd "$(dirname "$0")" || exit 1
./prep.sh
verilator --cc --exe --build -j 8 -O1 -Wno-fatal -Wno-lint -Wno-style -Wno-PROCASSWIRE -Wno-WIDTH -Wno-CASEINCOMPLETE \
  --x-assign 0 --x-initial 0 --no-timing -DLIGHT_SATURN --top-module tb_top --public-flat-rw -CFLAGS "-DDBG" --Mdir build/dbg \
  build/ref/VDP2_pkg.sv build/ref/VDP2.sv build/ref/VDP2_mem.sv build/cur/VDP2_pkg.sv build/cur/VDP2.sv build/cur/VDP2_mem.sv models.sv tb_top.sv tb.cpp > build/dbg.log 2>&1
build/dbg/Vtb_top +seed=$1 +clks=${2:-1500000}
