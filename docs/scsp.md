# SCSP shrink for the Pocket

Scope: `src/fpga/saturn/Saturn/SCSP/` (copy of `ref/Saturn_MiSTer/rtl/Saturn/SCSP/`), `sim/scsp/`, `sizing/scsp/`.
Target was <= 72% of the area-profile baseline ALUTs and registers. **The target was not reached**: the
result is 89.7% ALUTs and 81.3% registers, with the M10K budget (+6 blocks) fully used. Sections 5 and 6 say why
and what is left.

## 1. Method

- Standalone `quartus_map` (21.1.1, `raetro/quartus:21.1`, `NUM_PARALLEL_PROCESSORS 1`) with the area profile of
  `apf_top.qsf` of the PSX Pocket 0.5.5 release (settings in `sizing/scsp/scsp_*.qsf`), `OPTIMIZATION_MODE
  BALANCED`, Cyclone V 5CEBA4F23C8, top `scsp_wrap` (`sizing/scsp/scsp_wrap.sv`): the SCSP with `SND_EN` tied to
  3'b111 as in `saturn_min_wrap`, every other port a virtual pin.
- `sizing/scsp/run_map.sh <project> <name>` runs one measurement and prints the numbers; `snap.sh <name>` freezes
  the sources first so later edits cannot leak into a long run. Projects: `scsp_ref` (golden), `scsp_new`,
  `scsp_abl_*` (ablations of the golden), `scsp_prof` (function probes).
- Baseline = golden `SCSP.sv` from the submodule, same flow.

| | ALUT | registers | ALM (est.) | M10K bits | MALUT | DSP |
|---|---|---|---|---|---|---|
| Baseline (golden) | 3,516 | 2,020 | 2,393 | 21,920 | 34 | 5 |
| After | 3,155 | 1,643 | 2,174 | 33,568 | 41 | 5 |
| After / baseline | 89.7% | 81.3% | 90.8% | | | |
| Target (72%) | 2,531 | 1,454 | | | | |

Numbers are map-stage estimates; no fit was run. Per-step numbers were not all measured (each run takes 15-25
minutes emulated on a loaded machine); the table in section 3 gives the ones that were.

## 2. Profile

Function probes (`sizing/scsp/prof/prof_top.sv`, inputs and outputs registered, registers not counted):

| function | ALUT |
|---|---|
| MVolCalc (x2 in the SCSP, one per channel) | 86 |
| level + pan + accumulate (direct or effect path, one channel) | ~111 |
| DSPShifter + DSPItoF | 88 |
| PhaseCalc + PLFOCalc | 72 |
| SoundSel/Interpolate (2 DSP) | 55 |
| MDCalc | 54 |
| DSPFtoI | 39 |
| VolCalc | 30 |
| DSPLevelCalc | 23 |
| ALFOCalc 20, LFOFreqDiv 19, EffRate 17 | 56 |

Together the arithmetic is about 700-800 ALUTs of 3,516. The rest is glue: RAM address/data/enable muxing,
the 68K/SCU/DMA arbitration, the register file and the 68K read mux.

Ablations of the golden (map, same flow; the first two without the `SND_EN` tie, baseline 3,511 / 2,020):

| ablation | ALUT | registers | difference |
|---|---|---|---|
| DSP off (`MPRO0_Q = 0`) | 2,821 | 1,579 | **-690 ALUT, -441 regs** |
| 68K register read mux removed | 3,191 | 1,910 | -320 ALUT, -110 regs |
| slot-RAM sweep hijack removed (partial) | 3,378 | 2,020 | -138 ALUT |

Register inventory of the golden (counted from the RTL, about 2,020): per-stage slot-register latches ~260, DSP
latches/accumulators ~590 (of which 128 are MPRO valid bits, 32 EXTS, 32 MIXS_NULL), pipeline records OP2-OP7
~255, control registers CR0-CR19 ~230, bus/arbitration ~330, accumulators 108, key-on bits 64, misc.

## 3. Changes

All changes are exact on the ports unless listed in section 4.

