#!/bin/sh
# Mutation check of the lockstep bench: break one line of m68kp.sv, rebuild, expect lockstep failures, restore.
# usage: mutate.sh '<old text>' '<new text>' <tests.txt>
cd "$(dirname "$0")"; F=../../src/fpga/saturn/M68KP/m68kp.sv; cp $F /tmp/m68kp.orig
python3 - "$1" "$2" <<PY
import sys; s=open("$F").read(); assert sys.argv[1] in s; open("$F","w").write(s.replace(sys.argv[1], sys.argv[2], 1))
PY
make lock >/dev/null 2>&1; (cd obj_lock && ./Vtb_lock sst "$3" | tail -3)
cp /tmp/m68kp.orig $F; make lock >/dev/null 2>&1
