# SCSPP: area-first SCSP for the Pocket

Scope: `src/fpga/saturn/Saturn/SCSPP/` (`SCSPP.sv`, `SCSPP_pkg.sv`), module `SCSPP` with the port list of `SCSP`, selected in
`Saturn.sv` by `ifdef POCKET_SCSPP`; `sim/scsp/` (lock-step bench), `sizing/scspp/` (fit flow and profile tools).
Reference behaviour: `ref/Saturn_MiSTer/rtl/Saturn/SCSP` (the golden the shrunk `SCSP` was already verified against; see
[scsp.md](scsp.md)). Budget: 1,400 fitter ALMs in the system (1,955 in the first full build, 1,995 in the measured Pocket compile).

## 1. Equivalence target

Exact, every clock, against the golden (MIDI buffer registers CR2/CR3 removed as in the shrunk core): `DO RDY_N INT_N SCCE_R/F SCDO
SCDTACK_N SCAVEC_N SCIPL_N RAM_A RAM_D RAM_WE RAM_RD RAM_CS RAM_RFS`. So the sound-RAM request timing, which the memory side
(docs/memory.md, SCSP deadline in SDRAM banks 2/3) depends on, is unchanged. `SOUND_L/R` are exact once settled: the
master-volume unit is shared by both channels, so the outputs lag `SUM_L/SUM_R` and `CR0` by up to two clk_sys; the bench compares
them after four steady clocks and compares the WAV (sampled every 512 CE) byte for byte.

Why internal structure can change but register sampling cannot: the 68K and SCU write the register RAMs only at `CYCLE1_CE` edges and
the pipeline samples every field at one specific `CYCLE0_CE` edge, so *when* a field is read decides which write it sees. Every change
below keeps those sample points and moves only where results are computed or stored.

## 2. What was tried, per unit, with the estimate and the measurement

Measured: `quartus_map` ALM estimate and `quartus_fit` ALMs, area profile, 5CEBA4F23C8, standalone top `sizing/scspp/scsp_wrap.sv`
(233 virtual pins; the fitter charges 117 ALMs for them, which the full build does not pay: 2,193 standalone ~ 1,955 in system).

| Unit | Idea | Estimate | Result |
|---|---|---|---|
| Reset sweeps | one shared write data/address bus for the slot register RAMs, stage-staggered enables (the pipeline reads the registers its stage has cleared) | -220 ALUT | kept; a first version with one OP7-timed sweep broke lock-step after a mid-run reset (stale registers reach STACK/MIXS through the fake records that flow through the pipeline right after RES_N) |
| Output stage | direct and effect path share one level/pan unit (direct evaluated one clock after `OP7_SCR8` is latched, effect at `SLOT1_CE` where ESL/ESR are sampled); pan attenuation computed once | -110 ALUT | measured -112 ALUT |
| Master volume | one `MVolCalc` for both channels on alternate clocks, registered outputs | -80 ALUT | measured -85 ALUT |
| 68K read | copy of the 12 slot registers in one 512x16 RAM `{register, slot}` for 68K reads; the pipeline RAMs lose the `REG_RD` address mux; one source instead of 12 in the read mux | -120 ALUT, +1 M10K | measured, REG_Q cone 276 -> below the top-60 |
| Latches | slot registers read by one stage (SA, LSA, LEA, SCR4, SCR1, SCR3, SCR7, SCR8) are held in the RAM output register instead of FFs | -58 ALM | measured (register count 1,644 -> 1,504 with the SCU/68K address merge) |
| Bus | SCU request address kept in `A` and incremented at completion (no SCU_RA/SCU_WA); 68K read address taken from `SCA` while the read is pending (no SCPU_RA) | -50 ALM | measured |
| Envelope | shift amounts are 1..4 (ERMAX 24..30): 4-way selects instead of barrel shifters | -35 ALUT | measured with the others |
| M10K | OP2 registers (SA, LSA, LEA, SCR4) in one 64-bit RAM, SCR7+SCR8 in one 32-bit RAM, sample offset and phase fraction in one 33-bit RAM, 68K copy of MPRO as one 16-bit RAM | -4 blocks | see section 3 |
| COEF/MADRS through the slot copy | +48 ALUT (address mux); reverted | | measured worse |

Rejected after analysis (reasons are structural, not guesses):

- Serialising the DSP: every operand of a step is stable for the whole step, so the arithmetic could be spread over the ~10 clocks, but
  each shared operator needs a held intermediate (16-26 bit registers) and operand muxes; the saved adders (about 40 ALUT) cost as much.
- A micro-coded slot engine (one ALU, register file in MLAB): about 55 operations per slot (counted from the pipeline) against ~40 clk_sys
  per slot; it needs two ALUs to keep up, which is the area it was supposed to save.
- True dual-port RAMs for the DSP-visible RAMs: the DSP needs one read and one write per step and the 68K one read and one write, so two
  RAMs stay; the 68K write must still be dropped when the DSP writes the same RAM in the same clock.
- Dropping `CR13`/`CR19` or the DMA address copies into MLAB: -20 ALM at best, with DMA start timing risk.

## 3. Measured

(see the table at the end of this file, updated with each measurement)

## 4. Verification

`make -C sim scsp` (Verilator): the golden (`REF_SCSP`, prefix-renamed) and `SCSPP` run in lock step, 8 seeds x 400 rounds x 2 builds
(MIDI 0 and 1) plus the single-build runs used during development. Stimulus as in [scsp.md](scsp.md) section 5 (random 68K/SCU traffic,
key on/off, DSP programs, DMA, timers, ESL/ESR, SND_EN, RES_N pulses and hard resets with sound playing). `DBGINT` builds expose
internals and report the first differing RAM (`sim/scsp/tb.cpp`); `sim/scsp/run_rev.sh <rev>` runs the bench on a past commit.
