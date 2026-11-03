#!/usr/bin/env python3
"""Build the Saturn CD TOC file and the Pocket instance JSON for a .cue/.bin disc.

The core does not parse cue sheets. This tool applies the same cue interpretation as Main_MiSTer's
support/saturn/saturncdd.cpp (LoadCUE) and writes:

  <name>.toc   2048 bytes, big-endian 32-bit words (layout in docs/cd.md)
  <name>.json  APF instance JSON binding the TOC and the track files to the core's data slots

Usage: mktoc.py game.cue [-o outdir] [--data-path PATH] [--ramcart-db saturn_ramcart.txt] [--merge auto|always|never]
       mktoc.py --card SD_ROOT [--dry-run]   every disc on a Pocket card (what the install scripts run)
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


def data_path_for(folder):
    """data_path of a track folder given relative to Assets/<platform>/common/ ("" for common/ itself)."""
    folder = folder.replace(os.sep, "/").strip("/")
    return "" if folder in ("", ".") else folder + "/"


def build(cue, outdir, data_path, ramcart_db=None, merge_mode="auto", wwf=False, rr=False, cart=0):
    """Interpret one cue. cart: RAM cart type used when the database has none for the disc.
    Returns (toc bytes, instance JSON dict, (merged image path, files) or None, summary)."""
    trk, toc_end, files = parse_cue(cue)
    blob, uuid, c = boot_header(trk, files, ramcart_db)
    if not c and cart in (2, 3):
        blob, c = blob[:256] + bytes([cart]) + blob[257:], cart
    name = os.path.splitext(os.path.basename(cue))[0]
    merge = merge_mode == "always" or (merge_mode == "auto" and len(files) > TRACK_SLOTS)
    slots = []
    if merge:
        sizes = {t["ss"] for t in trk[:-1]}
        if len(sizes) != 1:
            raise CueError("cannot merge files with different sector sizes")
        ss = sizes.pop()
        img = os.path.join(outdir, name + ".img")
        if any(os.path.abspath(p) == os.path.abspath(img) for p, _ in files):
            raise CueError(f"{img} is one of the track files; merging would overwrite it")
        base_sec, adj = 0, {}
        for i, (p, sz) in enumerate(files):
            if sz % ss:
                raise CueError(f"{p} is not a whole number of sectors")
            adj[i] = base_sec
            base_sec += sz // ss
        toc = encode_toc(trk, toc_end, blob, wwf, rr, file_map={i: 0 for i in adj}, forg_adj=adj)
        slots.append((TRACK_SLOT_BASE, os.path.basename(img)))
        merged = (img, files)
    else:
        toc = encode_toc(trk, toc_end, blob, wwf, rr)
        for i, (p, _) in enumerate(files):
            rel = os.path.relpath(p, os.path.dirname(os.path.abspath(cue))).replace(os.sep, "/")
            if rel.startswith("../"):
                raise CueError(f"{rel}: track files must be in the cue's folder or below it")
            slots.append((TRACK_SLOT_BASE + i, rel))
        merged = None
    for fn in [data_path] + [fn for _, fn in slots]:
        if len(fn) > 255:
            raise CueError(f"{fn}: longer than the 255 characters an instance JSON allows")
    inst = {"instance": {"magic": "APF_VER_1", "data_path": data_path,
                         "data_slots": [{"id": TOC_SLOT, "filename": name + ".toc"}] +
                                       [{"id": i, "filename": fn} for i, fn in slots]}}
    summary = (f"{len(trk) - 1} tracks, lead-out LBA {toc_end}, {len(files)} file(s)"
               f"{', merged' if merge else ''}, product {uuid or '?'}, ram cart {['none', '?', '1M', '4M'][c]}")
    return toc, inst, merged, summary


def write_merged(img, files, dry=False):
    """Concatenate the track files into img unless an image of the right size, newer than them, is there."""
    total = sum(sz for _, sz in files)
    if (os.path.isfile(img) and os.path.getsize(img) == total
            and all(os.path.getmtime(img) >= os.path.getmtime(p) for p, _ in files)):
        return "unchanged"
    state = "updated" if os.path.exists(img) else "created"
    if dry:
        return "would be " + state
    with open(img, "wb") as out:
        for p, _ in files:
            with open(p, "rb") as f:
                while True:
                    chunk = f.read(1 << 20)
                    if not chunk:
                        break
                    out.write(chunk)
    return state


def instance_json(inst):
    return (json.dumps(inst, indent=2) + "\n").encode("utf-8")


# ---------------------------------------------------------------------------
# --card: every disc on a Pocket SD card (run by install.sh / install.ps1)
# ---------------------------------------------------------------------------

CORE = "defgenx.Saturn"


def read_instance(path):
    """The "instance" object of path if it is an instance JSON in the shape mktoc writes, else None."""
    try:
        if os.path.getsize(path) > 65536:
            return None
        with open(path, "rb") as f:
            obj = json.loads(f.read().decode("utf-8"))
    except (OSError, ValueError):
        return None
    if not isinstance(obj, dict) or list(obj) != ["instance"]:
        return None
    inst = obj["instance"]
    if (not isinstance(inst, dict) or inst.get("magic") != "APF_VER_1"
            or not set(inst) <= {"magic", "data_path", "data_slots"}
            or not isinstance(inst.get("data_path", ""), str)):
        return None
    slots = inst.get("data_slots")
    if not isinstance(slots, list) or not 2 <= len(slots) <= 1 + TRACK_SLOTS:
        return None
    for k, s in enumerate(slots):
        want = TOC_SLOT if k == 0 else TRACK_SLOT_BASE + k - 1
        if (not isinstance(s, dict) or set(s) != {"id", "filename"} or type(s["id"]) is not int
                or s["id"] != want or not isinstance(s["filename"], str) or not s["filename"]):
            return None
    if not slots[0]["filename"].lower().endswith(".toc"):
        return None
    return inst


def toc_options(path):
    """(wwf, road rash, ram cart) recorded in an existing .toc, so a regeneration keeps them."""
    try:
        with open(path, "rb") as f:
            b = f.read(TOC_WORDS * 4 + 1)
    except OSError:
        return False, False, 0
    if len(b) != TOC_WORDS * 4 or struct.unpack(">I", b[:4])[0] != MAGIC:
        return False, False, 0
    w1 = struct.unpack(">I", b[4:8])[0]
    cart = b[16 + 256]
    return bool(w1 >> 8 & 1), bool(w1 >> 9 & 1), cart if cart in (2, 3) else 0


def put(path, data, dry):
    """Write data to path unless the file already holds exactly that."""
    try:
        with open(path, "rb") as f:
            old = f.read()
    except FileNotFoundError:
        old = None
    if old == data:
        return "unchanged"
    state = "created" if old is None else "updated"
    if dry:
        return "would be " + state
    with open(path, "wb") as f:
        f.write(data)
    return state


def free_old_name(path):
    cand, k = path + ".old", 2
    while os.path.exists(cand):
        cand, k = f"{path}.old{k}", k + 1
    return cand


class Game:
    def __init__(self, folder, stem, cue=None, inst=None, src=None):
        self.folder, self.stem, self.cue, self.inst, self.src = folder, stem, cue, inst, src
        self.olds = []      # v0.2.4 instance JSONs in common/ that this game replaces
        parts = [] if folder == "." else folder.replace(os.sep, "/").split("/")
        if parts and parts[-1].lower() == stem.lower():
            parts.pop()     # common/<Game>/<Game>.cue: the folder adds nothing to the name
        self.prefixed = " - ".join(parts + [stem])
        self.json = None
        toc = stem + ".toc" if cue else inst["data_slots"][0]["filename"]
        self.key = disc_key(data_path_for(folder), toc)


def disc_key(data_path, toc):
    """What identifies a disc on the card: its folder under common/ and its .toc (FAT ignores case)."""
    return data_path_for(data_path).lower(), toc.lower()


def name_games(games):
    """Instance JSON names: the disc's own name, prefixed by its subfolders when that name is used twice."""
    count = {}
    for g in games:
        count[g.stem.lower()] = count.get(g.stem.lower(), 0) + 1
    taken = set()
    for g in games:
        base = g.stem if count[g.stem.lower()] == 1 else g.prefixed
        n, k = base, 2
        while n.lower() in taken:   # FAT and exFAT ignore case
            n, k = f"{base} ({k})", k + 1
        taken.add(n.lower())
        g.json = n + ".json"


