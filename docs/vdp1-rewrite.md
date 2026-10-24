# VDP1P: area-first VDP1 for the Pocket

Scope: `src/fpga/saturn/Saturn/VDP1P/` (`VDP1P.sv`, `VDP1P_pkg.sv`), module `VDP1P` with the port list of `VDP1`,
selected in `Saturn.sv` by `ifdef POCKET_VDP1P`. Reference behaviour: `src/fpga/saturn/Saturn/VDP1/` (itself
cycle-identical to `ref/Saturn_MiSTer/rtl/Saturn/VDP1/`, see [vdp1.md](vdp1.md)). Budget asked: 1,400 fitter ALMs
(2,045 in the full build today). Verification: `sim/vdp1`, golden against `VDP1P`.

**Result: the budget is not reachable with the ground rules (interface and draw timing identical).** Measured
reduction is 5.4 percent: 2,124 ALMs standalone, 1,935 in the full build against 2,045 (section 3); the bottom-up floor (section 5) is about 1,650 to 1,750 ALMs in
the full build. Section 6 lists what would have to give.

## 1. Ground rules and the cycle budget they leave

Identical: VRAM, framebuffer and CPU-bus signals clock for clock, FB display address/data, `VOUTO`, `IRQ_N`, `RDY_N`; pixels
written; per-command draw duration. Free: how the edge, gouraud, row set-up and vertex arithmetic is computed and where
state lives.

Counted from `VDP1.sv` (`EN` high, `CE_R`/`CE_F` alternate):

| Item | clk_sys cycles |
|---|---|
| Pixel step (CMD advances only when `FBD_ST==IDLE`): skipped, transparent or texture-only pixel | 2 |
| Plain write pixel | 2 (more while `FB_ST` busy) |
| Read-modify-write pixel | at least 6 |
| Drawn row, `PCLP` or `FAST`, up to the first pixel (LINE_NEXT .. GRD_CALC_LINE, the 21-cycle divider window runs for every row) | 27 |
| Drawn row, otherwise: plus ROW_CLIP | 28 to 37 |
| Row skipped by pre-clipping: LINE_NEXT, ROW_CLIP (1 to 9), ROW_DRAW, CALCX, CALCTX | 5 to 13; 4 with `FAST` |
| Set-up before the first row (EDGE_INIT, CALCE, CALCH, CALCTY, COL, LEFT 21, RIGHT 21) | 50 |
| Command word spacing while loading | at least 2 |

What this allows and forbids:

- Per-pixel arithmetic may take 2 cycles. Per-row arithmetic that depends only on the previous row (edge steps, gouraud colours)
  may run ahead.
- Anything the next row needs from the edge positions must be ready in 3 to 5 cycles after the previous row's CALCX in skipped-row
  loops (rows of 4 to 6 clocks occur whenever `FAST` is on or the penalty counter absorbs ROW_CLIP). A serial engine with one
  step per cycle cannot do that; two parallel lanes can (section 2.2).
- The row set-up (clip cases, major/minor, `ROW_WIDTH`, texture and line error constants) consumes the edge positions in the cycle
  after they are final in those loops, so it cannot be moved onto a serial unit without changing timing for rows after a skipped
  run (section 6).

## 2. What was built

### 2.1 Gouraud edge colours (`GRD`)
- The golden core steps left/right colour accumulators (6 x 17 bit) and keeps 6 step registers per row. The colour of row k is
  `table colour + k * step (mod 2^17)`; k is `COL_HEIGHT - COL_D`.
- The six steps are stored as signed words `(q ^ dir) + dir` in a 6-word MLAB. One 12 x 17 multiplier (DSP, +1 block), one 17-bit
  adder and one read port compute the six edge colours per row in the 6 cycles after LINE_NEXT (the divider operands, 30 flops)
  and the start colour of the row (3 cycles after GRD_CALC_ROW, once `DIR[0]` is known). Polylines and lines use the table colours with
  k forced to 0 through the same path.
- The left/right quotient bits are shifted into the same registers as the line step; the three step words are written in the
  three cycles after the last quotient bit.
- Three serial dividers stay: the 21-cycle row window needs three channels in parallel.

### 2.2 Edge error accumulators (`EDGE`)
- Left and right edge lanes, each with D, X, Y accumulators (3 x 14 bit) in a 3-word MLAB; both lanes step in parallel,
  D then X then Y (X and Y only when D hit), 3 cycles after each row's CALCX, so the next row's positions are ready by its CALCX in
  every skipped-row loop, `FAST` included. Position steps leave as strobes into `LEFT_VERT`/`RIGHT_VERT`.
- The accumulators are initialised in the 3 cycles after CALCTY. An engine-busy hold on CALCX exists but never triggers in
  the tests (the steps finish within 3 cycles; the shortest CALCX to CALCX distance is 4).

### 2.3 Smaller changes
- Row start colour for every command type through the multiplier path (no table copy and no extra source on the line colour
  registers).
- Clip-edge compares share the 14-bit differences (exact `<`, `>` and the 13-bit truncated forms the golden code uses).

## 3. Measured (area profile, 5CEBA4F23C8, `quartus_map`/`quartus_fit`/`quartus_sta` 21.1.1, standalone top)

Standalone figures include 129 ALMs of virtual-pin effect; the full build counts 2,045 for the same module (ratio 0.911).

