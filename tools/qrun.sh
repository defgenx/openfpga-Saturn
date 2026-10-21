#!/usr/bin/env bash
# Run one Quartus command in Docker, waiting until fewer than QRUN_MAX Quartus containers are running.
# Emulated Quartus thrashes when many run at once (8 min alone, 20+ h with ten in parallel).
#   tools/qrun.sh <name> <host-dir> <workdir-in-container> <quartus command...>
#   tools/qrun.sh sat-full ~/ws/openfpga-Saturn /build/src/fpga quartus_sh --flow compile ap_core
set -euo pipefail
QRUN_MAX=${QRUN_MAX:-2}
QUARTUS_IMAGE=${QUARTUS_IMAGE:-raetro/quartus:21.1}
name=$1 dir=$2 wd=$3; shift 3

running() { docker ps --filter "ancestor=$QUARTUS_IMAGE" -q | wc -l | tr -d ' '; }
# random start offset so two waiters do not start in the same second
sleep $((RANDOM % 20))
while [ "$(running)" -ge "$QRUN_MAX" ]; do sleep 60; done

exec docker run --rm --platform linux/amd64 --name "$name" -v "$dir":/build -w "$wd" "$QUARTUS_IMAGE" "$@"
