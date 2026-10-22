# Sega Saturn for Analogue Pocket

An openFPGA port of [Saturn_MiSTer](https://github.com/MiSTer-devel/Saturn_MiSTer), the MiSTer project's
Sega Saturn core, to the Analogue Pocket.

> **Status: work in progress, does not fit the Pocket yet.** The whole Saturn system is integrated on the
> Pocket top (memory, CD streaming, HLE CD block, clocks, video, audio) and synthesises, but the fitter needs
> about 30,700 ALMs against 18,480. Exact rewrites and low-impact cuts are not enough; the next step is
> rewriting the CPUs and video chips for the Pocket's area while keeping every central feature. See
> [docs/status.md](docs/status.md).

## Layout

```
src/fpga/apf/        Analogue Pocket framework (unchanged)
src/fpga/core/       core_top.v, saturn_pocket.sv, mem/ (SDRAM/PSRAM/SRAM), cd/ (CD streaming)
src/fpga/saturn/     Saturn_MiSTer RTL, changed for the Pocket (see UPSTREAM.md)
ref/Saturn_MiSTer    upstream at the imported commit, golden model for sim/
sim/                 simulations (make -C sim <target>)
firmware/cdb/        HLE CD block firmware (RV32, runs on SERV)
dist/                Cores/defgenx.Saturn (definition files), Platforms/saturn.json, Assets/
tools/               reverse_bits.py (rbf -> rbf_r), check_json.py (APF limits)
build.sh             compile in Docker (raetro/quartus:21.1) and package defgenx.Saturn.zip
install.sh/.bat/.ps1 copy the core to the SD card
```

Build: `./build.sh` (compile and package), `./build.sh package` (package an existing bitstream).
`python3 tools/check_json.py --no-bitstream` checks the definition files before a core exists.

## Docs

* [docs/status.md](docs/status.md): where the port stands and the next move
* [docs/sizing.md](docs/sizing.md): FPGA resource sizing
* [docs/integration.md](docs/integration.md), [docs/memory.md](docs/memory.md), [docs/cd.md](docs/cd.md), [docs/cdb-hle.md](docs/cdb-hle.md): the Pocket side
* [docs/cuts.md](docs/cuts.md), [docs/game-impact.md](docs/game-impact.md): optional cuts and what games depend on
* docs/sh1.md, sh2.md, scu.md, scsp.md, vdp1.md, vdp2.md: per-block rewrites
* [docs/saturn-architecture.md](docs/saturn-architecture.md): the Saturn_MiSTer design
* [docs/pocket-platform.md](docs/pocket-platform.md): what the Pocket provides

## License

GPL-3.0, see [LICENSE](LICENSE). Saturn_MiSTer's sources are GPL-2.0-or-later, which allows
distribution under GPL-3.0. The Analogue Pocket framework in `src/fpga/apf/` is under Analogue's own
license, see the headers there.

## Credits

* srg320, who wrote the Saturn FPGA core, and the Saturn_MiSTer contributors
* The MiSTer project (Sorgelig and contributors) for the framework this core came from
* Analogue, for the Pocket and the openFPGA framework
* [openfpga-C64](https://github.com/defgenx/openfpga-C64), whose build, packaging and installer tooling is reused here
