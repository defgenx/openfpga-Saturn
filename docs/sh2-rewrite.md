# SH-2 (SH7604) area-first rewrite: `SH7604P`

Branch `sh2-rewrite`. Code: `src/fpga/saturn/SH/sh2p/` (module `SH7604P`, same ports as `SH7604`), selected in
`Saturn.sv` by `` `ifdef POCKET_SH2P `` (without it nothing changes). Tests: `sim/sh2/`. Sizing: `sizing/sh2p/`.
Context: [status.md](status.md) (decision, ground rules), [sh2.md](sh2.md) (clock enables, no-go on a shared
datapath), [game-impact.md](game-impact.md) (cache and DMA behaviours games depend on).

Goal: both SH-2s in about 4,000 fitter ALMs (2,000 each) against 3,460 each today, with no feature dropped.

## 1. Baseline (golden = `SH7604`, area profile, one CPU)

Map numbers (ALUT / registers) from `sizing/sh2/ab_area.entity.txt`, fitter ALMs from the integration run
([integration.md](integration.md) section 7) and from `sizing/sh2p/base_one.*` (single CPU, same area profile):

| Block | ALUT | Regs | ALM (fitter) |
|---|---|---|---|
| SH_core (+regfile) | 2,078 | 861 | ~1,275 |
| CACHE (data RAM 32 Kbit in M10K) | 945 | 448 | ~670 |
| BSC | 569 | 255 | ~380 |
| DIVU | 540 | 581 | ~365 |
| DMAC | 550 | 413 | ~330 |
| MULT (3 DSP) | 362 | 138 | ~250 |
| INTC / FRT / WDT / MSBY | 207 / 161 / 82 / 11 | 144 / 107 / 41 / 3 | ~140 / 110 / 55 / 8 |
| top glue (clock dividers, read-data mux) | ~300 | 27 | ~200 |
| Total | ~5,850 | ~3,015 | ~3,460 |

Rule of thumb from these rows: ALM ~ 0.58 x ALUT + 0.10 x registers (all blocks within 10%). A probe of the
`Decode()` function alone (`sizing/sh2p/probe/dec_wrap.sv`) is **468 map-ALMs, i.e. about a third of SH_core**;
removing the whole operand bypass network from SH_core (`probe/core_nobp.sv`) saves 209 map-ALMs of 1,428.

## 2. Timing model the design uses

`clk_sys` = 2 x SH-2 clock. `CE_R` and `CE_F` alternate. Every SH-2 cycle `t` is: edge R(t), one `clk_sys`,
edge F(t), one `clk_sys`, edge R(t+1).

* The core registers change only on R edges. Its inputs (`BUS_WAIT`, `BUS_DI`, interrupt request, ...) are produced by
  cache/BSC/peripheral registers that change on F edges, so they are stable only in the F to R half. Core logic
  between two R edges therefore has two `clk_sys` (multicycle 2, which the golden core already needs: Fmax 51 MHz).
* Cache FSM, BSC bus transitions, and the peripheral read-data registers work on F edges (golden behaviour; kept).
* What the rewrite uses beyond the golden design: anything that is a function of registers only (not of the late
  inputs) may be evaluated in the R to F half, registered at F, and finished in the F to R half. That is how one
  adder or one decoder pass can serve two jobs inside one SH-2 cycle.

## 3. Equivalence strategy

The golden pair is the oracle (`ref/Saturn_MiSTer`, renamed `REF_`). `sim/sh2/tb/tb_top.sv` compares **every
output of both CPUs on every `clk_sys`** plus final memory. The aim is to keep that exact comparison passing for
the rewrite, which is stricter than the transaction-level target of [status.md](status.md): same cycle for every
external bus access, instruction timing, wait states, interrupt latency, `BRLS/BGR`. Where a block cannot be
bit/cycle-exact for a stated reason, the deviation is listed in section 9 with its justification and its own test.

Method: each block is rewritten as a drop-in replacement in the `SH7604P` hierarchy (same internal interface as the
golden block), verified first in a block-level testbench (golden block and new block with random register traffic,
all outputs compared every `clk_sys`; `sim/sh2/unit/`), then in the system sim (13+ programs x 4 environments).
Area is measured per block with `quartus_map` (`sizing/sh2p/`), then the whole CPU with map and fit.

## 4. Architecture and ALM budget (design targets, to be replaced by measurements)

| Block | Golden ALM | Target ALM | Main techniques |
|---|---|---|---|
| Core | 1,275 | 650 | compact class-based decode, early register-file writes (no bypass network), regfile in MLAB, one shared ALU/adder for address and execute, fewer pipeline data registers |
| Cache | 670 | 320 | epoch purge (no 320 dirty flip-flops), tags/valid/LRU in MLAB (or one M10K), one lookup datapath |
| BSC | 380 | 290 | same state machine (timing is empirical), narrower data latches, shared address decode |
| DIVU | 365 | 110 | one 33-bit adder used serially, dividend/quotient in DVDNT registers, no R/D/R64/D64 copies |
| DMAC | 330 | 170 | channel registers in MLAB, one shared address/count incrementer, 4-word burst buffer in MLAB |
| MULT/MAC | 250 | 90 | 3 DSP blocks kept, 64-bit accumulate done serially in the 2-4 busy cycles |
| INTC, FRT, WDT, MSBY | 313 | 190 | central register decode, shared read-data register, MLAB where possible |
| Glue (clock dividers, address decode, read-data mux) | 200 | 80 | one address decoder, one read-data register |
| **Total per CPU** | **~3,460** | **~1,900** | pair ~3,800 against the 4,000 budget |

These targets are plans. Section 8 (to be filled during the work) holds the measured numbers.

### 4.1 Core

Observable core timing is the golden control skeleton (pipeline stall logic, `INST_SPLIT`/`MAWB_STALL`, state
sequencing of multi-cycle instructions, interrupt/exception microcode, delay-slot handling). It is small and
register-dependency based, and it is where cycle exactness lives, so it is kept as it is. The data side is
rebuilt:

1. **No bypass network, operands read from the register file in EX.** The golden core reads the register file in
   ID, registers the operands and repairs them with a 6-level bypass in EX (about 210 map-ALMs plus ~290 data
   flip-flops: EX.RA/RB/R0, MA.RES, WB.RES, WB.RD, WB2.RESA/RESB, RD_SAVE). The pipeline is sequentially
   consistent in value, so writing results to the register file early gives the same operand values:
   * ALU results are written to the register file at the R edge that moves the instruction from EX to MA
     (live ALU path, inside the 2-clock window). No instruction writes two ALU-class registers in one EX (checked
     over the whole decode table by a script), so one write slot covers it.
   * Load / MAC-read data is captured at the R edge where `BUS_WAIT` drops (same edge as the golden `WB.RD`), and
     written to the register file at the following F edge from that register. For the one cycle before the
     write lands, a single-level bypass from the capture register serves EX operands. A same-register write by
     the instruction leaving EX at the same R edge wins (golden program order).
   * Microcode forwarding flags `BPMAB`, `BPLDA`, `BPWBA` (reset/exception/TAS/RTE/LDC sequences) read the registers
     they name in the golden pipeline: previous result (`MA.RES`), previous load data (`WB.RD`), and for TAS a
     one-bit "loaded byte was zero".
2. **Register file** 16 x 32 in two MLAB copies (two read ports) + PR; R0 as flip-flops (third read port). Write
   port slots: R edge (EX result), F edge (load data), as the golden `WA`/`WB` ports already do.
3. **Decode** is rebuilt as class detect (about 70 opcode classes, one-hot) plus per-field OR planes, instead of
   the nested `case` that maps to 468 ALMs. The microcode state table is unchanged (it is the timing). A
   generated-and-checked approach: a script enumerates all 65,536 opcodes x states against the golden `Decode()`
   in simulation (exhaustive equivalence, section 6).
4. **One adder** serves PC+2, branch/address arithmetic and the ALU: PC increment is done in the R to F half when
   the main adder is idle, or kept as a tiny dedicated 31-bit incrementer if sharing costs more muxes than it saves
   (measure first).
5. Pipeline `DecInstr_t` copies are cut to the fields each stage uses (EX: all execute fields; MA: bus/MAC/WB
   fields; WB: writeback fields); `WB2` disappears with the bypass network.

Hard parts: (a) the 2-clock window must also hold the EX path that now includes the register-file read, ALU,
write data into the MLAB; (b) `BR_T` (conditional branch decision uses the combinational T of the instruction in EX)
stays as golden; (c) `INST_SPLIT`/`LOAD_ISSUE` bubble logic depends on RA/RB numbers of the decoded instruction
(kept, they only use control fields); (d) WAW ordering of a late load write against a younger ALU write.

### 4.2 Cache

Same behaviour as the golden `CACHE` (4-way, 4 KB, LRU with the 2-way mode, write-through, `CCR` `CE/ID/OD/TW/CP/W`,
address array and data array areas, line purge by address, global purge, cache-through, TAS lock, 4-longword
burst fill with the requested word first). The data array stays 4 x 1024 x 8 in M10K.

* **Global purge (`CCR.CP`)**. The golden version keeps 4 x 64 + 64 "dirty" flip-flops with per-bit enables
  (~320 regs, ~300 ALUT): `CP` sets all dirty, a fill/array write clears the dirty bit of that way (valid is still
  honoured). Replacement: a 3-bit epoch per set stored with the valid bits and one 3-bit global epoch. `CP` advances
  the epoch (one flip-flop group, immediate and exact: every set's stamp mismatches). A stamp is read with
  the tags, so "valid" = valid bit and stamp == epoch; a write to a set restamps it and clears the other ways'
  valid bits first when the stamp was stale; a background scrubber restamps stale sets to a dead value so a stamp
  cannot match again after the epoch wraps. Exact unless more than 6 purges fall inside one 64-set lap; a
  purge request that would reach that is stalled (documented deviation, never reached by the golden test programs
  or by the BIOS/game patterns in game-impact.md; test `t_purge_burst`).
* LRU "dirty" read as zero after a global purge is the same stamp (LRU is written only together with a tag or on a
  hit, so a set whose stamp is stale has a dead LRU), checked by the unit test.
* Tags/valid/LRU: MLAB (about 100 ALMs per cache). Option if the M10K budget allows: one M10K per CPU for tags and
  valid (256 x 20, dual port reads two ways per clock), saving about 70 ALMs per CPU.
* Lookup timing: the golden path is tag read, compare and data-array read inside one `clk_sys` after the R edge;
  kept.

### 4.3 DIVU

Golden: 39 `CE_R` steps (`STEP` 0 to 38), 65-bit R/D, 32-bit Q, 64-bit R64/D64 side path, mirror registers. New:
the same 39-step latency and the same `BUSY`/read-data timing, with the dividend/quotient shifting in the
`DVDNT` registers, the divisor in `DVSR`, one 33-bit adder, no copies. Overflow results (with and without the
overflow interrupt) and divide-by-zero follow the golden values, verified by `unit/tb_divu.sv` (extended with more
seeds and directed corners).

### 4.4 DMAC, MULT, INTC, FRT, WDT, BSC, glue

* DMAC: SAR/DAR/TCR/CHCR of both channels in an MLAB (two 32-bit words per channel pair of registers), one shared
  address/count update datapath used by the active channel, 4 x 32 burst buffer in MLAB; request and arbitration
  FSM unchanged (bus hogging, burst/lock behaviour, `BSC_ACK`/`DACK`, priority round robin).
* MULT/MAC: DSP multiplier kept (3 blocks). Accumulation is done serially during the busy cycles.
* INTC: the priority resolver (7 levels) is kept as a loop over sources evaluated each `clk_sys` (it is registered
  every clock in the golden design, so the latency is one `clk_sys`); register file as bytes in MLAB-friendly form.
* FRT: input capture exact (the MSH to SSH signalling path): `FTI` edge detect, `ICR` capture, `ICF` read-clear rules.
* WDT, MSBY: kept, trimmed.
* BSC: the bus state machine has empirical corner cases (`INSERT_WAIT`, `DBUS_SKIP`, `CBUS_REQ_CNT`, refresh
  stealing, burst counters). Timing is exactly what the game-impact notes depend on (bus hogging, wait states),
  so the state machine is kept and only the surrounding data latches and decode are trimmed.
* Glue: one 32-bit address window decode shared by all register blocks, one `IBUS` read-data register loaded on F
  from a one-hot mux of the blocks (the golden design has 8 separate 32-bit `REG_DO` registers).

## 5. Where the two clocks per SH-2 cycle are used

| Use | Mechanism |
|---|---|
| Register file 2 read + 2 write per SH-2 cycle | two MLAB copies; EX result written on R, load data on F |
| Decode + class logic | evaluated once per cycle (registers only), inside the 2-clock window |
| Cache lookup | tag read, compare, data-array read in the half after R, data to the core in the half before the next R (golden) |
| DIVU | one 33-bit adder, one step per CE_R cycle (39 steps) |
| DMAC | one datapath for both channels (only one channel is active at a time in the golden FSM) |
| Peripheral read data | one shared register, loaded on F |

## 6. Verification plan

* Block-level: golden block (renamed `REF_`) against the new block, random register and bus traffic, all outputs
  compared every `clk_sys`: DIVU (existing, extended), cache, DMAC, MULT, FRT/INTC/WDT (new).
* Decode: exhaustive 65,536 opcodes x 8 states x flag combinations against the golden `Decode()` (new unit test).
* System: `make -C sim sh2` with `DUT=sh2p`: 13+ programs x 4 environments plus the `sim/sh2/progs` programs of the
  cuts work, every `clk_sys` of both CPUs compared. Extra programs for anything new (purge bursts, register
  write-slot collisions, load/MAC-read WAW cases, DMA with cache purge, FRT capture handshakes).
* More random-soup seeds than the three in the suite (the instruction-soup generator takes a seed).

## 7. Timing

The new core must close at `clk_sys` 57.27 MHz with the same 2-cycle multicycle as the golden core
(`quartus_sta` on a registered wrapper, as `sizing/sh2/sh_core_wrap.sv`). Registered-input wrapper for the whole CPU
as well. The new EX path adds the register-file read and MLAB write setup; the removed bypass levels shorten it.

## 8. Measurements (as built)

Method: standalone `quartus_fit` (21.1, 5CEBA4F23C8, area profile, one processor, virtual pins), `sizing/sh2p/`. The
pair is `sizing/sh2p/pair_wrap.sv` (MSH + SSH with the Saturn.sv tie-offs; `SH2_MOD=SH7604` golden, `SH7604P` new).
"ALMs" = fitter "Logic utilization (in ALMs)". These standalone numbers are about 1.25x the per-block
"ALMs needed" of the full-system fit in [integration.md](integration.md) (3,475 for one golden CPU there, 4,332 here);
the last row scales by that ratio (3,475 / 4,332 = 0.80) to compare against the 4,000 budget.

| | golden | SH7604P | change |
|---|---|---|---|
| Pair, ALMs (standalone fit) | 8,538 | **6,070** | -29% |
| One CPU, ALMs | 4,269 (4,332 single fit) | 3,035 | -29% |
| Pair, RAM blocks (M10K) | 8 | 16 | +8 |
| Pair, DSP | 6 | 6 | 0 |
| Pair, scaled to the integration metric | ~6,900 | **~4,900** | budget 4,000: not met, 22% over |

Per block, one CPU (fitter ALMs in the pair fit; golden = single-CPU fit, [sh2.md](sh2.md) numbers in brackets are map ALUT):

| Block | golden | SH7604P | notes |
|---|---|---|---|
| SH2P_core | 1,545 | 1,219 | of which ALU 241, decode logic 216, decode ROM 31 (+2 M10K), register file 74 |
| BSC | 345 | 329 | unchanged FSM |
| CACHE | 776 | 300 | epoch purge, per-set MLAB word, tags in 2 M10K |
| DIVU | 447 (521 needed) | 251 | serial, in place in DVDNT |
| DMAC | 427 (561 needed) | 278 | MLAB channel registers |
| MULT | 220 (248) | 147 | |
| INTC / FRT / WDT / MSBY | 124 / 101 / 47 / 7 | 110 / 101 / 47 / 8 | |
| glue (SH7604P top) | ~150 | ~165 | divider, read-data mux, bus mux |

Timing (`quartus_sta`, slow 85C, `sizing/sh2p/fmax/`, core with registered ports, clock constraint 17.46 ns = 57.27 MHz
single cycle): worst setup slack -6.2 ns, i.e. longest path 23.7 ns (the golden core measured 19.6 ns on the same kind of
wrapper in [sh2.md](sh2.md)). It closes with the same 2-cycle setup / 1-cycle hold multicycle that the golden core already
needs (34.9 ns available, 11 ns margin). The critical path starts at the decode ROM output (M10K, address register
updated only on CE_R) and ends in the ID-stage PC/IR registers. Paths that are really single-cycle (cache lookup, register
file write on the F slot, scrubber) are short.

## 9. Verification results and deviations

Tests (all with `DUT=sh2p`, every output of both CPUs compared on every `clk_sys` against the golden pair plus final memory):

* `make -C sim/sh2 DUT=sh2p ptest`: 19 programs x 4 environments = 76 PASS (13 original programs, `t_purge_*`, `t_divu_*`,
  new `t_purge_wrap`).
* `make DUT=sh2p soak SEED0=1000 SEED1=1199`: 200 random instruction-soup seeds x 4 environments = 800 PASS (earlier
  ranges 100-139, 200-229, 300-329 also pass).
* Block level (`make DUT=sh2p unit-<blk>`, 6 seeds x 600k clk each, longer runs by the block authors): divu, dmac, mult,
  intc, frt, wdt, msby PASS. Decode: `sim/sh2/dec/tb_dec_eq.sv` exhaustive (all opcodes x state x DS x T plus all exception
  modes), 2.15 M vectors PASS.

Deviations from the golden (none is visible to software running on the Saturn; each is covered by a test or argument):

1. Register contents across a manual reset (`RES_N`): the golden commits the instruction in WB at the reset edge, SH7604P
   does not commit the instruction in EX. General registers are architecturally undefined after reset.
2. Cache: after `RST_N` the stamp memory is swept for 64 SH-2 cycles; the cache must not be used earlier. The test bench
   releases the CPUs 200 clk after `RST_N` (`SH2_INIT_WAIT`); in the Saturn the SMPC holds `RES_N` far longer.
   The purge is exact otherwise (6-bit epoch, scrubber visits every set every 64 SH-2 cycles, at most one purge per 2 SH-2
   cycles), tested by `t_purge_wrap` with 63 and 126 purges.
3. DIVU: reads of DVDNT/mirror registers while a division runs return scratch values; they are never consumed (the access
   is stalled by `IBUS_BUSY`). `EN=0` in the middle of a division is not equivalent (EN is constant 1 in the Saturn).
4. INTC reproduces the golden simulation behaviour for an `ICR.NMIE` write in the same clock as an NMI edge.
5. The M10K count rises by 4 per CPU (2 decode ROM, 2 cache tags).

## 10. What would still be needed for 4,000

The pair is 29% below the golden but still about 22% above the budget in the integration metric. Remaining sub-blocks in
order: core 1,219 (control and operand/result muxes ~650, ALU 241, decode 250, regfile 74), BSC 329, cache 300, DMAC 278,
DIVU 251, glue 165, MULT 147, INTC/FRT/WDT 258. Floors found by the block authors: DMAC/DIVU/FRT/WDT are close to the
interface-imposed read/write mux cost; the remaining levers are (a) hoisting the shared register-window decode and the
`IBUS_DO` gating out of the blocks (~60), (b) merging the duplicated CBUS/DBUS paths of the BSC (~60), (c) dropping the
RD_SAVE forwarding level of the core (~45), (d) lookup state of the cache into M10K (~40), (e) a leaner ALU (~60).
