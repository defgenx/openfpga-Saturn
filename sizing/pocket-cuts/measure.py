#!/usr/bin/env python3
"""Isolated release-tree Quartus measurements; run long stages under nohup.

No RTL edits. Logs, databases, and machine-readable run records stay in --scratch.
Only the map summary and extracted entity summary are retained per map run.
Fit summaries are retained separately. Failed runs are never automatically retried.
"""
import argparse
import concurrent.futures
import hashlib
import json
import os
from pathlib import Path
import re
import shlex
import shutil
import subprocess
import time

SOURCE = Path(__file__).resolve().parents[2]
OUTPUT = Path(__file__).resolve().parent
REVISION = "571587dd238efa5a349d18910c654bbb888b5ec9"
IMAGE = "raetro/quartus:21.1"
FEATURES = "EXTCC SHADOW BACKLINE SPECIAL LNCOL ZOOM RPARAMB MOSAIC SPRWIN LINEWIN".split()
SMALL = "EXTCC SHADOW BACKLINE LNCOL MOSAIC SPRWIN LINEWIN".split()
RUNS = {"baseline": [], **{x.lower(): [x] for x in FEATURES},
        "wdt": ["WDT"], "seven-small": SMALL, "all-ten": FEATURES}


def check_disk():
    d = shutil.disk_usage("/")
    # Match df's percentage of used plus available space (reserved blocks excluded).
    if d.used / (d.used + d.free) > .95:
        raise RuntimeError("STOP: root disk exceeds 95%")


def capture(args, **kw):
    return subprocess.check_output(args, text=True, **kw).strip()


def macro(feature):
    return "POCKET_CUT_SH2_WDT" if feature == "WDT" else "POCKET_CUT_VDP2_" + feature


def prepare(scratch, name, features):
    check_disk()
    tree = scratch / name / "tree"
    tree.mkdir(parents=True, exist_ok=False)
    subprocess.run(["rsync", "-a", "--exclude=.git", "--exclude=db",
                    "--exclude=incremental_db", "--exclude=output_files",
                    "--exclude=/runs", "--exclude=/sizing/pocket-cuts",
                    str(SOURCE) + "/", str(tree) + "/"], check=True)
    qsf = tree / "src/fpga/ap_core.qsf"
    original = qsf.read_text()
    changed = original
    for feature in features:
        line = f'set_global_assignment -name VERILOG_MACRO "{macro(feature)}=1"\n'
        if changed.count(line) != 1:
            raise RuntimeError(f"expected exactly one macro assignment: {feature}")
        changed = changed.replace(line, "")
    assert "set_global_assignment -name SEED 5\n" in changed
    assert "set_global_assignment -name NUM_PARALLEL_PROCESSORS 1\n" in changed
    qsf.write_text(changed)
    # Verify every tracked source byte; only the precisely derived QSF may differ.
    tracked = subprocess.check_output(["git", "ls-files", "-z"], cwd=SOURCE).split(b"\0")
    for raw in filter(None, tracked):
        rel = os.fsdecode(raw)
        if rel.startswith("sizing/pocket-cuts/"):
            continue
        src, dst = SOURCE / rel, tree / rel
        if src.is_dir():
            # Gitlinks are reference submodules, not files in the release QSF.
            assert dst.is_dir(), rel
            continue
        if not dst.exists():
            # Build databases/outputs are explicitly excluded.
            if any(p in ("db", "incremental_db", "output_files") for p in Path(rel).parts):
                continue
            raise RuntimeError(f"missing tracked source: {rel}")
        expected = changed.encode() if rel == "src/fpga/ap_core.qsf" else src.read_bytes()
        assert dst.read_bytes() == expected, rel
    return tree


