#!/usr/bin/env python3
"""Build the Saturn CD TOC file and the Pocket instance JSON for a .cue/.bin disc.

The core does not parse cue sheets. This tool applies the same cue interpretation as Main_MiSTer's
support/saturn/saturncdd.cpp (LoadCUE) and writes:

  <name>.toc   2048 bytes, big-endian 32-bit words (layout in docs/cd.md)
  <name>.json  APF instance JSON binding the TOC and the track files to the core's data slots

Usage: mktoc.py game.cue [-o outdir] [--data-path PATH] [--ramcart-db saturn_ramcart.txt] [--merge auto|always|never]
"""
import argparse
import json
import math
import os
import re
import struct
import sys

TOC_SLOT = 2
TRACK_SLOT_BASE = 16
TRACK_SLOTS = 24
MAGIC = 0x53434454  # "SCDT"
REC0 = 72
TOC_WORDS = 512
BOOT_BYTES = 260


class CueError(Exception):
    pass


def bcd_ok(n):
    return 0 <= n <= 99


def parse_cue(cue_path):
    """Port of satcdd_t::LoadCUE. Returns (tracks, toc_end, files)."""
    base = os.path.dirname(os.path.abspath(cue_path))
    text = open(cue_path, "rb").read().decode("latin-1")
    trk = [dict(f=None, offset=0, pregap=0, start=0, end=0, type=0, ss=0, idx={}, index_num=0) for _ in range(101)]
    files = []          # (path, size)
    last = -1
    toc_end = 0
    pregap = 0
    new_file = 0
    file_size = 0
    secsz = 0
    cur_file = None

    for raw in text.replace("\r", "").split("\n"):
        line = raw.lstrip(" ")
        if not line:
            continue
        if line.startswith("FILE"):
            if last == 99:
                break
            rest = line[4:].lstrip(" ")
            if rest.startswith('"'):
                end = rest.index('"', 1)
                name = rest[1:end]
                rest = rest[end + 1:]
            else:
                name = rest.split(" ")[0]
                rest = rest[len(name):]
            path = os.path.join(base, name.replace("\\", "/"))
            if not os.path.isfile(path):
                raise CueError(f"missing track file {path}")
            size = os.path.getsize(path)
            files.append((path, size))
            cur_file = len(files) - 1
            trk[last + 1]["f"] = cur_file
            file_size = size
            pregap = 0
            trk[last + 1]["offset"] = 0
            if not any(k in rest for k in ("BINARY", "MOTOROLA", "WAVE")):
                raise CueError(f"unsupported file type: {line}")
            continue
        m = re.match(r"TRACK\s+(\d+)", line)
        if m:
            if last == 99:
                break
            bb = int(m.group(1))
            last += 1
            if bb != last + 1:
                raise CueError("missing tracks")
            if "MODE1/2048" in line:
                secsz, ty = 2048, 1
            elif "MODE1/2352" in line:
                secsz, ty = 2352, 1
            elif "MODE2/2352" in line:
                secsz, ty = 2352, 2
            else:
                secsz, ty = 2352, 0
            t = trk[last]
            t["ss"] = secsz
            if ty:
                t["type"] = ty
            if last and t["f"] is None:
                trk[last - 1]["end"] = 0
            new_file = 1
            if t["f"] is None:
                t["f"] = cur_file
                new_file = 0
            continue
        m = re.match(r"PREGAP\s+(\d+):(\d+):(\d+)", line)
        if m:
            mm, ss, ff = map(int, m.groups())
            trk[last]["pregap"] = ff + ss * 75 + mm * 60 * 75
            pregap += trk[last]["pregap"]
            continue
        m = re.match(r"INDEX\s+(\d+)\s+(\d+):(\d+):(\d+)", line)
        if m:
            idx, mm, ss, ff = map(int, m.groups())
            idx_pos = ff + ss * 75 + mm * 60 * 75
            t = trk[last]
            if idx == 0:
                if last and not trk[last - 1]["end"]:
                    trk[last - 1]["end"] = pregap
            elif idx == 1:
                t["offset"] += pregap * secsz
                if not new_file:
                    t["start"] = idx_pos + pregap
                    if last and not trk[last - 1]["end"]:
                        trk[last - 1]["end"] = t["start"] - t["pregap"]
                else:
                    t["start"] = toc_end + pregap
                    t["offset"] += toc_end * secsz
                    t["end"] = t["start"] + (file_size + secsz - 1) // secsz
                    toc_end = t["end"]
            if idx == 0:
                t["idx"][0] = 0
            else:
                t["idx"][idx] = idx_pos - t["start"] if not new_file else idx_pos
            t["index_num"] = idx + 1
    last += 1
    if last and not trk[last - 1]["end"]:
        toc_end += pregap
        trk[last - 1]["end"] = toc_end
    if last == 0:
        raise CueError("no tracks")
    trk[last]["start"] = toc_end
    return trk[:last + 1], toc_end, files


def boot_header(trk, files, ramcart_db):
    path = files[trk[0]["f"]][0]
    off = 0 if trk[0]["ss"] == 2048 else 16
    with open(path, "rb") as f:
        f.seek(off)
        hdr = f.read(256)
    hdr = hdr.ljust(256, b"\0")
    cart = 0
    uuid = None
    if hdr[:16] == b"SEGA SEGASATURN ":
        pn = hdr[0x20:0x2A].rstrip(b" \0")
        if pn:
            uuid = pn.decode("latin-1").upper()
    if uuid and ramcart_db and os.path.isfile(ramcart_db):
        for line in open(ramcart_db, encoding="utf-8-sig", errors="replace"):
            line = line.strip()
            if not line or line[0] in "#;":
                continue
            parts = re.split(r"[ \t]+", line.split("#")[0].split(";")[0].strip())
            if len(parts) == 2 and parts[0].upper() == uuid:
                cart = {"NONE": 0, "1M": 2, "4M": 3}.get(parts[1].upper(), 0)
                break
    return hdr + bytes([cart, 0xA1, 0, 0]), uuid, cart


