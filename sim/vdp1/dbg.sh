#!/bin/sh
# Debug build with internal signal access: ./dbg.sh [DBGST count]; runs scenario 0 only
verilator --cc --exe --build -j 4 --top-module diff_top -Mdir obj_dbg -Wno-fatal -Wno-lint -Wno-style -Wno-PROCASSWIRE -Wno-COMBDLY -Wno-WIDTH -Wno-UNOPTFLAT --x-initial 0 --x-assign 0 --public-flat-rw -CFLAGS "-O1 -std=c++17 -DDBGST=${1:-80}" gen/REF_VDP1_pkg.sv gen/REF_VDP1.sv ../../src/fpga/saturn/Saturn/VDP1P/VDP1P_pkg.sv ../../src/fpga/saturn/Saturn/VDP1P/VDP1P.sv altdpram.v gen/diff_top.sv tb.cpp 2>&1 | grep -i "error"
