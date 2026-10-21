#!/usr/bin/env python3
"""Flatten a Quartus .qip tree into a Verilator file list (one path per line).

Usage: qip2f.py top.qip [skip-substring ...]
VHDL files are reported on stderr and skipped (Verilator cannot read them); files whose path contains a
skip substring are dropped (replaced by sim models)."""
import os, re, sys

def walk(qip, out, skip, seen):
    base = os.path.dirname(os.path.abspath(qip))
    for line in open(qip):
        m = re.match(r'\s*set_global_assignment\s+-name\s+(\w+)\s+\[file join \$::quartus\(qip_path\)\s+(\S+?)\s*\]', line)
        if not m:
            continue
        kind, rel = m.groups()
        p = os.path.normpath(os.path.join(base, rel))
        if any(s in p for s in skip):
            sys.stderr.write("skip   %s\n" % os.path.relpath(p))
            continue
        if kind == 'QIP_FILE':
            if p not in seen:
                seen.add(p); walk(p, out, skip, seen)
        elif kind in ('SYSTEMVERILOG_FILE', 'VERILOG_FILE'):
            if p not in out: out.append(p)
        elif kind == 'VHDL_FILE':
            sys.stderr.write("vhdl   %s (not verilated)\n" % os.path.relpath(p))

out = []
walk(sys.argv[1], out, sys.argv[2:], set())
print("\n".join(out))
