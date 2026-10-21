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

## 4. Measured (standalone `quartus_fit`, area profile, virtual pins on every port, 5CEBA4F23C8)

Standalone numbers carry about 165 to 190 ALMs of virtual-pin effect; the in-system SCU is 2,215 fitter ALMs for the
2,426 standalone baseline (ratio 0.91, DSP 574 in system, 625 standalone).

| Revision | fit ALMs | registers | MLAB LABs | setup slack at 57.27 MHz |
|---|---|---|---|---|
| `SCU` (baseline, shrunk) | 2,426 | 1,436 | 10 | |
| `SCUP` `l2`: DR/DW/DC in MLAB, DMA acknowledges as wires | 2,406 | 1,224 | | |
| `SCUP` `l1` (committed): `l2` + DMA buffer as four byte-lane MLAB RAMs | **2,408** | 1,162 | 19 | +0.46 ns |
| `l3`: `l1` with binary BBUS/DMA state encoding (rejected) | 2,448 | 1,112 | | |

Findings:

- Moving 212 registers into MLAB removes 212 flops and about 20 ALMs; the MLAB LABs (10 ALMs each, half empty for the
  2-deep and 4-deep RAMs) and the read-modify-write/merge logic give the rest back. The byte-lane DMA buffer is neutral.
- The fit is 3,420 ALUT (1,173 of them with at most 3 inputs, 1,130 with 5) in 2,426 ALMs; 1,618 ALMs hold LUT logic only.
  The area is spread over about 150 sink groups (largest: BDO 160, DMA buffer 125, DSP address registers 100 each, REG_DO 85);
  no unit holds a structure that serialisation or a RAM removes without adding the same amount back as capture registers or
  MLAB LABs.
- One-hot encoding of the four FSMs stays better than binary (+40 ALMs for binary).

Result: **2,408 standalone (about 2,200 in system) against the 1,300 budget; not met.** The budget needs roughly -45 percent
of the logic, which the equivalence target (port-level timing identical) does not leave room for: the remaining logic is the
bus protocol state machines and the per-register source multiplexers they drive, all of which must reproduce the golden
cycle by cycle.

## 5. Verification

`make -C sim scu DUT=SCUP` (testbench unchanged: golden `REF_SCU`/`REF_SCU_DSP` against `SCUP`/`SCUP_DSP`, every output every
half clock, two `RAMH_SLOW` settings, three CE patterns): 24 seeds x (2 SCU + 1 DSP) x 3M cycles, all pass for `l1`.

## 6. Deviations

- DSP read pushes (`PUSH_RDD`) that coincide with a DSP-to-bus push (`DSP_PUSH`, only possible after a DSTP abort leaves a
  stale read-done pulse) no longer overwrite bytes 0 to 3 of the buffer; the DSP push wins. Not reached by any of the 24 seeds
  in a way that changes an output.
- `DMA_BUF` bytes 0 to 3 for the DSP are read at the buffer head; this is the same as bytes 0 to 3 because RPOS is 0 in every
  transfer that loads the DSP.
- DR/DW/DC reset by a 4-clock zeroing walk after RST_N is released instead of an asynchronous clear.
