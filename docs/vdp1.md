# VDP1 shrink for the Pocket

Scope: `src/fpga/saturn/Saturn/VDP1/` (`VDP1.sv`, `VDP1_pkg.sv`). Golden: `ref/Saturn_MiSTer/rtl/Saturn/VDP1/`.
Port list unchanged. VRAM request, framebuffer request and CPU-bus behaviour are cycle-identical to the golden
module under the stimulus and assumptions listed in section 4.

## Result

| VDP1 standalone, `quartus_map` 21.1.1, 5CEBA4F23C8 | ALUTs | registers | M10K | DSP |
|---|---|---|---|---|
| golden, area profile (baseline) | 3,857 | 2,346 | 0 | 1 |
| shrunk, area profile | **3,402** (88.2 %) | **1,884** (80.3 %) | 0 | 1 |
| golden, BALANCED | 4,025 | 2,367 | 0 | 1 |
| shrunk, BALANCED | 3,481 (86.5 %) | 1,921 (81.2 %) | 0 | 1 |

**The target (at most 70 % of the area-profile ALUTs and registers, i.e. 2,700 / 1,642) is not reached.** The
module is one dense datapath with few array-shaped state elements; what was found and applied saves 11.8 % of the
ALUTs and 19.7 % of the registers. Section 6 lists what is left and why it was not taken.

M10K: +0 (budget was +6). The framebuffer port timing is untouched.

## 1. Method

- Standalone project, top `VDP1`, all ports virtual pins, `quartus_map` in `raetro/quartus:21.1`,
  `NUM_PARALLEL_PROCESSORS 1`. Scripts: `sizing/vdp1/mk.sh` (project), `run.sh` (map + VQM netlist), `snap.sh`
  (snapshot the current RTL and map it), `report.sh` (totals).
- Area profile: `sizing/vdp1/area_profile.qsf`, the global assignments of the shipped PSX core `apf_top.qsf`
  (`OPTIMIZATION_TECHNIQUE AREA`, `STATE_MACHINE_PROCESSING MINIMAL BITS`, `AUTO_RESOURCE_SHARING ON`, retiming,
  WYSIWYG remap, physical synthesis and duplication off, `MUX_RESTRUCTURE ON`, `ALLOW_ANY_RAM/ROM_SIZE_FOR_RECOGNITION ON`,
  `ALM_REGISTER_PACKING_EFFORT HIGH`). BALANCED reproduces the figures given for the core (4,023 / 2,369 vs 4,025 / 2,367
  here, the difference being the area-profile entry in the project).
- Where the logic goes: `sizing/vdp1/vqm_profile.py` reads the post-synthesis VQM (`quartus_cdb --vqm`), follows each
  LUT to the registers/ports it feeds and splits it evenly between them. Totals match the report exactly; the split
  of shared logic between destinations is an estimate. Ablation variants (`sizing/vdp1/abl.py`) were prepared but the
  VQM attribution was used instead.

## 2. Profile of the golden module (area profile)

| Function | ALUTs | registers |
|---|---|---|
| Gouraud: accumulators, steps, 3 dividers, colour table | 541 | 593 |
| Colour calculation and framebuffer write data | 274 | 61 |
| Texture / row stepping (TEXT_*, SPR_OFFSY, ROW_WIDTH) | 469 | 115 |
| Polygon edge stepping state (LEFT/RIGHT errors, POLY_*, heights) | 387 | 314 |
| Edge points LEFT/RIGHT_VERT | 156 | 52 |
| Command vertices VERTA-D (load adders and muxes) | 279 | 104 |
| Line engine (LINE_*, AA_*, clip flags) | 445 | 124 |
| Command FSM and control (CMD_ST 5 bits, delays, penalty) | 359 | 95 |
| VRAM / CPU bus interface (address, write buffers, FIFO) | 386 | 280 |
| Framebuffer address, draw coordinates | 175 | 45 |
| Display out, rotation, erase, clip window, registers | 279 | 453 |
| Other (command fields, misc) | 105 | 110 |
| **Total** | **3,857** | **2,346** |

The largest single destinations were `VRAM_A` (253), `FB_D` (180, colour calculation), `TEXT_ERROR`/`TEXT_Y_ERROR`
(164/115), `LINE_ERROR` (94). The three gouraud dividers are small (20-27 ALUTs each); the gouraud cost is the
nine 17-bit accumulate adders and 500 registers of accumulators, steps and dividers.

## 3. Changes and measured effect

