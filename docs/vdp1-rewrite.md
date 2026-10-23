# VDP1P: area-first VDP1 for the Pocket

Scope: `src/fpga/saturn/Saturn/VDP1P/` (`VDP1P.sv`, `VDP1P_pkg.sv`), module `VDP1P` with the port list of `VDP1`,
selected in `Saturn.sv` by `ifdef POCKET_VDP1P`. Reference behaviour: `src/fpga/saturn/Saturn/VDP1/` (itself
cycle-identical to `ref/Saturn_MiSTer/rtl/Saturn/VDP1/`, see [vdp1.md](vdp1.md)). Budget: 1,400 fitter ALMs
(today about 2,045 in the full build). Verification: `sim/vdp1` (golden vs DUT, every output every clock phase).

## 1. What must stay identical

- VRAM, framebuffer and CPU-bus signals clock for clock, FB display address/data every clock, `VOUTO`, `IRQ_N`, `RDY_N`.
- Pixels written: same address, data, byte enables, same order.
- Draw duration per command: same CMD/FBD/VRAM state timing, including the penalty counter, row delays, DELAY/RAS waits.
- Everything in the feature list of the task (all commands, colour modes, gouraud, mesh, half-transparency, shadow, clipping,
  local coordinates, high-res/8-bit/rotation framebuffer modes, erase/swap timing).

Anything else is free: how the edge, gouraud, row set-up and vertex arithmetic is computed, where state lives.

## 2. Cycle budget of the current design (clk_sys, `EN` high)

Counted from `VDP1.sv`; `CE_R`/`CE_F` alternate, so one `CE_R` = 2 clk.

| Item | Cycles |
|---|---|
| One pixel step (CMD state advances only when `FBD_ST==IDLE`): skipped/transparent/texture-only pixel | 2 |
| Plain write pixel (IDLE, WRITE, FB_ST DRAW) | 2 (more while `FB_ST` busy) |
| Read-modify-write pixel (colour calc with background) | at least 6 |
| Row overhead, drawn row, `PCLP` or `FAST`: LINE_NEXT, ROW_DRAW, CALCX, CALCTX, PRE_DRAW, GRD_CALC_ROW, GRD_CALC_LINE (21: runs for every row, gouraud or not) | 27 to the first pixel |
| Row overhead, drawn row, not `PCLP` and not `FAST`: plus ROW_CLIP | 28 + up to 9 |
| Skipped row (outside the window, not `PCLP`): LINE_NEXT, ROW_CLIP (1 to 9), ROW_DRAW, CALCX, CALCTX | 5 to 13 |
| Polygon/sprite set-up before the first row: EDGE_INIT, CALCE, CALCH, CALCTY, GRD_CALC_COL, GRD_CALC_LEFT (21), GRD_CALC_RIGHT (21) | 50 |
| Sprite/polygon delay before EDGE_INIT | 0 to 46 (+ VRAM reads) |
| Command word spacing while loading (VRAM read per word) | at least 2 |

Consequences used by the design:

1. Per-pixel datapath work may take 2 cycles, not 1 (two serial uses of one adder per pixel).
2. Per-row work (edge step, row set-up, gouraud edge colours) can run ahead of the row: the next row depends only on state
   updated by the previous step, never on pixels. It starts once the current row's set-up has consumed its inputs (LINE_NEXT+3) and has
   at least 24 cycles for a 1-pixel `PCLP` row. Gouraud work is skipped when `CCB[2]` is 0 (the shaded value is never used).
3. Everything before the first row has 50+ cycles; the command load has at least 2 cycles per word.
4. The row-skip case with an absorbed penalty (5-cycle rows) cannot be matched by a serial step engine: the FSM waits for the
   engine instead (`ENG_BUSY`), a documented deviation limited to that case (section 7).

## 3. Architecture

Kept as-is (interface-exact, mostly registers): CPU bus interface and register file, frame change/erase/IRQ control,
VRAM and framebuffer request FSMs, FBD pixel pipeline, display/rotation output, pattern FIFO, penalty counter.

Replaced, in order of payoff:

### 3.1 Gouraud (`GRD`)
- Left/right edge colours (6 x 17 bit) and steps (6 x 18 bit incl. direction) and the 4-entry table live in two MLABs
  (accumulator/table MLAB, step MLAB).
- One 17-bit adder, one channel per cycle: the six row additions run in the 6 cycles after LINE_NEXT (result needed at GRD_CALC_ROW
  / the divider start, 6 and 7 cycles after LINE_NEXT); skipped when `CCB[2]=0`.
