# VDP2 area reduction

Source: `src/fpga/saturn/Saturn/VDP2/{VDP2.sv,VDP2_pkg.sv,VDP2_mem.sv}`, rewritten in place from Saturn_MiSTer `9aa9449`
(golden copy: `ref/Saturn_MiSTer/rtl/Saturn/VDP2/`). The port list is unchanged. Branch `vdp2-shrink`.

## Result

Standalone `quartus_map` of the VDP2 (wrapper `sizing/vdp2/vdp2_wrap.sv`, virtual pins, 5CEBA4F23C8, one
processor), **area profile** (`sizing/vdp2/area.qsf`: AREA optimisation, MINIMAL BITS, resource sharing on, retiming,
WYSIWYG remap, pre-map resynthesis and physical synthesis off, the Pocket PSX settings). Unmodified VDP2 with the
same settings is the baseline.

| | ALMs (est.) | comb. ALUTs | memory ALUTs (MLAB) | registers | M10K bits | DSP |
|---|---|---|---|---|---|---|
| baseline, area profile | 6,598 | 8,912 | 36 | 7,825 | 32,768 (4 blocks) | 12 |
| **exact rewrite (macros off)** | **5,732** | **7,686** | 1,058 | **4,841** | 35,304 (14 blocks) | 12 |
| change | -13% | -14% | | **-38%** | **+10 M10K** | 0 |
| exact + all "game-safe" cuts (below) | 5,078 | 6,740 | 1,046 | 4,174 | 34,784 | 12 |
| exact + every cut incl. must-stay features | 4,275 | 5,568 | 934 | 3,786 | 34,048 | 12 |

Balanced profile (the one `docs/sizing.md` used): baseline 7,000 ALMs / 9,229 ALUTs / 7,822 registers; final exact
rewrite: see `sizing/vdp2/snap/final_bal` (run at the end, number in the commit log of this doc).

**Targets (<= 5,500 ALUTs, <= 4,500 registers): registers met (4,841 exact, 4,174 with the safe cuts); ALUTs not met**
(7,686 exact, 6,740 with the safe cuts, 5,568 only if features that games need are removed too). The exact
rewrites left no more large exact savings that I could find at acceptable risk; see "What is left".

M10K: the three pipeline tap RAMs use 5 + 3 + 2 = 10 blocks (RAM widths 193, 81, 43 bits, 8 deep). Everything else
that was moved out of registers is an MLAB (asynchronous read), which costs memory ALUTs (counted in ALMs, not in the
combinational ALUT figure) and no M10K. Budget +15 M10K; used +10.

## Method

1. Profile: `quartus_map` + `quartus_cdb --vqm`, then `sizing/vdp2/profile.py` (registers per signal group, ALUTs
   attributed by fan-out cone) and `blocks.py` (grouping into functional blocks). `sizing/vdp2/snap_run.sh` runs a
   snapshot of the sources (optionally an older commit, a macro list or a sed ablation) in Docker.
2. Every change is checked by the differential simulation (below) before it is committed.

### Profile before (balanced profile, 9,226 ALUTs / 7,822 registers attributed)

| block | registers | ALUTs |
|---|---|---|
| VRAM access, CPU port, fetch counters | 778 | 2,812 |
| cell data assembly (NBG_CDC, NDC, CDP, dot data) | 1,348 | 1,870 |
| rotation (parameters, state, coefficient) | 1,686 | 1,071 |
| access pipelines (VA/BG/PN/RBG, window hit pipes) | 1,547 | 754 |
| priority / colour | 404 | 1,340 |
| register file | 1,386 | 219 |
| scroll counters | 512 | 628 |
| timing, windows, other | 161 | 531 |
| (outputs, RAM-bound logic) | | 252 |

Ablations of the unmodified design (area profile): removing RBG0+RBG1 saves 2,206 ALUTs / 2,149 registers / 9 DSP
(the rotation machinery is a quarter of the VDP2); RBG1 alone 352 ALUTs; zeroing every plane/character address
function and its bank muxes saves 2,136 ALUTs.

## Changes (cumulative, area profile; registers include the RAM-backed state removed)