Each row is cumulative, area profile, whole module. "step" = the commit(s) named. Savings of individual rows were
measured on their snapshots (`sizing/vdp1/steps/*`, not committed); where a row bundles several commits they were
mapped together.

| Step | ALUTs | regs | what |
|---|---|---|---|
| golden | 3,857 | 2,346 | |
| s1 | 3,734 | 2,163 | edge-step constants as wires of the stored extents; gouraud step read from the dividers; command address 14 bits; VRAM address as one adder / concatenations |
| s2 | 3,568 | 2,162 | one texture/row error set-up for sprites and lines; maj/min line set-up |
| s3 | 3,554 | 2,162 | colour calculation as flags instead of an 8-way case |
| s5 | 3,431 | 2,092 | + shared CPU write buffer, shared vertex-load adders, polyline left point = previous right point |
| s6 | 3,493 | 2,007 | texture error constants and gouraud divider operands as combinational functions (+62 ALUT, -85 regs; kept) |
| s7 | 3,498 | 1,953 | combinational clip window (-54 regs) |
| s8 | 3,441 | 1,953 | error accumulators with a gated second operand, one adder each (-57 ALUT) |
| s9 | 3,443 | 1,953 | single draw-coordinate adders (neutral) |
| s10 | 3,417 | 1,953 | one row set-up block for normal/scaled sprites and lines (-26) |
| s11 | 3,417 | 1,953 | single penalty-counter and sprite-offset adders (neutral) |
| s12 | 3,429 | 1,902 | serial gouraud dividers, quotient shifted into the step registers (-51 regs, +12 ALUT) |
| s13 | 3,416 | 1,902 | single-adder absolute value (-13) |
| s14 = final | **3,402** | **1,884** | one CPU address register for read and write beats |

Measured counts are of the whole module after `quartus_map`; the s5/s6 pair shows that the combinational constants
trade 62 ALUTs for 85 registers.

### What each change is and why it is safe

1. **Edge-step constants as wires.** `*_COL_ERROR_X/Y_INC`, `*_D_ERROR_INC`, `*_COL_ERROR_ADJ`, `*_D_ERROR_ADJ`
   were registers loaded in `POLYGON_CALCTY` with `POLY_xS?<<1`, `*_HEIGHT<<1`, `-(*_HEIGHT<<1)`,
   `-(COL_HEIGHT<<1)`. Their sources are written only in `EDGE_INIT`/`CALCE`/`CALCH`, so from `CALCTY` on they are
   equal at all times; the registers are replaced by wires of the sources (the right D-error adjust equals the left
   one). The stepping code reads them only in `LINE_NEXT` of polygon/sprite commands, always after `CALCTY`.
2. **Gouraud step without a staging register.** `GRD_CALC_STEP` captured the dividers at state 19 and the step
   registers copied it at state 20. The dividers hold the quotient from their step 18 until the next START, and the
   operands `GRD_CALC_1/2` do not change during a calculation, so the dividers (and the sign of the difference) are
   read directly when the step is stored.
3. **Command address 14 bits.** Command tables are 16-word aligned (`+16`, link `{LINK[15:2],4'b0}`), so address
   bits [4:1] are constant 0 (Quartus kept them as one register); `CMD_ADDR`/`CMD_RET_ADDR` are 14 bits and the VRAM
   address is `{CMD_ADDR_H, VRAM_READ_POS}`. Same for CLT (`{COLR[15:2],POS}`) and gouraud table (`{GRDA,POS[1:0]}`,
   POS never exceeds 3 for that read: pending is cleared at POS 3).
4. **VRAM pattern address.** The six adders (3 colour modes x forward/reverse) and the colour-mode adders of
   `SprAddr` become `base + sign-extended offset`, with the shared quantity `W' - P' - 1` in 10 bits (range
   -512..510, so the original 18-bit wrap-around equals sign extension). The `COMM >= 4 ? '1` case of `SPR_ADDR` is
   dead: `SPR_READ` is never set for COMM >= 4. `VRAM_BLEN` uses the same `W'`.
