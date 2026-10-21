# Saturn_MiSTer architecture, for the Analogue Pocket port

Source: `/Users/adelvecchio/Documents/workspace/Saturn_MiSTer` at `9aa9449` (MiSTer-devel/Saturn_MiSTer).
Read-only analysis; no code was changed. Paths below are relative to that repo unless prefixed `docs/`.

Conventions: "verified" statements come from reading the cited lines. Anything marked **ESTIMATE** is arithmetic
from verified numbers plus an assumption; anything marked **GUESS** is not backed by code I read. Pocket hardware
numbers are taken from `docs/pocket-platform.md` (another agent's work, not re-verified here).

Notation: `Saturn.sv` is the board top (`module emu`, repo root). `core/Saturn.sv` means `rtl/Saturn/Saturn.sv`
(system top, `module Saturn`). `ddram`, `sdram1`, `sdram2` are in `rtl/`.

Two facts that change the framing of the task:

1. The Saturn core does **not** implement the CD drive mechanism. The CD *block* (SH-1 running Sega firmware plus
   the YGR019 gate array) is in the FPGA, but the CD *drive* (CDD: seek, TOC, status packets, sector reads from
   .cue/.chd) is emulated by the ARM (Main_MiSTer, not in this repo). A Pocket port must re-implement that in logic
   (section 5).
2. "128 MB + a second SDRAM" is a README requirement, not something the RTL needs. SDRAM1 addresses under 2 MB
   and the second module is an optional, compile-time-selected home for WRAM-H only (sections 2 and 4).

---

## 0. Top-level structure

```
HPS (ARM)  --hps_io/EXT_BUS-->  emu (Saturn.sv)  --> Saturn (core/Saturn.sv)
DDR3 (HPS) <-- ddram.sv ------------+                |-- MSH, SSH   2x SH7604   (SH/SH7604)
SDRAM1     <-- sdram1.sv -----------+                |-- SCU (+DSP) , DCC (bus decode)
SDRAM2     <-- sdram2.sv (optional)-+                |-- VDP1, VDP2
                                                     |-- SCSP + fx68k (68000 sound CPU)
                                                     |-- SMPC (HMCS400 LLE + smpc.mif) / SMPC_HLE (ST-V)
                                                     |-- SH-1 (SH7034, cdb105m.mif) + YGR019  (CD block)
                                                     `-- CART (A-bus) / STV_CART
```

- CPU topology: SSH's bus is the external-master input of MSH (`core/Saturn.sv:369-378`), and the SCU's external
  bus drives SSH's external-master input (`core/Saturn.sv:438-448`). Everything ends on one bus, `MEM_A[24:0]`
  (`core/Saturn.sv:677-686`), decoded by DCC into `ROM_CS_N`, `SRAM_CS_N`, `RAML_CS_N` (=`DRAMCE_N`), `RAMH_CS_N`
  (=`MSHCS3_N`). So WRAM-H, WRAM-L, BIOS and backup RAM each see exactly **one** requester at a time (MSH, SSH or SCU
  DMA, arbitrated inside the SH7604 BSC / SCU).
- The SH-2 instances are configured `UBC_DISABLE=1, SCI_DISABLE=1, BUS_SIZE_BYTE_DISABLE=1,
  BUS_AREA_TIMIMG={RAMH_SLOW,3'b111}` (`core/Saturn.sv:342,412`).

---

## 1. Clocks

### 1.1 PLL outputs

The core has one PLL (`rtl/pll.qip` via `sys/pll_q17.qip:1`; the `pll.v`/`pll.qip` at the repo root are an older
leftover without reconfig ports and are not referenced). It has exactly two outputs, both from one fractional-N VCO
fed by `CLK_50M`:

| Output | Name | Default | Runtime value | Runs |
|---|---|---|---|---|
| `outclk_0` | `clk_sys` | 57.272799 MHz | 57.2728 / 53.7482 / 56.875 / 53.375 MHz | all core logic: SH-2s, SCU, VDP1/2, SCSP, fx68k, SH-1, SMPC, CD glue, video pixel pipeline, hps_io |
| `outclk_1` | `clk_ram` | 114.545598 MHz (exactly 2x) | 2x the above | `sdram1`, `sdram2`, `ddram`, and two small blocks in `Saturn.sv` (VDP1 external-FB FSM `1577-1669`, `ramh_din/ramh_wr` regs `1293-1297`) |

Defaults: `rtl/pll/pll_0002.v:26-37`. Instance: `Saturn.sv:390-400`. `clk_ram` is the same VCO divided by half
the `clk_sys` divider (the four `in_clk` constants below imply C0=8, C1=4; ESTIMATE from the arithmetic, the
reconfig only writes M and K). There is **no clock-domain crossing logic** between `clk_sys` and `clk_ram`: they
are phase-aligned synchronous clocks and signals cross directly (for example `Saturn.sv:1254-1278`). A Pocket port
must produce an exactly 2:1, aligned pair or add proper CDC.

The PLL is **dynamically reconfigured** (`pll_cfg`, `Saturn.sv:402-467`): on PAL change, `SMPC_DOTSEL` change or
reset it writes M (address 4, `32'h00000404` or `32'h00020504`) and fractional K (address 7), then starts
(address 2). Decoded: VCO = 50 MHz x (8.6 | 9.1636 | 8.54 | 9.1) and clk_sys = VCO/8:

| Mode | clk_sys (`in_clk`, `Saturn.sv:681-684`) | dot clock = clk_sys/8 | VDP2 VRAM slot period |
|---|---|---|---|
| NTSC, 320 wide (DOTSEL=0) | 53,748,200 Hz | 6.72 MHz | 148.8 ns |
| NTSC, 352 wide (DOTSEL=1) | 57,272,800 Hz | 7.16 MHz | 139.7 ns |
| PAL, 320 | 53,375,000 Hz | 6.67 MHz | 149.9 ns |
| PAL, 352 | 56,875,000 Hz | 7.11 MHz | 140.7 ns |

Other PLLs (`pll_hdmi`, `pll_audio`, `pll_cfg`) belong to the MiSTer `sys/` framework and are not part of the core.
`CLK_VIDEO = clk_sys` and the pixel enable is `DCLK` (`Saturn.sv:1908,1980`).

### 1.2 Clock-enable scheme

Everything is one clock domain gated by enables. All enables are single-`clk_sys`-cycle pulses.

| Enable | Rate | Generated by | Used by |
|---|---|---|---|
| `SYS_CE_R` / `SYS_CE_F` | clk_sys/2 = 28.64 MHz (NTSC 352) | `MCLK_DIV` toggle, `Saturn.sv:676-679` | both SH7604, SCU, DCC, VDP1, VDP2, CART/A-bus, YGR019 host side, SMPC glue: the "CKIO" of the 28.6 MHz bus |
| `DOT_CE_R` / `DOT_CE_F` | clk_sys/8 (every 4th `CE_R`, offset 2 apart) | `DOTCLK_DIV`, `rtl/Saturn/VDP2/VDP2.sv:207-220` | VDP2 pixel/VRAM slot pacing; exported as `DCE_R/DCE_F` to VDP1 (erase/read pacing, `VDP1.sv:129`) and to `sdram1.sync` (`Saturn.sv:1256`). `DCLK = DOT_CE_R | (DOT_CE_F & HRES[1])` doubles in hi-res |
| `SCSP_2X_CE` | 45.1584 MHz | `CEGen` from `in_clk`, `Saturn.sv:687-696` | divides further |
| `SCSP_CE` | 22.5792 MHz | `SCSP_2X_CE` /2, `Saturn.sv:698-703` | SCSP; inside SCSP, `CLK_DIV` gives 11.2896 MHz `SCCE_R/F` for fx68k and `CYCLE_NUM` (`SCSP.sv:186-207`) |
| `SMPC_CE` | 4.000 MHz | `CEGen` chained on `SCSP_2X_CE`, `Saturn.sv:705-714` | SMPC (HMCS400), HPS2PAD |
| `CD_CE` | 40.0 MHz, SH-1 = 20.0 MHz | `CEGen` chained, `Saturn.sv:716-725`; `SHCE_R/F` from `SHCLK` toggle, `core/Saturn.sv:1105-1111` | SH-1 and YGR019 SH-side |
| `CDD_2X_CE` | 176.4 kHz | `CEGen`, `Saturn.sv:727-736` | drains the 18-bit CD FIFO: one 16-bit word per 2 CEs at 1x (88.2 kHz), per CE at 2x (`hps2cdd.sv:225-249`) |
| `CE32K` | SMPC_CE/122 = 32.8 kHz | `core/Saturn.sv:693-713` | SMPC RTC tick |

`CEGen` (`rtl/CEGen.vhd`) is a numerically controlled oscillator: each `IN_CE` adds `OUT_CLK` to an accumulator and
emits `CE` when it reaches `IN_CLK`. `IN_CLK` is a runtime integer, so the SCSP/SMPC/CD enables track the PLL
reconfiguration automatically. The SH-2/VDP2 enables do **not** go through `CEGen`; they are hard-wired
divisions of `clk_sys`, which is why the PLL is reconfigured instead of using a fixed clock plus CEs.

A Pocket port that wants a fixed PLL would have to re-derive `SYS_CE`/`DOT_CE` fractionally (they feed bus timing
and the SDRAM slot sync), a larger change than keeping PLL reconfiguration. GUESS: Cyclone V fractional PLL
reconfig should work on the Pocket FPGA (same family); not verified.

---

## 2. Memory inventory

Size, width, MiSTer placement, controller, access pattern. "DDR3 off." = byte offset inside the 0x30000000 DDR3
window (`ddram.sv:970`, `DDRAM_ADDR = {5'b00110, ram_address[26:3]}`; `ram_address` is a byte address with bit 0
dropped). Offsets are from the `ram_address` literals in `ddram.sv:556-822`.

### 2.1 Main memories

| Region | Size | Width | MiSTer placement and controller | Access pattern | Refs |
|---|---|---|---|---|---|
| BIOS ROM | 512 KB | 32 (SH-2 bus), stored 16 | DDR3 off. `0x000000`; `raml` channel (reads), `bios` channel (writes from download) | read-only after load; reads through a **single 32-byte** cache line shared with WRAM-L; instruction fetch from BIOS is cached by SH-2 caches | `Saturn.sv:1297,1286-1288`, `ddram.sv:636-660,808-822` |
| WRAM-L (low) | 1 MB | 32 bus, 16-bit stored | DDR3 off. `0x200000`; `raml` channel | random 16/32-bit R/W from MSH/SSH/SCU DMA; typically sound drivers, data. 1-entry 32 B read cache, write-through single-beat | `Saturn.sv:1297`, `ddram.sv:636-660` |
| WRAM-H (high), single-SDRAM build | 1 MB | 32 | DDR3 off. `0x300000`; `ramh` channel: strict-priority-first, 4-entry LRU read cache of 32 B lines (burst 4x64 b), 8-deep posted write FIFO, **first 4 KB mirrored in M10K** (`ddr_ram #(10)`) | the hot memory: code, stacks, game data; both CPUs and SCU DMA; burst line fills (16 B SH-2 lines), SCU DMA bursts | `ddram.sv:126-131,258,276-278,311-346,556-608,859`, `Saturn.sv:1317-1328` |
| WRAM-H, dual-SDRAM build | 1 MB | 16 on chip, 32 logical | **SDRAM2 bank 0**, `sdram2.sv`, only 1 bank used; CL3, burst-2, 4 CAS per 16 B line | same, fixed latency, no wait handshake (`RAMH_SLOW=0`), critical-word-first reads, optional 2-line burst for SCU DMA (`RAMH_BURST`) | `Saturn.sv:1455-1482,1317-1321`, `sdram2.sv:134-299` |
| Backup RAM (internal) | 32 KB real; image is 64 KB (data on low byte, `FF` in the high byte) | 8 | DDR3 off. `0x100000`; `bsram` channel; accessed by the SH-2 as `SRAM_CS_N` through the `raml` channel; saved/loaded by sector through `tmpram` | tiny, sporadic | `ddram.sv:783-807`, `Saturn.sv:1297,1413-1414` |
| Backup cartridge RAM | up to 1 MB image | 8 in 16 | aliased onto the cart region base (DDR3 off. `0x4000000`, `bsram_addr[20]=1`) | tiny | `ddram.sv:785,799`, `Saturn.sv:1413` |
| VDP1 VRAM | 512 KB | 16 | DDR3 off. `0x400000`; `vdp1vram` channel: posted write FIFO (8), **1 KB read cache** (128 x 64 b) with burst length `VDP1_VRAM_BLEN` | CPU/SCU writes of command tables and textures; VDP1 reads command table (16 words), color lookup (16), gouraud (4), then texel streams as bursts up to `ORIG_WIDTH` words | `ddram.sv:661-684,864`, `VDP1.sv:2027-2102` |
| VDP1 framebuffer 0 and 1 | 2 x 256 KB logical (512x256x16 each) | 16 | **split**: columns 0..351 in M10K (`vdp1_fb_352x256x16`: 90,112 words = 176 KB each, 352 KB total), columns >= 352 in DDR3 (FB0 `0x480000`, FB1 `0x4C0000`) | per-dot display read, per-dot erase write, random pixel draw R/M/W, CPU access. Roles swap each frame; each FB has a **single** accessor at a time | `Saturn.sv:1513-1681`, `rtl/vdp1_fb.sv`, `ddram.sv:685-708`, `VDP1.sv:127-144` |
| VDP2 VRAM A0, A1, B0, B1 | 4 x 128 KB = 512 KB | 32 per bank per slot | **SDRAM1**: bank 0 = A0 (half 0) + A1 (half 1), bank 1 = B0 + B1; `sdram1` slot-synchronous 16-cycle frame | 4 independent random 32-bit reads per 139.7 ns slot (one dot), plus 64-bit CPU writes through a write FIFO into idle slots | `Saturn.sv:1240-1280`, `sdram1.sv:231-318`, `VDP2.sv:1044-1290,1470-1478` |
| VDP2 CRAM | 4 KB (2 x 1024 x 16, true dual port) | 16 | M10K (`VDP2_PAL_RAM` pal1, pal2) | read by the pixel pipeline every dot (colour lookup, 2 copies for dual reads), CPU R/W | `VDP2.sv:3561-3600`, `VDP2_mem.sv:1-75` |
| VDP2 line buffers | none | | VDP2 renders as a streaming pipeline; no line/frame buffer memory in `VDP2.sv`/`VDP2_mem.sv` (only the CRAM and an 8-entry x 36-bit write FIFO in MLAB) | | `VDP2_mem.sv:77-157` |
| SCSP sound RAM | 512 KB | 16 | **SDRAM1 bank 2** ("ch2"): `sdram1.sv:178-211` | one 16-bit access every other SCSP memory half-slot: <= 5.64 M accesses/s; PCM sample reads, DSP ring buffer, 68K, SCU DMA; **no ready handshake** (`SCSP_RAM_RDY` is connected but unused inside `SCSP.sv`) | `Saturn.sv:1274-1279`, `SCSP.sv:1497-1558,1613-1620` |
| CD block DRAM | 512 KB | 16 | DDR3 off. `0x800000`; `cdram` channel (32 B read cache, single-beat writes, handshake `CD_RAM_RDY`) | SH-1 firmware buffer management + YGR019 data/DMA | `ddram.sv:609-634`, `core/Saturn.sv:1156,1212-1218` |
| CD sector buffer | 4 x 4 KB slots (only 2352 B used per slot) = 16 KB | 16 | DDR3 off. `0x1000000`; `cdbuf` channel (read-only for the FPGA; the **ARM writes it**) | one sector (1176 words) read sequentially per sector, 75-150 sectors/s | `ddram.sv:709-720`, `hps2cdd.sv:141-205` |
| Cartridge ROM/RAM | ROM 2 MB; DRAM 1 MB / 4 MB / 6 MB-dev (8 MB window); backup 1 MB | 16 | DDR3 off. `0x4000000` upward (`cart` channel, 32 B cache); `CART_MEM_A` is a 25-bit word address | A-bus reads/writes with `AWAIT_N` handshake; sporadic | `CART.sv:35-39,87-98`, `ddram.sv:721-745` |
| SMPC | ROM 2K x 10 (`smpc.mif`, HMCS400 firmware), small regs (IREG 8x8, OREG 32x8, ERAM 16x4, RAM 16x4) | | M10K/MLAB | microcontroller-rate | `HMCS400_mem.sv:72-100`, `SMPC.sv:773-950` |
| SH-1 ROM+RAM | 64 KB single block (16K x 32): firmware `rtl/cdb105m.mif`; 4 KB SH7034 RAM at the `0xE` page | 32 | M10K, init from `.mif` | SH-1 code fetch and stack | `core/Saturn.sv:1113`, `SH1.sv:174-241` |
| SH-2 caches (x2) | per CPU: 4 KB data (4 x 1024 x 8), 4 x 64 x 19-bit tags, valid, LRU, plus 2 x (16 x 32) register-file RAMs | | M10K + MLAB | every CPU cycle | `SH/SH7604/CACHE.sv:135-194`, `SH7604_mem.sv`, `SH_mem.sv` |
| SCU DSP RAMs | program 256 x 32 (1 KB); data 4 x 64 x 32 (1 KB); CBUS DMA cache 8 x 32 | | M10K/MLAB | DSP-rate | `SCU/DSP.sv:502-517,627`, `SCU/RAM.sv:180-200`, `SCU.sv:318` |
| SCSP internal | slot/phase/LFO/envelope RAMs (32 deep), DSP: MPRO 128 x 64, TEMP 128 x 32, MEMS 32 x 32, COEF 64 x 16, MADRS, MIXS, EFREG, stacks; about 4 KB total (ESTIMATE) | | M10K/MLAB | SCSP-cycle rate | `SCSP.sv:2156-3100` (instantiations `354-2109`) |
| fx68k microcode | microrom 1024 words, nanorom 336 words | | M10K | 68K | `rtl/FX68K/microrom.mem`, `nanorom.mem` (line counts) |
| VDP1 misc | color table 16 x 16, pattern FIFO, gouraud/command regs | | MLAB | | `VDP1.sv:2554,2716,2798` |
| CD data FIFO | 64 x 18 | 18 | M10K (`scfifo`) | 88-176 kHz words | `hps2cdd.sv:253-304` |
| Backup transfer buffer `tmpram` | 512 B | 16 | M10K dual-port | per 512-byte save sector | `Saturn.sv:1794-1807` |
| Read-cache RAMs inside `ddram` | ramh 128 B, cdram/raml/vdp1fb/cdbuf/cart 32 B each, vdp1vram 1 KB, bsram 16 B | 64 | M10K (`ddr_cache_ram2`) | | `ddram.sv:859-870` |

Total sizes ESTIMATE: Saturn base RAM that must exist somewhere is about 5.3 MB (BIOS 0.5, WRAM 2, VDP1 VRAM 0.5,
VDP1 FB 0.5, VDP2 VRAM 0.5, SCSP 0.5, CD DRAM 0.5, backup 0.06, CD buffer 0.02) plus 0-8 MB for a cartridge.
M10K usage excluding the VDP1 framebuffers is roughly 100-110 KB (SH-1 64 KB dominates; ESTIMATE). With the
framebuffers (352 KB) it is about 460 KB, versus 3.08 Mbit (385 KB) of M10K on the Pocket FPGA
(`docs/pocket-platform.md:49`). So the framebuffers cannot stay in block RAM.

### 2.2 ST-V only (not in the console build)

ADSP-2181 for the Acclaim RAX board: program 16K x 24 (48 KB), data 16K x 16 (32 KB)
(`rtl/ADSP_21xx/ADSP_2181.sv:166,189`), instantiated only through `STV_CART`. 93C45 EEPROM image in DDR3 off.
`0x2000000` (`ddram.sv:748`), RAX ROM at DDR3 off. `0x6000000` (`ddram.sv:759,773`), cart up to 32 MB.
`ADSP_21XX_mem.sv` is therefore dead logic in the console build (the `CART` module does not instantiate it).

### 2.3 DDR3 channel arbitration (`ddram.sv`)

One request at a time, strict priority evaluated in state 0 (`ddram.sv:556-822`): ramh write FIFO, ramh read lines
0-3, cdram write/read, raml write/read, vdp1vram write/read, vdp1fb write/read, cdbuf read, cart write/read,
(ST-V eeprom/rax), bsram write/read, bios write. Reads wait for `DDRAM_DOUT_READY` bursts (state 2); writes are one
beat (`ram_burst=1`). Per-channel `*_busy` signals are the handshake. This structure (per-channel tiny caches in
front of a single backend) is the thing a PSRAM-based Pocket backend would replace.

---

## 3. Bandwidth

Reference rates: `clk_sys` 57.27 MHz and `clk_ram` 114.55 MHz (NTSC 352). Raw SDRAM1 data bus = 16 bit x 114.55 MHz
= 229 MB/s. All numbers scale down about 6% in 320 mode.

### 3.1 SDRAM-resident (MiSTer)

**VDP2 VRAM (4 banks), the hardest requirement.**
- The VRAM read strobes are issued once per dot slot at `DOT_CE_F` (`VDP2.sv:1044-1051`, fixed rate 1 per 8 clk_sys
  regardless of hi-res: hi-res just uses T0-T3, `VDP2.sv:667`).
- Each slot, each of A0/A1/B0/B1 can carry an independent 32-bit random read (pattern name, cell/bitmap character,
  vertical-scroll, rotation parameter/coefficient, back/line colour, line scroll, window table fetches;
  `VDP2.sv:1044-1290`). The cycle-pattern registers (`CYCA0..CYCB1`) decide which banks do something in which T slot;
  `VRAM_A/B_ALLOW` fills idle ones with CPU reads/writes (`VDP2.sv:1196-1289`).
- `sdram1` reads **both** 32-bit words of the A pair (A0 and A1) whenever `RA_RD` is raised and both of the B pair
  whenever `RB_RD` is raised (the strobe is OR'ed across each pair, `VDP2.sv:1599,1605`; `sdram1.sv:170-176`), so
  traffic is 8 B per active group, 16 B per slot when both A and B are active.
- Peak: **114.5 MB/s (352) / 107.5 MB/s (320)**, i.e. 50% of the raw 16-bit SDRAM data bus at `clk_ram`; it is the
  sustained rate whenever both groups fetch every slot. IDEA: exporting the four individual `VRAMxx_RD` flags (they exist internally,
  `VDP2.sv:170`) would let a Pocket controller skip unused banks.
- CPU side: 64-bit writes (8 byte-enables) once per VRAM write-pending slot; SCU DMA to VDP2 VRAM can run at the
  B-bus rate (up to 16 bit per 28.6 MHz cycle = 57 MB/s upper bound, ESTIMATE) but is throttled by the 8-entry write
  FIFO (`VDP2_mem.sv:77`).
- Latency: the pipeline assumes data a fixed number of slots after the address. `sdram1` reaches this with
  `st_num` reset to 8 on each dot (`sdram1.sv:164-166`). This is a hard real-time schedule, not a request/ready
  interface.

**SCSP RAM (SDRAM1 bank 2).** One access per `CYCLE1_CE` = 5.645 M/s (`SCSP.sv:197-207,1497-1558`): <= 11.3 MB/s,
random 16-bit. The SCSP samples `RAM_Q` one memory period after it presents the address (`SCSP.sv:1613-1620`):
latency budget about 180-270 ns (ESTIMATE), and `RAM_RDY` is not used. `sdram1` takes one `ch2` access per 8
`clk_ram` cycles (`sdram1.sv:184`), so up to 14.3 M accesses/s of capacity versus 5.6 M/s needed.

**WRAM-H (dual-SDRAM build only).** The SH-2 external bus is 32-bit at 28.64 MHz: peak 114.5 MB/s for a burst
streaming one long per clock (ESTIMATE from `SYS_CE` and bus width); sustained is a function of cache miss rate and
SCU DMA, typically far lower (GUESS: tens of MB/s). `sdram2` line read: 16 B in 10-11 `clk_ram` cycles (~90 ns,
~180 MB/s ceiling); write: one 32-bit write in 6 cycles (`sdram2.sv:195-198`).

### 3.2 DDR3-resident (MiSTer)

| Memory | Peak | Sustained (ESTIMATE) | Notes |
|---|---|---|---|
| WRAM-H (single-SDRAM build) | 114 MB/s bus rate, limited by DDR3 line-fill latency | 10-40 MB/s | 4 x 32 B cache lines + 4 KB BRAM mirror; writes posted via 8-deep FIFO. Runs with `RAMH_SLOW=1` (see section 4) |
| WRAM-L + BIOS | same bus | a few MB/s | 1-line cache is the weak spot (`ddram.sv:359-366`) |
| VDP1 VRAM reads | up to 28.6 M words/s (one 16-bit texel per VDP1 clock, upper bound) | 5-30 MB/s depending on texture format (4-bit to 16-bit) | bursts with `BLEN`, 1 KB cache |
| VDP1 VRAM writes (CPU/DMA) | 57 MB/s B-bus bound | bursty | posted FIFO |
| VDP1 FB x>=352 only | pixel rate | tiny: only sprites that draw past column 351 hit DDR3 | `Saturn.sv:1518-1519` |
| CD DRAM | <= 10 MB/s (SH-1 16-bit at 20 MHz) | 1-3 MB/s | |
| CD sector buffer | 0.35 MB/s (2352 B x 150/s) | same | |
| Cart | A-bus rate | sporadic | |

### 3.3 Block-RAM-resident traffic that must go off-chip on the Pocket

| Memory | Traffic | Source |
|---|---|---|
| VDP1 FB display read | one 16-bit read per dot = 14.3 MB/s (352); rotated modes read in non-raster order | `VDP1.sv:1790-1801` |
| VDP1 FB frame erase | one 16-bit write per dot = 14.3 MB/s; **VBlank erase one write per `CE_R` = 57 MB/s** while erasing | `VDP1.sv:129,1766-1789` |
| VDP1 FB drawing | random 16-bit R/(M)/W, FSM-bound at 1 access per 2 clk_sys = up to 28.6 M/s; actual rate depends on the drawing engine (not measured) | `VDP1.sv:2198-2264` |
| VDP1 FB CPU access | single 16-bit R or W per CPU access | `VDP1.sv:2199-2257` |

### 3.4 Concurrency requirements

| Concurrent accessors | Verdict |
|---|---|
| VDP2 A0, A1, B0, B1 in the same 140 ns slot | **Required.** 4 independent row opens + 8 data words in one slot. MiSTer uses 2 SDRAM internal banks (A and B) and two ACT/READ pairs per bank per slot. |
| VDP2 slots + SCSP RAM | Overlap in time (SCSP is asynchronous to the dot slot); `sdram1` schedules the SCSP ACT/CAS in free command slots of bank 2 (`sdram1.sv:222-259`). They can share **one** SDRAM chip, but only because the schedule is hand-built. |
| VDP2 + WRAM-H | Overlap. MiSTer avoids sharing a controller (SDRAM2 or DDR3). Interleaving WRAM-H line reads (8 data cycles per 16 B) into the VDP2 frame's idle half (about 8 of 16 data cycles, minus SCSP) is possible on paper but needs a joint cycle-exact scheduler (ESTIMATE). |
| MSH, SSH, SCU DMA on WRAM | Not concurrent: one bus, arbitrated upstream. |
| VDP1 display FB (read + erase) vs draw FB (draw + CPU) | Two memories active at once, one per FB. Perfect fit for **two physical memories**, one FB each. |
| VDP1 VRAM reads vs FB writes | Both active during drawing: two memories/channels. |

Conclusion: VDP2 VRAM cannot live in PSRAM (an async access is about 70 ns, `docs/pocket-platform.md:126`, so 4
random reads in 140 ns is impossible even with both chips) or in block RAM (512 KB > 385 KB). It must be on the
Pocket's SDRAM with a slot-synchronous scheduler like `sdram1`. SCSP RAM can share that SDRAM exactly as in MiSTer.
Everything else must go to PSRAM/BRAM/SRAM.

---

## 4. Why MiSTer wants 128 MB + a second SDRAM

What the code says (verified):

- `README.md:5-8`: "128 MB SDRAM Module (Primary)", "SDRAM Module of any size (32MB-128MB) (Secondary)",
  "Dual SDRAM modules is recommended for better compatibility."
- SDRAM1 uses **three** SDRAM internal banks and never more than about 1.25 MB of address space: banks 0/1 hold
  256 KB each (`{2'b00, half, addr[16:1]}`, `sdram1.sv:233-248`), bank 2 holds SCSP RAM, 512 KB
  (`sdram1.sv:224-229`, `ch2addr[19:1]`). Nothing in `Saturn.sv` or `sdram1.sv` depends on module size
  (`sdram_sz` is plumbed to `hps_io` and not used, `Saturn.sv:267,318`). The 128 MB figure is therefore a
  compatibility/timing statement about modules, not a capacity need (GUESS: it is about the tested module timing, CL3
  at 114.5 MHz).
- The second SDRAM (SDRAM2) holds **only WRAM-H** (1 MB, bank 0), `Saturn.sv:1455-1482`, `sdram2.sv`.

What happens with one module: it is a **build-time** switch, not runtime detection.

- `MISTER_DUAL_SDRAM` is defined only by `sys/sys_dual_sdram.tcl:51`, which is sourced by `Saturn_DS.qsf:61` and
  `STV_DS.qsf`. `Saturn.qsf`/`STV.qsf` do not define it, giving two different bitstreams.
- Without it (single-SDRAM, the `Saturn.sv:1317-1328` `else` branch): WRAM-H is routed to DDR3 (`ramh` channel),
  `RAMH_SLOW=1` is passed to the core (`Saturn.sv:739-743`), and the OSD shows "Timing: Original/Fast" (`Saturn.sv:205-207,488-492`).
- `RAMH_SLOW=1` changes behaviour in two places: (a) `BUS_AREA_TIMIMG[3]` makes the SH7604 BSC honour the memory
  `WAIT_N` for area 3 (`BSC.sv:251,356,402`) instead of assuming fixed SDRAM timing; (b) the SCU DMA stops
  emulating the SDRAM page-boundary RAS penalty and burst continuation (`SCU.sv:1664-1668,1692,1742-1746`).
  In other words, `RAMH_SLOW=0` is the cycle-accurate-ish fixed-latency mode that needs a real SDRAM-like WRAM-H
  (SDRAM2), and `RAMH_SLOW=1` is the "wait for the memory" mode that tolerates DDR3 latency but diverges from
  original timing (the "better compatibility" gap).
- `FAST` (OSD `status[28]`, `Saturn.sv:489`) additionally removes SH-2 bus wait counters and SCU delays
  (`BSC.sv:303,399,448`, `DCC.sv:105`, `SCU.sv:1698,1751,2928`); it is forced to 0 in the dual build.

Porting consequence: the single-SDRAM build is the right starting point for the Pocket (it already runs on a
memory with DDR3-like, handshake-based latency, and works for most games). WRAM-H on the Pocket's SDRAM
(sdram2-style) would need the VDP2 schedule to share the chip (section 7).

---

## 5. HPS (ARM) dependencies

### 5.1 CD image delivery (the large one)

Components: `HPS2CDD` (`rtl/hps2cdd.sv`), `hps_ext` (`rtl/hps_ext.v`), the `cdd_download` / `cdboot_download` ioctl
channels (`Saturn.sv:342-343`), and the DDR3 sector buffer. `S0,CUECHD,Insert Disc` (`Saturn.sv:137`) is handled
entirely by Main_MiSTer: the FPGA never sees the file (drive 0 of `sd_*` is tied off, `Saturn.sv:306-311`; only
`img_mounted[1]` for the save file is consumed, `Saturn.sv:1702`).

What Main_MiSTer does (INFERRED from the FPGA side; Main_MiSTer is **not** in this repo, so protocol details beyond
what the RTL shows are GUESS): opens .cue/.chd, builds the TOC, plays the role of the CDD micro-controller that
the SH-1 firmware talks to, reads sectors, writes them into the DDR3 sector buffer, and tells the FPGA.

**Command/status channel (`EXT_BUS`, `hps_ext.v:21-102`):**

- `CD_GET` = command `0x34`: returns word0 = 8-bit `cd_req` counter (increments each time the FPGA toggles
  `cd_in[96]`, i.e. each new host command), then 6 words = `cd_in[95:0]` = the 12 bytes `HOST_COMM[0..11]` just
  received from the SH-1 (`hps_ext.v:68-85`, `hps2cdd.sv:66`).
- `CD_SET` = command `0x35`: HPS sends 6 words = `cd_out[95:0]` = 12 bytes of `CDD_STAT`; when `io_enable`
  drops after a `0x35` command the FPGA toggles `cd_out[96]` (`hps_ext.v:57-62`), which latches the packet and starts
  the exchange (`hps2cdd.sv:51-58`).
- Exchange on the wire to the SH-1 (`hps2cdd.sv:44-129`): the FPGA emulates the CDD end of the serial link:
  `CD_COMSYNC_N` low for the first byte, byte clock = SH-1 `CD_COMCLK`, `CD_COMREQ_N` handshake, `0x3FF`-`clk_sys`
  gap (about 18 us) between bytes. Full duplex: 12 bytes CDD->host (`CDD_STAT`) while 12 bytes host->CDD
  (`HOST_COMM`) are shifted in. The packet is 12 bytes in this implementation (`hps2cdd.sv:38-39`); checksum
  handling is not visible in the RTL (GUESS: contained in the bytes the ARM produces/consumes).
- Direction of control: **the ARM starts every exchange** (it pushes a status packet; the SH-1's command comes back
  during the same exchange and is then fetched with `CD_GET`). Real hardware pushes status at a fixed rate
  (GUESS: every 13.3 ms, 75 Hz; the Pocket references use 13.33 ms for PCE/MegaCD, `docs/pocket-platform.md:408-420`).

**Sector data channel:**

1. The ARM writes the 2352-byte raw sector into the DDR3 sector buffer, 4 slots of 4 KB at DDR3 off. `0x1000000`
   (`ddram.sv:711`, `CD_BUF_ADDR = {BUF_N[1:0], word_addr ^ 3}`, `hps2cdd.sv:205`).
2. The ARM then does an ioctl download with index `[5:2]==2` (`cdd_download`, `Saturn.sv:342`); only its first
   16-bit word is consumed (`hps2cdd.sv:159-171`). The word is a
   header: bit0 = 2x speed, bit1 = audio sector, bits[5:4] = slot number (`hps2cdd.sv:159-166`). Two header slots
   (`SPEED/AUDIO/BUF_N/PEND[2]`) allow one pending sector.
3. After the download ends the FPGA reads **1176 words = 2352 bytes** (`hps2cdd.sv:199`) into an 18-bit x 64 FIFO
   (`CDFIFO`) and presents them to the YGR019 as `CD_D/CD_CK/CD_AUDIO` at 88.2 kHz words (1x) or 176.4 kHz (2x)
   (`hps2cdd.sv:225-249`).
4. **Sector size: 2352 bytes of main channel. Subcode is not transferred** (the FIFO carries no subcode; any
   Q-channel/position data the firmware needs must come inside the status packets; GUESS).
5. **TOC**: no TOC data exists on the FPGA side; the firmware asks the "drive" for it through the same 12-byte
   packets, so Main_MiSTer must synthesise the TOC responses from the cue/chd.
6. Disc-header snooping (`cdboot_download`, index `[5:2]==3`, `Saturn.sv:343,496-535`): the ARM sends the first bytes
   of the first data sector as an ioctl download; the core captures `game_id` (bytes 0x20-0x2F), the area symbol
   (byte 0x40), the cartridge-request word at 0x100 (`0xA102` -> DRAM 1M, `0xA103` -> DRAM 4M), and flags
   `T-16804G` for a DeZaemon 2 patch (`dezaemon2_hack`, `Saturn.sv:514,1294`). This drives "Cartridge: Auto" and
   "Region: Auto".
7. CD audio: audio sectors go through YGR019 into SCSP external input `ESL/ESR` (`core/Saturn.sv:1031-1032`).

**What a Pocket equivalent must provide:**

| Need | Pocket form |
|---|---|
| Raw 2352-byte sectors on demand | core-issued APF data-slot reads (`0x0180`, 2352 B per request at LBA x 2352 + file offset), into a 2-4 slot staging buffer (BRAM 16 KB or the 256 KB SRAM), 1x/2x = 75/150 sectors/s. Prior art streams exactly this way (`docs/pocket-platform.md:408-420`). |
| CDD behaviour: 12-byte status/command packets, seek/play/pause/read/TOC commands, 75 Hz status cadence | Must be an FPGA state machine or soft CPU. Main_MiSTer's logic is the specification but is not available here. MegaCD-Pocket/PCECD-Pocket/PSX-Pocket show three ways to do it. |
| TOC, multi-track, pregap, data vs audio track, sector size per track | Parsed from .cue **by someone**: options (a) an in-FPGA cue parser (MegaCD style), (b) a soft CPU (PCECD style), (c) **a PC-side packaging tool** that emits a binary TOC data slot next to the .bin (PSX-Pocket style, simplest for the FPGA). Recommendation: (c) with one data slot per track bin or a single concatenated image. |
| `cdboot_download` bytes | The core can read sector 0 itself once the first sector is available, or the tool puts the 0x120 header bytes in the TOC slot. |

### 5.2 BIOS and cartridge load

`FS2,BIN,Load bios` and `FS3,BIN,Load cartridge` (`Saturn.sv:138-139`). `ioctl_index[5:2]==0`, `[1:0]==2` is
BIOS, `==3` cartridge (`Saturn.sv:337-338`). Writes go to the DDR3 `bios` channel with `IO_ADDR = cart_download ?
{1'b1,ioctl_addr[25:1]} : {8'b0,ioctl_addr[18:1]}` (`Saturn.sv:1286-1288`), i.e. BIOS at offset 0 (512 KB), cart at
the cart base. `ioctl_wait` is held while `bios_busy` (`Saturn.sv:1283-1285`): flow control the Pocket bridge must
replace with a FIFO or fast enough destination. The end of a download pulses `rst_ram` and resets the system
(`Saturn.sv:471-486`).

### 5.3 Backup RAM save/load

`S1,SAV,Mount Backup RAM` is virtual drive 1; the core issues sector reads/writes (`sd_rd/sd_wr`, `sd_lba`,
`sd_buff_*`; 512-byte blocks, `hps_io.sv:35` default `BLKSZ=2`). State machine `Saturn.sv:1715-1787`, buffer
`tmpram` `1794-1830`. Image layout (derived from `Saturn.sv:1413-1414,1713`): sectors 0..127 = 64 KB internal backup
RAM (data on the low byte, `FF` on the high byte, `1419-1423`); if the cart type is BACKUP, sectors 128..2175
(1 MB) are the cartridge RAM. `sav_pending` (internal or backup-cart write seen, `Saturn.sv:1685-1707`) drives
`LED_USER` and the autosave: `bk_save_a = autosave & OSD_STATUS` saves when the OSD is opened (`1709`). Pocket
equivalent: a nonvolatile data slot (64 KB or 1.06 MB) written via `0x0184`-style target writes or host reads on
exit (`docs/pocket-platform.md:239-242`), with `sav_pending` as the "dirty" flag.

### 5.4 Pads and input (`hps2pad.sv`)

`HPS2PAD` emulates the SMPC PIO ports (`PDR1/PDR2/DDR1/DDR2`) for pad types (`hps2pad.sv:108-116`): 0 Digital,
1 Virtual light gun, 2 Wheel, 3 Mission stick, 4 3D pad, 5 Dual mission stick, 6 Mouse, 7 Keyboard, 8 Off. It
consumes 14-bit digital `joystick_0/1` (`Saturn.sv:542-545`), 8-bit analog `joyN_x0/y0/x1/y1`, `ps2_mouse` (25 b +
16 b ext), `ps2_key` (11 b), and light-gun triggers. SNAC (`status[27]`) passes the MiSTer user port through
(`Saturn.sv:551-561`). For the Pocket: map `cont1/cont2` (buttons + sticks) to `joystick_*`; keep Digital, 3D pad and
maybe Mouse (as a stick); drop Wheel/Mission/Keyboard/Virtual light gun (minimal build).

### 5.5 Other HPS-fed inputs

- `RTC` (65 bit) into SMPC `EXT_RTC` (`Saturn.sv:326`, `core/Saturn.sv:774`): Pocket has a host RTC message
  (`0x0090`, `docs/pocket-platform.md:229`).
- `status[127:0]` OSD bits (below), `status_menumask` (`Saturn.sv:332-334`), `buttons`, `forced_scandoubler`.
- `EXT_BUS` command `0x34/0x35` only for CD (`hps_ext.v:40-41`).

### 5.6 OSD options the core reads (non-STV)

| Bit(s) | Option | Used at |
|---|---|---|
| `status[0]` | Reset | `Saturn.sv:469,753` |
| `[23:21]` | Cartridge: Auto/ROM 2M/DRAM 1M/DRAM 4M/DRAM 6M DEV/BACKUP/None | `360-363` |
| `[35:33]` | Region: Japan/Taiwan/USA/Brazil/Korea/Asia/Europe/Auto | `529-535`; PAL = area >= 0xA (`1867`) |
| `[26]`, `[25]`, `[24]` | Autosave, Save Backup RAM (button), (load flag, no menu entry) | `1686-1688` |
| `[28]` | Timing Original/Fast (single-SDRAM build only) | `489` |
| `[31]` | Blurred VDP1 mesh | `493` |
| `[32]` | SMPC time-set (STV path; no menu entry) | `819` |
| `[27]` | Pad 1 SNAC | `551` |
| `[18:15]`, `[45:42]` | Pad 1 / Pad 2 type (9 types) | `1059-1060` |
| `[46,47,49:48]`, `[57,58,60:59]` | Light gun P1/P2: XY control, buttons, crosshair | lightgun blocks |
| `[76]` | Swap joysticks | `1047-1048` |
| `[63:62],[11],[10]` | Aspect ratio, 320x224 aspect, (arc) | `44-90` |
| `[29]`, `[50]`, `[64]`, `[81:80]`, `[54:51]`, `[56:55]` | Deinterlace bob, composite blend (cofi), H crop, V crop, crop offset, scale | video section |
| `[4]` "Reset on insert" | not read by the FPGA (handled by Main_MiSTer) | |

All video/scaler options are MiSTer framework features (`video_freak`, `cofi`, `video_mixer`) and are unnecessary
on the Pocket, where the APF scaler is used.

---

## 6. Options and optional blocks

| Switch | Where | Effect | Minimal-build verdict |
|---|---|---|---|
| `STV_BUILD` | `STV.qsf:58`, `STV_DS.qsf:58`, `Saturn.sv` throughout | ST-V arcade: no CD (SH-1, YGR019, CD RAM, `hps2cdd`, cdbuf), `SMPC_HLE` instead of the HMCS400 SMPC, `STV_CART` (315-5881, 315-5838, sanjeon decryption, Batman RAX with ADSP-2181), `STVIO`, 93C45 EEPROM, bios select | drop entirely |
| `MISTER_DUAL_SDRAM` | `sys/sys_dual_sdram.tcl:51` | SDRAM2 for WRAM-H, `RAMH_SLOW=0`, no Fast option | not applicable; decide the WRAM-H policy (section 7) |
| `LIGHT_SATURN` | `Saturn.qsf:59`, `STV.qsf:59`, `VDP2_pkg.sv:13-17` | `TVMD_MASK` 0x81F3 (drops `HRESO[2]`; GUESS: that bit selects the exclusive-monitor/31 kHz modes); used by the shipped builds | keep (smaller) |
| `DEBUG` | `Saturn_Q13.qsf:43`; `Saturn.sv:98-102,1375-1380,1570,1912,2031-2076` | keyboard debug (F1-F11 layer/sound toggles, pause), disables light gun, cart channel, external VDP1 FB | drop |
| `SATURN_FULL_FB` | `Saturn.sv:1514-1545` | would use full 512x256 FBs in BRAM; `vdp1_fb_512x256x16` is **not defined anywhere** in the tree, so this is dead code | ignore |
| `MISTER_DISABLE_ALSA/ADAPTIVE` | `Saturn.qsf:57-58` | MiSTer framework only | n/a |
| Parameter `RAMH_SLOW` | `core/Saturn.sv:2`, `SCU.sv:2` | see section 4 | choose 1 |
| SH7604 params `UBC_DISABLE`, `SCI_DISABLE`, `BUS_SIZE_BYTE_DISABLE` | `core/Saturn.sv:342,412` | already trimmed | keep |
| Input `FAST` | `core/Saturn.sv:161` | skip bus wait counters | optional |
| Input `BLUR_MESH` | `VDP1` | cosmetic mesh blur | could be dropped (GUESS) |
| `SCRN_EN`, `SND_EN`, `DBG_*` | `Saturn.sv:2022-2029` | constant when not `DEBUG` | prune |
| Light gun (2x `lightgun.sv`), mouse (`ps2mouse.sv`), keyboard (`ps2keyboard.sv`), SNAC | `Saturn.sv:1077-1204`, `hps2pad.sv` | pad types 1,2,3,5,6,7 | drop for a first build |
| `cofi` composite blend, `video_freak`, H/V crop, `jtframe_resync` | `Saturn.sv:1912-2020` | cosmetic | drop |
| `dezaemon2_hack` | `Saturn.sv:497-514,1294` | one-game patch on the WRAM-H write path | optional |
| Cartridge types | `CART.sv:35-39` | ROM 2M, DRAM 1M, DRAM 4M, DRAM 6M dev, BACKUP | keep None, DRAM 1M/4M (ram carts are required by several games), BACKUP; drop 6M DEV; ROM 2M only if a game list needs it (GUESS) |
| ADSP-2181 / `ADSP_21XX_mem.sv`, `rtl/Saturn/STV/*` | | only reachable from `STV_CART` | not in the console netlist |
| `status[28]` Fast timing | | | optional |

Shipped firmware that is part of the bitstream (not user-supplied): `rtl/cdb105m.mif` (SH-1 CD block firmware,
Sega-derived, 64 KB block), `rtl/Saturn/SMPC/smpc.mif` (HMCS400 SMPC firmware), `rtl/stv_eeprom.mif`
(`core/Saturn.sv:715,1113`). Distribution/licensing of these needs a decision (the Saturn BIOS itself is user
supplied).

---

## 7. Pocket porting implications

### 7.1 Starting point

Use the **single-SDRAM build topology** (`RAMH_SLOW=1`, all of `ddram.sv`'s clients on slower memory with
`busy` handshakes) with VDP2 VRAM + SCSP RAM on the Pocket SDRAM through a retargeted `sdram1.sv`. This keeps the one
hard real-time schedule (VDP2 slots) on the fast memory and moves everything that has a ready handshake to PSRAM.
Reference points: MiSTer's own single-SDRAM mode already runs the CPU memories behind a DDR3 backend whose latency is
worse than PSRAM's (GUESS: DDR3 over the HPS bridge is far slower than a 70 ns PSRAM access; not measured here).

### 7.2 Proposed memory map

Pocket resources (from `docs/pocket-platform.md:47-50,109-112`): SDRAM 64 MB, 16-bit, 4 banks; 2 x PSRAM 16 MB
16-bit (async 70 ns random, or sync burst up to about 100 MHz); SRAM 256 KB async 16-bit; M10K 385 KB.

| Pocket memory | Contents | Size | Controller / notes |
|---|---|---|---|
| **SDRAM BA0** | VDP2 VRAM A (A0 then A1) | 256 KB | `sdram1.sv` frame schedule, retargeted: same bank/half mapping, row `a[19:9]`, col `a[8:1]` |
| **SDRAM BA1** | VDP2 VRAM B (B0 then B1) | 256 KB | same |
| **SDRAM BA2** | SCSP RAM | 512 KB | `ch2` path of `sdram1.sv` |
| SDRAM BA3 | spare (possible fast WRAM-H, see 7.3) | 1 MB | |
| **PSRAM0** ("CPU side", handshake) | BIOS 512 KB @0x000000; backup RAM image 64 KB @0x080000; WRAM-L 1 MB @0x100000; WRAM-H 1 MB @0x200000; cartridge window up to 8 MB @0x400000; backup-cart 1 MB @0xC00000 | about 11.6 MB | `raml`, `ramh`, `cart`, `bsram`, `bios` channels of `ddram.sv`, backend replaced by a PSRAM controller. Keep the 4-line WRAM-H cache and the 4 KB BRAM mirror. Gang both PSRAM chips 32-bit if sync-burst is used (`docs/pocket-platform.md:127,137`) |
| **PSRAM1** ("video/CD side") | VDP1 VRAM 512 KB @0x000000; VDP1 FB0 256 KB @0x080000, FB1 256 KB @0x0C0000 (full 512x256 each); CD block DRAM 512 KB @0x100000; CD staging 32 KB @0x180000 | about 1.5 MB | `vdp1vram`, `vdp1fb`, `cdram`, `cdbuf` channels |
| **M10K** | SH-2 caches, VDP2 CRAM, SH-1 mem (shrink to 32 KB ROM + 4 KB RAM if possible), SCU DSP, SCSP internals, fx68k ROMs, ddram caches, WRAM-H first 4 KB | about 100-110 KB (ESTIMATE) | the VDP1 FB columns 0..351 (352 KB) from MiSTer cannot stay here |
| **SRAM 256 KB** | CD sector staging (4 x 4 KB), or the 64 KB backup image | 16-64 KB | async, handshake-free; frees PSRAM1 cycles |
| APF data slots | BIOS, cartridge, backup, TOC/disc images (.bin per track) | | host-side |

Alternative for the framebuffers (needs a decision after measuring the draw rate): put FB0 in PSRAM0 and FB1 in
PSRAM1 so the display FB (sequential read + erase burst) and the draw FB (random access) land on different chips, or
keep **one** 176 KB FB in M10K (fits in 385 KB with the rest) and the other in PSRAM, accepting that its role
alternates each frame.

### 7.3 WRAM-H policy

- Baseline: PSRAM, `RAMH_SLOW=1`, handshake. Lowest risk of the schedule, same compatibility class as MiSTer's
  single-SDRAM build.
- Upgrade: fixed-latency WRAM-H on SDRAM BA3 using `sdram2.sv`'s access pattern (plain 16-bit SDR, CL3, burst 2),
  scheduled into the idle half of the VDP2 frame. Gains compatibility ("recommended" in the README); costs a
  joint scheduler. Evaluate only after the baseline runs.

### 7.4 Riskiest items (ordered)

1. **Logic capacity.** `docs/pocket-platform.md:33,92-94` estimates the MiSTer core at about 41,500 ALMs against
   18,480 on the Pocket (2.25x) and notes no synthesis on the 5CEBA4 has been run. This is outside the memory
   analysis but dominates feasibility. Two SH-2 + SCU DSP + VDP1 + VDP2 + SCSP DSP + fx68k + SH-1 + HMCS400 are all
   full-rate. Note: an untracked `Saturn_MiSTer/sizing/` directory (not created by this analysis; a partially
   complete Quartus map run for `5CEBA4F23C8`) shows someone is measuring it.
2. **VDP2 4-bank slot schedule on one 16-bit SDRAM.** It needs 8 data words + 4 row opens in 139.7 ns. At
   `clk_ram` 114.5 MHz that is the 16-cycle frame of `sdram1.sv`; at 100 MHz the frame is 14 cycles and the existing
   schedule (which uses all 16) does not fit (ESTIMATE: about 12-14 cycles is the floor with CL3, burst-2).
   Timing closure of the SDRAM pin timing on a -C8 device at this rate is unknown. The controller also refreshes
   **only in frames with no VDP2/SCSP request** (`sdram1.sv:247`); a Pocket controller must guarantee refresh
   (at least every ~7.8 us) independently.
3. **Block RAM.** 352 KB of VDP1 FB + about 110 KB of everything else exceeds 385 KB. Forces FB to PSRAM, which
   brings risk 4.
4. **VDP1 framebuffer bandwidth/latency in PSRAM.** Per-dot display read (14.3 MB/s) + per-dot erase write (14.3
   MB/s, 57 MB/s in VBlank erase) + random pixel draws, all 16-bit. Async PSRAM at 70 ns random is about 14 M
   accesses/s per chip (`docs/pocket-platform.md:126`); one FB per chip plus line buffering of the display read and
   burst erase are required. Rotated-FB display modes (`TVM=010/011`) read in non-raster order (`VDP1.sv:1790-1792`).
5. **CD drive emulation without an ARM.** The CDD protocol (12-byte packets, command set, status cadence, TOC,
   pregap, subcode-derived position data) is not in this repo (it lives in Main_MiSTer). It has to be
   re-derived/re-implemented from the SH-1 firmware's behaviour; prior Pocket CD cores are reference points. Plus
   2x sector rate (150/s) from APF reads whose latency is unpublished (`docs/pocket-platform.md:36`).
6. **Clocking.** Phase-aligned 2:1 `clk_sys`/`clk_ram`, dynamic reconfiguration between 4 frequencies, `CEGen`
   running off a runtime `in_clk`. Timing closure at 57 MHz for the SH-2/VDP pipeline on a -C8 device.
7. **SCSP RAM has no ready handshake** and needs data within about one SCSP memory period; sharing the SDRAM with
   VDP2 keeps it deterministic only if the scheduler stays slot-locked.
8. **WRAM-H timing fidelity** in `RAMH_SLOW=1` mode (compatibility, not correctness; mirrors MiSTer's own
   single-SDRAM limitations).
9. **Bridge flow control** replacing `ioctl_wait` for BIOS/cart writes, 74.25 MHz bridge to `clk_sys`/`clk_ram`
   crossings (not present anywhere in the current design).
10. **Content/licence**: embedded SH-1 and SMPC firmware images.

### 7.5 What carries over mostly unchanged

SH7604/SCU/DCC/VDP1/VDP2/SCSP/fx68k/SH-1/YGR019/CART RTL (all memory touch points are the narrow channel ports
listed in section 2), `CEGen`, `hps2pad`, the backup-RAM state machine (replace `sd_*` with APF target commands),
`sdram1.sv` (pin/timing retarget) and the channel structure of `ddram.sv` (replace the 64-bit DDR3 beat backend).
Must be replaced: `hps_io`/`EXT_BUS`/`hps2cdd` (by an APF data loader plus a CDD emulator), video output chain
(`video_mixer`, `cofi`, `video_freak`), PLL reconfig plumbing, `sys_top`.

---

## 8. Unverified or guessed (summary)

- Everything about Main_MiSTer's behaviour (CDD command set, status cadence, TOC synthesis, checksum, how it
  writes the DDR3 buffer): inferred from the FPGA side only.
- Sustained (not peak) bandwidth for WRAM, VDP1 and CD: estimates; no simulation or measurement was done.
- VDP1 pixel-draw rate: only the FSM bound (1 per 2 clk_sys) is verified.
- Why the README asks for 128 MB: not in the code.
- `clk_ram` = VCO/4 and `clk_sys` = VCO/8: derived from the `in_clk` constants and the reconfig values, not from the
  PLL netlist.
- All Pocket memory figures: quoted from `docs/pocket-platform.md`, not re-verified.
- Logic (ALM) and M10K totals for the Pocket: not measured here.
