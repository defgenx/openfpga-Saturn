# SH-2 (SH7604 x2) shrink study

Scope: `src/fpga/saturn/SH/{core,SH7604}/` and the MSH/SSH instances in `Saturn/Saturn.sv`. Golden: the pinned
`ref/Saturn_MiSTer` (9aa9449). Branch `sh2-dual`.

Result in one line: **no-go on the dual-context (time-shared) SH-2**: it cannot be cycle-exact, and a 2x-clock
datapath does not close timing. What is achievable bit-exactly is a few percent; see "Results".

## 1. Clock-enable finding (plan item 1)

`SYS_CE_R = MCLK_DIV`, `SYS_CE_F = ~MCLK_DIV`, `MCLK_DIV` toggles every `clk_sys` (`ref/.../Saturn.sv:676-679`).
So every `clk_sys` cycle is exactly one of CE_R or CE_F, and the SH-2 bus clock is `clk_sys/2`.

| Block | Phase used |
|---|---|
| `SH_core` | **CE_R only** (`.CE(CE_R)`, `SH7604.sv:226`; `SH_core.sv` has no other enable) |
| CACHE control FSM | **CE_F** (`CACHE.sv:282`); only RAM write enables, CCR and the purge use CE_R |
| BSC state machine | both (CE_R in the wait/state counters, CE_F in the bus-state transitions and `IBUS` handshake) |
| DIVU | operand capture CE_F (removed, see 3), step counter and registers CE_R, BUSY/REG_DO CE_F |
| DMAC, INTC, FRT | both |

The core itself does work on one phase, so the "two contexts alternate phases" idea looks possible at first. It is
not, because the core sits inside a loop that spans both phases:

```
core regs --(CE_R edge)--> CACHE (CE_F edge) --> BSC/peripherals (CE_F) --> CACHE busy/data --(CE_R edge)--> core
```

The core inputs (`BUS_WAIT = CACHE_BUSY | MULT_BUSY`, `BUS_DI`, INT_*, `VECT_WAIT`) are only valid after the CE_F
update of the cache/BSC/DIVU registers, and they are consumed at the next CE_R edge. The only window in which the
inputs are stable and a datapath may evaluate is the single `clk_sys` between the CE_F edge and the CE_R edge. MSH
and SSH both need their evaluation in that same window, so one datapath cannot serve both without either

* skewing the whole SSH (cache, BSC, peripherals) by one `clk_sys`: SSH's bus signals then appear half a bus cycle
  late relative to MSH and to the external memory controllers, and the MSH/SSH bus arbitration handshake
  (`BRLS/BGR`) changes timing. Not cycle-for-cycle identical; rejected under the requirements; or
* running the datapath at 2x `clk_sys` (115 MHz): see Fmax below.

Fmax of `SH_core` alone (registered I/O wrapper, `sizing/sh2/sh_core_wrap.sv`, 5CEBA4F23C8, area profile,
8.7 ns clock constraint): **51.1 MHz** (slow 1100 mV 85 C, worst setup slack -10.9 ns at 8.7 ns; `sizing/sh2/core_fmax.sta.summary`).

Verdict item 1: **no-go** for the barrel dual context; 2x-clock alternative: **no-go**. A shared datapath at 115 MHz needs 8.7 ns; the core needs 19.6 ns. Even a 2-cycle multicycle budget at
115 MHz (17.4 ns) fails. Side finding for the port: the single core does not close single-cycle at `clk_sys`
57 MHz (17.5 ns) on a C8 part either, so the Pocket build needs a 2-cycle setup/1-cycle hold multicycle constraint on
the CE_R-enabled core paths (the core only advances on CE_R, so the constraint is legal).

## 2. Dual-context SH7604 (plan item 2)

Not built, for the reasons above; building a wrapper that cannot pass the cycle-by-cycle comparison against the
golden pair would only produce a block that is wrong by construction. Estimate of what it would have saved, for the
record (entity numbers in section 4): `SH_core` 2,163 ALUTs/861 regs per CPU would drop to one copy plus per-context
state muxes (~+10% mux overhead), i.e. about -1,500 ALUTs for the pair, with pipeline registers (861) not shrinking
because the per-context pipeline state has to be kept (in M10K it would cost a read/write port per stage).
Sharing the DIVU datapath (R/D/Q/R64 and the 65-bit adders, ~270 regs / ~400 ALUTs) is cycle-exact only when the
two CPUs never divide at the same time; a second requester would be stalled for up to 39 `CE_R` cycles. DIVU use by
both CPUs overlapping is likely (SSH runs geometry); not measurable here without game traces: **risk, not done**.
Sharing the MULT DSP: the three DSPs are not a constraint (DSP <= 8 is met with 6) and the multiplier is used in the
clk right after CE_R in both CPUs, so it would need a second slot per bus cycle; saving ~150 ALUTs; not done.