- Three serial dividers stay (the 21-cycle line window needs the three channels in parallel); their quotient shift registers are
  the line step registers; left/right results are written to the step MLAB in the three cycles before the next phase shifts.
- Line colour accumulate (3 adders) stays in flops: 2 cycles per pixel.

### 3.2 Edge geometry (`EDG`)
- Per edge: D/X/Y error words, two extents, height, X/Y position and flags in an MLAB; one step unit
  (`s=e+inc; e=s+(s>=cmp?-adj:0)`) walks the 6 accumulators and the 4 coordinate increments in 10 cycles, running ahead of the row.
- Frame: polygon extents (`Abs`, max) computed with the same unit during CALCE/CALCH/CALCTY (4 cycles available, 50 in total).

### 3.3 Command store and vertex load (`CMD`)
- Raw command words in a 16 x 16 MLAB; decode bits that the pixel path reads every pixel (COMM, CM, CCB, MESH, ECD, SPD, CLIP, CMOD,
  MON, PCLP, HSS, DIR) stay in flops. Vertices, zoom points and the normal-sprite far corner computed by one 13-bit adder at the word
  rate (at least 2 cycles per word) and EXEC/DELAY time. Clip window: one subtractor sequenced over the 4 values before use
  (12 cycles of slack in the golden design).

### 3.4 Row set-up, line and texture (`ROW`)
- Pixel loop (LINE_VERTA step, line/texture error step, over checks, DRAW_X/Y) stays dedicated, with two serial uses per pixel
  where it saves an adder.
- Row set-up (clip cases, major/minor, `ROW_WIDTH`, texture/line error constants, AA increments) computed ahead of the row on a small
  predicated ALU (one adder/comparator with MLAB operands) and loaded into the working registers at CALCX/CALCTX.

### 3.5 FSM and glue
Fewer state bits through merged set-up states (they only exist to hold timing; a counter replaces them).

## 4. Per-unit ALM estimate

"Now" is the share of the 2,045 fitter ALMs, split by the ALUT/register profile of the shrunk design (`vdp1.md` section 2, scaled).

| Unit | Now | Target | How |
|---|---|---|---|
| Bus/registers/frame control/write buffers | 200 | 175 | single address register, MLAB-free; small trims |
| VRAM/FB/FBD FSMs, pattern address, penalty | 250 | 215 | one pattern adder, shared counters |
| Colour calculation, clip/draw enable | 95 | 85 | already flag form |
| Display/rotation/erase | 170 | 145 | RP_* captured in an MLAB |
| Command FSM and sequencing | 165 | 110 | merged states, down-counter |
| Command store, vertices, clip window | 120 | 60 | MLAB + one adder |
| Edge geometry | 310 | 95 | MLAB + one step unit |
| Gouraud | 330 | 150 | MLAB + one adder, 3 dividers, line accumulators |
| Row set-up, texture, line, pixel loop | 400 | 215 | predicated ALU, dedicated pixel loop |
| FB address/draw coordinates | 105 | 80 | one adder per axis |
| Other | 100 | 40 | |
| **Total** | **2,045** | **1,370** | reserve 30 ALMs |

The reserve is thin: the estimate is a plan, section 6 lists how it is checked.

## 5. Verification

`sim/vdp1`: golden (`ref/`, `REF_` prefix) against `VDP1P`, outputs compared every clock phase, VRAM and framebuffer contents at
draw end, PPM dumps. The scenario generator is extended with: very thin polygons and 1-pixel rows with `PCLP`/`FAST`, long runs of skipped
rows, gouraud everywhere, rotation/high-res modes. A stall counter in `VDP1P` (debug output) reports `ENG_BUSY` waits; scenarios with a
stall are compared on memory contents only.

## 6. Method and measurement

`sizing/vdp1p/`: `mk.sh`, `run.sh` (Docker `raetro/quartus:21.1`, unique container names, `NUM_PARALLEL_PROCESSORS 1`,
`area_profile.qsf`), standalone top `VDP1P`, virtual pins on all ports except `CLK`, 17.46 ns clock. Steps: `quartus_map`, `quartus_fit`,
`quartus_sta`. Baseline (`sizing/vdp1p/base`): current `VDP1`.

## 7. Deviations (planned)

- `ENG_BUSY` stall when run-ahead cannot keep up (consecutive rows skipped in 5 clocks): a few cycles per row, only then.
- Microcode/ROM tables are in MLAB, not M10K.
