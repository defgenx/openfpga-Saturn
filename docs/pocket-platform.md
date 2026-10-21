# Analogue Pocket platform notes for a Saturn port

Research date: 2026-10-21. Nothing here changes code. Each fact carries a URL or a repo path. Sections 1-6 are
facts (documented, measured in a local fit report, or read from source). Section 7 is what people said, kept
separate. "Derived" means computed here from cited numbers; "unverified" means no primary source was reachable.

Short labels used for sources:

- **APF docs**: https://www.analogue.co/developer/docs (pages named in each citation)
- **agg23 wiki**: https://github.com/agg23/analogue-pocket-utils/wiki
- **template**: `/Users/adelvecchio/Documents/workspace/apf-core-template` (mirror of https://github.com/open-fpga/core-template)
- **C64 / ST**: `/Users/adelvecchio/Documents/workspace/openfpga-C64`, `.../openfpga-AtariST` (fit reports in `src/fpga/output_files/ap_core.fit.rpt`)
- **PSX-Pocket**: https://github.com/GuardianSoul/openfpga-PlayStation @ `6f43be6` (2026-10-19)
- **MegaCD-Pocket**: https://github.com/neutralinsomniac/openfpga-megacd @ `4f05934` (v0.3.7, 2026-08-20)
- **PCECD-Pocket**: https://github.com/Mazamars312/openfpga-pcengine-cd @ `a1588ac` (v0.2.3, 2024-09-13)
- **MPU template**: https://github.com/Mazamars312/Analogue-MPU-Template @ `cf5e421`
- **Saturn_MiSTer (local)**: `/Users/adelvecchio/Documents/workspace/Saturn_MiSTer` @ `9aa9449` (2026-10-19)

---

## 0. Things that change the plan (read first)

1. **A PlayStation core already runs on the Pocket** (PSX-Pocket, releases v0.5.2 to v0.5.5, 2026-10-16 to 2026-10-19).
   It streams `.cue`/`.bin` from data slots, handles up to 99 tracks, does disc swap, and its own build scripts say it
   fits at about 1,847 LABs (see 1.3), i.e. essentially the whole 18,480-ALM device. This contradicts the earlier local
   sizing verdict in `/Users/adelvecchio/Documents/workspace/PSX_MiSTer/docs/pocket/FEASIBILITY.md` ("no-go as a port",
   22.6K ALMs trimmed). That doc's estimates were too pessimistic or the port used deeper rewrites. Treat PSX-Pocket as
   the closest prior art for resource pressure, memory mapping and CD streaming.
2. **The device in the Pocket is `5CEBA4F23C8`** (484-pin F23 package), not the `5CEBA4F17C8` that several
   distributors and web search results show. Source: `apf-core-template/src/fpga/ap_core.qsf:303`, fit reports in C64/ST,
   agg23 wiki "Pocket Internals".
3. **Saturn_MiSTer is full on its own, much bigger, FPGA.** Its maintainers report 99% (single RAM) / 98% (dual RAM) of
   the DE10-Nano ALMs on 2026-04-01 and "There isn't any free space" (section 7). Against 18,480 ALMs that is a 2.2x gap
   (derived, using the 41,910-ALM figure for the 5CSEBA6, see 1.4), larger than the PSX gap the local study measured
   (26.1K stripped vs 18.5K).
4. **No MB/s figure for data slot reads is published anywhere I could find.** Only indirect evidence exists (section 3.5
   and 6). The Saturn 2x drive needs 352,800 B/s, the same as the PlayStation, which PSX-Pocket already sustains.

---

## 1. FPGA

### 1.1 Device

| Item | Value | Source |
|---|---|---|
| Core FPGA | Intel/Altera Cyclone V E `5CEBA4F23C8`, speed grade C8, 484-pin FBGA | `apf-core-template/src/fpga/ap_core.qsf:289-303` (`DEVICE 5CEBA4F23C8`, `PIN_COUNT 484`, `SPEED_GRADE 8`); agg23 wiki https://github.com/agg23/analogue-pocket-utils/wiki/Pocket-Internals |
| ALMs | 18,480 (about 49K LE) | C64 fit summary `openfpga-C64/src/fpga/output_files/ap_core.fit.summary` ("16,921 / 18,480"); wiki above |
| M10K blocks | 308 blocks = 3,153,920 bits (3,080 Kb) | same fit summaries ("1,491,727 / 3,153,920", "192 / 308 RAM blocks"). The wiki says "3,380 Kb"; the fitter number is 308 x 10,240 bits and wins |
| MLAB | 303 Kb (unverified beyond the wiki; the fitter counts MLAB inside the ALM budget, 1 MLAB = 10 ALMs of logic area) | agg23 wiki; `PSX-Pocket/scripts/prepare_dma_m10k.py:5` |
| DSP | 66 DSP blocks (each 2 x 18x18 or 1 x 27x27 in Cyclone V variable-precision mode) | fit summary ("20 / 66", "5 / 66") |
| PLLs | 4 fractional PLLs, 4 DLLs | fit summary ("Total PLLs 1 / 4", "Total DLLs 0 / 4") |
| Pins | all 224 user pins are used by the APF top level | fit summary ("Total pins 224 / 224") |
| Reference clocks | `clk_74a` and `clk_74b`, both 74.25 MHz (13.468 ns), plus `bridge_spiclk` | `apf-core-template/src/fpga/apf/apf_constraints.sdc` |
| Second FPGA | Cyclone 10 LP `10CL016YU256C8G`, reserved for Analogue OS | agg23 wiki; APF docs overview https://www.analogue.co/developer/docs/openfpga/overview |
| Toolchain | Quartus Prime Lite with Cyclone V support (templates and local cores use 21.1.1; PSX-Pocket uses 25.1) | https://www.analogue.co/developer/docs/getting-started; `PSX-Pocket/BUILDING.md` |
| Debug | JTAG header on the core FPGA; reloading a bitstream over JTAG repeats the full load flow | APF docs overview |

### 1.2 What the APF framework itself consumes

Measured from the hierarchical entity table in the fit reports of two shipped local cores (ALMs needed):

| Block | C64 | AtariST |
|---|---|---|
| `apf_top` own logic | 8.8 | 9.2 |
| `io_bridge_peripheral` (SPI bridge) | 90.5 | 74.6 |
| `io_pad_controller` (controller / dock input) | 138.8 | 109.7 |
| `core_bridge_cmd` (host/target command engine, 8 Kbit RAM = 2 M10K) | 313.0 | 212.7 |
| `sound_i2s` (1 M10K) | 76.0 | 75.0 |
| PLL and DDIO wrappers | about 0 | 0 |
| **Total platform glue** | **about 630** | **about 480** |

Source: `openfpga-C64/src/fpga/output_files/ap_core.fit.rpt` and `openfpga-AtariST/.../ap_core.fit.rpt`, "Fitter
Resource Utilization by Entity". The earlier PSX study budgeted 1,000 ALMs for APF plus controllers (same doc,
FEASIBILITY.md). A custom-memory-controller + media-loader layer adds more: C64's `c64_media` costs 1,730 ALMs and 15
M10K (it does GCR synthesis); ST's `st_media` 384 ALMs, 20 M10K; PSX-Pocket's cue loader is a 16 KiB-RAM SERV RISC-V
core (see 6.3), "far smaller than the same logic as a state machine" (`PSX-Pocket/rtl/pocket/psx_cue_mount.sv` header).