## 3. Bit-exact changes made (plan item 3)

| Change | Where | Effect (per CPU) | Exact? |
|---|---|---|---|
| DIVU: the `VAL`/`NEG` operand registers (captured on CE_F one clock before use on CE_R) are replaced by a combinational select of the same sources | `SH/SH7604/DIVU.sv` | -66 regs (581 -> 515), ALUTs within noise (540 -> 508 in the A/B run) | yes: DIVU unit test (6 seeds, ~45k divisions, ~15k overflows) and the full system suite pass |

Checked and left alone, with the reason:

* SCI: already compiled out (`SCI_DISABLE=1`, 2-3 ALUTs left), SH7604 `UBC` likewise; the debug ports are `ifdef DEBUG`
  and not defined in the Saturn build. Nothing to remove.
* Bus-size / area configuration: `BUS_SIZE_BYTE_DISABLE=1` and `BUS_AREA_TIMIMG` are already parameters and constant
  in `Saturn.sv`; MD pins, FAST-independent constants and the tied-off DREQ/RXD/SCKI/FTCI/ECE/EOE/EIVECF ports are
  propagated by Quartus (sizing shows the same ALUTs with or without them). The SDRAM/DRAM paths of the BSC cannot
  be removed: Saturn's WRAM-H uses the BSC refresh output (`RFS`) and the BSC state machine.
* WDT (80 ALUTs/41 regs per CPU) and MSBY (11/3): `WDT_DISABLE` exists but the Saturn WDT is architecturally
  present and a game may use it as an interval timer; not disabled without the owner's decision (pair saving ~160
  ALUTs).
* Cache global-purge ("dirty") flip-flops: 4x64 + 64 FFs per cache with a per-FF enable decoder, roughly 300 ALUTs
  and 320 regs per CPU. They can be replaced by an epoch counter plus MLAB stamps with a background scrubber (about
  -250 ALUTs per CPU), but a bit-exact version is only guaranteed while purges are further apart than the scrubber
  period; not done because exactness is the contract.

## 4. Measurements

Method: `quartus_map` 21.1.1, 5CEBA4F23C8, `NUM_PARALLEL_PROCESSORS 1`, virtual pins, the pair instantiated exactly like
`Saturn.sv` (`sizing/sh2/sh2_pair_wrap.sv`, same tie-offs). Area profile = `sizing/sh2/area_profile.qsf` (AREA technique,
MINIMAL BITS, resource sharing on, retiming/WYSIWYG/physical synthesis off). Golden and DUT are mapped in the same run
(`sizing/sh2/gen_ab.py`, `ab_area.entity.txt`), so both see identical settings.

Pair totals (comb. ALUTs / registers / M10K bits / DSP):

| | ALUTs | regs | block bits (M10K) | DSP |
|---|---|---|---|---|
| Golden, balanced mode (docs/sizing.md, Saturn run) | 11,685 | 6,040 | 65,536 (8 M10K) | 6 |
| Golden, area profile (A/B run) | 11,702 | 6,033 | 65,536 | 6 |
| DUT, area profile (A/B run) | 11,499 | 5,794 | 65,536 | 6 |
| DUT, area profile (stand-alone run) | 11,587 | 5,901 | 65,536 | 6 |

The area profile alone does not shrink the SH-2s (-0.1% ALUTs): the PSX-style gains came from other blocks. Run to
run noise between two maps of the same RTL is about +-100 ALUTs and +-100 regs for the pair (rows 3 and 4 are the
same source), so only the register change (-66 per CPU, deterministic: 581 -> 515 in every run) is a certain result.
Net: **-1 to -2% ALUTs, -2 to -4% registers**. Targets of the task (<= 7,500 ALUTs, <= 4,200 regs, DSP <= 8,
M10K +10 max): ALUTs and registers **not met**; DSP 6 and M10K +0 met.

Per sub-block, area profile, one CPU (golden MSH -> DUT MSH; ALUTs/regs):

| Block | Golden | DUT |
|---|---|---|
| SH_core | 2,078 / 861 | 2,056 / 861 |
| CACHE (+32,768 bits) | 945 / 448 | 947 / 448 |
| BSC | 569 / 255 | 568 / 255 |
| DIVU | 540 / 581 | 508 / 515 |
| DMAC | 550 / 413 | 550 / 412 |
| MULT (3 DSP) | 362 / 138 | 362 / 138 |
| INTC | 207 / 144 | 177 / 118 (identical source: mapping noise) |
| FRT | 161 / 107 | 160 / 107 |
| WDT / MSBY / SCI / UBC | 82 / 41, 11 / 3, 2 / 0, 2 / 0 | same |
| top-level glue | ~300 / 27 | ~300 / 27 |