def collect_map(tree, destination):
    out = tree / "src/fpga/output_files"
    rpt = (out / "ap_core.map.rpt").read_text(encoding="latin-1")
    match = re.search(r"Estimate of Logic utilization \(ALMs needed\)\s*;\s*([\d,]+)", rpt)
    if not match:
        raise RuntimeError("map ALM estimate missing")
    lines, entities = [], {}
    inside = False
    for line in rpt.splitlines():
        cells = [x.strip() for x in line.split(";")]
        if len(cells) > 3 and cells[1] == "Compilation Hierarchy Node":
            inside = True
            lines.append(line)
            continue
        if inside and len(cells) > 9 and cells[1].startswith("|"):
            if cells[9] in ("apf_top", "VDP2P") or re.search(r"\|SH7604P:(MSH|SSH)$", cells[8]):
                lines.append(line)
            entities[cells[8]] = {"alut": int(cells[2].split()[0].replace(",", "")),
                                  "regs": int(cells[3].split()[0].replace(",", "")),
                                  "entity": cells[9]}
        elif inside and entities and not line.startswith("+"):
            break
    if not entities:
        raise RuntimeError("entity table missing")
    selected = {}
    for label, pattern in [("VDP2P", r"\|VDP2P:[^|]+$"),
                           ("MSH", r"\|SH7604P:MSH$"), ("SSH", r"\|SH7604P:SSH$")]:
        found = [v for k, v in entities.items() if re.search(pattern, k)]
        if len(found) != 1:
            raise RuntimeError(f"expected one {label} row, got {len(found)}")
        selected[label] = found[0]
    if destination is not None:
        destination.mkdir(parents=True, exist_ok=False)
        shutil.copy2(out / "ap_core.map.summary", destination)
        (destination / "entities.summary").write_text(
            "Estimate of Logic utilization (ALMs needed): " + match[1] + "\n" +
            "Extracted Analysis & Synthesis Resource Utilization by Entity\n"
            "Values before parentheses include descendants; parentheses are entity-only.\n" +
            "\n".join(lines) + "\n")
    return {"alm": int(match[1].replace(",", "")), "selected": selected, "entities": entities}


def execute(scratch, name, features, fit=False):
    tree = prepare(scratch, name, features)
    container = "saturn-a0-" + scratch.name + "-" + name
    command = ["docker", "run", "--rm", "--platform", "linux/amd64", "--name", container,
               "-v", str(tree) + ":/build", "-w", "/build/src/fpga", IMAGE,
               "quartus_map", "ap_core"]
    if fit:
        # build.sh uses a fixed Docker name. A PATH wrapper changes only that name,
        # leaving the release build.sh and qflow.sh byte-identical.
        wrapper = scratch / name / "bin"
        wrapper.mkdir()
        docker = shutil.which("docker")
        (wrapper / "docker").write_text("#!/usr/bin/env python3\nimport os, sys\n"
            "args = sys.argv[1:]\n"
            f"args = [{container!r} if x == 'saturn-build' else x for x in args]\n"
            f"os.execv({docker!r}, [{docker!r}] + args)\n")
        (wrapper / "docker").chmod(0o755)
        command = ["./build.sh", "compile"]
        env = dict(os.environ, PATH=str(wrapper) + ":" + os.environ["PATH"], QUARTUS_IMAGE=IMAGE)
    else:
        env = os.environ.copy()
    record = {"name": name, "features": features, "tree": str(tree), "container": container,
              "command": shlex.join(command), "started_utc": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())}
    print("START " + name, flush=True)
    started = time.monotonic()
    with (scratch / name / "run.log").open("w") as log:
        result = subprocess.run(command, cwd=tree if fit else SOURCE, env=env, stdout=log, stderr=subprocess.STDOUT)
    record.update(seconds=round(time.monotonic() - started, 2), returncode=result.returncode)
    (scratch / name / "run.json").write_text(json.dumps(record, indent=2) + "\n")
    if fit:
        dest = OUTPUT / name
        dest.mkdir(exist_ok=False)
        for filename in ["ap_core.fit.summary", "ap_core.sta.summary"]:
            source = tree / "src/fpga/output_files" / filename
            if source.exists():
                shutil.copy2(source, dest)
    elif result.returncode == 0:
        record.update(collect_map(tree, OUTPUT / name))
    (scratch / name / "run.json").write_text(json.dumps(record, indent=2) + "\n")
    print(f"DONE {name} rc={result.returncode} seconds={record['seconds']}", flush=True)
    if result.returncode:
        raise RuntimeError(f"{name} exited {result.returncode}; inspect {scratch / name / 'run.log'}")
    return record


