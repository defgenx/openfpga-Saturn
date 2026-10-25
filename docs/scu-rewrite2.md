# SCUP2: SCU with read-side RAM copies (branch `scu-rewrite2`, `POCKET_SCUP2`)

`src/fpga/saturn/Saturn/SCUP2/` (modules `SCUP2`, `SCUP2_DSP`; ports of `SCU`), selected by `POCKET_SCUP2` in `Saturn.sv`.
Started as a copy of SCUP ([scu-rewrite.md](scu-rewrite.md)). Verification: `make -C sim scu DUT=SCUP2`.
Measurement: `sizing/scup2/` (standalone `quartus_fit`, area profile, 5CEBA4F23C8, virtual pins, `tools/qrun.sh`).

## Result (standalone fitter ALMs, one run per step)

| Step | ALMs | M10K | Change |
|---|---|---|---|
| baseline (SCUP2 = SCUP; SCU baseline 2,426) | 2,408 | 5 | |
| S1 DSP `DSO` mux split (DMA control bits on a port of their own) | 2,380 | 5 | -28 |
| S2 B-bus `BDO` as one AND-OR of per-state forms | 2,357 | 5 | -23 |
| S3 C-bus address and write data from the acknowledge conditions | 2,339 | 5 | -18 |
| S4 A-bus wait count from one load value | 2,336 | 5 | -3 |
| S5 DMA address/count registers, all conditions in one block (measured before a priority fix, +8 below) | 2,328 | 5 | -8 |
| S6 DSP data RAM: one 256-word RAM per reader (X, Y, D1), the four banks as address bits | 2,244 | 4 | -84 |
| S7 CPU A/B queues and C-bus cache in M10K (read address registered on the falling edge) | 2,132 | 9 | -112 |
| S8 DMA channel registers DR/DW/DC in M10K | 2,093 | 12 | -39 |
| S9 final (S5 update priority as in the original block) | **2,101** | 12 | +8 |

Total -307 ALMs (-12.7 percent) for +7 M10K (allowance +8). Registers 1,169, 3,156 ALUTs, 3 DSP blocks. Setup slack at
57.27 MHz +1.27 ns (S8). Scaled by the standalone-to-system ratio of the baseline (2,215 / 2,426) this is about 1,920 ALMs
in system (not measured in system). The target of 1,300 is not reached.

What paid: read-side copies of RAM-resident state (S6: three copies of the DSP data RAM, the bank mux moves from 32-bit data
to 6-bit addresses, one M10K less) and replacing MLAB LABs (10 ALMs each) by M10K blocks (S7, S8: 150 ALMs for 7 blocks).
What did not: moving flops into MLAB (SCUP), and AND-OR restructuring beyond the few registers with many sources.

Not built / reverted: merging the DSP control-port data register into `REG_DO` (the differential bench could not be made exact
for the hold behaviour of the golden `CDO`; not measured); DSP address registers into the channel RAM (write-port conflicts
with the CPU write slot would need 25 staging flops; estimated -35).

## Deviations from the golden (documented, bench relaxed accordingly)
- DSP data RAM: a DMA write into the bank (bus to DSP) lands one clk after the golden's. A control-port data read in exactly
  that clk returns the old word (`do_skip` in the DSP bench); `DMA_DO` is compared only in DSP-to-bus transfers (the SCU samples
  it only then).
- `DSO` is compared only with RA0W/WA0W (DMA control bits are on `DMAC`); the debug taps of the DSP are gone.
- DMA channel registers are zeroed by a 4-clk walk after reset (as SCUP); CPU writes land one clk after the golden's.
- Assumption: CE_R never occurs in two consecutive clks (true in `Saturn.sv`); the benches' random CE pattern now respects it.
- `tb_dsp` applies the DMA data one clk after the ACK (as the SCU buffer push does).

## Verification
`make -C sim scu DUT=SCUP2`: 24 seeds x (2 SCU + 1 DSP) x 3M cycles all pass (every output every half clock, `RAMH_SLOW`
0 and 1, three CE patterns) with the relaxations above. The original `make -C sim scu` and `DUT=SCUP` still pass.
