#!/bin/sh
# Third-party 68000 cores measured for docs/m68k.md, cloned outside the repo (J68 is the only one vendored).
# usage: fetch_cores.sh <dir>
set -e
d=${1:?dir}; mkdir -p "$d"; cd "$d"
git clone --depth 1 https://github.com/TobiFlex/TG68K.C tg68k      # LGPL-3.0-or-later
git clone --depth 1 https://github.com/alfikpl/ao68000 ao68000     # BSD-2-Clause
git clone --depth 1 https://github.com/fredrequin/j68_cpu j68      # ISC
git clone --depth 1 https://github.com/SingleStepTests/680x0 sst   # test vectors
