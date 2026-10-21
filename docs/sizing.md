# Saturn_MiSTer sizing for the Analogue Pocket FPGA

Source: MiSTer-devel/Saturn_MiSTer `9aa9449`. Target: Cyclone V E **5CEBA4F23C8**
(18,480 ALMs, 308 M10K, 66 DSP blocks). MiSTer's 5CSEBA6U23I7 has 41,910 ALMs.

## Verdict

**Does not fit, by a wide margin.** The system top `Saturn` (everything except the MiSTer framework and the
external RAMs) needs about **28,800 ALMs = 156% of the Pocket FPGA** at synthesis. Tying off every option the
top exposes to a constant removes only ~70 ALMs, so there is no "just drop the options" path. M10K (about 106 of
308) and DSP (29 of 66) are not the problem; ALMs and registers are.

## Method

- Tool: Quartus Prime 21.1.1 Lite via `raetro/quartus:21.1` (amd64 emulation), `quartus_map` only (Analysis &
  Synthesis, no fit). `NUM_PARALLEL_PROCESSORS 1`. About 21-23 min per run, no synthesis errors.
- Top level: `rtl/Saturn/Saturn.sv`, module `Saturn`. Sources: `FX68K`, `SH7604`, `SH7034` qips (SH core shared),
  `ADSP_2181.qip` (listed but not instantiated by this top, so it costs nothing), `Saturn.qip` (SCU, SCU DSP,
  VDP1, VDP2, SCSP, SMPC + HMCS400, DCC, YGR019, SH1, CART, STV files), `SH_mem.sv`, `SH7604_mem.sv`,
  `ADSP_21XX_mem.sv`, `CEGen.vhd`, `bram.vhd`, `mlab.vhd`. Excluded: root `Saturn.sv`, `sys/`, sdram/ddram,
  hps2*, ps2*, lightgun, cofi, resync (MiSTer framework or glue).
- All top-level ports are virtual pins (`VIRTUAL_PIN ON -to *`), so no input is constant in "full".
- Parameters/defines: `STV_BUILD` is not defined (that selects the arcade variant: STV cart, RAX, STVIO and
  `SMPC_HLE` instead of the real SMPC). `DEBUG` is not defined. Module parameter `RAMH_SLOW` = 0 (MiSTer
  instantiates 0 or 1 by build option; it only changes bus timing). The real SMPC (HMCS400 + `smpc.mif`) and the
  real CD block (SH-1 running `cdb105m.mif` + YGR019) are in the design.
- Sizing-project fixes, no upstream rtl edited: `rtl` symlinked to `../rtl` and `microrom.mem`/`nanorom.mem`
  symlinked into the project dir, because `smpc.mif`/`cdb105m.mif` paths in the source are project-relative and
  `fx68k` uses `$readmemb("microrom.mem")`.
- **Metrics.** At map stage Quartus reports "Estimate of Logic utilization (ALMs needed)" for the whole design
  only; per-entity it reports combinational ALUTs and registers. Whole-design ALMs are the Quartus number. The
  per-block "est. ALMs" column is `block ALUTs x (total ALMs / total ALUTs)` = x0.687 (same method as the PSX
  study), so per-block values are proportional estimates and sum to the total. The ratio would be lower for
  register-heavy blocks (VDP2: 7,822 registers needs at least 3,911 ALMs). Registers alone: 24.8K registers
  need at least 12.4K ALMs (Cyclone V ALM = 2 registers). Map-stage ALM estimates usually shrink 5-15% at fit,
  and the C64 port in the PSX study landed within 3%. Even a 15% cut leaves ~24,400 ALMs (132%).
- **M10K** is not reported per block at map stage; "M10K (est.)" is computed from each RAM's depth x width in
  the RAM summary using the narrowest M10K aspect fit (an estimate, fit may differ by a few blocks). Bits are
  from the report. MLAB bits (17,472 total) are small LUT-RAMs that live in logic; they are not M10K.
- Not counted: the external memories the core talks to (work RAMs, VDP1 VRAM/framebuffers, VDP2 VRAM, SCSP RAM,
  CD buffer RAM, cart RAM) and the Pocket framework (bridge, video, audio, SDRAM controller, PLLs).
  Those add to the logic needed and are not in these numbers.

## Run 1: "full" (as MiSTer builds it, non-STV)

| Metric | Value | Pocket | % |
|---|---|---|---|
| ALMs (Quartus estimate) | **28,813** | 18,480 | 156% |
| Combinational ALUTs | 41,928 | | |
| Registers | 24,834 | | |
| Block memory bits | 720,960 | | |
| M10K blocks (est.) | ~106 | 308 | 34% |
| DSP blocks | 29 | 66 | 44% |