| Design | ALUT (map) | regs (map) | DSP | fitter ALMs | full-build equivalent | Fmax | setup slack at 57.27 MHz |
|---|---|---|---|---|---|---|---|
| `VDP1` (baseline) | 3,402 | 1,884 | 1 | 2,245 | 2,045 | 61.1 MHz | +1.10 ns |
| + gouraud closed form | 3,315 | 1,712 | 2 | 2,181 | 1,987 | 66.1 MHz | +2.33 ns |
| + edge lanes | 3,165 | 1,631 | 2 | 2,146 | 1,955 | 70.2 MHz | +3.21 ns |
| + shared clip diffs (final, `g3`) | 3,146 | 1,631 | 2 | **2,124** | **1,935** | 70.5 MHz | +3.27 ns |

Map ALUT counts fall 1.4 to 4 times faster than fitter ALMs (the fitter already pairs LUT logic with registers; removed
LUTs and registers leave half-used ALMs behind). The first revision of this document (commit 59bd670) estimated 180 ALMs saved for gouraud and 150 for the edge unit; the measured
savings are 64 and 35. That gap is the reason the target is called out of reach below.

M10K: 0. MLAB: 2 blocks (CLT, pattern FIFO) + 2 (gouraud steps, edge lanes). DSP: +1.

## 4. Verification (`make -C sim vdp1`)

Golden `ref/` (prefix `REF_`) against `VDP1P` on the unchanged stimulus (see [vdp1.md](vdp1.md) section 4), every output compared on
every clock phase including `FAST` scenarios, VRAM and both framebuffers at draw end and at the end of a scenario, PPM dumps (`make -C sim vdp1-ppm`).

- seed 3, 250 scenarios: 39.3 M clock phases, 0 mismatches; seeds 1, 2, 5, 9, 22 with 100 to 120 scenarios: 0 mismatches.
- Pre-existing, not caused by VDP1P: seed 7, scenario 98 (`VRAM_A`) and the aborted-window case below also differ in the earlier
  shrunk `VDP1`.
- Aborted gouraud window: when a draw is aborted inside a divider window the golden core leaves its step counter non-zero and the
  next line command runs a short window on stale divider registers (undefined shading). VDP1P does not reproduce that shading.
  The testbench stops comparing a scenario at that point (`diff_top` `TAINT`); about 2 to 3 percent of scenarios.
- Debug builds: `sim/vdp1/dbg.sh` prints both command FSM state traces (`DBGSCEN=n` selects a scenario).

## 5. Why 1,400 is out of reach

Profile of the post-gouraud design (`sizing/vdp1p/g2/profile.txt`, ALUT by destination register): command FSM 444, gouraud 364
(dividers and operands about 220), line engine 371, colour calculation and FB write 370, VRAM address and bus 272, edge 224 + 162 for
`LEFT/RIGHT_VERT`, display 211, texture 168, command vertices 153, polygon extents 139, clip-window flags 55.

The parts that must stay as they are (the interface-exact FSMs, bus and write buffers, pattern FIFO, colour calculation, display
and rotation, framebuffer address) account for about 1,000 ALUT and 700 registers, around 650 ALMs standalone. The budget then leaves about 750
standalone ALMs (about 690 in the full build) for everything that draws, against about 1,400 today. Serialising each datapath onto
MLAB state with one shared adder, as measured on gouraud and edge, removes 3 to 5 percent of the total per unit, not 30 to 50 percent
of the unit, because the fitter keeps half-filled ALMs and the MLAB and control overhead (10 ALMs per MLAB, address and operand
selects) cancels most of the removed adders.

Remaining candidates, each with its estimate from the same measurement ratio (ALMs, standalone):

| Candidate | Saving | Cost |
|---|---|---|
| Row set-up, texture and line constants on a shared serial ALU | 100 to 150 | stalls rows after a skipped run; not exact (section 6) |
| Command load: vertices, extents and clip flags serial, vertices in MLAB | 80 to 120 | large; command-load timing proofs |
| Pattern address incremental, one adder fewer | 30 to 40 | low |
| Display capture registers in an MLAB | 20 | low value |
| One-hot command FSM (tried: +29 ALUT, +26 registers, worse) | 0 | rejected |
| Quartus `STATE_MACHINE_PROCESSING ONE-HOT` attribute (no effect) | 0 | rejected |

Sum of the positive items: 230 to 330 ALMs, giving about 1,800 to 1,900 standalone (1,650 to 1,750 in the full build), still 250 to 350 over the budget.

## 6. What would have to change to get closer

- Accept a timing deviation for row set-up: the first drawn row after skipped rows starts a fixed number of cycles later (a floor of about
  20 cycles in the skipped-row path), applied to the golden copy used by the testbench as well, so the comparison stays exact. This frees
  the 100 to 150 ALMs above.
- Raise the budget for VDP1 to about 1,700 ALMs, or take the savings from other blocks.
- Accept a cut. The cheapest feature by area is the FB rotation mode (display capture and four 20-bit adders, about 100 ALMs). The task
  rules it out; the numbers are given for the decision.

## 7. Deviations from the golden core

- None in timing or pixels in the tested modes (including `FAST`, `PCLP`, high-res, 8-bit, rotation, erase/swap, mesh, gouraud).
- Aborted-window shading above (golden behaviour is undefined data from stale registers).
- `POCKET_VDP1P` is off by default; `Saturn.sv` still instantiates `VDP1`. The full integrate build was not run with the define.

## 8. Method

`sizing/vdp1p/`: `mk.sh`, `run.sh` (Docker `raetro/quartus:21.1`, unique container names, `NUM_PARALLEL_PROCESSORS 1`,
`area_profile.qsf`), standalone top `VDP1P`, virtual pins on all ports except `CLK`, 17.46 ns clock constraint. Runs: `base` (VDP1),
`g1` (gouraud), `g2` (edge), `g3` (final); `x1`, `x2` one-hot experiments. Logs and databases are not committed.
