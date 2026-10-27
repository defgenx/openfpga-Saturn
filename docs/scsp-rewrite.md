# SCSPP: area-first SCSP for the Pocket

Scope: `src/fpga/saturn/Saturn/SCSPP/` (`SCSPP.sv`, `SCSPP_pkg.sv`), module `SCSPP` with the port list of `SCSP`, selected in
`Saturn.sv` by `ifdef POCKET_SCSPP`; `sim/scsp/` (lock-step bench), `sizing/scspp/` (fit flow and profile tools). Section 6 is the
compact DSP (`POCKET_SCSP_DSP_COMPACT`), the alternative to cutting the DSP.
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

`quartus_map` ALM estimate after each step (area profile, standalone `scsp_wrap`, `SND_EN` tied high), then `quartus_fit` at the checkpoints.
The fitter charges the standalone top 117 ALMs for its 233 virtual pins; the in-system SCSP is about 9% below the standalone figure
(1,995 in the measured Pocket compile against 2,193 standalone for the shrunk `SCSP`).

| Step | map ALM | map ALUT | regs | DSP | note |
|---|---|---|---|---|---|
| `SCSP` (shrunk, main) | 2,174 | 3,155 | 1,643 | 5 | **fit 2,193**, 30 RAM blocks |
| shared sweep bus, shared level/pan unit | 2,061 | 2,972 | 1,644 | 5 | |
| + shared master volume, 68K copy of the slot registers, RAM output registers, SCU/68K address merge | 1,962 | 2,853 | 1,504 | 5 | |
| + merged RAM blocks, MPRO 68K copy as one RAM | 1,963 | 2,862 | 1,509 | 5 | the 4-way envelope shifts were +20 ALUT and were reverted |
| + one accumulator pair (direct+effect), SND_EN gating per contribution | 1,899 | 2,741 | 1,473 | 5 | |
| + sample-offset loop arithmetic (two add/sub units) | 1,878 | 2,695 | 1,473 | 5 | |
| + DSP B operand negation through the carry | 1,865 | 2,669 | 1,473 | 5 | |
| + level/pan, FM modulation, master volume, volume shift on DSP blocks | 1,763 (with the phase shift on DSP too, 11 blocks) | | 1,473 | 10 | per block: level/pan -42 (2 blocks), FM -24, master volume -18, volume shift -15; phase shift -16 for 2 blocks, FtoI 0, ItoF -5 (not used) |
| + DSP-side copies of COEF, MEMS, EFREG with RAM output registers | 1,756 | 2,523 | 1,420 | 10 | |
| **final, `quartus_fit`** | **fit 1,782** | 2,546 | 1,413 | 10 | 30 RAM blocks (= `SCSP`), 100 ALMs of MLAB |

Result: **2,193 -> 1,782 fitter ALMs standalone (-18.7%)**; scaled by the standalone-to-system ratio of 0.91 that is about 1,620 in the
system against the 1,400 target. The target was not reached; the bottom-up reasons are in section 2 (what is left is arithmetic and
muxing that every serialisation attempt cost as much as it saved) and the remaining profile (`sizing/scspp/profile.py`): 68K read mux
~200 ALUT, level/pan unit + accumulators ~210, sound-RAM address mux and phase/offset adders ~200, DSP datapath ~700, EG ~170.

M10K: 30 blocks, the same as `SCSP`; DSP blocks: 10 (5 more than `SCSP`).

## 3a. Deviations from the reference

