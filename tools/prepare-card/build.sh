#!/usr/bin/env bash
# Build Saturn-prepare-card for every system, as the release zip carries it:
#   OUT/Saturn-prepare-card          macOS, universal (arm64 + x86_64), ad-hoc signed
#   OUT/Saturn-prepare-card.exe      Windows x64
#   OUT/Saturn-prepare-card-others/  Windows arm64 and x86, Linux x64, arm64, armv7 and x86
# Static binaries (CGO_ENABLED=0). Needs Go, and macOS for lipo and codesign.
#   tools/prepare-card/build.sh OUT
set -euo pipefail

[ $# -eq 1 ] || { echo "usage: $0 OUTDIR" >&2; exit 1; }
mkdir -p "$1"
OUT="$(cd "$1" && pwd)"
cd "$(dirname "$0")"
command -v go >/dev/null || { echo "go is needed: https://go.dev/dl/" >&2; exit 1; }
for t in lipo codesign; do
	command -v "$t" >/dev/null || { echo "$t is needed (macOS) for the macOS binary" >&2; exit 1; }
done

NAME=Saturn-prepare-card
OTHERS="$OUT/$NAME-others"   # the same name as the binary cannot be a folder next to it; main.go knows this name
export CGO_ENABLED=0 GOMAXPROCS="${GOMAXPROCS:-2}"
TMP="$(mktemp -d)"
trap 'rm -rf "$TMP"' EXIT

build() { # GOOS GOARCH OUTPUT [GOARM]
	GOOS=$1 GOARCH=$2 GOARM=${4:-} go build -p 2 -trimpath -buildvcs=false -ldflags "-s -w" -o "$3" .
}

build darwin arm64 "$TMP/arm64"
build darwin amd64 "$TMP/amd64"
lipo -create -output "$OUT/$NAME" "$TMP/arm64" "$TMP/amd64"
codesign -s - --force "$OUT/$NAME"

build windows amd64 "$OUT/$NAME.exe"
mkdir -p "$OTHERS"
build windows arm64 "$OTHERS/$NAME-arm64.exe"
build windows 386 "$OTHERS/$NAME-x86.exe"
build linux amd64 "$OTHERS/$NAME-linux-x64"
build linux arm64 "$OTHERS/$NAME-linux-arm64"
build linux arm "$OTHERS/$NAME-linux-armv7" 7
build linux 386 "$OTHERS/$NAME-linux-x86"
echo "built $NAME into $OUT"
