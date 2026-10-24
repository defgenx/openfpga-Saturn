#!/bin/sh
# usage: blk_queue.sh <blk>_<tag>...  maps each project in order, one container at a time; waits for the gold runner first.
while pgrep -f "runall_gold.sh" >/dev/null; do sleep 10; done
for p in "$@"; do ./run.sh blk_$p map q$p; done
