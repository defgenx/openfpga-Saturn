#!/bin/sh
# usage: run_map.sh <project-dir-relative-to-sizing/cdb> <project-name>   (run in background)
# Mounts the workspace root so that ../../../../_ref sources resolve. Container name is unique per project.
WS=$(cd ../../../.. && pwd)
REL=${PWD#$WS/}
exec docker run --rm --platform linux/amd64 --name cdb-map-$2-$$ -v "$WS":/ws -w /ws/$REL/$1 raetro/quartus:21.1 quartus_map $2
