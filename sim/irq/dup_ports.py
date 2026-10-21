#!/usr/bin/env python3
"""Fail if a module instance connects the same named port twice (tools disagree on which one wins)."""
import re, sys
bad = 0
for f in sys.argv[1:]:
    t = re.sub(r'//[^\n]*', '', open(f, errors='ignore').read())
    for m in re.finditer(r'\(\s*\.\w+\s*\((?:[^;]|\n)*?\)\s*;', t):
        names = re.findall(r'\.(\w+)\s*\(', m.group(0))
        d = sorted({n for i, n in enumerate(names) if n in names[:i]})
        if d:
            bad = 1
            print('%s:%d: port connected twice: %s' % (f, t[:m.start()].count('\n') + 1, ', '.join(d)))
sys.exit(bad)