| step | what | ALMs | ALUTs | registers |
|---|---|---|---|---|
| 0 | baseline | 6,598 | 8,912 | 7,825 |
| 1 | pipeline stages 2-4 (VA/BG/PN/RBG pipes, window hit pipes, line-colour delay) read back from block RAM (`VDP2_DTAP`) instead of shift registers | 6,599 | 9,100 | 6,787 |
| 2 | cell data double buffer (NDC, 4 x 16 bytes) in RAM, read per consumer (`VDP2_NDCRD`) | 6,399 | 8,945 | 6,276 |
| 3 | priority resolution as rank selection instead of the insertion chain | 6,323 | 8,768 | 6,276 |
| 4 | rotation parameter table (24 words + 6) in RAM, one read copy per consumer | 6,207 | 8,596 | 5,653 |
| 5 | rotation per-table state (Xp/Yp/dX/dY/Xsp/Ysp/Xst/Yst) in RAM, Xsp/Ysp accumulate one entry per DOTCLK_DIV slot | 6,136 | 8,664 | 5,171 |
| 6 | plane map offset tables in RAM | 6,011 | 8,538 | 4,907 |
| 7 | cycle pattern registers in RAM | 5,978 | 8,508 | 4,787 |
| 8 | RAMs other than the pipeline taps built as MLAB (asynchronous read, no latency assumption) instead of M10K | 6,287 | 8,488 | 4,793 |
| 9 | one coefficient table decoder; one shared layer-fetch address unit evaluated once per bank per dot | 5,917 | 7,979 | 4,846 |
| 10 | table fetch address mux shared by the four banks; per-layer fetch counters from OR-ed bank hits | 5,753 | 7,706 | 4,842 |
| 11 | per-layer fetch flags taken from the one-hot access flags | 5,732 | 7,686 | 4,841 |

Steps 1-7 were measured with every RAM as M10K (ALMs low, 50 K block bits); step 8 trades 309 ALMs of memory ALUTs
for 40 M10K blocks, which is what the M10K budget requires. Step 1 raises ALUTs (the stage-0 selection logic and RAM
address arithmetic become visible) while removing 1,000 registers; later steps recover it.

Details of each technique:

- **Pipeline taps** (`VDP2_DTAP`): a K-stage shift register that shifts on an enable is a ring buffer; the RAM read
  address is the post-edge write pointer, so the registered RAM output equals stage K at every clock (cycle-identical,
  no latency). Stage 1 stays in flip-flops (it would read the word written on the same edge). Only the fields that
  later stages read are stored (Tap2/3/4 structs in `VDP2_pkg.sv`).
- **Asynchronous-read MLAB state** (NDC, rotation parameters and per-table state, map tables, cycle patterns): behaves
  as a register array; registers that clear on reset keep a per-word valid flag in flip-flops (`VDP2_REGRAM`).
- **Shared layer-fetch address unit**: the plane/character/bitmap/coefficient addresses of up to 4 banks used to be
  computed for every layer and muxed per bank. They are now computed for the bank selected by `USEL` (banks 0-2 on the
  clocks after DOT_CE_R, bank 3 on the DOT_CE_F/DOT_CE_R clock) and held per bank (`HA`, `HM`); the inputs only change
  at DOT_CE_R, so the held value equals the original combinational value. 19 address function instances became 8.
- **Rank selection**: the three highest priorities, equal priorities in insertion order (sprite, RBG0, NBG0-3), are
  chosen by pairwise comparison instead of a sequential insertion.

## Deviations from the original behaviour (all of them)

1. **Valid configuration assumption (bank exclusivity).** At most one access type is active on a VRAM bank in a slot.
   The original resolves a conflict by statement order; the shared unit does not. A conflict needs RBG0 given a bank
   that RBG1 owns (B0/B1) or a malformed cycle pattern. The simulation does not generate those (RBG1 on forces
   RDBSB0/B1 = 0).
2. **Register write skew.** Registers that change the layer fetch address (CHCTL, PNC, PLSZ, MP*, ZMCTL, SCRCTL,
   BGON, RPMD, KTCTL, KTAOF, VCSTA, ...) were read live for every bank at DOT_CE_F. A CPU write that lands in the
   3 clocks before the slot is now seen by banks evaluated later but not by the ones evaluated earlier, and the
   counter update at the next dot uses the held value. The effect is a one-dot difference for a register change made
   during a fetch; hardware does not define it either. The simulation issues these writes in vertical blank only; all
   other registers (scroll values, windows, priorities, colour calculation, table addresses) are written at any time and
   match clock for clock.
3. **Reset.** Rotation per-table state, the rotation parameter RAM and the pipeline RAMs are not cleared by RST_N (they
   power up zero). The original reset Xsp/Ysp/Xp/Yp/dX/dY/Xst/Yst; they are rewritten from VRAM before use on every
   line. Map and cycle pattern tables clear on RST_N and RES_N as before (valid flags).
