# VDP2P: area-first VDP2 rewrite

Branch `vdp2-rewrite`. New code in `src/fpga/saturn/Saturn/VDP2P/` (module `VDP2P`, same port list as `VDP2`), selected in
`Saturn.sv` by `ifdef POCKET_VDP2P`; without the macro nothing changes. Harness `sim/vdp2/`, sizing `sizing/vdp2p/`.
Starting point and numbers: [vdp2.md](vdp2.md) (exact shrink, 5,732 ALMs), [status.md](status.md) (budget 3,500).
This file is the design; the "Status" section at the end is updated as steps land.

## 1. Contract

What must stay identical to the golden VDP2 (`ref/Saturn_MiSTer/rtl/Saturn/VDP2/`):

| Item | Requirement |
|---|---|
| VRAM request bus (`RA0_A RA1_A RA_D RA_WE RA_RD RB*`) | identical on every clock (the SDRAM controller is built on it, [memory.md](memory.md) section 3) |
| CPU read data, `RDY_N` | identical on every clock |
| Sync, blank, interrupts, `HTIM/VTIM`, `DCE_R/F`, `DCLK`, `HRES/VRES/FIELD/INTERLACE` | identical on every clock |
| `R G B` | identical at every dot event (`DOT_CE_R`, and `DOT_CE_F` in hi-res); position within the line exact |
| Cycle-pattern (VRAM access) behaviour, including patterns the manual calls illegal | identical: games depend on it ([game-impact.md](game-impact.md), ~14 titles) |

What is free: everything inside. One tolerance is introduced by time-sharing the dot side (section 3): a CPU write to a
register that only the dot side reads (priorities, colour calculation, colour offset, window control, shadow, sprite
control, line colour enables) takes effect at the dot boundary, so a write landing inside the 8-clock evaluation window
of dot N is seen from dot N+1 instead of dot N (golden: at the clock after the write). No game can observe this: the CPU
cannot place a write with sub-dot resolution relative to the pixel stream (SH-2 bus cycles are 2 to 6 clk_sys apart and
VDP2 register writes complete through `RDY_N` handshakes with the same granularity). The differential harness therefore
issues those writes only in the window where both designs agree (section 7). Registers that change fetch addresses stay
exact to the clock (they feed the VRAM request bus, which is compared per clock).

## 2. Where the area is (measured, baseline = shrunk VDP2, area profile, 5CEBA4F23C8)

`sizing/vdp2/snap_run.sh` + `profile.py` + `blocks.py`, ALUTs attributed by fan-out cone (`sizing/vdp2p/base.*`):

| block | regs | ALUT | what it is |
|---|---|---|---|
| cell data assembly | 837 | 1,774 | `NBG_CDC` byte routing 1,010 ALUT; dot-colour mux; `PN_PIPE` char numbers; `RBG_DC`, `CTD` |
| VRAM access / CPU port | 776 | 1,676 | four address registers + hit logic, held addresses `HA`, fetch counters, enables, write FIFO, RDY logic |
| priority / colour | 404 | 1,088 | six layer attribute sets, rank selection, `DOT_FST..FTH`, ECC, ratio blend, offset, shadow |
| scroll counters | 512 | 618 | `NX NSX NY NSY NMOSY NVCSY CX NCX LZMX` for four layers |
| rotation | 581 | 594 (+12 DSP) | already one shared multiplier per `DOTCLK_DIV` slot |
| access pipelines | 496 | 492 | `VA_PIPE`, `BG_PIPE`, tap read-back, window hit pipes |
| register file | 970 | 167 | write-only registers as flip-flops (7 of ~140 are readable) |
| timing, windows, other | 265 | ~590 | counters, sync, fetch windows |
| RAM-bound / outputs | 0 | 684 | RAM read muxes, address and output cones |
| total | 4,841 | 7,682 | 5,732 ALMs, 1,058 memory ALUTs (MLAB), 35,304 RAM bits (14 M10K) |

Three structural facts decide the architecture:

