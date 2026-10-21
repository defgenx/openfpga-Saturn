#!/bin/sh
# usage: run.sh <base|new> <name>   (run from the worktree root)
W=$(cd "$(dirname "$0")/../.." && pwd)
docker run --rm --platform linux/amd64 --name "$2" -v "$W":/build -w /build/sizing/scu raetro/quartus:21.1 quartus_map scu_$1 > "${3:-/tmp/$2.log}" 2>&1
