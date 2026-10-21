#!/usr/bin/env python3
"""Replay a testbench log through cdd_model and report pass/fail per scenario.

usage: check.py LOG DISCDIR
"""
import os
import sys
import cdd_model as cm


def main(log, ddir):
    toc = open(os.path.join(ddir, "disc.toc"), "rb").read()
    files = [open(os.path.join(ddir, "track01.bin"), "rb").read(), open(os.path.join(ddir, "track02.bin"), "rb").read()]
    cdd = cm.Cdd(toc, files)
    scen = "start"
    res = {}          # scenario -> list of errors
    stats = {}        # scenario -> [ticks, sectors, stalls]
    order = []
    exp_sectors = []
    got_sectors = []
    pending_cmd = None
    ticks = 0

    def err(msg):
        res.setdefault(scen, []).append(msg)

    def st(i):
        stats.setdefault(scen, [0, 0, 0])
        stats[scen][i] += 1

    for line in open(log):
        p = line.split()
        if not p:
            continue
        if p[0] == "M":
            scen = p[1]
            order.append(scen)
            res.setdefault(scen, [])
            continue
        if p[0] == "B":
            scen = "boot_header"
            order.append(scen)
            if int(p[1]) != 130 or int(p[2]) != 0:
                err(f"{p[1]} words replayed, {p[2]} mismatches")
            scen = "start"
            continue
        if p[0] == "X":
            if len(p) < 5 or len(p[4]) != 24:
                continue
            stall = p[2] == "1"
            tx = bytes.fromhex(p[3])
            rx = list(bytes.fromhex(p[4]))
            ticks += 1
            st(0)
            if pending_cmd is not None:
                cdd.command_exec(pending_cmd)
            pending_cmd = list(tx)
            exp = cdd.process(stall=stall)
            if stall:
                st(2)
            if exp != rx:
                err(f"tick {ticks}: status {bytes(rx).hex()} expected {bytes(exp).hex()} (state {cdd.state})")
            s = cdd.update()
            if s is not None:
                exp_sectors.append((scen, s))
            continue
        if p[0] == "S":
            if len(p) < 3 or len(p[2]) != 4704:
                continue
            audio = p[1] == "1"
            data = bytes.fromhex(p[2])
            w = [int.from_bytes(data[i:i + 2], "big") for i in range(0, len(data), 2)]
            got_sectors.append((scen, audio, w))
            st(1)

    # sectors: the model sends one per read tick; the capture lags one tick at the end
    n = min(len(exp_sectors), len(got_sectors))
    for i in range(n):
        es, (eaudio, ew) = exp_sectors[i]
        gs, gaudio, gw = got_sectors[i]
        if gaudio != eaudio:
            res.setdefault(gs, []).append(f"sector {i}: audio flag {gaudio} expected {eaudio}")
        if gw != ew:
            bad = next(j for j in range(1176) if gw[j] != ew[j])
            res.setdefault(gs, []).append(f"sector {i}: word {bad} = {gw[bad]:04x} expected {ew[bad]:04x}")
    if len(got_sectors) < len(exp_sectors) - 2 or len(got_sectors) > len(exp_sectors):
        res.setdefault("sectors", []).append(f"captured {len(got_sectors)} sectors, model sent {len(exp_sectors)}")
        order.append("sectors")

    ok = True
    for s in order:
        e = res.get(s, [])
        t = stats.get(s, [0, 0, 0])
        print(f"{'PASS' if not e else 'FAIL'}  {s:<18} ticks={t[0]:<4} sectors={t[1]:<3} stall_ticks={t[2]}")
        for m in e[:5]:
            print("      ", m)
        ok &= not e
    return ok


if __name__ == "__main__":
    sys.exit(0 if main(sys.argv[1], sys.argv[2]) else 1)