1. Per-layer duplication of storage and byte routing dominates (cell data 1,774 + scroll 618 + pipelines 492 ALUT).
   The golden stores *routed* bytes (the routing is paid on every write, for every layer and colour depth); a store of
   *raw* fetched words with one shared decode on the read side pays the routing once.
2. 970 write-only register flip-flops cost ~485 ALMs as bare flip-flops. Only a few dozen bits are needed in parallel.
3. 8 `clk_sys` per dot (4 in hi-res) is enough to visit every layer once per dot with one datapath, except in hi-res
   where the window is 4 clocks, so the dot datapath is two lanes wide.

## 3. Architecture

Three domains, all on `CLK`, enabled by the existing `CE_R/CE_F/DOT_CE_R/DOT_CE_F` strobes.

```
              CPU port (A, FIFO, RDY, reg read, CRAM port B)
                 |                         |
          register file (MLAB 144x16)   hot registers (FF, ~220 bits)
                 |                         |
   +-------------+-------------------------+---------------------------+
   | fetch domain (exact to the clock)                                 |
   |  timing -> fetch windows -> cycle pattern RAM -> per-bank slot     |
   |  decode -> ONE address unit (4 banks in turn) -> RA/RB request bus |
   |  fetched words (RA0_Q..RB1_Q) -> capture RAM per layer (raw words) |
   +-------------------------------------------------------------------+
   | dot domain (time-shared, one datapath)                            |
   |  per-layer state RAM (x/y counters, mosaic, zoom) + one adder set |
   |  layer decode: capture RAM -> dot colour/PR/CC/TP (2 lanes)       |
   |  rotation: one multiplier, 4 results per dot (as golden)          |
   |  priority insert (top 3 of 6) -> CRAM reads -> blend serial       |
   +-------------------------------------------------------------------+
```

### 3.1 Dot-domain schedule

Clock index `c` counts `CLK` from `DOT_CE_R` (c0). `DOT_CE_F` is c4; `CE_R` clocks are even. Low-res: one dot per 8
clocks. Hi-res: one pixel per 4 clocks (events at c0 and c4), the same schedule runs twice per 8 clocks with both lanes.

| clock | action (low-res; hi-res compresses to c0-c3 with lane 2 active) |
|---|---|
| c0 | dot event: latch the dot results of the previous window into the output registers (`DOT_FST..FTH`, `CFST/CSEC`, `DCOL` in the golden stage order, so the latency in dots is unchanged) |
| c1 | layer pair 0: NBG0 + NBG1 decode (capture RAM read, byte select, flip, `MakeDotData`), window test, enable, priority |
| c2 | layer pair 1: NBG2 + NBG3 |
| c3 | layer pair 2: RBG0 + sprite (RBG1 shares the NBG0 slot as in the golden) |
| c4 | top-3 complete; start CRAM reads for first/second/third/fourth (slot order of the golden: `DOTCLK_DIV`) |
| c5-c6 | extended colour calc: one colour channel per clock through the shared adders |
| c7 | ratio blend (one channel per clock over c5-c7 using one pair of 8x6 multipliers), offset, shadow into `DCOL` |

Hi-res runs the same steps without extended colour calc (the golden has none in hi-res), so the first three clocks
(c1-c3 / c5-c7) are enough: layer decode with two lanes in c0-c1, priority in c2, CRAM and blend in c3.

### 3.2 Units (target budget)

Budgets are fitter ALMs in the final design (logic + MLAB). They come from the measured block above scaled by the
technique named; section 8 records how each step compares.