### 1.3 How full existing cores are

| Core | ALMs | M10K | DSP | Source |
|---|---|---|---|---|
| AtariST | 10,854 / 18,480 (59%) | 53 / 308 | 5 | `openfpga-AtariST/src/fpga/output_files/ap_core.fit.summary` |
| C64 (one drive, no OPL3) | 16,921 / 18,480 (92%) | 192 / 308 | 20 | `openfpga-C64/src/fpga/output_files/ap_core.fit.summary` |
| C64 as MiSTer builds it | about 21,800 (estimate) | | | `openfpga-C64/docs/architecture.md` "Not ported" |
| PSX-Pocket | about 1,847 LABs, i.e. about 18,470 ALMs (derived: 10 ALMs per LAB) with `--pack-high` | not published | not published | `PSX-Pocket/scripts/prepare_pocket_early.py:319` ("lets --disc-swap fit at 1,847 LABs"). 18,480 ALMs = 1,848 LABs, so the device is 99.9% full |
| PSX_MiSTer unmodified (local sizing) | 31,215 full / 26,135 options off / 26,672 fitted on 5CSEBA6 | 289 | 83 | `PSX_MiSTer/docs/pocket/FEASIBILITY.md` |
| Saturn_MiSTer | 99% single RAM / 98% dual RAM of the DE10-Nano on 2026-04-01 | n/a | n/a | https://www.segasaturnshiro.com/2026/05/08/saturn-mister-core-optimizations-overcome-chock-full-fpga/ |

### 1.4 Saturn sizing gap (derived, needs measurement)

