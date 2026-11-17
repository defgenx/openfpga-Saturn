#!/usr/bin/env python3
"""Fail if a port declaration carries an initial value (`output reg x = 1'b0,` in a module header).
Quartus ignores a value written there: the register powers up as "don't care", so a flag that is only ever set
is removed as stuck at 1 and a register that differs from another only at power-up is merged with it, while the
simulators honour the value. The power-up value belongs in the module body (an initial block).
Only port lists with directions in the module header (ANSI style, as in every module of this tree) are read.
  python3 tools/check_port_init.py [file or directory ...]     default: src/fpga"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def blank(m):
    return re.sub(r"[^\n]", " ", m.group(0))


def close(t, i):
    """index after the bracket that closes t[i]"""
    depth = 0
    for j in range(i, len(t)):
        if t[j] in "([{":
            depth += 1
        elif t[j] in ")]}":
            depth -= 1
            if depth == 0:
                return j + 1
    return len(t)


def port_lists(t):
    """(module name, start, end) of every ANSI port list; the parameter list before it is skipped"""
    for m in re.finditer(r"\bmodule\s+(\w+)", t):
        i = m.end()
        while True:
            i = re.compile(r"\s*").match(t, i).end()
            if t.startswith("import", i):
                i = t.find(";", i) + 1 or len(t)
            elif t.startswith("#", i):
                i = close(t, re.compile(r"\s*").match(t, i + 1).end())
            else:
                break
        if t.startswith("(", i):
            end = close(t, i) - 1
            # a header written once per branch of an `ifdef: the port list belongs to the last `module` line
            if not re.search(r"\bmodule\b", t[i:end]):
                yield m.group(1), i + 1, end


def initial_values(t, start, end):
    """(position, port name) of every port in t[start:end] that has `= value`"""
    depth, item = 0, start
    for i in range(start, end + 1):
        c = t[i] if i < end else ","
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == "," and depth == 0:
            item = i + 1
        elif c == "=" and depth == 0 and t[i - 1] not in "=<>!" and t[i + 1] != "=":
            name = re.search(r"(\w+)\s*(\[[^\]]*\]\s*)*$", t[item:i])
            if name:
                yield item + name.start(1), name.group(1)


def check(path):
    t = path.read_text(errors="ignore")
    # comments and strings go in one pass from the left: a /* inside a // comment, or a // inside a string, starts nothing
    t = re.sub(r'//[^\n]*|/\*.*?\*/|"(?:\\.|[^"\\\n])*"', blank, t, flags=re.S)
    found = 0
    for module, start, end in port_lists(t):
        for pos, name in initial_values(t, start, end):
            found += 1
            print(f"{path}:{t.count(chr(10), 0, pos) + 1}: port {name} of {module} has an initial value")
    return found


files = []
for arg in sys.argv[1:] or [ROOT / "src" / "fpga"]:
    p = Path(arg)
    if not p.exists():
        sys.exit(f"check_port_init.py: {p} does not exist")
    files += sorted(f for f in p.rglob("*") if f.suffix in (".v", ".sv")) if p.is_dir() else [p]
if not files:
    sys.exit("check_port_init.py: no .v or .sv file to check")
n = sum(check(f) for f in files)
print(f"{len(files)} file(s), {n} initial value(s) on port declarations" + (": Quartus ignores them, move them into the module body" if n else ""))
sys.exit(1 if n else 0)
