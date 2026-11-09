#!/bin/sh
# replay.sh <run dir> <out dir> [+plusargs...]: a replay from the checkpoint of the run in <run dir> (+CKPT_US),
# with its trace.log and sim.log in <out dir>; the plusargs go ahead of the run's own. Prints the replay's pid.
# replay.sh <run dir> quit: ends the checkpoint server. See docs/sim.md "Checkpoints".
set -e
run=$1; out=$2; shift 2
fifo=$run/ckpt.fifo
[ -p "$fifo" ] || { echo "replay.sh: no checkpoint server for $run" >&2; exit 1; }
if [ "$out" = quit ]; then echo quit > "$fifo"; exit 0; fi
mkdir -p "$out"; out=$(cd "$out" && pwd)
rm -f "$out/pid"
printf '%s\n' "$@" > "$out/args"
echo "$out" > "$fifo"
i=0; while [ ! -s "$out/pid" ]; do i=$((i+1)); [ $i -le 100 ] || { echo "replay.sh: no replay started" >&2; exit 1; }; sleep 0.1; done
cat "$out/pid"