| # | change | effect |
|---|---|---|
| 1 | `DSP_MPRO_SET[128]` (valid bit per MPRO entry, 128 FFs + 128:1 mux + 128 write decodes) becomes a 128x1 MLAB (`SCSP_BIT_RAM`), cleared by the existing RES_N sweep; `MPRO_OK` masks every entry until that sweep ends | -128 regs |
| 2 | Key-on `SCR0_KB[32]` and `SCR0_KB_OLD[32]` become two 32x1 MLABs; the sweep clears them one slot per step; events are suppressed during the sweep | -64 regs |
| 3 | `MIXS_NULL[2][16]` becomes a 32x1 MLAB; the idle generation is set one entry per slot in slots 0-15 instead of all at once in slot 31 | -32 regs |
| 4 | `SCNT_PREV` removed: it always equals `SCNT - 1` (reset values 0 and all-ones, same update) | -15 regs |
| 5 | DSP reads dedicated copies of the MPRO, TEMP and MADRS RAMs (68K copies read `REG_A` only, no `REG_RD` mux). `MPRO1_Q`, `TEMP_Q`, `MADRS_Q` latches removed; only `MPRO1_IRA` stays latched because `INPUTS` keeps its old value when no input is selected. The MPRO copy is written at CYCLE1_CE only (the golden writes it on every clock of the REG_WE window, which changes `MPRO0_Q` under a running step) | -58 regs, +4 M10K |
| 6 | LFO and EVOL RAMs have one copy per reading stage whose output register (enabled by the old latch condition, cleared by RES_N where the latch was) replaces the OP1/OP4 latches (`altsyncram`, `outdata_reg_b=CLOCK1`, `clocken3`) | -50 regs, +2 M10K |
| 7 | MIDI buffer registers CR2/CR3 behind parameter `MIDI_REGS` (default 0): they read as 0, writes are ignored | -21 regs |
| 8 | One 22-bit adder for the modulation phase sum (current and next slot share it); the low 6 bits for the current slot have their own adder | small |

Intermediate measurement after steps 1-5 (+ COEF/MEMS copies, since removed; step 6 and 7 not yet in): 3,209 ALUT / 1,648 regs.
Final: 3,155 / 1,643. Step 6 and 7 gain less than the register count suggests because the freed latches were
partly re-created elsewhere (enables, resets); I did not run per-step maps for them.

M10K: the golden has about 25 blocks (one per RAM instance, MPRO two). Added: MPRO copy +2, TEMP copy +1,
MADRS copy +1, LFO copy +1, EVOL copy +1 = **+6**, counted per instance because no fit was run. MLAB
arrays (+7 memory ALUTs) are not M10K.

### Tried and dropped

- Per-stage output-register copies of all slot-register RAMs (SCR0-SCR8, EVOL, LFO): -283 regs and about -95
  ALUT (no `REG_RD`/phase address muxes), exact in simulation, but +20 M10K. Dropped for the +6 M10K budget; it
  was committed once and reverted. It is the way to get registers below the 72% line.
- Computing the direct-out level/pan in an earlier cycle to share one unit with the effect path: the 68K can
  write SCR8 up to the cycle before use, so any earlier evaluation differs. Reverted.
- Removing the five `*_RAM_D` registers by writing the SO/PHASE/EVOL RAMs one slot earlier: the golden writes
  a stale value into slot 0 while RES_N is low, which shows on `RAM_A` after reset. Not exact, not applied.
- Direct reads for `MEMS_Q`, `EXTS_Q` and `MPRO1_Q.IRA`: the `INPUTS` hold behaviour makes them differ. Kept as
  latches.

## 4. Behaviour that differs from the golden

1. **First sample periods after RES_N.** The slot RAMs, the key-on bits and the MPRO valid bits are cleared by
   a sweep of 32 slots (+ pipeline fill, about 1.2 sample periods, 28 us). The golden clears the key-on and
   MPRO valid bits at once; here a write to them during the sweep is lost, as writes to the slot RAMs already
   are in the golden. The test starts no register access within 3 sample periods after RES_N. Everything else,
   including the stale-state transients on `RAM_A` after a reset, was found identical (mid-run RES_N and RST_N
   pulses with sound playing are part of the random phase).
2. `RST_N` low must come with `RES_N` low (true in Saturn: `SYSRES_N` is reset by `RST_N` in `SMPC_HLE.sv`).
3. **MIDI** (`MIDI_REGS = 0`, default): CR2 (0x100404) and CR3 (0x100406) read 0 and ignore writes. Nothing in
   the SCSP uses them, the module has no MIDI port, and the Saturn has no MIDI connector. Set `.MIDI_REGS(1)` to
   get the golden behaviour (tested against the unmodified golden).
4. Timing of the DSP RAM copies, the LFO/EVOL copies, the MLAB arrays and the merged adder is cycle-identical
   at every port, by the argument below and by the lock-step test.
5. Simulation models: `altsyncram` is modelled with old data on a same-edge read/write conflict and
   `altdpram` with asynchronous read. Where Quartus may return new data (undefined in the megafunction), the
   design never reads an address in the cycle it is written (writes are at CYCLE1_CE, reads are sampled at
   other edges).

Unchanged: port list, all bus timing, `SND_EN` handling, DSP effects, audio.

### Why the DSP copies are exact

