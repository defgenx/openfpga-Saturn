#!/bin/bash
# Double-click on macOS: prepares the Saturn discs on the SD card this file is on.
cd "$(dirname "$0")" || exit 1
PY=$(command -v python3 || true)
if [ -z "$PY" ]; then
	echo "Python 3 is needed: https://www.python.org/downloads/"
else
	"$PY" Saturn-mktoc.py
fi
echo
read -r -p "Press Enter to close." _