`SH_core` Fmax: 51.1 MHz (see 1).

## 5. Verification

`make -C sim sh2` (Verilator 5). `sim/sh2/`:

* `tb/env.sv.in`: Saturn-like environment around the MSH/SSH pair, instantiated once with the golden RTL
  (every module and package prefixed `REF_` by `tools/ref_rename.py` from `ref/Saturn_MiSTer`) and once with the
  DUT from `src/`. Bus model: 16-bit area 0 ROM/WRAM-L (MD pins), 32-bit WRAM-H/A-bus/registers, byte lanes, random
  wait states (`+wait=`), IRL interrupts with vector-fetch cycles and a self-expiring request (`+irq=`), NMI,
  MINIT/SINIT writes driving the other CPU's FTI, SSH release by the MSH, `FAST` (`+fast=`), the MSH/SSH
  `BRLS/BGR` hand-over exactly as Saturn.sv wires it.
* `tb/tb_top.sv` compares every output Saturn.sv connects (A, DO, BS, CS0-3, RD/WR, DQM, RD, IVECF, RFS, BGR/BREQ,
  EDI) of both CPUs on **every `clk_sys`**, plus final memory contents; first mismatch aborts with a dump.
* `tools/sh2asm.py`: small SH-2 assembler (labels, inline literals); `progs/t_*.py` programs:
  alu, branch (delay slots, BSR/JSR/BRAF/BSRF, TRAPA/RTE, GBR/VBR/SR), mulmac (all MUL/MAC forms, S bit), divu
  (32/64-bit, overflow with and without interrupt, divide by zero, DIV1), cache (fills, hits, write-through, purge,
  ID/OD/TW/way bits, address/data array, TAS, execution from WRAM-H), dmac (both channels, all unit sizes,
  inc/dec/fixed, burst, priority, interrupts, CPU traffic), frt (prescalers, OCRA/B, overflow, input capture
  MSH<->SSH), intc (every IRL level vs every mask, WDT interval timer, NMI during a divide, SLEEP wake-up), contend
  (TAS lock hand-off, both CPUs streaming), bsc (random wait/size/DRAM/refresh configurations), three random
  instruction-soup programs per seed.
* Each program runs under 4 environment configurations (wait states, interrupt injection, FAST).
* `unit/tb_divu.sv`: block-level golden-vs-DUT DIVU with random register traffic (thousands of divisions and
  overflows per seed), `make -C sim/sh2 unit-divu`.
* The comparison was checked to bite: a one-bit change in DIVU is reported as a mismatch within 3k clocks.

Results at the last commit: `make -C sim sh2`: 13 programs x 4 environment configurations = **52/52 PASS**
(each 1.5 M `clk_sys` compared cycle by cycle, both CPUs, plus final memory); `make -C sim/sh2 unit-divu`: 6/6 PASS.
BSC state coverage in the system tests: all 13 states (T0,T1,T2,TW,TRAS,TWCAS,TRCAS,TRD,TWNOP,TRFS1,TRFS2,TV1,TV2)
are visited by `t_bsc` on both CPUs. Total suite run time about 3.5 min.

Not covered by the tests: DREQ/DACK external requests (tied off in Saturn), SCI and UBC (disabled), standby
(SBYCR/SLEEP standby mode), the SDRAM-mode BSC with a valid memory model (the bus model does not implement the
SDRAM command protocol, so SDRAM-mode writes never reach it; the states are exercised but data is not checked),
the external-master port of the SSH (`EA/ED*`, idle in the test bench).

## 6. Risks

* **Timing**: `SH_core` is a 19.6 ns path (51 MHz) in a C8 part. It works at `clk_sys`/2 only with a multicycle
  constraint; this holds for the unmodified golden core too and is the main timing item for the Pocket build.
* **Dual context** (not built): not cycle-exact (section 1); would also have required the two-slot core evaluation
  to meet 8.7 ns, which it cannot.
* **DIVU sharing** (not built): both CPUs dividing at once would stall the second by up to 39 `CE_R` cycles; use by
  both CPUs overlapping is not measured here (needs game traces). Savings ~270 regs / ~400 ALUTs for the pair.
* **Measurement noise**: +-100 ALUTs per pair between two maps of identical RTL; fitter results will differ again.
* **Shortfall against the target**: exact micro-changes recover ~2-4%; reaching 7,500 ALUTs would need either the
  skewed barrel core (not bit-exact, ~-1,500 ALUTs), shared DIVU/MULT (not bit-exact on contention), disabling WDT
  (-160) and the epoch-based cache purge (~-500), together roughly -2,200: still above 7,500. The pair is therefore
  not reducible to the target by SH-2 work alone; the area has to come from other blocks (VDP2, SH-1, SCU DSP).
