# Sega Saturn for Analogue Pocket

An openFPGA port of [Saturn_MiSTer](https://github.com/MiSTer-devel/Saturn_MiSTer), the MiSTer project's
Sega Saturn core, to the Analogue Pocket.

> **Status: early, pre-release.** Games boot from the SD card and run on the Pocket with CD audio and controls, but
> the graphics still have problems. Downloads: [releases](https://github.com/defgenx/openfpga-Saturn/releases).
> Bugs and test reports: [issues](https://github.com/defgenx/openfpga-Saturn/issues).

## What works

Tested on a Pocket:

* Booting a disc from the SD card (Hyper Duel, Panzer Dragoon): the BIOS checks the disc, the game loads and
  reaches its title screen.
* CD audio (the games' music tracks) and sound effects.
* Controls (A, B, C, X, Y, Z, L, R, Start, d-pad).
* Video at 320 and 352 pixels wide, with the clock switch games make between them; VDP2 backgrounds and layers.

## What does not work yet

* **VDP1 graphics** (sprites, polygons, text) are corrupted up to v0.2.18: its frame buffer is in the Pocket's SRAM,
  a 55 ns AS6C2016-55 that the core drove as a 10 ns part. v0.2.19 gives it the right timing; games that erase the
  frame buffer during vertical blank can still leave parts of it unerased, as the SRAM is too slow for that mode
  ([docs/memory.md](docs/memory.md)).
* **VDP2 effects**: all of them are in from v0.2.19. Up to v0.2.18, ten were cut to fit the FPGA (extended colour
  calculation, shadow, back screen per line, special priority and colour calculation, line colour screen, rotation
  zoom, rotation parameter B, mosaic, sprite window, line window; [docs/vdp2.md](docs/vdp2.md#optional-feature-cuts-pocket_cut_vdp2_name)).
  The VDP2 was rewritten for area to make room, with the same output as MiSTer's in simulation; not yet checked on a
  Pocket.
* **Saves**: the backup RAM starts formatted and is saved to the card at exit ([INSTALL.md](INSTALL.md#saves));
  checked in simulation, not yet on a Pocket.
* **Picking a `.cue` directly** is not supported yet (in progress): a disc is picked as the `.json` that
  `Saturn-mktoc.py` writes for it (below). CHD is not supported.
* Only a few games have been tried.

## Install

1. Download `defgenx.Saturn.zip` from the [latest release](https://github.com/defgenx/openfpga-Saturn/releases) and
   unzip it onto the root of the SD card (let it merge with the folders already there).
2. Add a BIOS and your games (below).
3. Put the card back in the Pocket and open **Saturn** from the openFPGA menu.

## Installing the BIOS

The Saturn BIOS is not included; use a dump of your own console's BIOS (512 KB).

1. Copy it into `Assets/saturn/defgenx.Saturn/` on the card. Any name and either extension works (`sega_101.bin`,
   `mpr-17933.bin`, `Saturn BIOS (JP).bin`, `*.rom`, ...). Several BIOS images can sit there side by side.
2. The first time the core starts, the Pocket asks which BIOS to use and remembers the choice. To change it later,
   use the core's menu (**Core Settings** / slot **BIOS**).

The card preparation script below also moves a BIOS left at the root of the card into that folder.

## Installing games

A game is its `.cue` and the `.bin` track files the `.cue` lists (a "bin/cue" dump, one `.bin` per track or a
single `.bin`). CHD is not supported.

```
SD card
├── Assets/saturn/
│   ├── defgenx.Saturn/        BIOS image(s)
│   │   └── Panzer Dragoon (Japan).json        written by the script: pick this on the Pocket
│   └── common/
│       └── Panzer Dragoon (Japan)/
│           ├── Panzer Dragoon (Japan).cue
│           ├── Panzer Dragoon (Japan) (Track 01).bin
│           ├── Panzer Dragoon (Japan) (Track 02).bin
│           ├── ...
│           └── Panzer Dragoon (Japan).toc     written by the script
├── Saturn-mktoc.py
├── Saturn-prepare-card.command   (macOS)
└── Saturn-prepare-card.bat       (Windows)
```

1. Copy the game's `.cue` and `.bin` files onto the card: at the root, or in `Assets/saturn/common/` (one folder per
   game is tidiest).
2. With the card in a computer, double-click **`Saturn-prepare-card.command`** (macOS) or
   **`Saturn-prepare-card.bat`** (Windows) at the root of the card. It needs
   [Python 3](https://www.python.org/downloads/); on macOS, the first time, right-click the file and choose **Open**.
   It moves games left at the root into `Assets/saturn/common/<game>/`, writes each game's `<game>.img` (all the
   tracks in one file) and `<game>.toc` next to its tracks, writes the game's `.json` into
   `Assets/saturn/defgenx.Saturn/`, where the core lists the games, and shows what it did. Run it again whenever you
   add games; it only changes what is new, and asks before overwriting a game's `.img`, `.toc` or `.json` that
   would change ([y]es, [n]o, [a]ll, n[o]ne; `--yes` overwrites without asking).
   From a terminal: `python3 Saturn-mktoc.py` at the root of the card (`--dry-run` shows what it would do).
3. On the Pocket, open the Saturn core and pick the game's **`.json`**: that one pick loads the `.img` and the
   `.toc`.

Other ways to load a disc, from the core's menu:

* **The image and the TOC by hand**: load `Game.img` in the **Disc image** slot and `Game.toc` in the **Disc TOC**
  slot (two picks; the `.json` does both).
* **The `.cue` directly** is not in the builds yet: it works in simulation but needs room on the FPGA first.

If something goes wrong:

* "Disc unsuitable for this system" or a disc that never loads: run the preparation script again, then pick the
  game's `.json` (not a `.bin`).
* "ID undefined" when picking a `.json`: the disc has more than 24 track files and was prepared with `--merge never`;
  run the script again without it.
* "Backup RAM cannot be used": saves are not supported yet (see [What does not work yet](#what-does-not-work-yet));
  press Start to continue.

More details: [INSTALL.md](INSTALL.md), [docs/cd.md](docs/cd.md).

## How it differs from MiSTer

The core follows MiSTer's Saturn implementation as closely as possible and deviates only where the Pocket forces it:

* **FPGA size**: the Pocket has 18,480 ALMs against MiSTer's 41,910. The SH-2s, SCU, VDP1, VDP2, SCSP, 68000 and SMPC
  are rewritten for area, the SCU and SCSP DSPs are compacted, and a few features are cut
  ([docs/fit-status.md](docs/fit-status.md), [docs/cuts.md](docs/cuts.md)).
* **Memories**: MiSTer's SDRAM, DDR3 and BRAM buffers are mapped to the Pocket's SDRAM, two PSRAMs, SRAM and M10K
  ([docs/memory.md](docs/memory.md)).
* **CD**: MiSTer's ARM side emulates the drive; here the disc streams from the SD card through APF data slot reads and
  the CD block runs as HLE firmware on a small RISC-V core ([docs/cd.md](docs/cd.md), [docs/cdb-hle.md](docs/cdb-hle.md)).
* **Clocks**: MiSTer's PLL plan, with M and K recomputed for the Pocket's 74.25 MHz reference, reconfigured on every
  320/352 and PAL change ([docs/integration.md](docs/integration.md#2-clock-plan)).
* **APF glue**: the MiSTer framework (OSD, `hps_io`, video mixer) is replaced by the Pocket's bridge, data slots,
  scaler and I2S audio ([docs/integration.md](docs/integration.md)).

## Build

```
./build.sh            compile in Docker (raetro/quartus:21.1) and package defgenx.Saturn.zip
./build.sh package    package an existing bitstream
make -C sim sys       full-system simulation (Verilator), sim/sys/tb_sys.sv for the options
```

`python3 tools/check_json.py --no-bitstream` checks the definition files. The design fills the FPGA (about 99% of
the LABs), so the fit depends on the seed: a release uses the first seed that meets timing at every corner.

## Layout

```
src/fpga/apf/        Analogue Pocket framework (unchanged)
src/fpga/core/       core_top.v, saturn_pocket.sv, mem/ (SDRAM/PSRAM/SRAM), cd/ (CD streaming), platform/ (video, audio)
src/fpga/saturn/     Saturn_MiSTer RTL and the Pocket rewrites (see src/fpga/saturn/UPSTREAM.md)
sim/                 simulations (make -C sim <target>)
firmware/cdb/        HLE CD block firmware (RV32, runs on SERV)
dist/                Cores/defgenx.Saturn (definition files), Platforms/saturn.json, Assets/
tools/               mktoc.py (disc TOC and merged image), reverse_bits.py, check_json.py, pllplan.py
build.sh             compile and package
install.sh/.bat/.ps1 copy the core to the SD card and prepare the discs
```

## Docs

* [docs/status.md](docs/status.md): where the port stands
* [docs/fit-status.md](docs/fit-status.md), [docs/sizing.md](docs/sizing.md): FPGA fit and sizing
* [docs/integration.md](docs/integration.md), [docs/memory.md](docs/memory.md), [docs/cd.md](docs/cd.md),
  [docs/cdb-hle.md](docs/cdb-hle.md): the Pocket side
* [docs/cuts.md](docs/cuts.md), [docs/game-impact.md](docs/game-impact.md): cuts and what games depend on
* [docs/debug-overlay.md](docs/debug-overlay.md): the diagnostic overlay used for hardware bring-up
* docs/sh2.md, scu.md, scsp.md, vdp1.md, vdp2.md and the `*-rewrite.md` files: per-block rewrites
* [docs/saturn-architecture.md](docs/saturn-architecture.md): the Saturn_MiSTer design
* [docs/pocket-platform.md](docs/pocket-platform.md): what the Pocket provides

## License

GPL-3.0, see [LICENSE](LICENSE). Saturn_MiSTer's sources are GPL-2.0-or-later, which allows
distribution under GPL-3.0. The Analogue Pocket framework in `src/fpga/apf/` is under Analogue's own
license, see the headers there.

## Credits

* srg320, who wrote the Saturn FPGA core, and the [Saturn_MiSTer](https://github.com/MiSTer-devel/Saturn_MiSTer)
  contributors
* The [MiSTer project](https://github.com/MiSTer-devel) (Sorgelig and contributors) for the framework this core came from
* Analogue, for the Pocket and the [openFPGA framework](https://www.analogue.co/developer)
