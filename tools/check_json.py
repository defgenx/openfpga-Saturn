#!/usr/bin/env python3
"""Check the core definition JSON against the APF limits (Analogue developer docs,
core-definition-files/*). The Pocket refuses a core that breaks any of them with
"Load error in '<file>' / General error / Error in core setup"."""
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent / "dist"
# --no-bitstream: check the definition files before a core has been compiled
ALLOW_NO_BITSTREAM = "--no-bitstream" in sys.argv
errors = []


def check(cond, where, msg):
    if not cond:
        errors.append(f"{where}: {msg}")


def maxlen(value, n, where):
    check(isinstance(value, str) and len(value) <= n, where, f"{value!r} is {len(value)} chars, max {n}")


def load(path):
    try:
        return json.loads(path.read_text())
    except Exception as e:
        errors.append(f"{path}: invalid JSON ({e})")
        return None


for core_dir in sorted((ROOT / "Cores").iterdir()):
    if not core_dir.is_dir():
        continue
    n = core_dir.name

    c = load(core_dir / "core.json")
    if c:
        c = c["core"]
        check(c.get("magic") == "APF_VER_1", f"{n}/core.json", "magic")
        m = c["metadata"]
        check(len(m["platform_ids"]) <= 4, f"{n}/core.json", "max 4 platform_ids")
        for pid in m["platform_ids"]:
            check(re.fullmatch(r"[a-z0-9][a-z0-9_]{0,14}", pid), f"{n}/core.json", f"platform id {pid!r}")
            check((ROOT / "Platforms" / f"{pid}.json").is_file(), f"{n}/core.json", f"Platforms/{pid}.json missing")
        for field, lim in [("shortname", 31), ("description", 63), ("author", 31), ("url", 63), ("version", 31), ("date_release", 10)]:
            maxlen(m[field], lim, f"{n}/core.json metadata.{field}")
        check(re.fullmatch(r"\d{4}-\d{2}-\d{2}", m["date_release"]), f"{n}/core.json", "date_release must be YYYY-MM-DD")
        # the Pocket looks the core up as Cores/<author>.<shortname>
        check(n == f"{m['author']}.{m['shortname']}", f"{n}/core.json",
              f"folder must be named {m['author']}.{m['shortname']} (author.shortname)")
        f = c["framework"]
        check(f["target_product"] == "Analogue Pocket", f"{n}/core.json", "target_product")
        check(re.fullmatch(r"\d+\.\d+", f["version_required"]), f"{n}/core.json", "version_required must be major.minor")
        check(f["dock"]["supported"] is True, f"{n}/core.json", "dock.supported must be true")
        check(len(c["cores"]) <= 8, f"{n}/core.json", "max 8 cores")
        for b in c["cores"]:
            maxlen(b["filename"], 15, f"{n}/core.json cores.filename")
            if "name" in b:
                maxlen(b["name"], 15, f"{n}/core.json cores.name")
            if not ALLOW_NO_BITSTREAM:
                check((core_dir / b["filename"]).is_file(), f"{n}/core.json", f"bitstream {b['filename']} missing")

    d = load(core_dir / "data.json")
    if d:
        slots = d["data"]["data_slots"]
        check(len(slots) <= 32, f"{n}/data.json", "max 32 slots")
        for s in slots:
            maxlen(s["name"], 15, f"{n}/data.json name")
            if "filename" in s:
                maxlen(s["filename"], 31, f"{n}/data.json filename")
            exts = s.get("extensions", [])
            check(len(exts) <= 4, f"{n}/data.json {s['name']}", "max 4 extensions")
            for e in exts:
                maxlen(e, 7, f"{n}/data.json extension")

    i = load(core_dir / "interact.json")
    if i:
        v = i["interact"]["variables"]
        check(len(v) <= 16, f"{n}/interact.json", "max 16 variables")
        for x in v:
            maxlen(x["name"], 23, f"{n}/interact.json name")
            check(x["type"] in ("radio", "check", "slider_u32", "list", "number_u32", "action"), f"{n}/interact.json", f"type {x['type']}")
            opts = x.get("options", [])
            check(len(opts) <= 16, f"{n}/interact.json {x['name']}", "max 16 options")
            for o in opts:
                maxlen(o["name"], 23, f"{n}/interact.json option")

    p = load(core_dir / "input.json")
    if p:
        keys = {"pad_btn_a", "pad_btn_b", "pad_btn_x", "pad_btn_y", "pad_trig_l", "pad_trig_r", "pad_btn_start", "pad_btn_select"}
        for ctl in p["input"]["controllers"]:
            check(ctl["type"] == "default", f"{n}/input.json", "type must be default")
            check(len(ctl["mappings"]) <= 8, f"{n}/input.json", "max 8 mappings")
            for mp in ctl["mappings"]:
                maxlen(mp["name"], 19, f"{n}/input.json name")
                check(mp["key"] in keys, f"{n}/input.json", f"key {mp['key']}")

    vj = load(core_dir / "video.json")
    if vj:
        modes = vj["video"]["scaler_modes"]
        check(len(modes) <= 8, f"{n}/video.json", "max 8 scaler modes")
        for md in modes:
            check(md.get("rotation", 0) in (0, 90, 180, 270), f"{n}/video.json", "rotation")

    for extra in ("audio.json", "variants.json"):
        load(core_dir / extra)

for plat in sorted((ROOT / "Platforms").glob("*.json")):
    pj = load(plat)
    if pj:
        for field in ("category", "name", "manufacturer"):
            maxlen(pj["platform"][field], 31, f"Platforms/{plat.name} {field}")

for e in errors:
    print("ERROR", e)
print("definition files OK" if not errors else f"{len(errors)} problem(s)")
sys.exit(1 if errors else 0)
