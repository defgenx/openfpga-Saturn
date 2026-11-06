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
* **Some VDP2 effects are cut** to fit the FPGA: extended colour calculation, shadow, back screen per line, special
  priority and colour calculation, line colour screen, rotation zoom, rotation parameter B, mosaic, sprite window and
  line window ([docs/cuts.md](docs/cuts.md), [docs/game-impact.md](docs/game-impact.md)). Their cost is measured;
  they come back as room is made on the FPGA.
* **Saves**: the backup RAM is not formatted or saved to the card yet. Games warn that saving is unavailable and
  carry on without it.
* **Picking a `.cue` directly** is not supported yet (in progress): a disc is picked as the `.json` that
  `Saturn-mktoc.py` writes for it (below). CHD is not supported.
* Only a few games have been tried.

## Install

1. Download `defgenx.Saturn.zip` from the [latest release](https://github.com/defgenx/openfpga-Saturn/releases) and
   unzip it onto the root of the SD card.
2. Put your Saturn BIOS image (any name, `.bin` or `.rom`, 512 KB, not included) in `Assets/saturn/defgenx.Saturn/`;
   the core asks which one to use the first time it starts.
3. Copy each game's `.cue` and `.bin` tracks into `Assets/saturn/common/`, directly or in a folder per game.
4. Prepare the discs once, with the card mounted on a computer (needs [Python 3](https://www.python.org/downloads/)):

   ```
   python3 Saturn-mktoc.py --card /Volumes/POCKET
   ```

   For every `.cue` this writes `Game.json` and `Game.toc` next to the tracks. Run it again after adding games; it
   only rewrites what changed. The repository's installer (`install.sh`, `install.bat`) copies the core and does
   the same.
5. On the Pocket, open the Saturn core and pick the game's `Game.json`.

A disc can also be loaded as one merged image: `--merge always` writes `Game.img`; load it in the **Disc image**
slot and `Game.toc` in the **Disc TOC** slot from the core's menu. Details: [INSTALL.md](INSTALL.md),
[docs/cd.md](docs/cd.md).

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
