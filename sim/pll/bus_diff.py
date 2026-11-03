#!/usr/bin/env python3
"""Compare the reconfig_to_pll traces of tb_bus (pll_lite vs Altera core under MiSTer's sequence).

Per trace: decode every field of the 64-bit bus, collapse runs of identical values, list DPRIO accesses
(write/read with address, data, byte enable) and every change of the static fields. Then align the two
access lists and print the differences.
"""
import re
import sys

F = [("dprio_rst_n", 1, 1), ("write", 2, 2), ("read", 3, 3), ("addr", 9, 4), ("wdata", 25, 10), ("byteen", 27, 26),
     ("ser_shift_load", 28, 28), ("mdio_dis", 29, 29), ("phase_en", 30, 30), ("up_dn", 31, 31), ("cnt_sel", 36, 32),
     ("scanen", 37, 37), ("atpgmode", 38, 38), ("hi", 63, 39)]
STATIC = ["dprio_rst_n", "ser_shift_load", "mdio_dis", "phase_en", "up_dn", "cnt_sel", "scanen", "atpgmode", "hi"]


def dec(v):
    return {n: (v >> lo) & ((1 << (hi - lo + 1)) - 1) for n, hi, lo in F}


def load(fn):
    rows = []
    for ln in open(fn):
        p = ln.split()
        h = p[1]
        if re.search('[xXzZ]', h):
            v0 = int(re.sub('[xXzZ]', '0', h), 16)
            if v0 & 0xC:
                print(f"{fn}: X/Z on the bus during an access at cycle {p[0]}: {h}")
            h = re.sub('[xXzZ]', '0', h)
        rows.append((int(p[0]), int(h, 16), int(p[2]) if p[2] in '01' else 0, int(p[3]), int(p[4])))
    return rows


def analyse(rows, tag):
    acc, stat, idle_be, lockev = [], [], set(), []
    prev = None
    plock = None
    for cyc, v, lk, pal, dot in rows:
        d = dec(v)
        s = tuple(d[n] for n in STATIC)
        if prev is None or s != prev:
            stat.append((cyc, dict(zip(STATIC, s))))
            prev = s
        if lk != plock:
            lockev.append((cyc, lk))
            plock = lk
        if d["write"] or d["read"]:
            init = not (d["dprio_rst_n"] and d["mdio_dis"] == 0)
            acc.append((cyc, "W" if d["write"] else "R", d["addr"], d["wdata"] if d["write"] else None, d["byteen"],
                        d["read"] and d["write"], init, (pal, dot)))
        else:
            idle_be.add(d["byteen"])
            if d["addr"] or d["wdata"]:
                pass
    return acc, stat, idle_be, lockev


def main():
    a = load(sys.argv[1])
    b = load(sys.argv[2])
    A = analyse(a, "lite")
    B = analyse(b, "altera")
    for (acc, stat, ibe, lk), tag in ((A, "lite"), (B, "altera")):
        print(f"== {tag}: {len(acc)} DPRIO cycles with read/write; byteen when idle: {sorted(ibe)}")
        print("  static-field changes:")
        for cyc, s in stat:
            print(f"    {cyc:6d} " + " ".join(f"{k}={v}" for k, v in s.items()))
        print("  lock changes: " + ", ".join(f"{c}:{l}" for c, l in lk))
    # user-mode accesses (after DPRIO init), grouped into bursts separated by > 50 idle cycles
    def bursts(acc):
        out, cur, last = [], [], -999
        for e in acc:
            if e[6]:
                continue
            if e[0] - last > 50 and cur:
                out.append(cur)
                cur = []
            cur.append(e)
            last = e[0]
        if cur:
            out.append(cur)
        return out
    ba, bb = bursts(A[0]), bursts(B[0])
    ia = [e for e in A[0] if e[6]]
    ib = [e for e in B[0] if e[6]]
    print(f"\n== DPRIO init writes: lite {len(ia)} (cycles {ia[0][0]}..{ia[-1][0]}), altera {len(ib)} (cycles {ib[0][0]}..{ib[-1][0]})")
    same_init = [(x[1:6]) for x in ia] == [(x[1:6]) for x in ib]
    print(f"   init accesses identical (kind, addr, data, byteen): {same_init}; offset {ia[0][0] - ib[0][0]} cycles")
    print(f"\n== user bursts: lite {len(ba)}, altera {len(bb)}")
    for i in range(max(len(ba), len(bb))):
        xa = ba[i] if i < len(ba) else []
        xb = bb[i] if i < len(bb) else []
        sa = [(e[1], e[2], e[3], e[4], e[5]) for e in xa]
        sb = [(e[1], e[2], e[3], e[4], e[5]) for e in xb]
        st = "IDENTICAL" if sa == sb else "DIFFERENT"
        print(f" burst {i}: lite start {xa[0][0] if xa else '-'} mode {xa[0][7] if xa else '-'} ({len(xa)} acc), "
              f"altera start {xb[0][0] if xb else '-'} mode {xb[0][7] if xb else '-'} ({len(xb)} acc): {st}")
        if xa and xb:
            ga = [xa[j][0] - xa[0][0] for j in range(len(xa))]
            gb = [xb[j][0] - xb[0][0] for j in range(len(xb))]
            if ga != gb:
                print(f"    cycle offsets lite {ga}\n    cycle offsets alt  {gb}")
        if st == "DIFFERENT" or i == 0:
            for j in range(max(len(sa), len(sb))):
                ea = sa[j] if j < len(sa) else None
                eb = sb[j] if j < len(sb) else None
                f = lambda e: "-" if e is None else f"{e[0]} {e[1]:02x} {'' if e[2] is None else format(e[2], '04x'):4s} be={e[3]}{' R+W' if e[4] else ''}"
                print(f"    {'  ' if ea == eb else '!!'} lite {f(ea):22s} altera {f(eb)}")


if __name__ == "__main__":
    main()