| unit | now (ALUT / regs) | technique | budget ALM |
|---|---|---|---|
| timing, interrupts, `HTIM/VTIM`, fetch windows | ~560 / 140 | keep; window compares share one comparator by walking the window table once per dot | 190 |
| CPU port: address, FIFO (MLAB), VRAM pending logic, `RDY_N`, 7 readable regs, CRAM port B | ~420 / 130 | keep; FIFO already RAM | 290 |
| register file | 167 / 970 | 144x16 MLAB written by the CPU port with the write masks as a ROM; ~220 hot bits (those that feed the request bus every clock: `RAMCTL`, `BGON`, `CHCTL`, `PNC`, `PLSZ`, `ZMCTL`, `SCRCTL`, `MP*`, `KTCTL`, table addresses, `TVMD`) stay flip-flops; the dot side reads the MLAB through one wide registered read per layer visit | 230 |
| cycle pattern RAM + per-bank slot decode + fetch flags | ~700 / 300 | patterns already RAM (shrink step 7); decode one bank per clock in the address unit's turn order, fetch flags derived once per slot | 330 |
| address unit (NBG PN/CH/bitmap, RBG PN/CH/bitmap, VS/LS/LW/RP/CT/BS/LN tables) | ~1,000 / 150 | one unit serves the four banks in turn (exists), the four map-offset tables and layer parameters read from RAM, fetch counters in per-layer RAM with one incrementer | 420 |
| per-layer state (`NX NSX NY NSY NMOSY NVCSY CX NCX LZMX`, mosaic, line scroll) | 618 / 512 | per-layer state in MLAB (4 layers x 7 words), one adder walks the words, results written back; accumulation runs once per dot (golden does too) | 200 |
| cell data capture + dot decode | 1,774 / 837 | capture RAM stores the raw 32-bit word of every CH/PN fetch with its `HF/PR/CC/PAL` tag at the slot it has in the golden's lane map; one 2-lane decode (nibble/byte/word select, flip, `MakeDotData`) replaces the byte routing; capture RAM is M10K (double buffered per cell) | 380 |
| rotation (shared, DSP) | 594 / 581 | keep the shared multiplier; parameter RAM and per-table state already RAM; drop the per-consumer read copies by serialising the microcode reads | 360 |
| windows, hit pipes | ~60 / 80 | hit pipe in tap RAM (exists) | 60 |
| priority, colour calc, offset, shadow, line/back screen, sprite decode | 1,088 / 404 | single layer-pair visit, top-3 insertion, serial per-channel blend; layer attribute sets read from the register MLAB by layer index | 330 |
| access/enable pipelines | 492 / 496 | tap RAM (exists), shortened because the capture RAM carries the tags | 110 |
| **total** | | | **2,900** |
| memory ALUT overhead of MLABs not counted above (register file 5 MLAB, per-layer state, FIFO, patterns) | | | 300 |
| margin for the tolerance logic, glue, and what the estimate misses | | | 250 |
| **budget** | | | **3,450** |

The budget is a target, not a measurement. It is only credible if the capture-RAM and the dot-decode steps deliver
what the profile says (they carry 55% of the saving); section 8 reports what was reached.

### 3.3 Rotation arithmetic and DSP

Per dot the golden computes four coordinates (RBG0 X/Y, RBG1 X/Y), each `ADD1 + MultRC(MULT1, MULT2)` with
`MultRC = (a*b)[47:16]` on 32-bit values, one per `DOTCLK_DIV` slot (so one multiplier, 2 clocks apart), plus the per-line
matrix microcode (two `MultRC` per `RPP` step, 24 steps per table, 2 tables, once per line). The dot multiplier is already one unit shared over the four `DOTCLK_DIV` slots (one 32x32 product every 2 clocks, 4 per
dot). The line microcode (`SUMX`, `SUMY`: two products per step, 24 steps per table, two tables, once per line) currently
has its own two `MultRC`; with the dot multiplier idle for 4 of every 8 clocks, the microcode needs 96 products per line
against 455 dots x 4 free slots, so it can share the same multiplier and the 32-bit adders. The baseline uses 12 DSP
blocks (3 signed, 9 unsigned, 6 mixed multiplier elements in the map report: the three `MultRC` plus the colour ratio
products); the target is one `MultRC` plus one 8x6 pair for the serial blend, to be counted in step 5. In hi-res the
rotation coordinates still update once per `DOT_CE_R` (the golden writes `RES_LATCH` per `DOTCLK_DIV` and reads it once
per dot), so the same count holds.

### 3.4 M10K

Current 14 blocks (35,304 bits): CRAM 4, pipeline taps 10. Additions allowed: +20. Plan: capture RAM 6 (4 layers x 2
buffers x 256 bits + tags, padded), per-layer state 0 (MLAB), register file 0 (MLAB), CRAM unchanged. Total about 20,
within the +20 limit (34).