def card(root, dry=False, ramcart_db=None):
    common = os.path.join(root, "Assets", "saturn", "common")
    core = os.path.join(root, "Assets", "saturn", CORE)
    if not os.path.isdir(common):
        print("No Assets/saturn/common folder on the card: no discs to prepare.")
        return 0
    rel = lambda p: os.path.relpath(p, common).replace(os.sep, "/")

    games, olds = [], []
    for d, dirs, fs in os.walk(common):
        dirs[:] = sorted(x for x in dirs if not x.startswith("."))
        for f in sorted(fs):
            if f.startswith("."):       # hidden files and macOS ._ AppleDouble files
                continue
            p = os.path.join(d, f)
            stem, ext = os.path.splitext(f)
            if ext.lower() == ".cue":
                games.append(Game(os.path.relpath(d, common), stem, cue=p))
            elif ext.lower() == ".json":
                inst = read_instance(p)
                if inst:
                    olds.append((p, inst))
    by_key = {g.key: g for g in games}
    for p, inst in olds:
        folder = os.path.relpath(os.path.dirname(p), common)
        g = by_key.get(disc_key(data_path_for(folder), inst["data_slots"][0]["filename"]))
        if g is None:           # no .cue left: carry the JSON over as it is, with the data_path of its folder
            g = Game(folder, os.path.splitext(os.path.basename(p))[0], inst=inst, src=p)
            games.append(g)
            by_key[g.key] = g
        g.olds.append(p)
    if not games:
        print("No discs (.cue) in Assets/saturn/common.")
        return 0
    name_games(games)

    print(f"Discs in Assets/saturn/common: {len(games)}{' (dry run, nothing is written)' if dry else ''}")
    if not dry:
        try:
            os.makedirs(core, exist_ok=True)
        except OSError as e:
            print(f"Cannot create Assets/saturn/{CORE}: {e}")
        if not (os.access(common, os.W_OK) and os.access(core, os.W_OK)):
            print("The card is read-only (check the lock switch on the SD card): no disc prepared.")
            return 1
    failed = renamed = written = 0
    done = []
    for g in games:
        src = g.cue or g.src
        dst = os.path.join(core, g.json)
        folder = os.path.join(common, g.folder)
        try:
            if os.path.exists(dst) and read_instance(dst) is None:
                raise CueError(f"{CORE}/{g.json} exists and was not written by mktoc; left alone")
            if g.cue:
                wwf, rr, cart = toc_options(os.path.join(folder, g.stem + ".toc"))
                toc, inst, merged, summary = build(g.cue, folder, data_path_for(g.folder), ramcart_db,
                                                   wwf=wwf, rr=rr, cart=cart)
                states = []
                if merged:
                    states.append(f"{g.stem}.img {write_merged(*merged, dry=dry)}")
                states.append(f"{g.stem}.toc {put(os.path.join(folder, g.stem + '.toc'), toc, dry)}")
            else:
                slots = g.inst["data_slots"]
                missing = [s["filename"] for s in slots if not os.path.isfile(os.path.join(folder, s["filename"]))]
                if missing:
                    raise CueError(f"no .cue next to it and {', '.join(missing)} missing; left alone")
                inst = {"instance": {"magic": "APF_VER_1", "data_path": data_path_for(g.folder), "data_slots": slots}}
                summary, states = "moved from common/ (no .cue)", []
            js = put(dst, instance_json(inst), dry)
            written += js in ("created", "updated")
            states.insert(0, f"{CORE}/{g.json} {js}")
            print(f"  {rel(src)}: {summary}\n      {', '.join(states)}")
            done.append(g)
        except (CueError, OSError) as e:
            failed += 1
            print(f"  {rel(src)}: NOT prepared: {str(e).replace(common + os.sep, '').replace(root + os.sep, '')}")
            continue
        for p in g.olds:        # v0.2.4 put the JSON next to the tracks; the Pocket now ignores it there
            new = free_old_name(p)
            if dry:
                print(f"      would rename {rel(p)} to {os.path.basename(new)}")
            else:
                try:
                    os.rename(p, new)
                    renamed += 1
                    print(f"      renamed {rel(p)} to {os.path.basename(new)} (old location)")
                except OSError as e:
                    print(f"      could not rename {rel(p)}: {e}")

    # a JSON an earlier run named differently (a same-name disc appeared or went away) is a duplicate
    if os.path.isdir(core):
        current = {g.json.lower() for g in games}
        for f in sorted(os.listdir(core)):
            p = os.path.join(core, f)
            if not f.lower().endswith(".json") or f.lower() in current or f.startswith("."):
                continue
            inst = read_instance(p)
            key = inst and disc_key(inst.get("data_path", ""), inst["data_slots"][0]["filename"])
            g = inst and next((g for g in done if g.key == key), None)
            if not g or os.path.splitext(f)[0].lower() not in (g.stem.lower(), g.prefixed.lower()):
                continue
            new = free_old_name(p)
            if dry:
                print(f"  would rename {CORE}/{f} to {os.path.basename(new)} (now {g.json})")
            else:
                os.rename(p, new)
                renamed += 1
                print(f"  renamed {CORE}/{f} to {os.path.basename(new)} (now {g.json})")

    print(f"{len(done)} disc(s) ready, {written} JSON file(s) {'to write' if dry else 'written'}, "
          f"{renamed} old file(s) renamed, {failed} failed")
    return 1 if failed else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cue", nargs="?")
    ap.add_argument("-o", "--outdir", default=".")
    ap.add_argument("--data-path", default="",
                    help="folder of the track files relative to Assets/<platform>/common/ (e.g. 'Game (USA)/')")
    ap.add_argument("--ramcart-db", help="MiSTer saturn_ramcart.txt for the RAM cartridge request")
    ap.add_argument("--merge", choices=["auto", "always", "never"], default="auto",
                    help="concatenate the track files into one image (auto: only above %d files)" % TRACK_SLOTS)
    ap.add_argument("--wwf", action="store_true", help="WWF TOC hack (reports INDEX 01 start)")
    ap.add_argument("--road-rash", action="store_true", help="Road Rash hack (no seek delay on read)")
    ap.add_argument("--card", metavar="SD_ROOT",
                    help="prepare every .cue under SD_ROOT/Assets/saturn/common: the .toc next to the tracks, "
                         f"the .json in Assets/saturn/{CORE}/ (v0.2.4 JSONs in common/ become .json.old)")
    ap.add_argument("--dry-run", action="store_true", help="with --card: show what would change, write nothing")
    a = ap.parse_args()

    if a.card:
        if a.cue:
            ap.error("give either a .cue or --card")
        if hasattr(sys.stdout, "reconfigure"):     # a Windows console cannot print every disc name
            sys.stdout.reconfigure(errors="replace")
        sys.exit(card(a.card, a.dry_run, a.ramcart_db))
    if not a.cue:
        ap.error("a .cue file (or --card SD_ROOT) is needed")

    try:
        toc, inst, merged, summary = build(a.cue, a.outdir, a.data_path, a.ramcart_db, a.merge, a.wwf, a.road_rash)
        os.makedirs(a.outdir, exist_ok=True)
        if merged:
            write_merged(*merged)
    except CueError as e:
        sys.exit(f"mktoc: {e}")
    name = os.path.splitext(os.path.basename(a.cue))[0]
    with open(os.path.join(a.outdir, name + ".toc"), "wb") as f:
        f.write(toc)
    with open(os.path.join(a.outdir, name + ".json"), "wb") as f:
        f.write(instance_json(inst))
    print(f"{name}: {summary}")


if __name__ == "__main__":
    main()
