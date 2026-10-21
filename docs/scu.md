# SCU and SCU DSP: area reduction

Scope: `src/fpga/saturn/Saturn/SCU/` (SCU.sv, DSP.sv, RAM.sv; packages unchanged). Golden reference:
`ref/Saturn_MiSTer/rtl/Saturn/SCU/`. Port list of `SCU` and `SCU_DSP` unchanged. Branch `scu-shrink`.

## Result

Measured with `quartus_map` 21.1 (Docker), device 5CEBA4F23C8, area profile `sizing/scu/area_profile.qsf`
(`OPTIMIZATION_TECHNIQUE AREA`, `MINIMAL BITS`, sharing on, retiming/duplication off, `ALM_REGISTER_PACKING_EFFORT HIGH`),
top level `SCU` alone, `NUM_PARALLEL_PROCESSORS 1`.

| Step (commit subject) | Comb. ALUTs | ALMs (est.) | Regs | MLAB mem ALUTs |
|---|---|---|---|---|
| baseline (golden RTL) | 4,633 | 3,049 | 1,650 | 32 |
| explicit DMA buffer push steering | 4,495 | 2,959 | 1,650 | 32 |
| shared A-bus wait select, DW write-back mux, merged indirect-read states | 4,073 | 2,769 | 1,650 | 32 |
| CPU access queues in MLAB RAM; DSP single adder, shared Y bank mux | 3,638 | 2,520 | 1,400 | 157 |
| one-hot state encoding of the 4 state machines | 3,536 | 2,457 | 1,466 | 157 |
| single channel select in DMA idle; 25-bit DSP read address | 3,527 | 2,445 | 1,468 | 157 |
| shared channel register muxes (DMA load and register read) | 3,473 | 2,404 | 1,468 | 157 |
| DSP `DMA_DO` shares the X bank mux | 3,445 | 2,374 | 1,468 | 157 |
| C-bus write word from shared buffer-head bytes (final) | **3,388** | **2,319** | 1,468 | 157 |

Final: **3,388 ALUTs = 73.1 % of the 4,633 baseline** (target was 70 %, i.e. 3,243; 145 ALUTs short).
ALMs 3,049 -> 2,319 (-24 %). Of the total, `SCU_DSP` went 1,117 -> 970 ALUTs (-13 %); SCU proper 3,516 -> 2,418 (-31 %).
Block RAM bits and DSP blocks are unchanged (16,384 bits = 5 M10K, 3 DSP): +0 M10K. The CPU queues use 125 more
MLAB memory ALUTs (counted separately from "combinational ALUTs"; ALMs above include them).
One experiment made things worse and was reverted (merged 4:1 source selects for the DMA buffer push: +46 ALUTs).
The per-step maps are reproducible with `sizing/scu/run.sh <name> <srcdir>` (needs a snapshot of the sources;
`out_<name>/cones.txt` is the cone attribution).

## Profile (baseline, area profile)

`sizing/scu/cones.py` reads the post-map netlist (`quartus_cdb --vqm`) and attributes each LUT to the registers/outputs
whose input cone contains it (shared LUTs split evenly): `sizing/scu/baseline_area.cones.txt`. Top groups of the
4,633 ALUTs: DMA buffer bytes 341, `DW` 222, `BDO` 198, `DSP_DR`/`DSP_DW` 153/146 (mostly the DSP D1 bus mux they share),
`REG_DO` 134, `CBUS_D` 123, `ABUS_WAIT_CNT` 118, CPU queue data/address 260, DMA address/count loads 340, DSP data-RAM
input muxes ~330, DSP ALU/flags ~250.

Facts established from the code that limit what sharing can do:

- The three DMA levels already share one engine: one `DMA_ST` machine, one `DMA_RA/WA/IA/RTN/WTN` set and one 8-byte
  buffer. Levels are serviced from `DMA_PEND` with fixed priority (DSP, 0, 1, 2) and a level runs to completion, so
  no datapath duplication exists to remove. Per-level state (`DR/DW/DC/DAD/DEN/DMD`) is architectural register file.
- DMA state (`DR/DW/DC`) cannot go to M10K/MLAB: the CPU write and the DMA write-back of the running address can hit
  different channels in the same cycle (two write ports needed), and the per-byte CPU-over-DMA merge is
  visible to software (CPU wins per byte).
- The DMA buffer cannot go to lane RAMs for the same reason: a CE_F cycle can write byte lane l twice (a stale
  read-done pulse during a DSP-to-bus transfer overlaps a DSP push, observed in simulation), which needs two ports.
