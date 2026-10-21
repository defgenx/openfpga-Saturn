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
8.7 ns clock constraint): @@FMAX@@

Verdict item 1: **no-go** for the barrel dual context; 2x-clock alternative: @@FMAX_VERDICT@@.

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

@@CHANGES@@

## 4. Measurements

@@MEASURE@@

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

@@RESULTS@@

## 6. Risks

@@RISKS@@
