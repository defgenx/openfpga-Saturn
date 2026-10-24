#!/bin/sh
# usage: blk_q2.sh <blk>_<tag>...  like blk_queue.sh but first waits until no blk_queue.sh / blk_q2.sh started earlier is running
me=$$
while :; do
  o=$(pgrep -f "blk_queue.sh|blk_q2.sh|runall_gold.sh" | grep -v "^$me$" | while read p; do [ $p -lt $me ] && echo $p; done)
  [ -z "$o" ] && break; sleep 10
done
for p in "$@"; do ./run.sh blk_$p map q$p; done
