# Sega Saturn for Analogue Pocket

An openFPGA port of [Saturn_MiSTer](https://github.com/MiSTer-devel/Saturn_MiSTer), the MiSTer project's
Sega Saturn core, to the Analogue Pocket.

> **Status: work in progress, does not build a playable core yet.** Only the Pocket framework is in
> place: APF bridge, BIOS and backup RAM loading, controller mapping, a video test pattern, silent audio
> and the definition files. The Saturn system is not integrated.

## Layout

```
src/fpga/apf/        Analogue Pocket framework (unchanged)
src/fpga/core/       core_top.v (bridge, loader, pads, video, audio), bridge_loader.sv
dist/                Cores/defgenx.Saturn (definition files), Platforms/saturn.json, Assets/
tools/               reverse_bits.py (rbf -> rbf_r), check_json.py (APF limits)
build.sh             compile in Docker (raetro/quartus:21.1) and package defgenx.Saturn.zip
install.sh/.bat/.ps1 copy the core to the SD card
```

Build: `./build.sh` (compile and package), `./build.sh package` (package an existing bitstream).
`python3 tools/check_json.py --no-bitstream` checks the definition files before a core exists.

## Docs

* [docs/sizing.md](docs/sizing.md): FPGA resource sizing
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
