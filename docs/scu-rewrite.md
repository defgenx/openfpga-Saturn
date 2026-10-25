# SCUP: area-first SCU for the Pocket

Scope: `src/fpga/saturn/Saturn/SCUP/` (module `SCUP` with the port list of `SCU`, `SCUP_DSP`), selected in `Saturn.sv` by
`ifdef POCKET_SCUP`. Reference: `src/fpga/saturn/Saturn/SCU/` (cycle-identical to `ref/Saturn_MiSTer`, see [scu.md](scu.md)).
Budget: 1,300 fitter ALMs including the DSP (2,378 in the full build before the exact shrink; 2,319 map estimate standalone
after it). Verification: `make -C sim scu DUT=SCUP` (golden `REF_SCU` against `SCUP`, every output every half clock).
Measurement: `sizing/scup/` (`go.sh <name>`: standalone `quartus_map`/`fit`/`sta`, area profile, Cyclone V 5CEBA4F23C8,
`NUM_PARALLEL_PROCESSORS 1`, through `tools/qrun.sh`).

## 1. Equivalence target

Must match the golden at the SCU ports: A/B/C bus data, strobes and wait-state behaviour, DMA start, arbitration and
completion timing, interrupt timing, register values read by the SH-2, DSP results and timing seen through its registers
and DMA. Free: where state lives, how it is muxed, how many clocks an internal result takes as long as the port-visible
event happens in the same clock as in the golden. `CE_R` and `CE_F` alternate every clk_sys, so every state machine step has
a CE_R clock and a CE_F clock; a CE_R write is visible in the next (CE_F) clock.

## 2. Where the area is (map profile, `sizing/scup/cones.py`, ALUT by sink)

| Group | ALUT | Notes |
|---|---|---|
| DSP datapath and control (P, RX, PC, CT0-3, LOP, DO, flags, TN0, DMA state) | ~600 | plus about 400 in RAM-input muxes |
| Bus-side output registers (BDO, ADO, AA, CBUS_A, CBUS_D, CDO) | ~480 | 5 to 12 sources per register |
| DMA address/count engine (RA, WA, RTN, WTN, IA, DSP_DR/DW) | ~520 | adders for RA/WA/IA/DSP_DR/DSP_DW |
| DMA buffer and push steering | ~340 (before this work) | |
| Channel registers DR/DW/DC and REG_DO | ~430 (before) | |
| Four FSMs (one-hot) | ~350 | |
| Timers, interrupts, A-bus wait counters | ~250 | |

1,468 registers before, 1,256 after the channel-register move.

## 3. Per-unit plan and estimate (fitter ALMs, standalone)

| Unit | Technique | Estimate saved |
|---|---|---|
| Channel registers | DR/DW/DC in MLAB; DMA write-back in the CE_R clock, CPU write as read-modify-write in the CE_F clock (CPU never writes in a CE_R clock, so one write port serves both and "CPU wins per byte" is kept) | 50 to 100 |
| DMA buffer | four byte-lane MLAB RAMs, rotation muxes instead of per-byte steering | 80 to 150 |
| Bus output registers | flat AND-OR select from one-hot state, shared address words | 100 to 150 |
| DMA engine | fewer adders (shared RA/WA/IA add), DSP address registers into the register RAM | 60 to 100 |
| DSP | split DSO mux, per-bank write mux sharing, counters, decode ROM | 80 to 150 |
| FSMs, timers, interrupts | trims | 30 to 60 |

Sum of the estimates: 400 to 700 ALMs, i.e. about 1,700 to 1,950 against the 1,300 budget; the measured values replace
these estimates in section 5 as they are produced. (Earlier blocks measured 25 to 40 percent of their estimate, see
[vdp1-rewrite.md](vdp1-rewrite.md); the same shortfall is possible here.)

## 4. Deviations

See section 6 once the sim has run on all seeds.

## 5. Measured

(filled in as runs complete)