def encode_toc(trk, toc_end, hdr_blob, wwf=False, rr=False, file_map=None, forg_adj=None):
    """file_map: file index -> slot offset; forg_adj: file index -> sector offset subtracted from the origin."""
    n = len(trk) - 1
    if n > 99:
        raise CueError("more than 99 tracks")
    words = [0] * TOC_WORDS
    words[0] = MAGIC
    words[1] = (2 << 24) | (int(f"{n:02d}", 16) << 16) | (int(rr) << 9) | (int(wwf) << 8) | n
    words[2] = toc_end + 150
    assert len(hdr_blob) == BOOT_BYTES
    for i in range(BOOT_BYTES // 4):
        words[4 + i] = struct.unpack(">I", hdr_blob[i * 4:i * 4 + 4])[0]
    for r, t in enumerate(trk):
        if r == n:
            a = 0xFFFFFF
            b = toc_end + 150
            c = 0
        else:
            ss = t["ss"]
            if t["offset"] % ss:
                raise CueError(f"track {r + 1}: file offset is not a whole number of sectors")
            forg = t["offset"] // ss
            f = t["f"]
            if forg_adj:
                forg -= forg_adj[f]
            if forg < 0:
                raise CueError(f"track {r + 1}: negative file origin")
            idx1 = t["idx"].get(1, 0)
            if not 0 <= idx1 <= 255:
                raise CueError(f"track {r + 1}: INDEX 01 offset {idx1} out of range")
            if not (0 <= t["start"] < (1 << 24) and 0 < t["end"] < (1 << 24)):
                raise CueError(f"track {r + 1}: start/end out of range")
            fi = file_map[f] if file_map else f
            if fi >= TRACK_SLOTS:
                raise CueError("more track files than data slots; use --merge")
            data = 1 if t["type"] else 0
            a = (t["end"] + 150) | (data << 24) | ((1 if ss == 2048 else 0) << 25) | (fi << 26)
            b = (t["start"] + 150) | (idx1 << 24)
            c = forg + 150
        words[REC0 + 3 * r] = a
        words[REC0 + 3 * r + 1] = b
        words[REC0 + 3 * r + 2] = c
    return b"".join(struct.pack(">I", w) for w in words)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cue")
    ap.add_argument("-o", "--outdir", default=".")
    ap.add_argument("--data-path", default="", help="folder of the track files relative to Assets/<platform>/")
    ap.add_argument("--ramcart-db", help="MiSTer saturn_ramcart.txt for the RAM cartridge request")
    ap.add_argument("--merge", choices=["auto", "always", "never"], default="auto",
                    help="concatenate the track files into one image (auto: only above %d files)" % TRACK_SLOTS)
    ap.add_argument("--wwf", action="store_true", help="WWF TOC hack (reports INDEX 01 start)")
    ap.add_argument("--road-rash", action="store_true", help="Road Rash hack (no seek delay on read)")
    a = ap.parse_args()

    try:
        trk, toc_end, files = parse_cue(a.cue)
        blob, uuid, cart = boot_header(trk, files, a.ramcart_db)
    except CueError as e:
        sys.exit(f"mktoc: {e}")

    name = os.path.splitext(os.path.basename(a.cue))[0]
    os.makedirs(a.outdir, exist_ok=True)
    merge = a.merge == "always" or (a.merge == "auto" and len(files) > TRACK_SLOTS)
    slots = []
    if merge:
        sizes = {t["ss"] for t in trk[:-1]}
        if len(sizes) != 1:
            sys.exit("mktoc: cannot merge files with different sector sizes")
        ss = sizes.pop()
        img = os.path.join(a.outdir, name + ".img")
        base_sec, adj = 0, {}
        with open(img, "wb") as out:
            for i, (p, sz) in enumerate(files):
                if sz % ss:
                    sys.exit(f"mktoc: {p} is not a whole number of sectors")
                adj[i] = base_sec
                base_sec += sz // ss
                with open(p, "rb") as f:
                    while True:
                        chunk = f.read(1 << 20)
                        if not chunk:
                            break
                        out.write(chunk)
        toc = encode_toc(trk, toc_end, blob, a.wwf, a.road_rash, file_map={i: 0 for i in adj}, forg_adj=adj)
        slots.append((TRACK_SLOT_BASE, os.path.basename(img)))
    else:
        toc = encode_toc(trk, toc_end, blob, a.wwf, a.road_rash)
        for i, (p, _) in enumerate(files):
            rel = os.path.relpath(p, os.path.dirname(os.path.abspath(a.cue)))
            slots.append((TRACK_SLOT_BASE + i, rel.replace(os.sep, "/")))

    with open(os.path.join(a.outdir, name + ".toc"), "wb") as f:
        f.write(toc)
    inst = {"instance": {"magic": "APF_VER_1", "data_path": a.data_path,
                         "data_slots": [{"id": TOC_SLOT, "filename": name + ".toc"}] +
                                       [{"id": i, "filename": fn} for i, fn in slots]}}
    with open(os.path.join(a.outdir, name + ".json"), "w") as f:
        json.dump(inst, f, indent=2)
        f.write("\n")
    print(f"{name}: {len(trk) - 1} tracks, lead-out LBA {toc_end}, {len(files)} file(s)"
          f"{', merged' if merge else ''}, product {uuid or '?'}, ram cart {['none', '?', '1M', '4M'][cart]}")


if __name__ == "__main__":
    main()