4. **Slot spacing.** The shared unit needs DOT_CE_F at least 4 clocks after DOT_CE_R (CE_R every second clock, as in
   `Saturn.sv`). Taps and MLAB RAMs have no such dependency.
5. **DEBUG outputs.** The `ifdef DEBUG` outputs of removed signals (priority per layer, Xsp/Xp/dX..) are not driven.
6. **Timing closure is not examined.** MLAB asynchronous reads and the M10K tap outputs lengthen some paths; the map
   run only measures resources. The tap RAMs are registered (no half-cycle paths); nothing uses the falling edge.

## Differential simulation

`make -C sim vdp2` (Verilator): the golden VDP2 (copied to `sim/vdp2/build`, modules and package renamed `REF_*`,
`synopsys translate_off` regions removed in both) and the rewritten one run side by side with identical stimulus; all
outputs are compared on every clock (RGB, DCLK/HS/VS/HBL/VBL, field/interlace/HRES/VRES, HINT/VINT/HTIM/VTIM/DCE,
FBDO, CPU read data and RDY_N, both VRAM request buses with write data and enables). Memory models: 4 VRAM banks
with one clock of read latency (identical contents per copy), behavioural `altsyncram`/`altdpram`.

- 17 scenes selected by seed, each with random register values of random density plus forced fields: NBG0 cell mode
  at 4/8/16/15-bit/32-bit colour, bitmaps, four NBG, RBG0 and RBG0+RBG1 with rotation parameter modes, windows and
  line scroll, sprite input and colour calculation, mosaic and zoom reduction, hi-res and interlace, random,
  and three tied-priority scenes with extended colour calculation, line colour, shadow and special priority.
- Register programming through the real bus protocol (address phase, wait for RDY_N, request pulse), single and burst
  VRAM writes, colour RAM fill, random mid-run register/VRAM/CRAM writes and reads, a mid-run soft reset followed by
  partial reprogramming, EXLAT, PAL, sprite data on FBDI changing every few clocks.
- VRAM contents: noise, small values, zero-heavy, smooth ramps. Frames are dumped as PPM (`make -C sim vdp2-ppm`,
  converter `sim/vdp2/ppm2png.py`) from both copies and compared byte for byte.
- Result: **300 seeds x 1.5 M clocks, 0 mismatches** (plus the frame dumps identical). `sim/vdp2/mutate.sh` applies a
  one-line mutation to a source and reruns; it detects mutations in the rotation tables, map tables, soft-reset
  valid flags, accumulate serialization, the ordering of the fetch counters and the colour calculation stages. Coverage
  probes (`VDP2_COV=1`) show the extended colour calculation path is exercised only in some seeds; one mutation of its
  line-colour gating was not detected.
- Mid-run writes of address-affecting registers are held back to vertical blank (deviation 2); the RBG1/RBG0 bank
  rule (deviation 1) is enforced in the stimulus.

## Optional feature cuts (`POCKET_CUT_VDP2_<NAME>`)

Without a macro the design is the exact version above (same logic; the masks are constant). Each cut clears the
register bits that select the feature (`CUT_*` constants in `VDP2_pkg.sv`, applied to the write masks) and, for
three of them, gates the fetch (COEF) or the sprite shadow bit (SHADOW). `make -C sim vdp2 CUT=<NAME>` builds the
rewritten design with the macro and the golden copy with the same register bits cleared, and compares video
(not the CPU/VRAM bus, whose timing changes when a fetch is gone) with CPU VRAM traffic disabled: all 16 cuts pass 40
seeds. Savings are measured against the exact design (area profile), single cut each; the combined runs are on the
last lines. Game evidence is from `docs/game-impact.md` (emulator fix lists; counts are floors, not usage
statistics).