- `SOUND_L/R` lag `SUM_L/SUM_R` and `CR0` by up to two clk_sys (one master-volume unit, outputs registered). WAV identical.
- `SND_EN[1:0]` gate each slot's contribution when it is added instead of gating the two sums; identical while `SND_EN` is constant
  (tied to 3'b111 in `saturn_pocket.sv`). The bench changes `SND_EN[1:0]` only between the sum latch and the first slot's direct contribution.
- The SCU must not issue a request or a configuration cycle while `RDY_N` is high (the SCU request address stays in `A` until the
  request completes), and the 68K must hold `SCA` while a read is pending (no `SCPU_RA` copy).
- First sample periods after `RES_N`: the stage-staggered sweeps are kept so the transients (the records that flow through the pipeline
  right after `RES_N`) are identical; register accesses within 3 sample periods after `RES_N` are not tested, as before. `RST_N` low must come
  with `RES_N` low. MIDI registers CR2/CR3 read 0 as in the shrunk core.
- Weakly tested (not caught by the mutation runs): the sweep address stage of SCR1/SCR2, the `RES_N` clear of the output-register latches.

## 4. Verification

`make -C sim scsp` (Verilator): the golden (`REF_SCSP`, prefix-renamed) and `SCSPP` run in lock step, 8 seeds x 400 rounds x 2 builds
(MIDI 0 and 1) plus the single-build runs used during development. Stimulus as in [scsp.md](scsp.md) section 5 (random 68K/SCU traffic,
key on/off, DSP programs, DMA, timers, ESL/ESR, SND_EN, RES_N pulses and hard resets with sound playing). `DBGINT` builds expose
internals and report the first differing RAM (`sim/scsp/tb.cpp`); `sim/scsp/run_rev.sh <rev>` runs the bench on a past commit.

## 5. MLAB to M10K

The two stack RAMs (`SCSPP_STACK_RAM`) are M10K byte lanes read on the falling edge (`SCSPP_FERAM`); key/bit RAMs stay MLAB (1 ALM).
`make -C sim scsp` (6 seeds, both builds) PASS; `sim/scsp/tb.cpp` applies the next clock enables before the falling edge.

## 6. Compact SCSP DSP (`POCKET_SCSP_DSP_COMPACT`)

Purpose: keep reverb and effects in the lite build, which cuts the DSP (`POCKET_CUT_SCSP_DSP`, [cuts.md](cuts.md)), at about half the
cost of the full DSP. `POCKET_CUT_SCSP_DSP` wins when both are defined; without either macro the full DSP of sections 1-5 is
unchanged. In the lite flow: `SCSP_DSP=compact tools/pocket_lite.sh <dest>` defines the compact macro instead of the cut.
Equivalence target: section 1 (every output on every clock, MPRO/TEMP/MEMS/MIXS/EFREG/COEF/MADRS semantics, the sound-RAM requests
at the same clocks, SOUND_L/R identical). The memory-side request interface is untouched, so the SDRAM deadline is unchanged.

### 6.1 Measured

`quartus_map` / `quartus_fit` of `scsp_wrap` (standalone top, 233 virtual pins, area profile of section 3, `sizing/scspp/mkproj.sh`
revisions `dsp_cut`, `dsp_compact`, `dsp_full`; Quartus 21.1, 5CEBA4F23C8, NUM_PARALLEL_PROCESSORS 1):

| Build | map ALM | map ALUT | regs | fit ALM | RAM blocks | DSP blocks | Fmax (standalone, 57.27 MHz target) |
|---|---|---|---|---|---|---|---|
| cut (`POCKET_CUT_SCSP_DSP`) | 1,337 | 1,831 | 1,171 | 1,307 | 25 | 9 | 61.4 MHz |
| full DSP (no macro) | 1,747 | 2,522 | 1,420 | 1,762 | 34 | 10 | 58.4 MHz |
| **compact** | **1,556** | 2,231 | 1,379 | **1,526** | **31** | **13** | 57.25 MHz (slack -0.007 ns) |
| full minus cut | +410 | +691 | +249 | +455 | +9 | +1 | |
| **compact minus cut** | **+219** | +400 | +208 | **+219** | **+6** | **+4** | |

Restoring the DSP costs 1.87x less than the full one by the map estimate and 2.08x less by the fitter (the fitter charges the two MLAB
RAMs of the full DSP, `MPRO_SET_RAM` and `MIXS_NULL_RAM`, about 50 ALMs of memory LABs; the compact DSP has none). The full-minus-cut
figure is 439 ALMs in [cuts.md](cuts.md) (older sources, cut without the EFREG term); against that the compact DSP is 2.0x smaller by
the map estimate. DSP blocks: 4 more than the cut (MAC, FtoI, ItoF, MIXS level; the full DSP uses 1), the lite build uses 37-38 of 66;
RAM blocks: 6 more than the cut (the full DSP: 9) against 15 free in the lite build (`fit-status.md`). The six worst paths of the compact build are
output-stage paths (`OP7.SLOT` to `ACC_L`, as in the cut), none is in the DSP; the clock is not closed at the system level anyway
([fit-status.md](fit-status.md)).

### 6.2 What is different

Where the full DSP's 410 map ALMs were (each piece removed from it in turn): MIXS accumulate path 107, sound-RAM address/data path
including ItoF 102 (ItoF 45), FtoI 36, multiplier path 56. Registers are nearly free in the map estimate (removing 56 moved it by 2
ALMs); the estimate follows LUTs, so the work went into LUTs. Steps, in the order taken (map ALM of `scsp_wrap`):

| Step | map ALM |
|---|---|
| full DSP | 1,747 |
| TEMP, MEMS, EFREG, MIXS as one true dual-port RAM each (port A 68K and sweep, port B the DSP) instead of a 68K copy plus a DSP copy on one muxed write bus; a DSP write still replaces a 68K write in the same clock. MIXS: one 32-entry RAM for both generations, accumulation on port A, DSP and 68K on port B | 1,664 |
| `INPUTS` loaded at CYCLE0_CE straight from MEMS/MIXS/EXTS of the fetched instruction (no `MIXS_Q`, `EXTS_Q`, `MPRO1_IRA`: -56 registers) | 1,662 |
| FtoI, ItoF and the MIXS level as multiplications by a one-hot power of two; one address adder for the TEMP read and write | 1,589 |
| `NXADR` as the carry of the address sum; COEF and MASA addresses unmasked | 1,571 |
| more MPRO fields unmasked (write addresses, SHFT, TABLE, ADREB, NXADR) | 1,565 |
| `MIXS_OLD` kept (the variant without it is not exact, below) | 1,567 |
| COEF/MADRS true dual port; the MPRO valid flag and the MIXS 'not written yet' flag as extra byte lanes instead of MLAB RAMs (fit 1,592 -> 1,533) | 1,568 |
| sweep data of the DSP RAMs from the slot RAMs' `SW_D` | 1,557 |
| the MPRO valid flag in two unused entry bits instead of a ninth byte lane (3 -> 2 M10K for `MPRO_DRAM`) | **1,556** |

The fitter charges an MLAB RAM by whole memory LABs: `MPRO_SET_RAM` (128 x 1) alone is 42 ALMs, and the compact DSP has no MLAB RAM.
A byte lane or a spare bit of an M10K entry costs nothing.

ItoF as in the reference needs the run of bits equal to the sign and three normalising shift stages; here the run (`IT_E`) gives a
one-hot `2^shift` and a DSP block gives bits 21:11 of `value * 2^shift` (the mantissa needs no sign handling because the shift never
exceeds 11). `NOFL` passes bits 23:8, which is the same product with shift 3. FtoI is `sext(value) * 2^(11-EXP)`, and its NOFL case is
the raw word times 2^8.

Rejected, with the reason:
- Serialising the datapath. The map estimate follows LUTs; the shifters, the MAC network (X/Y/B select, 26-bit adder) and the address
  adders each need operand muxes when shared, which cost what the shared operator saves. Even a free ItoF and FtoI would have saved at
  most their measured 81; the DSP-block versions of ItoF, FtoI and the MIXS level together saved 73.
- Dropping `MIXS_OLD` for a read of the entry in the next step: not exact. A reset pulse that skips the first capture leaves the old
  value in the reference, but the entry has changed by then (bench seed 28).
- Late commit of the DSP state one clock after CYCLE1_CE to drop the MEMA/OUT registers: saves registers only.
- One RAM for TEMP, MEMS and EFREG, or for MEMS and MIXS: the DSP writes TEMP, MEMS and EFREG in the same clock, and MIXS has three users.

### 6.3 Deviations and caveats

- Exact against the full DSP in `make -C sim scsp-compact`, and the default and cut builds still pass. Two cases need a note:
  - In the clock the MIXS generations swap, the reference reads the former accumulation RAM at its accumulation address; the last read
    data of a register access (visible only through SCDO of a later write) depends on it. `MIXS_TOG` reproduces it (-1 ALM if dropped).
  - `SW_D` zeroes the data of 68K writes to the DSP RAMs while any earlier stage's reset window is open, not only the last stage's.
    The last stage's sweep clears every entry afterwards, so the contents are identical; writes in that window are untested (section 3a).
- `POCKET_CUT_SCSP_DSP` now drops the EFREG term of the effect return (`SCSPP.sv` only had two of the three `ifdef`s `SCSP.sv` has,
  as [cuts.md](cuts.md) describes). `make -C sim scsp cut-dsp` could not tell before: its random traffic rarely wrote EFREG with an effect send
  level set. This also removes the DSP-side EFREG read RAM from the cut (-8 map ALMs).
- The RAMs are true dual port with 'don't care' read-during-write. No consumer samples a read in the clock of a write to the same
  address on the other port, except the last read data of a register access (SCDO of a later write, a don't-care on the bus).
- 4 DSP blocks and 6 M10K blocks more than the cut (the full DSP: 1 and 9). A 24-bit true dual-port RAM takes two M10K blocks (TEMP,
  MEMS, MIXS: 2 each; COEF, MADRS, EFREG 1 each; `MPRO_DRAM` 2; `MPRO_MIR` 1).

### 6.4 Verification

`make -C sim scsp-compact` (`CSEEDS`, default 16 seeds x 400 rounds x 2 builds, MIDI 0 and 1): PASS, WAV files identical; `run`
(default build) and `cut-dsp` PASS with the same stimulus. New stimulus in `sim/scsp/tb.cpp`: a reverb-shaped DSP program (MIXS inputs,
two ring-buffer taps, coefficient multiplies, float write-back with ADRS and the table addressing, EFREG returns), and register writes
aimed at the slot and step being executed (SCR7 ISEL/IMXL, CR1 ring buffer, instruction words, TEMP, MEMS, MIXS, EFREG, COEF). Per seed
the DSP issues 10,000-14,000 sound-RAM reads and 4,500-5,700 writes. The WAV sample is taken at the first settled output after the
512th clock enable (the two-clock output lag of section 3a could land in it after a reset). `DBGQ` builds print the DSP activity and the
first diverging DSP register. Mutation runs (`sim/scsp/mutate.sh`, `MUT_EXTRA=-DPOCKET_SCSP_DSP_COMPACT`, seeds as one quoted list)
catch: MIXS data and lane, MEMS byte lane, ItoF NOFL shift and exponent, FtoI exponent patch, MIXS level slice, a masked TWT, the MIXS swap.
Seeds beyond the default 6 matter: the ISEL rewrite and the swap corners were first hit by seeds 14 and 4 of the 400-round runs.

The reference is `ref/Saturn_MiSTer`; where the submodule is not checked out, `make GOLD=<path to rtl/Saturn/SCSP>`.
