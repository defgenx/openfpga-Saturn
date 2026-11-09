# Sega Saturn for Analogue Pocket

An openFPGA port of [Saturn_MiSTer](https://github.com/MiSTer-devel/Saturn_MiSTer), the MiSTer project's
Sega Saturn core, to the Analogue Pocket.

> **Status: v0.1.3.** Games boot from the SD card and run on the Pocket with picture, CD audio, sound effects and
> controls (Hyper Duel plays on a Pocket, and Panzer Dragoon gets past "Episode 1" since v0.1.1). Downloads:
> [releases](https://github.com/defgenx/openfpga-Saturn/releases). Bugs and test reports:
> [issues](https://github.com/defgenx/openfpga-Saturn/issues).

## What works

Tested on a Pocket:

* Booting a disc from the SD card (Hyper Duel, Panzer Dragoon): the BIOS checks the disc, the game loads and
  reaches its title screen.
* CD audio (the games' music tracks) and sound effects.
* Controls (A, B, C, X, Y, Z, L, R, Start, d-pad).
* Video at 320 and 352 pixels wide, with the clock switch games make between them; VDP1 sprites and polygons, VDP2
  backgrounds and layers.

In simulation, with the same output as MiSTer's: all VDP2 effects (extended colour calculation, shadow, back screen per
line, special priority and colour calculation, line colour screen, rotation zoom, rotation parameter B, mosaic, sprite
window, line window; [docs/vdp2.md](docs/vdp2.md)).

## Planned for the next releases

* Saves checked on a Pocket.
* Picking a `.cue` directly: it works in simulation and needs room on the FPGA first.
* More games tested.

## Install

1. Download `defgenx.Saturn.zip` from the [latest release](https://github.com/defgenx/openfpga-Saturn/releases) and
   unzip it onto the root of the SD card (let it merge with the folders already there).
2. From the same release, download the disc tool for your computer, a separate file: `Saturn-prepare-card-macos.zip`
   (macOS: unzip it) or `Saturn-prepare-card.exe` (Windows x64), and put it at the root of the card.
3. Add a BIOS and your games (below), then double-click **`Saturn-prepare-card`** (macOS) or
   **`Saturn-prepare-card.exe`** (Windows) at the root of the card. No Python or other software is needed.
4. Put the card back in the Pocket and open **Saturn** from the openFPGA menu.

## Installing the BIOS

The Saturn BIOS is not included; use a dump of your own console's BIOS (512 KB).

1. Copy it into `Assets/saturn/defgenx.Saturn/` on the card. Any name and either extension works (`sega_101.bin`,
   `mpr-17933.bin`, `Saturn BIOS (JP).bin`, `*.rom`, ...). Several BIOS images can sit there side by side.
2. Each time the core starts, the Pocket asks which BIOS to use; the choice is not saved. To switch BIOS while the
   core runs, use the core's menu (**Core Settings** / **BIOS**): the core restarts with the new one.

`Saturn-prepare-card` (below) also moves a BIOS left at the root of the card into that folder, and says when no
BIOS is there.

## Installing games

A game is its `.cue` and the `.bin` track files the `.cue` lists (a "bin/cue" dump, one `.bin` per track or a
single `.bin`). CHD is not supported.

```
SD card
├── Assets/saturn/
│   ├── defgenx.Saturn/        BIOS image(s)
│   │   └── Panzer Dragoon (Japan).json        written by the tool: pick this on the Pocket
│   └── common/
│       └── Panzer Dragoon (Japan)/
│           ├── Panzer Dragoon (Japan).cue
│           ├── Panzer Dragoon (Japan) (Track 01).bin
│           ├── Panzer Dragoon (Japan) (Track 02).bin
│           ├── ...
│           ├── Panzer Dragoon (Japan).img     written by the tool
│           └── Panzer Dragoon (Japan).toc     written by the tool
└── Saturn-prepare-card              the disc tool for your computer (a separate release download): macOS,
                                     or Saturn-prepare-card.exe and the other builds below
```

1. Copy the game's `.cue` and `.bin` files onto the card: at the root, or in `Assets/saturn/common/` (one folder per
   game is tidiest).
2. With the card in a computer, double-click **`Saturn-prepare-card`** (macOS) or
   **`Saturn-prepare-card.exe`** (Windows) at the root of the card; nothing else needs installing (no Python). Each
   build is its own release download, kept out of the core zip: `Saturn-prepare-card-arm64.exe` and `Saturn-prepare-card-x86.exe` for Windows on ARM and 32-bit Windows, `Saturn-prepare-card-linux-x64.zip`, `-linux-arm64.zip`, `-linux-armv7.zip`, `-linux-x86.zip` for Linux (unzip, put the program at the
   card root and run it from a terminal).
   * macOS, first time: the tool is not notarized, so right-click it, choose **Open**, then **Open** again.
   * Windows: if SmartScreen says "Windows protected your PC", click **More info**, then **Run anyway**.

   It checks the card first: each BIOS and game is marked `[OK]`, `[->]` (the tool moves or prepares it) or `[!!]`
   (a problem, with what to do), for example "NO BIOS", a `.cue` whose track files are missing or named
   differently, or a game in the wrong folder. Then it lists the games (new, prepared, out of date) and asks which
   to prepare: Enter takes the new and out-of-date ones, `a` all, `1 3` those numbers, `q` quits. It moves games
   left at the root into `Assets/saturn/common/<game>/` and a BIOS left at the root into
   `Assets/saturn/defgenx.Saturn/`, writes each game's `<game>.img` (the disc's TOC, then all the tracks, in one
   file) and `<game>.toc` next to its tracks, and the game's `.json` into `Assets/saturn/defgenx.Saturn/`, where
   the core lists the games. Before overwriting a game's `.img`, `.toc` or `.json` that would change it asks
   ([y]es, [n]o, [a]ll, n[o]ne). Run it again whenever you add games; it only changes what is new.
   From a terminal: `./Saturn-prepare-card --card /Volumes/POCKET` (`--dry-run` shows what it would do, `--yes`
   overwrites without asking, `--check` only checks the card).
3. On the Pocket, open the Saturn core and pick the game's **`.json`**: that one pick loads the `.img` and the
   `.toc`.

Other ways to load a disc, from the core's menu:

* **The image alone**: load `Game.img` in the **Disc (.img)** slot (one pick: the core reads the TOC from the image).
  An `.img` written by an older tool has no TOC in it and does not load this way: run `Saturn-prepare-card` again.
* **The `.cue` directly** is not in the builds yet: it works in simulation but needs room on the FPGA first.

If something goes wrong:

* "Disc unsuitable for this system" or a disc that never loads: run `Saturn-prepare-card` again, then pick the
  game's `.json` (not a `.bin`).
* "ID undefined" when picking a `.json`: the disc has more than 24 track files and was prepared with `--merge never`;
  run `Saturn-prepare-card` again without it.
* "Backup RAM cannot be used": press Start to continue (see [Saves](INSTALL.md#saves)).

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
./build.sh package    package an existing bitstream, and Saturn-prepare-card in release-tools/ (needs Go, and macOS)
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
dist/                Cores/defgenx.Saturn (definition files), Platforms/saturn.json and _images/saturn.bin, Assets/
tools/               prepare-card/ (Saturn-prepare-card: disc TOC, merged image, card check; Go), reverse_bits.py,
                     check_json.py, pllplan.py
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
* [dyreschlock](https://github.com/dyreschlock), for the Sega Saturn platform image
  (`dist/Platforms/_images/saturn.bin`, from [pocket-platform-images](https://github.com/dyreschlock/pocket-platform-images))
