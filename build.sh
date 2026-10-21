#!/usr/bin/env bash
# Build the core with Quartus Lite (native, or in Docker) and package it for the SD card.
#   ./build.sh            compile + package
#   ./build.sh compile    compile only
#   ./build.sh package    package an existing output_files/ap_core.rbf
set -euo pipefail
cd "$(dirname "$0")"

QUARTUS_IMAGE=${QUARTUS_IMAGE:-raetro/quartus:21.1}
CORE=defgenx.Saturn

compile() {
	if command -v quartus_sh >/dev/null; then
		(cd src/fpga && quartus_sh --flow compile ap_core)
	else
		docker run --rm --platform linux/amd64 --name saturn-build -v "$PWD":/build -w /build/src/fpga \
			"$QUARTUS_IMAGE" quartus_sh --flow compile ap_core
	fi
}

package() {
	local rbf=src/fpga/output_files/ap_core.rbf
	[ -f "$rbf" ] || { echo "missing $rbf - compile first" >&2; exit 1; }
	python3 tools/reverse_bits.py "$rbf" "dist/Cores/$CORE/saturn.rbf_r"
	# the Pocket refuses the whole core if any definition file breaks an APF limit
	python3 tools/check_json.py
	rm -rf release && mkdir -p release
	cp -R dist/Cores dist/Platforms dist/Assets release/
	cp INSTALL.md release/Saturn-INSTALL.md
	find release -name .keep -delete
	(cd release && zip -qr "../$CORE.zip" .)
	echo "packaged $CORE.zip - unzip it onto the root of the Pocket SD card"
}

case "${1:-all}" in
	all) compile; package ;;
	compile) compile ;;
	package) package ;;
	*) echo "usage: $0 [all|compile|package]" >&2; exit 1 ;;
esac