- `SYS_CE_R = MCLK_DIV`, `SYS_CE_F = ~MCLK_DIV` (`Saturn.sv:678-679`): they are exclusive and alternate, so the DSP
  `CE` (`DSP_CE & CE_R`) has at least 4 clk between pulses. Several sharings below rely on exclusivity only.

## Changes (all cycle-identical at the SCU ports)

SCU.sv
- DMA buffer push: byte i takes source byte `((i - WPOS) mod 8) + RBA` when that is < 4 (explicit index math instead
  of four dynamic-offset concatenation writes); DSP read pushes keep their override of bytes 0-3. -138 ALUTs.
- A-bus wait count: one field select (`AW_NW`) plus one add instead of up to ten adders. DW write-back: one shared
  value (table pointer or write address) per channel update. The two indirect-table read states are one state body
  fed by one source mux (`IND_D`). -422 ALUTs together.
- CPU A-bus/B-bus access queues (2 entries x 64 bit) are MLAB RAMs (`SCU_CPU_CACHE`, async read, sync write); FILL/
  WPOS/RPOS stay flops. Entries are only read while their FILL flag is set, so the reset value is irrelevant.
- One-hot encoding on `ABUS_ST/BBUS_ST/CBUS_ST/DMA_ST` (`syn_encoding`).
- DMA idle: one channel index instead of three copies of the load code. DMA load and the `REG_DO` read of
  `DR/DW/DC` use one channel mux set (index = REG_A in a CE_F cycle, lowest pending level in a CE_R cycle; the DSP
  address registers are channel 3). `DSP_DR` is 25 bits (low two bits are always 0).
- C-bus write word: `CBUS_DN` takes the four head bytes with the leading-lane repeat as a function of the offset,
  used by both the start and write states; `ADO/BDO` use the same head-byte wires.

DSP.sv
- One 33+17-bit adder serves ADD, SUB (inverted operand, carry-in 1, borrow = ~carry) and ADD48.
- The Y bank mux also serves the control-port data read (`RE` is a CE_F cycle, Y is only used with `CE`).
- `DMA_DO` comes from the X bank mux with select `CE_F ? DMAI.RAMS : XBUS.RAMS`; the SCU samples it only in CE_F
  cycles. `D0BUSO` stays as a dedicated mux only for the `HOOK1/2` debug taps (unconnected in the SCU, pruned there).
  `DMA_DO` is therefore equal to the golden only in CE_F cycles; the testbench compares it only then.
- Not changed: multiplier (3 DSP blocks, already in DSP blocks), data/program RAMs (5 M10K), decode.

Not done / small yield: multi-cycle serialisation of the DSP buses (the capture registers cost as many ALMs as the
muxes saved), M10K decode ROM (COND input breaks it), sharing the +4 incrementers (operand mux = adder cost).

## Verification

`make -C sim scu` (Verilator 5; golden copied from `ref/` with `REF_` prefixes by `perl`, no edits to it):
- `tb_scu`: REF_SCU and SCU on the same inputs, every output compared every half clock. SH-2 side: register reads/writes
  (all byte masks), A/B-bus accesses, interrupt acknowledge cycles, resets. DMA on levels 0-2: direct and indirect
  (tables in B-bus and C-bus memory), RUP/WUP, address add modes, unaligned counts, all start factors, simultaneous
  levels, DSTP abort. Timers 0/1, IMS/IST. DSP: random programs (all instruction classes, loops, JMP, END/ENDI, DMA
  instructions), pause/step, data RAM read-back. A/B/C bus memory models with random wait states; `RAMH_SLOW` 0 and 1;
  three CE patterns; `FAST` 0/1. A stall watchdog resets the SCU when a protocol-illegal script hangs it.
- `tb_dsp`: REF_SCU_DSP vs SCU_DSP alone, all outputs including the debug taps (`DMA_DO` only in CE_F cycles).
- `mutate.sh`: single-line mutations of the golden RTL must be caught; 10 of 12 are. The survivors are
  a dead refresh branch (`CBUS_RFS_PEND` is never set) and the level-0xB (timer 1) interrupt acknowledge, which the
  stimulus does not reach: timer 1 interrupt acknowledge is the known hole.
- `make -C sim scu cover`: line coverage of the golden RTL for stimulus tuning.
Result: all 24 seeds x (2 SCU + 1 DSP) x 3M cycles pass (see the commit log for the run).

`sim/Makefile` only forwards `scu`; other blocks adding their own `sim/Makefile` will conflict on merge.

## Assumptions to keep

- CE_R and CE_F never coincide (true for `Saturn.sv`).
- RST_N low resets everything that has a reset; the MLAB queues are not cleared, which is only observable through
  the FILL-gated reads.