| macro | ALMs | ALUTs | regs | what a game sees | named titles (game-impact.md) |
|---|---|---|---|---|---|
| `RBG1` | -166 | -207 | -112 | second rotation layer missing; RBG1-only games lose their background | Image Fight, Houkago Ren'ai Club, Gale Racer |
| `RPARAMB` (includes RBG1) | -204 | -289 | -172 | rotation parameter set B (and RBG1) unavailable; per-line A/B switching and windowed switching stop working, RBG0 uses set A | RBG1 titles plus A/B switching users |
| `MOSAIC` | -24 | -29 | -21 | mosaic effect ignored | Race Drivin' logo, Grandia text boxes |
| `EXTCC` | -36 | -38 | -12 | extended (second screen) colour calculation / gradation off; plain ratio blend stays | Astal fog, Saturn Bomberman boss arena |
| `SPECIAL` | -96 | -119 | -132 | special priority and special colour calculation (per-dot) ignored | Mr. Bones, Waku Waku Puyo Puyo Dungeon, Sonic R (water), The Story of Thor |
| `SHADOW` | -28 | -30 | -10 | sprite shadow / layer shadow not applied | Tokyo Shadow, Blue Seed, Last Bronx, Metal Black |
| `LNCOL` | -60 | -67 | -59 | line colour screen insertion off (the line colour fetch slot is kept) | Astal, Sonic Jam, Athlete Kings, World League Soccer 98 |
| `SPRWIN` | -12 | -26 | -16 | sprite window off | Metal Black boss effect |
| `LINEWIN` | -22 | -15 | -2 | line window tables off (windows from registers stay) | Panzer Dragoon II Zwei, Panzer Dragoon Saga |
| `BACKLINE` | -12 | +4 | 0 | back screen colour per line off (single colour stays) | Sakura Taisen FMV, Sega Rally boot |
| `HIRES` | 0 | 0 | -12 | 640/704 modes read back as low-res | Sonic Jam menu, Astra Superstars (measured saving is nil) |
| `ZOOM` | -192 | -325 | -277 | NBG0/1 1/2 and 1/4 reduction ignored | few; vertical-cell-scroll-with-zoom case |
| `COEF` (rotation coefficient tables incl. CRAM) | -321 | -507 | -183 | per-dot coefficients ignored | FIFA 98 (CRAM), Radiant Silvergun, Sonic R, Panzer Dragoon II Zwei: **must stay** per game-impact.md |
| `LINESCROLL` (line scroll, vertical cell scroll, line zoom) | -212 | -253 | -131 | **must stay** | Street Fighter Zero/Alpha, Rayman, Cotton 2, Vampire Savior, Sonic Jam |
| `BITMAP` (bitmap NBG/RBG) | -146 | -231 | -28 | **must stay** (FMV, galleries) | Shin Kaitei Gunkan, Capcom Generation 5, Lunar |
| `RGB32` (16M-colour modes) | -247 | -298 | -48 | **must stay** (FMV) | Baroque Report, Funky Fantasy, FMV titles |

Combined (area profile, against the exact design 5,732 ALMs / 7,686 ALUTs / 4,841 registers):

| set | ALMs | ALUTs | registers |
|---|---|---|---|
| all game-safe cuts: RBG1 RPARAMB MOSAIC EXTCC SPECIAL SHADOW LNCOL SPRWIN LINEWIN ZOOM BACKLINE HIRES | 5,078 | 6,740 | 4,174 |
| all of them plus COEF LINESCROLL BITMAP RGB32 | 4,275 | 5,568 | 3,786 |

Single-cut figures do not add up exactly (shared logic). Ordered by safety (fewest named games first, saving
per cut): `HIRES` (no saving), `BACKLINE`, `SPRWIN`, `LINEWIN`, `SHADOW`, `MOSAIC`, `EXTCC`, `LNCOL`, `SPECIAL`, `ZOOM`,
`RBG1`, `RPARAMB`. Together they give 6,740 ALUTs: the ALUT target is not reachable without removing line scroll,
coefficient tables, bitmaps or the 16M-colour modes, which game-impact.md marks as must-stay.

## What is left (ALUTs)

Profile of the exact design (area profile, 7,686 ALUTs): cell data assembly (NBG_CDC byte routing ~1,000 ALUTs,
CDP, dot data) ~1,770; VRAM access and CPU port ~1,700; priority/colour ~1,070; scroll counters ~620; RAM-bound logic
(read muxes, taps) ~690. Candidates I did not pursue because they cannot be made cycle-identical cheaply:
a read-time decode of raw character words instead of the byte-routed assembly (the wide double-buffer copy costs
as much storage as it saves; stale-data behaviour would change), and splitting NBG2/NBG3 off the lane-borrowing
slots.

## Files

- `src/fpga/saturn/Saturn/VDP2/` - the rewritten sources (RAM modules in `VDP2_mem.sv`).
- `sim/vdp2/` - harness (`tb.cpp`, `tb_top.sv`, `models.sv`, `prep.sh`, `mutate.sh`, `dbg.sh`, `ppm2png.py`); `make -C sim vdp2`.
- `sizing/vdp2/` - standalone sizing projects, `snap_run.sh`, `profile.py`, `blocks.py`, `summary.sh`, `area.qsf`.