The DE10-Nano device `5CSEBA6U23I7` has 110K LE; 41,910 ALMs is Intel's published ALM count for that device but I
could not retrieve a page stating it (DigiKey confirms 110K LE only: https://www.digikey.com/en/products/detail/intel/5CSEBA6U23I7N/3929193).
99% of 41,910 is about 41,500 ALMs. That is 2.25x the Pocket. **No synthesis of Saturn_MiSTer on 5CEBA4 has been run.**
The PSX sizing recipe (Quartus 21.1 `quartus_map` on the core top without the MiSTer framework, Docker image
`raetro/quartus:21.1`, see FEASIBILITY.md "Reproduce") is the way to get the per-block table for Saturn
(`rtl/SH`, `rtl/Saturn/VDP1`, `VDP2`, `SCSP`, `SCU`, `SMPC`, `CD`, `rtl/ADSP_21xx`, `FX68K`).

---

## 2. Memory

All external chips hang off the core FPGA. Port lists: `apf-core-template/src/fpga/core/core_top.v:75-125`.

### 2.1 Chips

| Memory | Size / width | Part (if known) | Pins on core_top | Source |
|---|---|---|---|---|
| SDRAM | 512 Mbit = 64 MB, 16-bit, 4 banks, 13-bit row address, no chip-select pin (CS tied), separate `dram_dqm[1:0]` | Alliance `AS4C32M16MSA-6BIN` (-6 grade, 166 MHz class; CL3, burst length 2 used by PSX-Pocket) | `dram_a[12:0] dram_ba[1:0] dram_dq[15:0] dram_dqm[1:0] dram_clk dram_cke dram_ras_n dram_cas_n dram_we_n` | template `core_top.v:106-114` ("sdram, 512mbit 16bit"); `PSX-Pocket/scripts/pocket_native_sdram_io.tcl:1`; `PSX-Pocket/rtl/memory/psx_sdr_phy.sv:6`; `openfpga-AtariST/docs/architecture.md` "Memory" (AS4C32M16, no CS) |
| PSRAM / CellularRAM x2 (`cram0`, `cram1`) | each chip 128 Mbit = 16 MB, 16-bit, two 64 Mbit dies per chip (CE0#, CE1#). Total 32 MB | Alliance `AS1C8M16PL-70` | per chip: `a[21:16] dq[15:0] wait clk adv_n cre ce0_n ce1_n oe_n we_n ub_n lb_n` (low 16 address bits are multiplexed on DQ via ADV#) | template `core_top.v:75-101` ("two chips (64mbit x2 dual die per chip)"); `PSX-Pocket/rtl/memory/psx_psram.sv:4-6` |
| SRAM | 256 KB = 128K x 16 (17 address bits), asynchronous, UB/LB byte enables | not found | `sram_a[16:0] sram_dq[15:0] sram_oe_n sram_we_n sram_ub_n sram_lb_n` | template `core_top.v:117-124`. The template comment says "1mbit" but 17 address bits x 16 = 2 Mbit = 256 KB, matching https://en.wikipedia.org/wiki/Analogue_Pocket |
| Block RAM | 3.08 Mbit M10K + 303 Kb MLAB | | | 1.1 |
| Cartridge bus | 32-pin, 200 mA, switchable 3.3/5 V; level translators in banks 0-3; also usable as 16+ GPIO | | `cart_tran_bank0..3`, `cart_tran_pin30/31` | APF docs overview; template `core_top.v:213-230` |

The overview page says only "four independently addressable RAM chips" (https://www.analogue.co/developer/docs/openfpga/overview);
the official docs publish no part numbers, sizes, clock limits or latencies. Everything above except the pin list comes
from community source.

### 2.2 Speed

Part-number-level limits are from the cited datasheets as quoted in the repos; I did not open the datasheets.

| Memory | Reported limit | Realised in a shipped core | Source |
|---|---|---|---|
| SDRAM | -6 speed grade, CL3, tAC 5.5 ns max (PSX-Pocket) / 6.4 ns (AtariST constraints) | AtariST 96 MHz (`clk_96_sd` leads clk by 4.06 ns via DDIO); C64 64 MHz `clk64`; PSX-Pocket 125 MHz memory clock, controller at 62.5 MHz in half-rate with a DFI-style PHY (`psx_mem_clocks.sv`) | `openfpga-AtariST/docs/architecture.md` "SDRAM clock"; `openfpga-C64/docs/architecture.md`; `PSX-Pocket/rtl/memory/psx_mem_clocks.sv` |
| PSRAM, asynchronous mode | 70 ns access | one chip ganged 32-bit at 62.5 MHz: 7 cycles per access, about 36 MB/s (PSX-Pocket, agg23's controller). C64: 64-bit word as four 16-bit accesses = about 0.6 us (about 13 MB/s) | `PSX-Pocket/rtl/memory/psx_psram.sv:7-12`; `openfpga-C64/docs/architecture.md` "Memory" |
| PSRAM, synchronous burst | chip clock up to about 100 MHz (tACLK 9 ns, setup 3 ns, hold 2 ns); fixed-latency | PSX-Pocket runs both chips ganged as 32-bit, chip clock 33.87 MHz in `psx_vram_psram.sv` (LATENCY 3: first word 11 clk after request, then one word per 4 clk inside a 64-word segment); `prepare_pocket_early.py:124` also defines `104` MHz and `78` MHz PSRAM clock options | `PSX-Pocket/rtl/memory/psx_vram_psram.sv:1-90`; `PSX-Pocket/scripts/prepare_pocket_early.py:119-124,1195` |
| SRAM | asynchronous; speed not stated | not driven by C64/ST; the PCECD core used SRAM (changelog 0.2.0 "ram issue using SRAM") | PCECD README |

### 2.3 Bandwidth (derived, peak, before refresh and row-miss losses)

| Memory | Peak | Realistic |
|---|---|---|
| SDRAM, 16-bit at 100 MHz | 200 MB/s | the PSX study put VRAM traffic at 53% (flat fill) to 93% (textured) of one 16-bit SDRAM at 101.6 MHz (`PSX_MiSTer/docs/pocket/FEASIBILITY.md` "Memory layout"). Row misses add directly |
| SDRAM at 125 MHz | 250 MB/s | PSX-Pocket choice; v0.5.5 notes "Main memory and video memory are faster" yet "some games can still slow down" because "the Pocket's memory may answer more slowly than the PlayStation's own" |
| PSRAM pair ganged 32-bit, async | about 36 MB/s | PSX study measured DMA from PSRAM about 60-80 MB/s vs 135 MB/s on hardware (estimate, same doc) |
| PSRAM pair ganged 32-bit, sync burst at 67.7 MHz clock | up to about 270 MB/s raw (2 x 16-bit x 67.7 MHz) | first-word latency 11 clk at LATENCY 3; PSRAM segment must not hold CE# low over 4 us (tCEM) so bursts split at 64-word rows |
| SRAM | not characterised | small, asynchronous |

Contrast with Saturn_MiSTer's memory arrangement (local source):

- **SDRAM1 (128 MB module):** VDP2 VRAM through 4 parallel read ports (`VDP2_RA0/RA1/RB0/RB1`) and SCSP RAM
  (`Saturn_MiSTer/Saturn.sv:1239-1281`, `rtl/sdram1.sv`, "accessed at up to 128 MHz").
- **SDRAM2 (optional second module):** WRAM-H only (`Saturn.sv:1455-1480`, `rtl/sdram2.sv`).
- **HPS DDR3 (`rtl/ddram.sv`):** WRAM-H (single-RAM builds), WRAM-L + ROM + SRAM, VDP1 VRAM, VDP1 framebuffer
  overflow, CD RAM, CD buffer, cartridge RAM, BIOS, backup RAM (`Saturn.sv:1282-1420`).
- README hardware requirement: 128 MB SDRAM primary + secondary SDRAM 32-128 MB (`Saturn_MiSTer/README.md`).

The Pocket has no DDR3 and a single 64 MB SDRAM. Everything the MiSTer core puts in DDR3 or SDRAM2 has to move to
Pocket SDRAM, PSRAM or block RAM, and the VDP2's parallel-bank reads have to be time-multiplexed on one 16-bit bus.
The total capacity is not the issue (Saturn needs roughly 4-6 MB of RAM including WRAM 2 MB, VDP1 VRAM/FB 1 MB,
VDP2 VRAM 512 KB, SCSP 512 KB, CD DRAM/buffer, BIOS 512 KB); bandwidth and port multiplexing are.
(RAM sizes are Saturn hardware figures from the source address ranges above; the sum is my estimate.)

### 2.4 How the existing local cores drive memory

| Core | Controller | Notes | Path |
|---|---|---|---|
| C64 | MiSTer `sdram.v` at 64 MHz for the 64 MB SDRAM (low 32 MB used); `ddram_psram.sv` + agg23 `psram.sv` expose MiSTer's 64-bit DDRAM port on `cram0` in async mode for 1541 G64 images | DQM mapped to A12/A11 on MiSTer, separate pins here | `openfpga-C64/src/fpga/core/ddram_psram.sv`, `psram.sv`; `docs/architecture.md` "Memory" |
| AtariST | MiSTery `sdram.v` at 96 MHz; separate PLL output `clk_96_sd` for the SDRAM pin clock through `pin_ddio_clk` | no CS pin; phase tuned in `pll_st.v` by whole VCO steps of 162.33 ps | `openfpga-AtariST/docs/architecture.md` "SDRAM clock" |
| PSX-Pocket | `psx_mem_pocket` (4-port arbiter, 128-bit packets) over MIRLO64 `sdr_ctrl` + local `psx_sdr_phy`; PSRAM pair via agg23 async controller for main RAM or sync burst controller for VRAM; M10K for caches | most thoroughly documented Pocket memory subsystem | `PSX-Pocket/rtl/memory/*.sv`, `rtl/pocket/psx_main_memory.sv` |
| MegaCD-Pocket | SDRAM only; PSRAM, SRAM unused (tied off) | `megacd_top.sv` BIOS window is "plain SDRAM pass-through" | `MegaCD-Pocket/src/fpga/core/core_top.sv:262-290` |
| PCECD-Pocket | CRAM + SRAM (`rtl/CRAM`) | SRAM fixed a RAM issue in 0.2.0 | PCECD README, `src/fpga/core/rtl/CRAM` |
| Reusable IP | agg23's `psram.sv` ("supports synchronous access in async mode"), `data_loader.sv`, `data_unloader.sv`, `sound_i2s.sv`, `sync_fifo.sv` | `apf-ref-utils/README.md`; https://github.com/agg23/analogue-pocket-utils |

---

## 3. Bridge, data slots, target commands

### 3.1 Bridge bus

- The core FPGA talks to the Pocket OS through a 32-bit "BRIDGE" address bus synchronous to `clk_74a`
  (`bridge_addr, bridge_rd, bridge_rd_data, bridge_wr, bridge_wr_data, bridge_endian_little`), reached from the system
  FPGA over a single-lane SPI link (`bridge_spimosi, bridge_spimiso, bridge_spiclk, bridge_spiss, bridge_1wire`)
  (`apf-core-template/src/fpga/apf/apf_top.v:122-128,317-341`). The SPI clock is constrained at 74.25 MHz
  (`apf_constraints.sdc`), so the theoretical ceiling is about 9 MB/s (derived; no measurement found).
- Address map: `0xF8xxxxxx` is reserved for the host/target command engine; `0x10xxxxxx` is the template's example
  device window; everything else is yours (template `core_top.v:315-332`). Cores in this workspace pick
  `0x10000000` (C64/ST read buffers), `0x7000_0000`/`0x7200_0000` (MegaCD sector bank / cue parse buffer),
  `0x24000000` (PSX disc staging), `0x8000_00xx` (interact registers).
- `bridge_endian_little` selects word byte order; PSX-Pocket sets it to little-endian so file bytes arrive in RISC-V
  order; MegaCD-Pocket normalises both orders.

### 3.2 Data slots (`data.json`)

Source: https://www.analogue.co/developer/docs/core-definition-files/data-json and https://www.analogue.co/developer/docs/openfpga/overview

| Rule | Limit |
|---|---|
| Slots per core | 32 (the ID/size table at bridge `0xF8002000` holds 32 x 8 bytes) |
| Slot ID | 16-bit unsigned |
| `name` | 15 chars max |
| `filename` | 31 chars max |
| `extensions` | up to 4, each up to 7 chars |
| `size_exact`, `size_maximum` | 32-bit; non-zero `size_exact` rejects any other size |
| `address` | 32-bit load address (push-load only; ignored for `deferload`) |
| File size | up to 4 GB with 32-bit commands, larger via 48-bit commands (`0x0181`, `0x0185`) |
| `magic` | must be `APF_VER_1` |

Parameter bitmap: bit0 user-reloadable, bit1 core-specific folder, bit2 nonvolatile name cloned from slot 0, bit3
read-only, bit4 instance JSON, bit5 init nonvolatile to `0xFF`, bit6 reset core around load, bit7 restart core, bit8 full
reload, bit9 persist browsed filename, bits 25:24 platform index.

Other flags: `required`, `nonvolatile` (loaded at start, written back at exit/power-off/sleep), `deferload` (ID and size
published, data not pushed; the core reads on demand), `secondary` (only with a variant or instance).

Deferred loading: with `deferload`, the Pocket still writes ID and size into the table and sends `allcomplete`
(`0x008F`); a later user reload sends `0x008A` (Data slot update). Every local cores uses `deferload` for everything
that is read incrementally because the bridge "has no back-pressure" (`openfpga-AtariST/docs/architecture.md`).

Save files: `nonvolatile` slots live under `/Saves/<platform>/<Author.Core>/`; with bit2 the filename is slot 0's name
plus this slot's first extension (https://www.analogue.co/developer/docs/openfpga/directories-and-sd-folder-structure).
Nonvolatile sizes come from the core's ID/size table; flush on quit, power-off, sleep. A core may also resize via
`0x0192` (flag bit 1).

Instance JSON (a "game file" that binds many files to many slots): up to 32 slot entries, `data_path` and `filename`
255 chars, 32 `memory_writes` (https://www.analogue.co/developer/docs/core-definition-files/instance-json). PSX-Pocket and
MegaCD-Pocket both generate them or avoid them (see 6).

Filesystem: FAT32/exFAT not documented in the official pages. PCECD README says "FAT32 cards showed a lot of lag due to
an APF firmware bug, so exFAT is recommended" (https://github.com/RndMnkIII/openfpga-pcengine-cd_Analogizer, relayed by
search; also user forum text, treat as hearsay).

### 3.3 Host and target commands

Source: https://www.analogue.co/developer/docs/openfpga/host-target-commands (the handshake is three stages: command
`CM`/`cm`, busy `BU`/`bu`, done `OK`/`ok`, tags in the upper 16 bits).

Host to core (Pocket sends): `0x0000` status, `0x0010` reset enter, `0x0011` reset exit, `0x0080` slot read request,
`0x0082` slot write request, `0x008A` slot update, `0x008F` all slots complete, `0x0090` RTC, `0x00A0` savestate
start/query, `0x00A4` savestate load/query, `0x00B0` menu state, `0x00B1` cartridge adapter, `0x00B2` dock state,
`0x00B8` display mode.

Core to host (core sends), used for on-demand streaming:

| Code | Name | Parameters | Result |
|---|---|---|---|
| `0x0140` | Ready to run | 0 | none |
| `0x0180` | Data slot read | slot ID `[15:0]`, slot offset (32), BRIDGE address (32), length (32). Length `0xFFFFFFFF` = max legal | 0 ok, 1 slot undefined, 2 error/out of range |
| `0x0181` | Data slot read, 48-bit | word0 `[31:16]` = offset high, `[15:0]` slot; offset low (32); bridge addr; length | same |
| `0x0184` / `0x0185` | Data slot write (32/48-bit) | same layout | 0 ok, 1 undefined, 2 error |
| `0x0188` | Data slot flush | slot ID | 0 ok, 1 undefined |
| `0x0190` | Get filename of slot | slot ID, pointer to 256-byte struct | 0 ok, 1 undefined |
| `0x0192` | Open new file into slot | slot ID, pointer to 260-byte struct: 256-byte path under `/Assets/` or `/Saves/` + platform from core.json, flags (bit0 create, bit1 resize), size | 0 opened, 1 created, 2 undefined, 3 not found, 4 malformed path, 5 general error |

Notes from the doc: throughput, bus timing and maximum savestate blob size are "not specified". Path strings are 256
bytes null-terminated. Reads write into your bridge address space as `bridge_wr` cycles in your clk_74a domain.

### 3.4 Chip32

`core.json` `chip32_vm` names a Chip32 program (15-char filename) that "takes over all loading operations"
(https://www.analogue.co/developer/docs/core-definition-files/core-json). PSX-Pocket uses one for BIOS validation
(`PSX-Pocket/support/chip32/psx_bios_check.asm`). The MegaCD and PCECD cores do not use it; they use fabric FSMs or
soft CPUs for the real work.

### 3.5 Throughput evidence (nothing published, only indirect)

- No MB/s figure appears in the APF docs, agg23's wiki, or the repos I read.
- MPU template (author of PCECD): "the APF does time based checks on requests from the MPU/Target dataslots... Try and
  keep the transfer sizes below 32 Kbytes as the APF can change how much it sends if larger than this size". 8 KB swap
  buffer by default (`ref Analogue-MPU-Template/README.md`, https://github.com/Mazamars312/Analogue-MPU-Template).
- PCECD debug OSD shows "a delay counter when a delay happens from the APF framework", "most likely the APF or the SD
  card having an issue getting the data" (PCECD README). Default audio delay setting 954,000 cycles (74.25 MHz clock =
  12.8 ms) per the search-result summary of the README (unverified).
- MegaCD-Pocket sees a "Pocket firmware event" (plugging in USB power) that stops bridge servicing for "hundreds of
  ms", which starves a 4-sector prefetch bank and makes a streaming game (Silpheed) read-error. It added a
  stall-pause that freezes the emulated machine when the head sector is late by about 19.5 ms
  (`MegaCD-Pocket/src/fpga/core/megacd_cdd_drive.sv:574-582`, `megacd_top.sv:3449-3456`). Its openfile watchdog period is
  about 900 ms (`megacd_top.sv:1221`).
- Requirement for Saturn (derived): 2x speed = 150 sectors/s x 2,352 B = 352,800 B/s. One 2,352-byte read command
  per sector is the pattern both CD-class cores use. The only concrete number I can derive for per-command overhead is
  that the MegaCD stall threshold treats 19.5 ms as "far above any single fetch's normal round-trip".
- PSX-Pocket proves 150 sectors/s (PlayStation 2x) sustained with a prefetch ring of NBUF = 2/4/8 sectors; the build
  option exists "to ride out slow SD reads" (`prepare_pocket_early.py:291`). The default is 2 buffers.

A first task for the Saturn port should be a bench: issue `0x0180` reads of 2,352 B, 16 KB and 32 KB in a loop from a
cold file and a warm file, count `clk_74a` cycles to `done`. No one has published it.

### 3.6 JSON limits (what makes a core invalid)

The docs do not list rejection behaviour, only limits. Violating them risks the core not loading or fields being
dropped. All from https://www.analogue.co/developer/docs/core-definition-files/ pages.

| File | Limits |
|---|---|
| all | `magic` = `APF_VER_1`; files in `/Cores/AuthorName.CoreName/` matching `author`/`shortname` |
| `core.json` | `platform_ids` up to 4; `shortname` 31, `description` 63, `author` 31, `url` 63, `version` 31, `date_release` `YYYY-MM-DD`; `target_product` = "Analogue Pocket"; `version_required` string; `dock.supported` must be true; `cores` array up to 8 bitstreams (`name` 15, `filename` 15, bit-reversed `.rbf_r`); `chip32_vm` 15 chars |
| `data.json` | see 3.2 |
| `video.json` | `scaler_modes` max 8; `display_modes` max 16 (IDs from a fixed list); `rotation` 0/90/180/270; `mirror` bits |
| `input.json` | `controllers` max 4 (`type` = `default`); mappings max 8 per controller; `name` 19 chars; keys from a fixed list (A, B, X, Y, L, R, Start, Select) |
| `interact.json` | name 23 chars; `id` 16-bit unique; 16 `list` options; about 20 combined interact + user-reloadable-slot rows (extra reloadable slots are dropped past 4); persisted values written just before `0x0011` |
| `variants.json` | up to 8 variants, 8 `data_override`, 16 `memory_writes` each; marked upcoming |
| `audio.json` | `magic` only; marked upcoming |
| `info.txt` | up to 32 lines, no special characters |
| `instance.json` | see 3.2 |

The docs contain inconsistencies (sample files omit `shortname`, nest `dock` in `framework`; variants field names differ
between spec and sample), so copy a working shipped core's JSON rather than the spec text.

---

## 4. Video

### 4.1 Scaler limits

Sources: https://www.analogue.co/developer/docs/core-definition-files/video-json and agg23 wiki
https://github.com/agg23/analogue-pocket-utils/wiki/Video.

| Item | Value |
|---|---|
| Output format | 24-bit RGB + `video_de`, `video_vs`, `video_hs`, `video_skip`, `video_rgb_clock`, `video_rgb_clock_90` (same clock +90 degrees; must come from a PLL output, see C64 note below) |
| Resolution | 16 x 16 up to 800 x 720 (wiki); no maximum listed in the official page |
| Refresh | about 47 to 61/62 Hz (wiki gives both) |
| Pixel clock | about 1 MHz to about 50 MHz; exactly one clock per pixel (`video_skip` can drop clocks) |
| Sync | VS and HS are single-clock pulses; HS at least 3 clocks after VS; RGB must be 0 when DE is low |
| Panel | 1600 x 1440, 615 ppi, 3.5 inch (https://www.analogue.co/pocket) |
| Docked | HDMI scaler; `dock_aspect_w/h` per mode; Dock outputs 21-bit color, panel RGB565 (wiki) |

Saturn fit: 704 x 480 is under 800 x 720. Saturn pixel clocks are 26.9 MHz (320/640) and 28.6 MHz (352/704), under
50 MHz. Interlaced 640/704 x 480 must be woven into progressive 480-line frames; PSX-Pocket does exactly that ("480i
screens are always woven into full frames", v0.5.2 notes).

### 4.2 Declaring and switching modes

- `video.json` lists up to 8 `scaler_modes` (`width`, `height`, `aspect_w/h`, optional `dock_aspect_w/h`, `rotation`,
  `mirror`). Cores may switch between them at runtime (official page).
- Selection mechanism, as used by the shipped cores here: the core outputs a word on `video_rgb` during blanking.
  C64 places `{8'h00, slot, 13'h0}` on the first clock with DE low after each line (`openfpga-C64/docs/video.md`);
  agg23's wiki says the RGB values just before the first DE clock and just after the last configure the scaler. The
  official page does not state the encoding in the portions I could retrieve; copy `c64_video.sv` /
  `st_video.sv` and test.
- C64 declares 4 modes (382x270 53:40, 320x200 3:2, 404x250 40:33, 320x200 6:5). AtariST uses fixed windows per slot.
  PCECD declares 6 (256/360/512 widths x 224/240 heights, `aspect 128:105` and `64:49`).
- `video_rgb_clock_90` "must come from the PLL: the scaler samples the 12-bit DDR video bus on its edges, and a clock
  made in logic has no fixed phase, which garbles the whole picture" (`openfpga-C64/docs/architecture.md` "Clocks").
- A vsync in the middle of an hsync could hard-crash the scaler on firmware 1.1-beta-3 (wiki Video).
- The first 8-slot budget issue is already recorded by the local PSX study: "5 widths x 240/480i x NTSC/PAL must fit in
  8 APF scaler slots" (`FEASIBILITY.md` "Other blockers").

### 4.3 Saturn modes against 8 slots

Saturn output: widths 320/352 (low) and 640/704 (high), heights 224/240 (NTSC) or 224/240/256 (PAL) progressive,
448/480/512 interlaced (the VDP2 "double-density interlace"). That is more than 8 combinations, so either (a) bucket
heights (e.g., 240 and 480 containers with centred, blanked rows for 224/448), as PSX-Pocket does ("pictures narrower
than the screen are now centred", "Hide Overscan"), or (b) drop PAL variants into the same slots with the black borders
and a per-region aspect. This is my recommendation, not a documented rule. Rotation: Saturn needs none (`rotation: 0`).

### 4.4 Display modes (`display_modes`, up to 16)

IDs 0x10 (CRT Trinitron) to 0xE1 (Vacuum Fluorescent) are LCD/CRT filter presets; grayscale modes need a response
(host command `0x00B8` expects `0x444D`). Not relevant to Saturn except possibly `0x10`.

---

## 5. Audio, input, interact

### 5.1 Audio

- APF receives I2S, signed 16-bit stereo at 48 kHz; the core generates MCLK (12.288 MHz), `audio_lrck`, `audio_dac`
  (https://github.com/agg23/analogue-pocket-utils/wiki/Sound; template `core_top.v` "audio i2s silence generator").
  `audio.json` documents only `magic` and is marked "upcoming".
- Reusable module: `sound_i2s.sv` (`CHANNEL_WIDTH` 15/16, `SIGNED_INPUT`, FIFO sync), 75 ALMs + 1 M10K in the ST and C64
  fits.
- **Caveat for Saturn:** the SCSP runs at 44.1 kHz on MiSTer; the PSX study lists "SPU runs at 44.1 kHz, APF I2S at
  48 kHz" as a blocker (`FEASIBILITY.md`). Options: resample 44.1 to 48 in fabric, or clock the SCSP so its 44.1 kHz
  output is produced at 48 kHz (pitch error 8.8%, not acceptable), or generate `audio_lrck` at 44.1 kHz if APF tolerates
  it (not documented; test). CD-DA audio is also 44.1 kHz.

### 5.2 Input

- Up to 4 controllers via the Dock (`cont1_key..cont4_key`, `_joy`, `_trig`), per the template port list
  (`apf-core-template/src/fpga/core/core_top.v:190-215`):
  `key[0..3]` D-pad, `[4]` A, `[5]` B, `[6]` X, `[7]` Y, `[8]` L1, `[9]` R1, `[10]` L2, `[11]` R2, `[12]` L3, `[13]` R3,
  `[14]` Select, `[15]` Start, `[31:28]` controller type; `joy` = LX, LY, RX, RY (8 bits each); `trig` = L, R (8 bits
  each). The Pocket itself has D-pad, A/B/X/Y, L/R, Select/Start only; L2/R2/L3/R3/analog exist only on docked pads.
- Saturn pad needs A B C X Y Z L R Start: the Pocket's 8 buttons are fewer than the 3D-pad's 9 face/shoulder + Start,
  so a modifier scheme like PSX-Pocket's (hold Select + L/R, Select + face) is needed
  (https://github.com/GuardianSoul/openfpga-PlayStation README "Controls" and "Settings").
- Multi-player: 2 players on Saturn pads via cont1/cont2, plus multitap not needed; ST core consumes pads 1-2 for
  joysticks and pads 3-4 for keyboard/mouse (`openfpga-AtariST/docs/architecture.md` table); C64 uses 3-4 as the user-port
  4-player adapter (`openfpga-C64/docs/input.md`).
- `input.json` remapping is limited to 4 controllers x 8 mappings of fixed keycodes
  (https://www.analogue.co/developer/docs/core-definition-files/input-json). Anything beyond must be done in core logic.

### 5.3 interact.json

Source: https://www.analogue.co/developer/docs/core-definition-files/interact-json

- Types: `check`, `radio`, `slider_u32`, `list` (16 options), `action`, `number_u32`; 32-bit bridge `address` each;
  APF reads every element every frame and writes back (read-modify-write unless `writeonly`).
- `persist`: saved to `/Settings/<Author.Core>/Interact/interact_persist.json`, replayed to the core just before `0x0011`
  (Reset Exit).
- Per-asset menus are possible: `/Presets/<Author.Core>/Interact/<slot0 path>.json`.
- Local patterns: C64 uses `0x8000_0000 + 4n` registers, 16 entries including "Reset All Settings"
  (`openfpga-C64/docs/architecture.md` "Settings").
- Saturn menu content (region, cart type 1M/4M RAM, 6-button pad mapping, CD speed/timing, resolution mode, VDP1 mesh
  blur) must fit about 20 combined rows.

### 5.4 Dock, link port, cart bus

- Dock mode: `core.json` `dock.supported` must be true; host sends `0x00B2` when docked; `dock_aspect_*` per video mode.
  `analog_output` upcoming.
- Link port: `link_port: true` and `cartridge_adapter: 0` both required; usable to about 6 MHz (agg23 wiki IO). Saturn
  does not need it.

---

## 6. CD-streaming prior art

Summary of four implementations, all streaming raw 2,352-byte sectors out of data slots with `0x0180` reads.

| | PCECD-Pocket (Mazamars312) | MegaCD-Pocket (neutralinsomniac) | PSX-Pocket (GuardianSoul) | Saturn_MiSTer (reference, MiSTer) |
|---|---|---|---|---|
| Repo | https://github.com/Mazamars312/openfpga-pcengine-cd v0.2.3, 2024-09 (fork with Analogizer: https://github.com/RndMnkIII/openfpga-pcengine-cd_Analogizer) | https://github.com/neutralinsomniac/openfpga-megacd v0.3.7, 2026-08 | https://github.com/GuardianSoul/openfpga-PlayStation v0.5.5, 2026-10-19 | MiSTer-devel/Saturn_MiSTer |
| Drive speed | 1x (75 sectors/s) | 1x | 2x (150 sectors/s) | 2x |
| Sector read | RISC-V soft CPU ("MPU", VexRiscv, 74 MHz, about 64 KB RAM, 90% used) issues target reads through MMIO regs `0xFFFFFF80..90` (id, bridge addr, length, offset, control: read, write, 48-bit, flush, get-filename, open-file) | FPGA FSM in `megacd_top.sv`: `target_dataslot_read` of exactly 2,352 bytes into a 4-sector bank at bridge `0x7000_{slot}000`, 1 sector per request, 1,176 x 16-bit words delivered to the CDC in about 350 us | `psx_cd_stream.sv`: one `0x0180` read of 2,352 B per sector into a bridge window at `STAGING_BRIDGE + buf*4096`; NBUF = 2 default, 4 or 8 optional, N-1 sectors prefetched; seeks drop the prefetch | ARM (HPS) delivers sectors over `hps_ext`/ioctl; FPGA `HPS2CDD` consumes 1,176 words per sector |
| Buffer | two 8 KB caches (`MEM_BUFFER_SIZE_C`), transfers stay under 32 KB per template advice | 4 x 4 KB sector bank; mount parse buffer 16 KB at `0x7200_0000` | 2-8 x 2,352 B staging, `0x24000000` | 16K-byte CD buffer (`cdbuf_addr[13:1]`) in DDR3 |
| Latency / throughput measured | no MB/s published. Debug OSD shows a "delay counter" when APF is slow. Poll period 13.33 ms (16 ms while reading). Games fetch 120 (HuVideo) or 252 (Sherlock Holmes) sectors at a time | no MB/s published; stall detector triggers at about 19.5 ms without head sector; a firmware event stalls the bridge "hundreds of ms"; mount sizing costs about 20 round trips per bin (binary search for file size) | no MB/s published; works at 150 sectors/s on hardware | n/a |
| .cue / .bin handling | `.cue` parsed by C++ firmware on the soft CPU (`cdfw/drivers/cue/cue.cpp`, 839 lines, MiSTer-derived), reads the cue (slot 100), then asks APF to open each `.bin` into slots 101..; up to 99 bin tracks; sector size per track (2048/2352/2448) from `MODEi/NNNN`. CHD not supported (no CPU/RAM for it) | cue parsed in fabric (`megacd_top.sv` cue parser state machine, "up to 128 FILE entries", 99 tracks, 16 KB parse buffer) into a 66-bit/track table (disc LBA, file offset delta, pregap, audio flag, file index); the CDD (`megacd_cdd_drive.sv`) is a line-by-line port of Genesis Plus GX `cdd.c`; the core `openfile`s the sibling `.bin` by name into slot 2 | cue handled by SERV bit-serial RISC-V (16 KiB RAM, `rtl/pocket/cue_fw/cue_mount.c`) that does getfile / openfile / size table and writes a 400-word (1,600-byte) track table the MiSTer `cd_top` already expects. Alternatively a companion PC plugin/page generates a JSON instance file with one slot per track and a `.cue`-derived track table (`scripts/make_pocket_instances.py`, https://github.com/GuardianSoul/openfpga-PlayStation-plugin) | cue/TOC done on the ARM in Main_MiSTer; FPGA only sees 12-byte CDD commands and sectors |
| TOC | built by the soft CPU from the cue and answered to the PCE CD hardware model | built by the in-FPGA parser; the disc is declared absent until the TOC is final, because BIOS caches track LBAs (see the "THE DISC DOES NOT EXIST UNTIL ITS TOC IS FINAL" comment in `megacd_top.sv:4036`) | 400-word table per mount: PSX-Pocket's firmware or PC plugin writes it, hardware replays it into `cd_top` | n/a |
| Multi-track | `.bin` per track, 99 max (0.2.0 changelog) | `.bin` per track, or single bin | one `.bin` per track or one whole-disc `.bin`, up to 99 tracks; disc swap through a lid-open sequencer, `0x008A` slot updates | n/a |
| Audio | CD-DA through soft CPU buffer with an "Audio Delay" menu option; "Audio skipping may be a firmware issue" | CDDA paced from a DAC FIFO, no prefetch needed | XA/CDDA from the same reads; "clicks and crackle" fixed in 0.5.3 | |
| Notes | a "show of concept that the Pocket can do CDROM based cores" (README) | AI-assisted (README disclaimer), verified against a Genesis Plus GX simulator | AI-assisted (README), source tarball per release | |

Paths cited above: PCECD `src/cdfw/drivers/cue/cue.cpp`, `src/cdfw/drivers/apf/fileio.cpp:37-150`, `src/cdfw/app/pcecd.cpp`,
`dist/Cores/*/data.json` (slots 100 cue, 101 bin, 1 BIOS, 2 save, 3 MPU BIOS); MegaCD `src/fpga/core/megacd_top.sv:470-520,
580-700,1270-1290`, `megacd_cdd_drive.sv`, `dist/Cores/jeremy.MegaCD/data.json`; PSX
`rtl/pocket/psx_cd_stream.sv`, `psx_cue_mount.sv`, `psx_apf_target_arb.sv`, `support/pocket_psx_data.json`.

### 6.1 Other

- The MegaCD thread says the video of a Sega CD core "running on the Pocket" was posted 2026-07-24 on r/AnaloguePocket
  (https://www.timeextension.com/news/2026/07/sega-cd-shown-running-on-the-analogue-pocket) with the author "obrien654j".
  The reader-provided GitHub link was this repo; the article notes "good audio timing", "boot reliability issues",
  "FMVs stutter here and there".
- No PSX-Pocket or Saturn core exists in the MiSTer-style form on the Analogue Pocket in my search before PSX-Pocket;
  an earlier PSX effort by @pgate1 was early and slow (https://www.notebookcheck.com/Eine-Playstation-passt-offenbar-fast-in-den-FPGA-des-Analogue-Pocket.683132.0.html,
  2023-01-19).

### 6.2 What a Saturn port should copy

1. **Stream with `0x0180` reads of exactly one raw 2,352-byte sector into a small bridge window, one request per sector,
   with N-sector prefetch** (MegaCD 4, PSX 2-8). All three cores that work do this. Start with `NBUF >= 4` for Saturn
   (my recommendation, untested): MegaCD-Pocket's 4-sector bank still failed on a 78 ms bridge stall, so also do item 2.
2. **Add a stall-pause** like MegaCD-Pocket's: freeze the emulated machine when the head sector is late, release when it
   lands. APF-side stalls of hundreds of ms are real (USB power events).
3. **Parse the cue and build the TOC off the main FPGA path**, using the PSX approach (SERV RISC-V, 16 KiB RAM, C firmware,
   far smaller than a fabric FSM) or MegaCD's in-fabric parser. Do not do it in the Saturn datapath. Saturn_MiSTer expects the
   ARM to answer CDD commands (12-byte frames via `HPS2CDD`, `rtl/hps2cdd.sv`), so the Pocket side must provide those
   commands (seek, read TOC, status) and the track table.
4. **Declare the disc only when its TOC is final** (MegaCD lesson: the BIOS caches track starts, and probing file sizes
   costs about 20 round trips per bin). Prefer the data-slot size table for sizes (`0x2000` table; match by slot ID and
   take the next word) over probing; PSX-Pocket avoids probes with the generated table.
5. **Use a PC-side companion for instance JSON and a pre-built track table** (PSX-Pocket's plugin and
   `make_pocket_instances.py`). It removes cue parsing and file-size discovery from the console entirely for the common
   case and enables disc swap. Keep an in-console cue path as a fallback.
6. **Recommend exFAT** for the SD card (PCECD guidance).
7. **Use agg23's `sound_i2s.sv`, `sync_fifo.sv`, `psram.sv`**, MIRLO64's SDRAM controller as PSX-Pocket did.
8. **Plan on a data slot ID layout** that scales to 99 tracks and several discs (PSX-Pocket: `TRACK_STRIDE = 0x100`,
   `DISC_STEP`, `TABLE_OFFSET`, `LIBCRYPT_SLOT`), inside the 32-slot table limit (a 99-track disc cannot fit one slot per
   track in the 32-entry table, hence PSX-Pocket's one-file mode with a table file; see `psx_cd_stream.sv` header).
9. **Use SDRAM + PSRAM split like PSX-Pocket's layout**: SDRAM for the bandwidth-heavy video RAM, PSRAM pair ganged
   32-bit for CPU main RAM and BIOS, SRAM for small buffers and backup memory.

### 6.3 Risks seen in the prior art

- 0.2.3 PCECD notes: CHD is not supported; no CPU headroom.
- APF can change transfer sizes above 32 KB (MPU template).
- Backup RAM: MegaCD "SRAM Limitation Workaround" shows APF names saves after slot 0's filename; Saturn's internal backup (32 KB) and
  cartridge RAM (1 MB/4 MB) need `nonvolatile` slots with size limits (`size_maximum`).

---

## 7. Saturn on Pocket: what people have said (not facts)

None of these are primary statements about a Pocket Saturn port. I found no statement by srg320 / Sergiy Dvodnenko
about the Pocket. Searches of GitHub issues in `MiSTer-devel/Saturn_MiSTer` for "Pocket" returned only unrelated
"Pocket Fighter" and "Monster Slider" game issues (#480, #123, #225).

| Who | Date | Statement | Link | Reliability |
|---|---|---|---|---|
| Dvodnenko (srg320), reported by Sega Saturn Shiro | 2026-04 (article 2026-05-08) | On MiSTer: "There isn't any free space." "If I can't find a way to free up space, I'll have to remove some features." Dual-RAM core at 98% and single-RAM 99% of the DE10-Nano ALMs; April updates broke both nightlies; Zet-sensei: "We are in a dire situation." Article does not mention the Pocket. | https://www.segasaturnshiro.com/2026/05/08/saturn-mister-core-optimizations-overcome-chock-full-fpga/ | secondary source (news article quoting Discord) |
| Anonymous forum commenter | on the 2022 Saturn MiSTer announcement | "it could be ported to the Analogue Pocket, but I'm also not sure if that's feasible" | https://ui.lemm.ee/post/11382500 (not reachable from this host; text from a search summary) | unverified |
| GBAtemp poster | 2023 | A thread on Analogue 3D cores claims the 3D's FPGA could "likely handle up to the Saturn" and is about three times the size of both Pocket chips together. Speculation about the 3D, not the Pocket. | https://gbatemp.net/threads/analogue-3d-cores.677439/ (HTTP 403 here; summary from search) | unverified |
| Notebookcheck (Andreas Sebayang) on @pgate1's early Pocket PSX | 2023-01-19 | Cyclone V "49,000 LE... ist der Platz jedenfalls knapp"; Felix Jones (@Xilefian) doubts a full implementation is possible. About PSX, not Saturn. | https://www.notebookcheck.com/Eine-Playstation-passt-offenbar-fast-in-den-FPGA-des-Analogue-Pocket.683132.0.html | secondary |
| 2023 review | 2023 | "tops out at 16-bit consoles... no PlayStation or Saturn cores" | https://forums.somethingawful.com/showthread.php?threadid=4041002 (from search summary) | outdated: PSX-Pocket now exists |
| MegaCD-Pocket reader comments | 2026-07-24 | the long-standing assumption that the Pocket could not run a Sega CD core | https://www.timeextension.com/news/2026/07/sega-cd-shown-running-on-the-analogue-pocket | secondary |
| Local project study | 2026-10-07 | PSX would need about 22.6K ALMs trimmed / 19.3K rewritten vs 18,480; "No-go as a port, marginal maybe as a rewrite" | `/Users/adelvecchio/Documents/workspace/PSX_MiSTer/docs/pocket/FEASIBILITY.md` | own estimate; contradicted by PSX-Pocket existing (see section 0) |

What is actually known about feasibility:

- Fact: PlayStation, which needs 26-31K ALMs on MiSTer, has a working Pocket core (PSX-Pocket) that reaches roughly
  99.9% of the Pocket's LABs.
- Fact: Saturn_MiSTer is itself at 98-99% of a device 2.2x larger, and the maintainer is already removing features.
- Unknown: how many ALMs Saturn_MiSTer needs per block after tying off optional parts, and whether SCU DSP, VDP1, VDP2,
  SCSP, two SH-2 and the 68000 can be serialized to about 18K. Nobody has published this. It requires a measured
  sizing run (see 1.4) before committing.

## 8. Open questions to close before design

1. Per-block ALM/M10K/DSP of Saturn_MiSTer on 5CEBA4F23C8 (`quartus_map`, Quartus 21.1, in the style of the PSX study).
2. APF data slot read throughput and per-command latency for 2,352 B and 16 KB (bench on hardware).
3. Whether 44.1 kHz `audio_lrck` is accepted by the APF audio path.
4. How the scaler slot word on `video_rgb` is encoded exactly (official page not retrieved; copy `c64_video.sv`).
5. Whether PSRAM synchronous burst mode is reliable at 78 and 104 MHz (PSX-Pocket has option flags for both).
6. Serialization budget for the two SH-2s (`rtl/SH`), SCU DSP (`rtl/ADSP_21xx`), VDP1/VDP2, SCSP, 68EC000 (`rtl/FX68K`).