5. **Row texture error set-up** (`SSPR_CALCTX`, `LINE_CALCTX`, `POLYGON_CALCTY`). The two row states compute the same
   function of (row width R, texture width W, HSS, direction flag f) when `COMM[2]=0`; the line state additionally
   requires `COMM[2]=0` for HSS, which is folded into one condition. The four-way choice is written as
   `small/big` selects over shared operands (`W - 2R - f` or `f - R`, `2R` or `2(R-1)`, ...), keeping the 8-bit
   wrap of `W[8:1]-1` that the golden code has for W=1. `TEXT_ERROR_INC/ADJ` and `TEXT_Y_ERROR_INC/ADJ` are then
   functions of values that do not change while a row (polygon) is drawn: `ROW_WIDTH` and `ORIG_WIDTH` change only
   in the row set-up state, `COL_HEIGHT`/`ORIG_HEIGHT` only in set-up/command load. Line set-up uses
   major/minor axis: `INC = 2 min`, `ADJ = -2 maj`, `ERR = -maj - 2 min`, `ROW_WIDTH = maj + 1` (identical modulo 2^14
   to the two mirrored branches).
6. **Colour calculation.** The eight-way case of `ColorCalc` is expressed by the flags `H` (halve source),
   `Z` (source zero), `BZ`, `BH` (background zero / halved) derived from CCB and the background MSB; algebraic
   rewrite of the same truth table (all eight CCB values x background MSB are random-covered by the testbench).
7. **Shared CPU write buffer.** The framebuffer write buffer (`CPU_FB_WA/D/WE`, `SAVE_FB_*`, 72 registers) and the
   VRAM one are merged; the read address register is merged with the write address register. Argument: a data beat
   of a new transaction is issued only when `RDY_N` is low; `RDY_N` includes `READY`, which is cleared when `CS_N`
   falls and set again only after both write FIFOs are empty (`CPU_*_WPEND` clear), and the read path
   needs `CPU_*_RRDY`. So write data of two regions, or a read address and write data, are never pending together.
   Assumption: the bus master samples `RDY_N` at least two clocks after it asserts `CS_N` (the SCU does it on `CE_R`,
   which is every second clock at most) and does not present a beat while `RDY_N` is high.
8. **Vertex load adders.** X words (even `CMD_POS`) and Y words (odd) are never loaded in the same cycle, so the
   zoom-point adders (`A+D`, `A+SDiv2(D+1)`, `A-D`, `A-SDiv2(D)`) and the `D+W-1` / `D+H-1` adder serve both axes.
9. **Polyline left point.** For polylines (COMM 5/7) `RIGHT_VERT`/`RIGHT_GHCOLOR` are never stepped, so each segment's
   left point equals the previous right point: `LEFT <= RIGHT` and only the right point selects among C, D, A.
10. **Clip window** (`SYS_CLIP_X1/Y1/X2/Y2`). They were refreshed one per clock round-robin from the user/system clip,
    local coordinate and `CLIP/CMOD`. These inputs change only while a command table is read (`CMD_WE`) and the first
    reader, `EDGE_INIT`/`CALCX`, is at least twelve clocks after the last word that can change them (words 12-15 are
    still to be read, three clocks each, then `EXEC`/`DELAY`). Combinational values equal the registers whenever they
    are read. Assumption: `EN` is not held low for long periods between command load and use (both are `EN`-paced
    on the golden side as well, the command-word load is not).
11. **Gated second adder.** `x + inc`, then `+ adj` if the compare hits, was an adder, a second adder and a mux per
    accumulator; now the second operand is gated (`+ (hit ? adj : 0)`): one adder, identical value. Applied to the
    six edge accumulators, `LINE_ERROR`, `TEXT_ERROR` and `TEXT_Y_ERROR`. For the texture errors the golden
    three-branch form collapses because `E[13]` implies `ADJUSTED[13]` (`ADJUSTED = E - (E[13] ? 0 : ADJ)`).
12. **Row set-up block.** `NSPR_CALCX`, `SSPR_CALCX` and `LINE_CALC` were three copies of the clip-case selection. They are
    one block; the normal sprite forces the "no horizontal clip" case, only `LINE_CALC` loads `LINE_DIRY`, only the
    normal sprite clears `HSS_EN` (it is read by `PAT_CNT` initialisation in the next cycle), the line error
    registers are written for sprites too (never read there).
13. **Penalty counter, sprite offset.** `+1`, `-3`, `-CMD_DELAY` are one adder with the golden priority
    (`-CMD_DELAY` over `+1` over `-3`); `SPR_OFFSY +/- W` is `A + (W ^ dir) + dir`. `Abs` is `(x ^ s) + s`.
14. **Serial dividers.** The 29-bit non-restoring divider only ever adds to its upper 12 bits and its dividend is five
    bits followed by zeros. `VDP1_DIV_STEP` keeps the 12-bit remainder and the step counter, takes the dividend bit
    from `A[4 - step]`, and the quotient bits are shifted straight into the step register of the running phase
    (left, right or line) while `RUN`. The old and new divider were compared exhaustively: all 32 x 4096
    (dividend, divisor) pairs, quotients identical (`make -C sim/vdp1 divtest`). Step registers hold partial
    quotients during their own phase; they are not read then (left/right steps are first used in `LINE_NEXT`, the
    line step in the draw states).