| Block | ALUTs | est. ALMs | Registers | M10K (est.) | M10K bits | MLAB bits | DSP |
|---|---|---|---|---|---|---|---|
| SH7604 MSH (master SH-2) | 5,858 | 4,026 | 3,026 | 4 | 32,768 | 6,912 | 3 |
| SH7604 SSH (slave SH-2) | 5,793 | 3,981 | 3,014 | 4 | 32,768 | 6,912 | 3 |
| SH7034 / SH-1 (CD block CPU, incl. 64 KB SH1_MEM) | 4,573 | 3,143 | 2,518 | 56 | 524,288 | 1,024 | 2 |
| FX68K (68000 sound CPU) | 2,865 | 1,969 | 1,394 | 6 | 40,256 | 0 | 0 |
| SCU (incl. DSP) | 4,353 | 2,991 | 1,708 | 5 | 16,384 | 256 | 3 |
| - of which SCU DSP | 1,111 | 763 | 321 | 5 | 16,384 | 0 | 3 |
| SCSP (incl. its DSP) | 3,580 | 2,460 | 2,022 | 25 | 24,288 | 1,088 | 5 |
| VDP1 | 4,027 | 2,767 | 2,370 | 0 | 0 | 288 | 1 |
| VDP2 | 9,032 | 6,207 | 7,822 | 4 | 32,768 | 288 | 12 |
| SMPC (HMCS400 + ROM) | 949 | 652 | 384 | 2 | 20,480 | 704 | 0 |
| CD / YGR019 | 472 | 324 | 446 | 0 | 0 | 0 | 0 |
| CART | 50 | 34 | 61 | 0 | 0 | 0 | 0 |
| DCC | 59 | 41 | 25 | 0 | 0 | 0 | 0 |

The SCU DSP and SCSP DSP are inside SCU and SCSP (SCSP has no separate DSP entity; its DSP is the MPRO/TEMP/
MEMS RAMs and multipliers inside `SCSP`). The SCU DSP row is a subset of the SCU row. Remaining top-level logic
(glue, SH bus muxes, open bus) is ~300 ALUTs.

## Run 2: "min" (`sizing/saturn_min_wrap.sv`)

Wrapper around `Saturn #(.RAMH_SLOW(0))` with these inputs tied; nothing else changed.

| Tie-off | Why |
|---|---|
| `CART_MODE = 0` (no cartridge) | Removes the 1M/4M/6M DRAM cart, ROM cart and backup-cart paths in `CART`; saves the bulk of CART's 34 ALMs. Internal backup RAM (DCC `SRAM_CS_N`) is untouched, so saves still work. |
| `FAST = 0` | Fixes the wait-state timing variant (accurate timing); a few counters become constants. |
| `BLUR_MESH = 0` | VDP2 mesh blur option off. |
| `SCRN_EN = 8'hFF` | VDP2 per-layer debug toggles forced on (and `[6]` window debug off), so the enable gating folds away. |
| `SND_EN = 3'b111` | SCSP per-channel debug mutes forced on. |
| `DBG_PAUSE/BREAK/RUN = 0` | Debug pause/break logic is dead. |
| `DBG_EXT = 0` | VDP1 command-skip and pixel-position debug counters removed. |

Not tie-offs, because the top has no such ports or options: STV logic (excluded by not defining `STV_BUILD`),
lightgun/mouse/keyboard (live in the MiSTer wrapper, not in `Saturn`), debug outputs (the top has none), and the
second-SDRAM paths (also in the MiSTer wrapper). The controller ports `SMPC_PDR1I/2I` stay as inputs. The CD
block is kept: a Pocket build still needs CD loading.

| Metric | Value | Pocket | % |
|---|---|---|---|
| ALMs (Quartus estimate) | **28,746** | 18,480 | 156% |
| Combinational ALUTs | 41,864 | | |
| Registers | 24,792 | | |
| Block memory bits | 720,960 | | |
| M10K blocks (est.) | ~106 | 308 | 34% |
| DSP blocks | 29 | 66 | 44% |

Difference to full: -67 ALMs (-0.2%), -42 registers.