The DSP consumes `MPRO1_Q`, `TEMP_Q`, `MADRS_Q` only at the CYCLE1_CE edge that ends step m (cycle 2m+1) and
latches them at CYCLE0_CE (cycle 2m) of the same step. RAM writes happen at CYCLE1_CE edges only (the MPRO
copy is gated to match), so between latch and use the RAM content cannot change, and the address does not
change (step and `MDEC_CT` change at the use edge). The 68K never owns the read port at a CYCLE0_CE edge
(checked in simulation: `REG_RD` is never high there). `INPUTS` keeps the value of the last selected input, so
`MPRO1_Q.IRA` is held for the cycle after the step changes, and `MEMS_Q`, `EXTS_Q`, `MIXS_Q` stay latched.

## 5. Verification

`make -C sim scsp` (Verilator 5.052; `sim/Makefile` only forwards to `sim/scsp/Makefile`).

- `REF_SCSP` is the golden renamed with `perl` (prefix `REF_`), with `synopsys translate_off` regions and
  `` `define SIM `` removed (so the simulated netlist is what Quartus synthesises) and the one blocking write to
  a register read by another block (`OP2.PHASE`) made non-blocking, as in hardware.
- `tb.cpp` runs both in lock step, **compares every output on every clock** (`DO RDY_N INT_N SCCE_R/F SCDO
  SCDTACK_N SCAVEC_N SCIPL_N RAM_A/D/WE/RD/CS/RFS SOUND_L/R`) and stops at the first mismatch. Each core has its
  own sound-RAM model (256K words, 4-clock read latency, data held). A 68K bus agent and an SCU B-bus agent
  issue random-timed reads, writes and bursts (byte and word, register file, DSP RAMs, sound RAM). It also
  drives CE at the 22.58/57.27 MHz ratio and the ESL/ESR/SND_EN inputs.
- Directed phase, six scenarios on 32 slots: PCM 16/8-bit loops (off, normal, reverse, alternating), FM
  modulation, noise, EG through all phases (key on/off), PLFO/ALFO waveforms, TL/pan/send levels, DSP programs
  with ring buffer reads and writes (MRD/MWT, TABLE, MADRS, COEF), timers A/B/C and sample interrupts with
  levels and 68K interrupt acknowledge, DMA both directions, master volume.
- Random phase (300-400 rounds per seed): register and slot reprogramming, key on/off with KX, DSP reprogramming,
  SCU block writes and reads, ESL/ESR and SND_EN changes, interrupt registers, DMA, RES_N pulses, RST_N pulses.
- Two builds: default (`MIDI_REGS=0`) against the golden with CR2/CR3 removed, and `MIDI_REGS=1` against the
  unmodified golden.
- Result: 8 seeds x 2 builds at 400 rounds pass (`make -C sim scsp`), plus 30 seeds x 2 builds at 300 rounds.
  A seed is ~4.6M clocks, ~3,500 audio samples (about 2,800 non-zero), 12K 68K and 12K SCU bus operations,
  1.4M sound-RAM read clocks; `*_ref.wav` and `*_new.wav` (stereo 16-bit 44.1 kHz) are written per seed and
  compared byte for byte.
- `sim/scsp/mutate.sh` injects a perl mutation into the shrunk SCSP and reports whether the test catches it.
  Caught: removed CYCLE1_CE gating of the MPRO copy, a wrong input of the merged phase adder, a removed MIXS_NULL
  sweep, a flipped MPRO_OK. **Not caught** (the reset details they implement have no visible effect in this
  stimulus): clearing of the EVOL output register at RES_N, the RES_N freeze of the LFO enable, the key-on bit
  sweep. They are kept because they restore the golden reset state; treat them as untested.
- Limits: the stimulus is random, not every corner of the 68K write timing against the slot pipeline is proven;
  no hardware test; no fit, no timing analysis.

## 6. Where the rest is

The target needs about -985 ALUT and -566 registers from the baseline.

- Registers: the exact per-stage copy scheme of section 3 reaches ~1,360 (67%) but needs +20 M10K. Within +6 M10K
  the remaining candidates are small (noise delay chain ~28 regs with a start-up counter, `OP3.MASK` 17 -> 4,
  SCU read/write address merge ~20 but it relies on the SCU never issuing a request while `RDY_N` is high).
- ALUTs: the DSP is 690 ALUTs and 441 registers (20%), the 68K read mux ~320, sweep hijacks ~140, the
  arithmetic ~750. None of it is "slot-serial already but wasteful": each remaining item is either needed
  every sample (DSP step every 2 cycles) or is a wide mux. Ways to a further -600 ALUT would be serialising the
  DSP over more cycles (changes its timing visible through RAM_A/RAM_D, so not allowed here), dropping effects, or
  a smaller read mux by merging the 68K-visible RAMs into one block (single write port conflicts with the five
  staggered sweeps; would change the first-period behaviour of section 4.1).
- Level/pan sharing between direct and effect path and early RAM writes were rejected for the exactness reasons
  in section 3.
