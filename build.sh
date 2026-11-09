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
		(cd src/fpga && sh ../../tools/qflow.sh)
	else
		docker run --rm --platform linux/amd64 --name saturn-build -v "$PWD":/build -w /build/src/fpga \
			"$QUARTUS_IMAGE" sh ../../tools/qflow.sh
	fi
}

package() {
	local rbf=src/fpga/output_files/ap_core.rbf
	[ -f "$rbf" ] || { echo "missing $rbf - compile first" >&2; exit 1; }
	python3 tools/reverse_bits.py "$rbf" "dist/Cores/$CORE/saturn.rbf_r"
	# the Pocket refuses the whole core if any definition file breaks an APF limit
	python3 tools/check_json.py
	rm -rf release release-tools && mkdir -p release release-tools
	cp -R dist/Cores dist/Platforms dist/Assets release/
	cp INSTALL.md release/Saturn-INSTALL.md
	find release -name .keep -delete
	rm -f "$CORE.zip"
	(cd release && zip -qr "../$CORE.zip" .)
	# the card preparation tool: separate release assets (install.sh tool_asset knows these names).
	# Windows builds go bare; macOS and Linux ones each in a zip, which keeps the executable bit a download loses.
	local b=release-tools/build n=Saturn-prepare-card f
	tools/prepare-card/build.sh "$b"
	cp "$b/$n.exe" "$b/$n-others/$n-arm64.exe" "$b/$n-others/$n-x86.exe" release-tools/
	(cd "$b" && zip -q "../$n-macos.zip" "$n")
	for f in "$b/$n-others/$n"-linux-*; do (cd "$(dirname "$f")" && zip -q "../../$(basename "$f").zip" "$(basename "$f")"); done
	rm -rf "$b"
	echo "packaged $CORE.zip (unzip it onto the root of the Pocket SD card) and the card tool in release-tools/"
}

case "${1:-all}" in
	all) compile; package ;;
	compile) compile ;;
	package) package ;;
	*) echo "usage: $0 [all|compile|package]" >&2; exit 1 ;;
esac
