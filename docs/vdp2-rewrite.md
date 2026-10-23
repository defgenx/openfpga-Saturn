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