| Block | ALUTs | est. ALMs | Registers | M10K (est.) | M10K bits | MLAB bits | DSP |
|---|---|---|---|---|---|---|---|
| SH7604 MSH (master SH-2) | 5,860 | 4,024 | 3,026 | 4 | 32,768 | 6,912 | 3 |
| SH7604 SSH (slave SH-2) | 5,825 | 4,000 | 3,014 | 4 | 32,768 | 6,912 | 3 |
| SH7034 / SH-1 (CD block CPU, incl. 64 KB SH1_MEM) | 4,581 | 3,146 | 2,518 | 56 | 524,288 | 1,024 | 2 |
| FX68K (68000 sound CPU) | 2,861 | 1,965 | 1,394 | 6 | 40,256 | 0 | 0 |
| SCU (incl. DSP) | 4,361 | 2,994 | 1,708 | 5 | 16,384 | 256 | 3 |
| - of which SCU DSP | 1,110 | 762 | 321 | 5 | 16,384 | 0 | 3 |
| SCSP (incl. its DSP) | 3,585 | 2,462 | 2,022 | 25 | 24,288 | 1,088 | 5 |
| VDP1 | 4,023 | 2,762 | 2,369 | 0 | 0 | 288 | 1 |
| VDP2 | 8,985 | 6,170 | 7,822 | 4 | 32,768 | 288 | 12 |
| SMPC (HMCS400 + ROM) | 938 | 644 | 384 | 2 | 20,480 | 704 | 0 |
| CD / YGR019 | 473 | 325 | 446 | 0 | 0 | 0 | 0 |
| CART | 14 | 10 | 20 | 0 | 0 | 0 | 0 |
| DCC | 59 | 41 | 25 | 0 | 0 | 0 | 0 |

Sub-blocks over 300 ALMs (min run, est. ALMs / registers): SH_core inside each SH-2 ~1,485 / 861 (x2);
SH7604 cache logic ~668 / 448 (x2); SH7604 BSC ~380 / 262 (x2); SH7604 DIVU ~365 / 581 (x2); SH7604 DMAC
~330 / 413 (x2); SH7034 SH_core ~1,480 / 853; SH7034 ITU ~458 / 462 and DMAC ~412 / 451; fx68k execution unit
~1,326 / 1,105 and microcode address decode ~381; SCU DSP ~762 / 321. VDP1, VDP2 and SCSP are flat modules with
no sub-entity above 300.

Per-entity reports and summaries: `sizing/saturn_{full,min}.entity.txt` and `sizing/saturn_{full,min}.map.summary`.

## Biggest blocks, and how each could shrink

Ideas only; none of this was built or measured. Sizes are the min-run estimates.

| Rank | Block | est. ALMs (share) | Idea |
|---|---|---|---|
| 1 | VDP2 | 6,170 (21%), 7,822 regs, 12 DSP | Drop the rotation-background path (RBG0/RBG1) and the DSPs it uses, or serialize the per-layer pixel pipelines; fewer concurrent NBG/line-buffer registers. It is the single most register-heavy block. |
| 2 | SH7604 master | 4,024 (14%) | Trim peripherals games do not need (UBC and SCI are already disabled by parameter; DMAC, FRT, INTC remain), shrink DIVU. |
| 3 | SH7604 slave | 4,000 (14%) | Same trims; additionally time-multiplex one SH_core datapath (~1,485 ALMs each) plus MULT/DIVU between master and slave at ~2x clock so one datapath serves both. |
| 4 | SH-1 + SH1_MEM (CD block) | 3,146 (11%), 56 M10K | Replace the SH-1 firmware CPU with a high-level CD-block model (or a very small soft CPU); also frees 56 M10K and loses the cdb105 firmware compatibility. |
| 5 | SCU | 2,994 (10%) | Drop the SCU DSP (~762 ALMs, 5 M10K, 3 DSP); a subset of games use it. Slim DMA channels. |
| 6 | VDP1 | 2,762 (10%), 2,369 regs | Narrow the draw pipeline (one pixel per clock sequencer), drop gouraud/half-transparency precision options. |
| 7 | SCSP | 2,462 (9%), 25 M10K | Time-multiplex slots at a higher clock, or drop the SCSP DSP effects (reverb); reduce RAM-backed state. |
| 8 | FX68K | 1,965 (7%) | Swap in a smaller 68000 core (size of any alternative not measured here). |
| 9 | SMPC | 644 (2%) | Replace HMCS400 + ROM with the existing `SMPC_HLE` (used by the STV build; its size was not measured here). |

Arithmetic from the measured numbers (a projection, not a build): removing the CD block CPU and YGR019
(3,146 + 325), the SCU DSP (762) and one SH-2 SH_core+DIVU (~1,850) leaves about 22,700 ALMs, still ~123% of
the device. Reaching the 18,480 target also needs the biggest blocks (VDP2, both SH-2s) to shrink. For routing
headroom, a realistic target would be roughly 90% of the device (~16,500 ALMs), about 12,000 ALMs
(-43%) below the measured figure.

## Files

- Sizing project: `Saturn_MiSTer/sizing/` (not committed upstream): `saturn_full.qpf/.qsf`,
  `saturn_min.qpf/.qsf`, `saturn_files.qip`, `saturn_min_wrap.sv`, symlinks `rtl`, `microrom.mem`, `nanorom.mem`.
- Copies of the qpf/qsf/qip/wrapper, the two `.map.summary` files and the per-entity report sections:
  `openfpga-Saturn/sizing/`.