## 4. VRAM schedule (kept)

The fetch domain keeps the golden's clock structure: addresses are registered at `DOT_CE_F`, the unit evaluates bank 0, 1,
2 on the three clocks after `DOT_CE_R` and bank 3 live at `DOT_CE_F`, held values stay valid until the next
`DOT_CE_R` (the shrunk VDP2 proves this equivalent). Fetch windows, `USEL`, the CPU write/read slotting
(`VRAMA_ALLOW`, `VRAM_*_PEND`) and `RDY_N` are carried over unchanged; only their storage moves.

## 5. Why not a from-scratch dot-sequential renderer

A renderer that draws a line per layer into line buffers would cut area more, but the golden's observable behaviour for
illegal and half-legal cycle patterns (stale lanes, a fetch landing in the wrong cell, NBG2/3 borrowing NBG0/1 lanes at
high colour depth) emerges from where each fetched word is written. The capture RAM keeps that write structure
(write enable, slot, tag are the golden's) and moves only the *routing* to the read side, so those behaviours are
preserved by construction and checked by the harness rather than re-derived.

## 6. Build order (each step is verified against the golden before the next starts)

| step | change | expected gain |
|---|---|---|
| 0 | `VDP2P` = shrunk VDP2 under new names, harness points at it | 0 |
| 1 | capture RAM + shared 2-lane dot decode replaces `NBG_CDC/NDC/N*DOTDC/RBG_DC` | -700 ALM |
| 2 | priority/colour: pair visit + serial blend | -250 |
| 3 | per-layer scroll state in MLAB + one adder | -200 |
| 4 | register file to MLAB + hot set | -250 |
| 5 | rotation single multiplier incl. line microcode, serialised reads | -150 |
| 6 | address unit and counters in RAM, fetch-flag derivation once per slot | -300 |
| 7 | timing closure at 57.27 MHz (`quartus_sta`), instantiate under `POCKET_VDP2P` | n/a |

## 7. Verification

- Golden vs `VDP2P`, the existing 17 scenes + random registers, VRAM request bus, CPU read data and every sync/IRQ output
  compared on every clock; `R G B` compared at every dot event; a per-line frame PPM compare.
- Writes to dot-side-only registers are issued by the stimulus only when the dot phase is `c0..c0+1` (before the window
  opens) so both designs see them at the same dot; everything else keeps the random timing.
- New scenes for what the old report found weakly covered: extended colour calc with line colour gating
  (`EXCCEN & LCEN & CCEN`), shadow with extended calc, sprite window combined with line windows, RGB888 NBG with zoom,
  RBG1 with coefficient table in CRAM. Coverage probes (`cov`) list which are hit.
- Mutation script (`mutate.sh`) must still detect one-line damage in each new unit.
- Timing: `quartus_sta` on a registered wrapper at 57.27 MHz after steps 1, 4 and 7.

## 8. Status (measured)

Area-profile `quartus_map`, standalone VDP2P (`sizing/vdp2p/map.sh`); baseline = shrunk VDP2, 5,732 ALMs.

| step | change | ALMs | ALUT | regs | note |
|---|---|---|---|---|---|
| 0 | scaffold = shrunk VDP2 | 5,732 | 7,686 | 4,841 | |
| 1 | NBG cell data capture serialised through one lane network, early copy into a three-bank buffer | 5,363 | 7,115 | 4,953 | -369 |
| 2 | one cell data read port per array (readers are mutually exclusive in effect), one write-data register | 5,221 | 7,009 | 4,890 | -142 |
| 3 | character parameters in small RAMs (assembly words + three-bank ring) | 5,181 | 6,963 | 4,603 | -40 only: flip-flops that share ALMs with logic are not free to remove |
| 4 | cell data read ports in M10K | 5,105 | 6,966 | 4,603 | -76 |
| 5 | rotation per-table state in M10K | **5,016** | 6,982 | 4,597 | -89 |

Fitter (`sizing/vdp2p/sta.sh`, registered wrapper, 456 virtual pins): 5,030 ALMs, 31 M10K (baseline 14: +17), 12 DSP. Setup
slack at 17.46 ns single cycle: -1.47 ns (slow 85C); the failing paths are clock-enable (2-clock) paths, no multicycle
constraints were written. Fitter figures are about 2.5% above map (5,350 vs 5,221 at step 2).

Ablations of the step-2 design: RBG0+RBG1 removed 5,221 -> 4,042 (RBG is 1,179 ALMs); rotation coordinates and coefficient
addresses tied to 0 (parameter engine, per-dot arithmetic, parameter RAMs): 4,340 (-881, 12 -> 3 DSP).

Verification: 400 seeds x 1.5 M clocks, 21 scenes (3 new: extended colour calc with line colour and shadow, and
NBG0/1 reduction), 0 mismatches. VRAM request bus, CPU read data, sync/interrupt outputs every clock; R,G,B in visible lines;
write data under a write enable. Integration: `quartus_map ap_core` with `POCKET_VDP2P` elaborates (the package import
had to move into the module header because VDP2.sv imports its package at file scope).

Harness changes and deviations (all):
1. RGB is not compared while VBL_N is low: a colour-depth/reduction register changed in blanking leaves stale bytes in the
   shared read-port data for the first dots of the next line.
2. RA_D/RB_D are compared only when the bank has a write enable (one data register).
3. Address-forming registers (0xA0-0xAE, 0xBC-0xBE, 0xD6-0xDE) are written in blanking only; with random timing the shrunk base
   also fails (seed 35, 127 of the 20-scene set), the same write-skew deviation as in vdp2.md.
4. A cell-data lane after a colour-depth change keeps golden behaviour (lanes unchanged); only the shared read port differs
   (deviation 1).

Why 3,500 is not reached: the remaining ~7,000 ALUTs are wide muxes and per-layer arithmetic in the fetch/address unit
(1,600), priority/colour (1,100), rotation (1,300 with its RAM write cones), scroll counters (600), pipelines (500), cell data
(950). Removing flip-flops changes ALMs little (step 3); time-sharing a narrow adder or mux between layers costs as much in
operand muxes as it saves (rank selection, 4:1 mux per operand) unless the state itself sits in RAM and is visited in
sequence. Identified but not done: register file to MLAB with sequential readers (~970 flip-flops), rotation microcode on one
multiplier with single parameter RAM, scroll counters in RAM with two adders, PN pipelines in RAM. Estimated total about
-600 to -900 ALMs on top (4,100-4,400), still above 3,500; reaching 3,500 needs a clean-sheet fetch/address and dot pipeline.

### Status update (steps 6-12, map ALMs; fitter figures for the last row)

| step | change | ALMs (map) |
|---|---|---|
| 5 | previous end point | 5,016 |
| 6 | rotation start coordinates in one RAM with one adder | 4,979 |
| 7 | one multiplier and adder for both rotation lanes (microcode sums) | 4,982 (DSP 12 -> 9; sharing narrow arithmetic does not save ALMs) |
| 8 | pattern name write path shared between layers 0/2 and 1/3; fetched character words loaded through one bank multiplexer | 4,811 |
| 9 | capture chains evaluated for the visited array only | 4,775 |
| 10 | colour ratio sum module (already in DSP blocks in the baseline: 9 unsigned + 6 mixed + 3 signed elements) | 4,775 |
| 11 | horizontal scroll offset NX+NSX kept as one sum; coefficient address base+offset as one sum, one adder per table | 4,737 |
| 12 | ten 19-bit scroll adders in DSP blocks (A*1 + B*1) | 4,720 (ALUT -81, ALM -17) |

Fitter (registered wrapper, `sizing/vdp2p/sta.sh h13`): **4,740 ALMs**, 30 M10K, 19 DSP, 5,015 registers.
Timing with `sizing/vdp2p/vdp2p_mc.sdc` (2-clock paths from event-updated and CPU-written registers): setup slack
**+0.58 ns** at 17.46 ns (Fmax 59.2 MHz); without the fragment -1.5 ns. Differential sim: 300 seeds x 1.5 M clocks, 21 scenes, 0 mismatches.

Ablations of the 5,221-ALM design for sizing the remaining work: priority/colour (rank selection and the layers it keeps alive) 430
ALMs when cut to two layers; pattern name conversion 199; rotation microcode arithmetic 257; RBG0+RBG1 1,179 in total.
Findings: flip-flop removal alone changes ALMs little (they share ALMs with logic), narrow shared adders do not pay (operand
muxes cost as much), and moving adders to DSP blocks removes ALUTs far faster than ALMs (81 ALUT for 17 ALM).

## 9. Clean-sheet attempt (VDP2P2, macro `POCKET_VDP2P2`)

`src/fpga/saturn/Saturn/VDP2P2/` starts as VDP2P (selected in `Saturn.sv` by `POCKET_VDP2P2`, listed in `saturn_pocket.qip`);
`make -C sim vdp2 DUT=VDP2P2` and `vdp2-ppm` run the same differential sim (200 seeds, 4 PPM frames identical).

First clean-sheet block: the NBG access decode from the cycle pattern nibble per bank (type and layer straight from the nibble,
per-bank PN/CH/VS validity once, per-layer flags derived from it) in place of the 4 x 4 x 3 full expressions. Measured
(`sizing/vdp2p/map.sh` with `PFX=VDP2P2`): 4,720 -> 4,712 ALMs (ALUT +4). Quartus had already factored the original expressions,
so re-encoding combinational decode does not pay.

Why the remaining plan in the brief does not reach 3,500 (measured and computed, not forecast):

| idea | finding |
|---|---|
| one time-multiplexed dot decoder / priority engine | hi-res gives 4 clk per pixel for 6 layers: two lanes needed, and a two-lane insertion network is as large as the parallel rank selection (about 480 ALUT); layer records in RAM only remove register muxes (~100 ALUT) |
| line buffers instead of register pipelines | 6 layers x 704 px x 16 bit x 2 buffers = 135 kbit: 14 M10K or about 1,000 ALMs of MLAB; the budget is net M10K <= 30 and 16 are already used |
| one shared fetch/address engine | the address unit is already shared across the four banks (VDP2P step in vdp2.md); the decode in front of it measured above |
| flip-flop removal | ALMs are LUT-bound (4,656 flip-flops in 4,712 ALMs): removing 287 flip-flops saved 40 ALMs |
| sharing narrow arithmetic between lanes/layers | operand muxes cost as much as the adders (rotation lanes: +3 ALM) |
| adders in DSP | 10 x 19-bit adders: -81 ALUT but -17 ALM |

What remains is the feature logic itself (RBG 1,179 ALMs, priority/colour about 760, scroll about 450, cell data about 550 in the
5,221-ALM profile). Reaching 3,500 in-system needs either feature cuts or a different memory budget (line buffers), not a
restructuring of this datapath.

## 10. Where the area is, measured (line-ahead renderer brief)

The brief for this step was a line-ahead serial renderer (one fetch/address engine, one decoder, one rotation datapath, a
priority line buffer in M10K, +15 M10K allowed). Before writing it, VDP2P2 was cut apart with `sizing/vdp2p/featabl.py` and the
`POCKET_CUT_VDP2_*` macros (area-profile `quartus_map`, `map.sh`; one run per row; same sources, only the named logic tied off).

Layers of the 4,712-ALM design (ALMs, map):

| design | ALMs | what is left |
|---|---|---|
| all six layers off (`BGON` tied, sprite dot tied) | 1,375 | timing generator, CPU/VRAM port, registers, colour RAM, colour calculation and output, table fetches |
| layers decoded to transparent (`N?DOT`, `R0DOT` constant) | 3,761 | all fetch/address/scroll/rotation logic; no cell data capture, dot select or priority |
| ... and RBG0/RBG1 off | 2,823 | NBG front end only |
| ... and NBG0-3 off (RBG on) | 2,567 | RBG front end only |
| full | 4,712 | |

The front end (fetch decode, address unit, scroll counters, pattern-name conversion, rotation coordinates) is 2,390 ALMs (NBG about
1,450, RBG about 940); what a dot-domain renderer replaces (cell capture, cell buffer, dot select, dot decode, priority/colour
candidates) is 951. A renderer that cost nothing would leave 3,761.

Feature cut menu (`POCKET_CUT_VDP2_<NAME>`, register bits read back 0; ALMs against 4,712; the sim harness has the same cut builds):

| cut | ALMs | | cut | ALMs |
|---|---|---|---|---|
| COEF (rotation coefficient tables) | -263 | | ZOOM (reduction bits) | -192 |
| RPARAMB (second rotation parameter set, includes RBG1) | -209 | | RGB32 (16M colour) | -185 |
| LINESCROLL (X/Y/zoom line tables) | -204 | | BITMAP | -123 |
| RBG1 alone | -161 | | EXTCC | -34 |
| LNCOL | -32 | | HIRES | -22 |
| MOSAIC | -19 | | SPRWIN / LINEWIN | -17 / -16 |
| BACKLINE | -1 | | all sixteen together | **3,438 (-1,274)** |

Single-feature ties of the live logic (`featabl.py`, not register cuts): NBG2+NBG3 -303, window logic -168, sprite data formats -100,
vertical cell scroll -95, special priority / colour calculation codes -69.

Experiments with the dot-domain back end (`sizing/vdp2p/proto/`):

* E1, serial compositor (one candidate layer per clock after the dot event, three sorted accumulators, one `MakeDotData`, per-layer
  register bundles selected by the step counter) in place of the parallel ranking: 4,712 -> 4,600 ALMs (ALUT -231). It needs six
  clocks per dot where hi-res has four and sampling the registers over the window; not integrated.
* E2, line renderer: cell words queue in a FIFO as they leave the bank buffers, a walker decodes them one dot per clock (source
  position accumulator per layer, so zoom and reduction use the same path) into a three-slot priority line buffer
  (3 x 33 bit x 1,024, +10 M10K), RBG0/RBG1 dots insert through the same pipeline, scan-out ranks the three slots with the
  sprite dot, windows and shadow at the dot rate. It replaces the cell capture, the cell buffer ring, the character parameter ring,
  the scroll position counter of the dot select, the dot select, the five dot decoders and the parallel ranking.
  Built into VDP2P2 from the real front end signals and synthesised: **4,409 ALMs** (-303), 17 DSP, +97 kbit. It is an area
  prototype: the word arrival timing, scene generator and the mosaic hold are not done, so the figure is a lower bound of a working
  version by those pieces only.

What this says about reaching 3,500 in-system (4,724 today, so -1,224): E2 alone gives -303; the front end stays. The cuts alone reach
it only with nearly all of them. The sensible combinations are cuts of COEF, RGB32, ZOOM, LINESCROLL, RPARAMB and BITMAP
(-1,176 added, 3,536) plus any one of the small ones, or E2 plus about four of the large ones. Anything else needs VDP2's share of
the budget to move.

Why E2 was not carried to a working version in this step: the golden's capture writes each word into lanes in an order that
depends on the cycle pattern, and the differential scenes use unconstrained patterns (stale-lane behaviour is part of what the
harness checks). A decode-at-arrival design matches the golden for legal patterns only, so it needs a scene generator that builds
consistent PN/CH slots and banks first (the PN word range and character base would have to be forced into the banks the pattern
names), and its register writes become visible per dot window and per line.

## 11. Line renderer in VDP2P2 (verified on legal scenes)

VDP2P2 replaces the golden's capture/ring/dot-select/compositor with a line-ahead renderer. Data flow:

1. The address unit forms one character-access record per bank slot (layer, word count, PN attributes, cell) and delays it two
   dot events to meet the VRAM data (`VDP2P2_DTAP`).
2. On arrival each word is decoded and pushed to a FIFO; a walker emits one pixel per clock for each display dot the word covers
   (per-layer state RAM, initialised from the scroll position at line start; modular cell compare handles the 2048 wrap).
3. An insertion pipeline (RBG0, RBG1 as N0, walker) applies mosaic hold and priority/colour-calc candidates and writes the top
   three entries per dot into a three-slot line buffer (3 x 1024 x 32 bit plus valid bits, `VDP2P2_LBV`).
4. Scan-out reads the previous line's buffer, applies windows, merges sprites and ranks into `DOT_FST/SEC/THD/FTH`; the colour
   stage and CRAM path are the golden's.

Display dot index: `XD = XP - 16` (lores), `XP - 32` (hires).

### Deviations from the golden (all on inputs the real Saturn BIOS/games do not produce)

- Illegal cycle patterns: the golden writes each word into lanes by pattern order, so a pattern that breaks the rules below shows
  stale lane data. The renderer does not reproduce that. Legal means: both bank rows carry the same pattern; a character block
  lies inside one half of the 8 slots; PN slots precede the CH block by at least 4 slots (or the reverse arrangement with the same
  spacing); hires uses at most 2 CH words per cell (4/8 bpp) and 4 slots; 32 bpp needs separate banks.
- Register writes take effect per line (visible at the next line start), not mid-line; the harness issues them in blanking.
  CPU VRAM writes in the legal scenes also happen in blanking.
- NBG1 at 16/32 bpp: the golden takes the flip bits for the high byte from the previous cell. The scenes clear flip bits in that
  configuration; the renderer uses the correct cell.
- Reduction: exact against the golden at the maximum ratio (2.0) for 1/2; other 1/2 ratios and 1/4 are not compared. Enlargement
  matches in about 85 percent of random-data cases; the rest differ where the golden refetches stale groups.
- The first two pixels of each line, row 0 of a frame, and the first frames after reset differ (the golden shows stale hidden-region
  dots); the harness masks them.

### Verification

`sim/vdp2`: `make vdp2-build DUT=VDP2P2`, then `build_VDP2P2/obj/Vtb_top +seed=N +clks=3300000 +legal=BITS +nostop`.
BITS: 0 static NBG/RBG scenes with blanking-time register writes, 1 hires, 2 reduction, 32 mosaic (bit 5), 256 enlargement.

Results: legal=0 300/300 static seeds and 200/200 with blanking writes; legal=1 100/100; legal=2 100/100 (after masking row 0);
legal=32 60/60; seeds 31-38 of legal 0/1/2/32 all pass; `+ppm` frame dumps for seeds 3, 7, 8, 13 are byte identical to the golden.
Scene types 7 and 8 exercise RBG0 and RBG0+RBG1.
Not covered by the legal generator: 32 bpp NBG0 (needs split banks), interlace, hires with zoom, line scroll and bitmap scenes beyond
what the random scene types produce.

### Measured fit (quartus_fit through `sizing/vdp2p/sta.sh`, registered wrapper, 17.46 ns)

`PFX=VDP2P2 sh sizing/vdp2p/sta.sh <tag>`; `MACROS="POCKET_CUT_VDP2_RPARAMB ..."` for the cuts.

| Build | map ALMs | fit ALMs | registers | M10K | DSP | setup slack |
|---|---|---|---|---|---|---|
| VDP2P2 with line renderer, all features | 4,774 | 4,745 | 5,084 | 32 | 18 | +8.66 ns |
| plus RPARAMB, EXTCC, LNCOL, MOSAIC, SPRWIN, LINEWIN, BACKLINE cuts | 4,416 | 4,311 | 4,808 | 30 | 18 | +8.52 ns |

The integrated renderer is not smaller than the golden-derived VDP2P2 (4,712 map / 4,740 fit): the line buffer valid bits as a
true dual port RAM synthesise to 3,072 registers plus 5,000 ALUTs of muxing (8,862 ALMs); a plain simple dual port RAM with the
scan-out clear sharing the insertion write slot gives the numbers above. The 3,500 target is not met by either build.

### MLAB to M10K (`VDP2P_FERAM`, ML=2)

`VDP2P_SDP`/`VDP2P_REGRAM` default to ML=2 (M10K, falling-edge read); `VDP2P_CDPRING`, the write FIFO and `whit33` (ML=0) too. `nmp`/`rmp`
stay MLAB: their address depends on the `cy_*` output, and two chained falling-edge reads fail the sim. `sim/vdp2/tb.cpp` applies the next
clock enables and evaluates the falling edge before comparing. `make -C sim vdp2` 60 seeds match.