def report(scratch):
    records = [json.loads((scratch / name / "run.json").read_text()) for name in RUNS]
    assert all(r["returncode"] == 0 and "alm" in r for r in records)
    base = records[0]
    def value(r, key):
        if key == "alm":
            return r[key]
        block, metric = key.split(".")
        if block == "SH2":
            return sum(r["selected"][b][metric] for b in ("MSH", "SSH"))
        return r["selected"][block][metric]
    def cell(r, key):
        v, b = value(r, key), value(base, key)
        return f"{v:,} ({v-b:+,})"
    lines = ["# Release feature restoration measurements", "",
             f"Source: `{REVISION}` (v0.2.15), freshly fetched `origin/main` matched at start. "
             "Host: taro. Device: 5CEBA4F23C8. Seed: 5. "
             "Map: NUM_PARALLEL_PROCESSORS=1. No RTL edits or public writes.", "",
             f"Image: `{IMAGE}` / `{(scratch / 'image.txt').read_text().strip()}`.", "",
             "Seven small = EXTCC SHADOW BACKLINE LNCOL MOSAIC SPRWIN LINEWIN. "
             "All ten = all VDP2 cuts, with WDT still cut. Every single restore removes exactly "
             "one QSF macro line. Counts include entity descendants; parentheses below are deltas "
             "against baseline, not the entity-only parentheses in Quartus's raw table.", "",
             "| Restored feature | Whole-design map ALMs (delta) | VDP2P ALUT / regs (delta) | MSH+SSH ALUT / regs (delta) |",
             "|---|---:|---:|---:|"]
    for r in records:
        lines.append(f"| {r['name']} | {cell(r, 'alm')} | {cell(r, 'VDP2P.alut')} / "
                     f"{cell(r, 'VDP2P.regs')} | {cell(r, 'SH2.alut')} / {cell(r, 'SH2.regs')} |")
    seven = next(r for r in records if r["name"] == "seven-small")
    allten = next(r for r in records if r["name"] == "all-ten")
    small_sum = sum(r["alm"] - base["alm"] for r in records if r["name"].upper() in SMALL)
    all_sum = sum(r["alm"] - base["alm"] for r in records if r["name"].upper() in FEATURES)
    lines += ["", f"Costs are not additive: the seven single deltas sum to {small_sum:+d} ALMs, "
              f"but their combined map is {seven['alm']-base['alm']:+d}; the ten single deltas sum to "
              f"{all_sum:+d}, versus {allten['alm']-base['alm']:+d} combined. "
              "BACKLINE's -1 whole-design ALM result should be read with the untouched-entity variation below, "
              "not as proof that restoration always saves area."]
    lines += ["", "## Untouched-entity variation", "",
              "These are cross-configuration observations, not repeated-identical-baseline "
              "statistics. Synthesis can change packing/optimization elsewhere after a feature restore.", "",
              "| Entity / comparison set | ALUT delta range | Register delta range |", "|---|---:|---:|"]
    for block in ("MSH", "SSH", "SH2"):
        samples = [r for r in records if r["name"] != "wdt"]
        ranges = []
        for metric in ("alut", "regs"):
            ds = [value(r, block + "." + metric) - value(base, block + "." + metric) for r in samples]
            ranges.append(f"{min(ds):+d} to {max(ds):+d}")
        lines.append(f"| {block}, VDP2-only restores | {' | '.join(ranges)} |")
    wdt = next(r for r in records if r["name"] == "wdt")
    lines.append("| VDP2P, WDT-only restore | " + str(value(wdt, "VDP2P.alut") - value(base, "VDP2P.alut")) +
                 " | " + str(value(wdt, "VDP2P.regs") - value(base, "VDP2P.regs")) + " |")
    lines += ["", "## Individual SH-2 rows", "", "| Run | MSH ALUT / registers | SSH ALUT / registers |", "|---|---:|---:|"]
    for r in records:
        lines.append(f"| {r['name']} | {value(r, 'MSH.alut')} / {value(r, 'MSH.regs')} | "
                     f"{value(r, 'SSH.alut')} / {value(r, 'SSH.regs')} |")
    lines += ["", "## Seven-small full compile", ""]
    fitfile = scratch / "seven-small-fit/run.json"
    if fitfile.exists():
        fit = json.loads(fitfile.read_text())
        lines += [f"`./build.sh compile` exit {fit['returncode']}; elapsed {fit['seconds']:.2f} seconds. "
                  "The unmodified release qflow remaps with one processor, then uses ALL for fit/STA "
                  "and restores the QSF on exit. A PATH wrapper supplies the unique Docker container name.", ""]
        lines += ["Effective Docker command launched by build.sh:", "", "```sh",
                  shlex.join(["docker", "run", "--rm", "--platform", "linux/amd64", "--name", fit["container"],
                              "-v", fit["tree"] + ":/build", "-w", "/build/src/fpga", IMAGE, "sh", "../../tools/qflow.sh"]),
                  "```", ""]
        fitrpt = Path(fit["tree"]) / "src/fpga/output_files/ap_core.fit.rpt"
        if fitrpt.exists():
            resource_rows = {}
            for line in fitrpt.read_text(encoding="latin-1").splitlines():
                if re.match(r";\s*(ALMs needed \[|Total LABs:|M10K blocks\s)", line):
                    resource_rows.setdefault(line.split(";")[1].strip(), line.strip())
            fit["resource_rows"] = list(resource_rows.values())
            repeated = collect_map(Path(fit["tree"]), None)
            fit["repeat_map"] = {k: repeated[k] for k in ("alm", "selected")}
            fitfile.write_text(json.dumps(fit, indent=2) + "\n")
        resource_values = {row.split(";")[1].strip(): row.split(";")[2].strip()
                           for row in fit.get("resource_rows", [])}
        def resource(prefix):
            return next((v for k, v in resource_values.items() if k.startswith(prefix)), "N/A")
        sta = OUTPUT / "seven-small-fit/ap_core.sta.summary"
        timing_rows = re.findall(r"Type\s*:\s*(.*?) Model (Setup|Hold) '(.*?)'\s*\nSlack\s*:\s*([^\n]+)",
                                 sta.read_text() if sta.exists() else "")
        worst = {}
        for kind in ("Setup", "Hold"):
            values = [float(slack) for _, k, _, slack in timing_rows
                      if k == kind and re.fullmatch(r"[-+]?\d+(?:\.\d+)?", slack.strip())]
            worst[kind] = f"{min(values):.3f}" if values else "N/A"
        lines += ["| Fit | ALMs needed | LABs used / available | M10K used / available | Worst setup (ns) | Worst hold (ns) |",
                  "|---|---:|---:|---:|---:|---:|",
                  f"| Seven-small, seed 5 | {resource('ALMs needed')} | {resource('Total LABs:')} | "
                  f"{resource('M10K blocks')} | {worst['Setup']} | {worst['Hold']} |", ""]
        if any(v != "N/A" and float(v) < 0 for v in worst.values()):
            lines += ["The design fits, but timing is not closed: negative slack remains. "
                      "A successful compile exit does not imply timing closure.", ""]
        lines += ["Resource rows from ap_core.fit.rpt:", "", "```text", *fit.get("resource_rows", []), "```", ""]
        if "repeat_map" in fit:
            original = next(r for r in records if r["name"] == "seven-small")
            repeated = fit["repeat_map"]
            changes = [f"{block} ALUT {value(repeated, block+'.alut')-value(original, block+'.alut'):+d}, "
                       f"regs {value(repeated, block+'.regs')-value(original, block+'.regs'):+d}"
                       for block in ("VDP2P", "MSH", "SSH")]
            lines += [f"The full compile's repeated seven-small map estimated {repeated['alm']:,} ALMs "
                      f"({repeated['alm']-original['alm']:+d} versus the map-only run). " + "; ".join(changes) + ".", ""]
        errors = [l for l in (scratch / "seven-small-fit/run.log").read_text(encoding="latin-1").splitlines()
                  if l.startswith("Error") or "not fully constrained" in l or
                  ("LAB" in l and ("require" in l.lower() or "available" in l.lower()))]
        if errors:
            lines += ["Compile diagnostics:", "", "```text", *errors, "```", ""]
        if sta.exists():
            rows = timing_rows
            assert rows, "STA summary exists but contains no parsed setup/hold rows"
            timing = {}
            for corner, kind, clock, slack in rows:
                timing.setdefault((corner, clock), {})[kind] = slack.strip()
            lines += ["| Corner | Clock | Worst setup (ns) | Worst hold (ns) |", "|---|---|---:|---:|"]
            for (corner, clock), slacks in timing.items():
                clock = clock.replace("|", "\\|")
                lines.append(f"| {corner} | `{clock}` | {slacks.get('Setup', 'N/A')} | {slacks.get('Hold', 'N/A')} |")
        else:
            lines += ["STA summary absent: compile stopped before timing analysis. "
                      "No four-corner setup/hold result is available."]
    else:
        lines += ["Fit pending."]
    lines += ["", "## Commands and durations", "",
              f"Scratch/log root: `{scratch}`. Each run has `run.log` and `run.json` there. "
              "Scratch trees are disposable; only summaries and this report are versioned.", "",
              "```sh", "git fetch origin --quiet", "df -h /",
              f"python3 -u sizing/pocket-cuts/measure.py maps --scratch {scratch} --jobs 6",
              'koboard slot take taro --kind heavy --as "Codex - saturn-a0-cuts" --est 30',
              f"python3 -u sizing/pocket-cuts/measure.py fit --scratch {scratch}",
              "koboard slot done " + ((scratch / "fit-slot.txt").read_text().strip() if (scratch / "fit-slot.txt").exists() else "<slot-id>"),
              f"python3 sizing/pocket-cuts/measure.py report --scratch {scratch}", "```", "",
              "Long commands were launched with Python subprocess.Popen(start_new_session=True), "
              "stdin=DEVNULL and stdout/stderr redirected to maps.log or fit.log. "
              "No shell was held waiting on compilation. rsync excludes .git, db, incremental_db, "
              "output_files, worker runs, and this measurement output directory. "
              "Tracked source bytes were verified before each run; the only permitted change was "
              "the explicitly derived QSF. The reference gitlink is a directory, unused by the release QSF.", "",
              "| Run | Start UTC | Wall seconds | Exit |", "|---|---|---:|---:|"]
    for r in records + ([fit] if fitfile.exists() else []):
        lines.append(f"| {r['name']} | {r['started_utc']} | {r['seconds']:.2f} | {r['returncode']} |")
    lines += ["", "Exact map commands:", "", "```sh", *[r["command"] for r in records], "```", "",
              "## Retained evidence hashes", "", "```text"]
    for path in sorted(OUTPUT.glob("*/*.summary")):
        lines.append(f"{hashlib.sha256(path.read_bytes()).hexdigest()}  {path.relative_to(OUTPUT)}")
    lines += ["```", ""]
    cleanup = scratch / "cleanup.log"
    if cleanup.exists() and len(cleanup.read_text().splitlines()) == 29 and all(
            line.startswith("REMOVED ") for line in cleanup.read_text().splitlines()):
        lines += ["## Verification and cleanup", "",
                  "All 14 map estimates and VDP2/MSH/SSH rows were independently checked against raw reports. "
                  "Each QSF had exactly its requested removals. Original map/fit/STA summaries were retained "
                  "byte-for-byte. All 72 setup/hold entries (nine clocks at four corners) were checked. "
                  "The qflow-restored QSF matched the seven-small input, and the heavy slot was released.", "",
                  "The first preflight stopped before Quartus because the source verifier treated a gitlink "
                  "directory as a file; this was corrected and the measurements used a fresh scratch root. "
                  "No Quartus measurement was retried. Quartus fit reports use Latin-1 for degree symbols; "
                  "the report reader handles that encoding.", "",
                  "All 29 scratch trees (14 preflight copies, 14 map copies, one fit copy) were removed "
                  "using individually listed absolute paths, without globs. "
                  f"Deletion commands and receipts: `{scratch / 'cleanup-exact-trees.py'}` and `{cleanup}`. "
                  "Logs and extracted run records remain outside the repository; no database or full report is committed.", ""]
    (OUTPUT / "RESULTS.md").write_text("\n".join(lines))


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("stage", choices=["maps", "fit", "report"])
    p.add_argument("--scratch", required=True, type=Path)
    p.add_argument("--jobs", type=int, default=6)
    args = p.parse_args()
    if not 1 <= args.jobs <= 6:
        p.error("jobs must be between 1 and 6")
    if args.stage == "report":
        report(args.scratch.resolve())
        return
    # Allow the measurement-only commit itself; release source must still match.
    assert capture(["git", "rev-parse", REVISION], cwd=SOURCE) == REVISION
    assert not capture(["git", "diff", REVISION, "--", ".", ":(exclude)sizing/pocket-cuts"], cwd=SOURCE)
    assert not capture(["git", "ls-files", "--others", "--exclude-standard", "src"], cwd=SOURCE)
    check_disk()
    scratch = args.scratch.resolve()
    scratch.mkdir(parents=True, exist_ok=True)
    if args.stage == "fit":
        execute(scratch, "seven-small-fit", SMALL, fit=True)
    else:
        (scratch / "image.txt").write_text(capture(["docker", "image", "inspect", IMAGE, "--format", "{{.Id}}"])+"\n")
        with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as pool:
            futures = [pool.submit(execute, scratch, name, features) for name, features in RUNS.items()]
            for future in concurrent.futures.as_completed(futures):
                future.result()


if __name__ == "__main__":
    main()