## 4. Verification

`make -C sim vdp1` (Verilator): the golden module (`sed`-renamed with prefix `REF_`) and the shrunk one run side by
side on the same stimulus; **every output of both is compared on every clock phase** (VRAM A/D/WE/RD/BLEN, FB0/FB1
A/D/WE/RD, FB_MODE3, DO, RDY_N, IRQ_N, VOUTO). Each side has its own VRAM model (random latency 0-3 or 0-10 with
rare 20+ stalls, `RDY` combinational on a request edge) and framebuffer models (one clock read latency, optional random
`FB_RDY`). The CPU is the SCU B-bus protocol master (address words, `RDY_N` waits, single/burst writes, reads).
At the draw end and at the end of each scenario VRAM and both framebuffers of the two sides are compared; the
framebuffers of the first scenarios are written as PPM (`out/sNNN_fbK_{golden,new}.ppm`, `make vdp1-ppm` for all).

Stimulus per scenario (seeded, `--n`, `--seed`): command tables in VRAM (preloaded or uploaded through the bus with
single and burst writes) with normal/scaled/distorted sprites, polygons, polylines, lines, all colour modes (CM 0-7),
all CCB (replace, shadow, half-luminance, half-transparent, gouraud x4), MON, mesh (both parities, blur), SPD, ECD,
HSS, flips, user/system clipping and local coordinates, pre-clipping (PCLP) on and off, jump/call/return/skip,
edges outside the window to hit every horizontal clip case, sizes 1-504 wide, extreme coordinates, `END`;
register writes (TVMR 0-3, FBCR with all bits, PTMR manual and frame-synchronous, erase window/data, VBE), draw
terminate, a soft reset pulse, random CPU traffic (VRAM, framebuffer single/burst, register reads) while drawing,
FAST on/off, two display timings, random VRAM latency modes, random `FB_RDY`, frame changes with erase.
250 scenarios, seed 3 (and 80-120 scenario runs with seeds 1, 2): 39.7 M clock phases compared, **0 mismatches**;
3,281 commands generated (COMM 0-B, all CM/CCB values hundreds of times; `COMM C-F` is excluded because the golden
module loops on it forever).

Sensitivity: deliberately breaking one wire (right D-error increment, one bit) is caught in scenario 0 within 40 k
clocks. Verilator line coverage over the two designs: 97.0 % lines, 99.2 % branches. Not exercised: the
`COMM C-F` defaults (golden hangs), a frame start landing in the middle of a colour-table/gouraud-table read, and
`BOTTOM_VERT` (unused).

Assumptions, collected: SCU bus-master protocol (item 7), `EN` pacing (item 10), command words are written only
while the command FSM is in `READ` (item 10, true by construction). No change depends on display timing.

## 5. M10K / MLAB

None used. The module has no array-shaped state: the only arrays are the 4-entry gouraud table (read in parallel)
and the colour table and pattern FIFO, which already are MLABs. Moving plain registers into depth-1 block RAMs was
tried in a scratch project (`ramtest`): Quartus does not infer a RAM for a one-word array
(`can't infer memory ... M10K`), and it would add a half-cycle read path on adder inputs.

## 6. What is left and why the target is not met

Largest remaining blocks (final): gouraud (~550 ALUT / ~440 regs), line engine and row set-up (~470), polygon edge state
(~370 / ~190), the command FSM (five state bits at ~55 ALUTs each), colour calculation (~160), VRAM address (~155),
rotation/display registers (~400 regs, exact timing-sensitive).
Things that would give more, each with a cost:

- Left/right edge stepping on one datapath with the right side one cycle later (a free cycle exists after
  `LINE_NEXT`): about -100 ALUT, needs operand muxes that cost most of it unless the state sits in RAM with falling-edge
  reads (half-cycle paths).
- Rotation parameter capture (`RP_*`) loaded straight into the line registers: -40 regs, but only equal if `RP_FIRST`
  does not change between capture and use, i.e. it depends on display timing; not applied.
- Gouraud edge colours as `A + n * step` with DSP multipliers instead of accumulators: -100 regs, +3-6 DSP, tight
  latency to the row start.
- One-hot command FSM: fewer ALUTs, +27 registers.
