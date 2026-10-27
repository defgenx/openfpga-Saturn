# Low-impact feature cuts (compile-time options)

Branch `cuts-low`. Every cut is a Verilog macro `POCKET_CUT_<NAME>` (Quartus `VERILOG_MACRO`, simulators `-D`).
With no macro defined the design is the one on `main`; this was checked three ways: `make -C sim sh2`, `sim scsp`,
`sim sh1` pass unchanged, `sim/vdp1` and the SH-1/VDP1 sources are untouched, and a standalone map of the default
build gives the same numbers as the map before the edits (SCSP 3,155 ALUT / 1,643 regs; SH-2 pair 11,587 ALUT /
5,901 regs, see "Default build" below).

Games affected come from `docs/game-impact.md` (written on `main`; a game list there means "uses the feature", not
"breaks"). Nothing here was run on hardware or fitted; all numbers are `quartus_map` estimates.

## Summary

| Cut | ALUT | regs | ALM | M10K | DSP | Behaviour change | Sim |
|---|---|---|---|---|---|---|---|
| `POCKET_CUT_SCSP_DSP` | -704 | -309 | -439 | -6 (-11,904 bits) | -1 | no reverb/effects; DSP programs never run | exact vs golden with DSP disabled (6 seeds, WAV identical) |
| `POCKET_CUT_SMPC_HLE` | +148 | +78 | +47 | -2 | 0 | HLE SMPC instead of HMCS400 + ROM | data identical, timing within tolerance. **Not smaller: drop** |
| `POCKET_CUT_SH2_WDT` | -256 (pair) | -90 | -99 | 0 | 0 | WDT registers read 0, no interval/reset | see below |
| `POCKET_CUT_SH2_PURGE` | -853 (pair) | -615 | -544 | 0 (+4,224 MLAB bits) | 0 | epoch purge instead of 320 dirty flip-flops per CPU | see below. **Not recommended** |
| `POCKET_CUT_SH2_DIVU_SHARED` | -243 (pair) | -298 | -187 | 0 | 0 | one divide datapath for both CPUs | see below |

Savings are default build minus cut build, same flow, same run conditions. Map-to-map noise for identical RTL is
about +-100 ALUT/regs on the SH-2 pair (`docs/sh2.md`), so the WDT row in particular is only good to that order.
The SH-2 rows are for both CPUs together.

## Method

`sizing/cuts/map.sh <block> <project> <name> [macro...]` snapshots `src/` and the block's sizing directory, appends
`VERILOG_MACRO "<macro>=1"` and runs `quartus_map` (21.1.1, `raetro/quartus:21.1`, container `cuts-low-<name>`,
`NUM_PARALLEL_PROCESSORS 1`, 5CEBA4F23C8) in the background. Area profile = the `OPTIMIZATION_TECHNIQUE AREA` set of
`sizing/area_profile.qsf`, as in `docs/scsp.md` and `docs/sh2.md`.

| Block | Project | Top | Baseline |
|---|---|---|---|
| SH-2 pair | `sizing/sh2/cl_base` | `sh2_pair_wrap` (MSH + SSH as in Saturn.sv) | 8,084 ALM / 11,587 ALUT / 5,901 regs / 65,536 M10K bits / 6 DSP |
| SCSP | `sizing/scsp/scsp_new` | `scsp_wrap` | 2,174 ALM / 3,155 ALUT / 1,643 regs / 33,568 bits / 5 DSP |
| SMPC | `sizing/smpc/smpc_map` | `smpc_wrap` (as in Saturn.sv, `smpc.mif` copied from `ref/` into the snapshot) | LLE 627 ALM / 863 ALUT / 394 regs / 20,480 bits |

Absolute results of the cut builds: SCSP_DSP 1,735 ALM / 2,451 ALUT / 1,334 regs / 21,664 bits / 4 DSP; SH-2 WDT
7,985 / 11,331 / 5,811; PURGE 7,540 / 10,734 / 5,286 (MLAB 13,824 -> 18,048 bits); DIVU_SHARED 7,897 / 11,344 /
5,603; SMPC HLE (digital pads only) 674 / 1,011 / 472 / 0 bits (full upstream HLE 702 / 1,065 / 473). M10K blocks
for SCSP are counted per instance as in `docs/scsp.md` (map stage reports bits only): the cut removes the
`MPRO_DRAM` (2), `TEMP_DRAM`, `MADRS_DRAM`, `MIXSA_RAM`, `MIXSB_RAM` instances.

Simulation: `make -C sim/sh2 report CUTS="POCKET_CUT_..." BUILD=build_x` runs every program under four environment
configurations and lists exact matches and the first mismatching clock of the others.

## POCKET_CUT_SCSP_DSP

Removes: the effect DSP datapath (shifter, multiplier, FtoI/ItoF, step state), the DSP's dedicated RAM copies
(`MPRO_DRAM`, `TEMP_DRAM`, `MADRS_DRAM`, MPRO valid RAM), the MIXS accumulate path (`MIXSA/B_RAM`, null flags, adder)
and the EFREG return level/pan stage. Implementation: three one-line `ifdef`s in `SCSP.sv` and `SCSPP.sv` (`MPRO0_Q = 0`,
`DSP_MIXS_Q = 0`, EFREG term of `EFF_W` = 0); the rest folds away in synthesis. (`SCSPP.sv` lacked the third one until the
compact DSP work; the return of 68K-written EFREG words reached the output and the lock-step cut test only passed
because its random traffic rarely wrote EFREG with an effect send level set.)
`POCKET_SCSP_DSP_COMPACT` keeps the DSP at about half the cost of the full one instead of cutting it: docs/scsp-rewrite.md section 6.

Behaviour: an all-zero DSP program issues no write to TEMP/MEMS/EFREG and no sound-RAM access. The CPU-visible RAMs
(COEF, MADRS, MPRO, TEMP, MEMS, EFREG) are kept and return what the 68K/SCU wrote, because a driver may read them
back (their cost is in the numbers above); they never hold DSP results. MIXS (0x100E80) reads 0 and ignores writes.
EXTS still reads ESL/ESR. External audio (CD-DA through ESL/ESR with EFSDL/EFPAN) is untouched and reaches the output
directly. Direct slot output, FM, LFO, EG are bit-exact.

Sim: `make -C sim/scsp cut-dsp` builds the shrunk SCSP with the macro against the golden with the DSP disabled
(`MPRO0_Q`, MIXS read and EFREG return forced to 0 by `perl` on the renamed golden). Every output is compared on every
clock like the default test: 6 seeds, PASS, WAV files identical (about 3,400 samples per seed, 2,200-6,300 non-zero).

Games: reverb is gone everywhere (dry sound, usually acceptable). **Burning Rangers (ADX decode through SCU DSP + SCSP
DSP) and Grandia FMV audio break** (`docs/game-impact.md` section 4); Sakura Taisen 2 audio used the SCSP DSP.
No library-wide count exists.

## POCKET_CUT_SMPC_HLE (dropped: not smaller)

Measured: the upstream `SMPC_HLE` (used by the ST-V build) is **larger** than the HMCS400 + ROM SMPC: 702 ALM /
1,065 ALUT / 473 regs against 627 / 863 / 394. It saves the 2 M10K of the firmware ROM (20,480 bits) and nothing
else. Trimmed to standard digital pads (mouse, 3D pad, analog and keyboard states removed under the macro) it is
674 ALM / 1,011 ALUT / 472 regs: still +47 ALM. The cut is therefore not worth taking and `game-impact.md` row 2
("-400 to -550 ALM") does not hold. The code stays in the branch because it is tested and costs nothing when the
macro is off; it is not recommended.

What was done, so the result is not an artefact of an incomplete HLE:

Upstream coverage (read from the source): MSHON, SSHON/OFF, SNDON/OFF, CDON/OFF, SYSRES, CKCHG352/320, NMIREQ,
RESENAB/DISA, SETTIME, SETSMEM, INTBACK (status; peripheral optimised/non-optimised; CONTINUE/BREAK; 15-byte mode),
RTC with SETTIME, SMEM, direct port registers (IOSEL/DDR/PDR/EXLE), pad ID and digital pad read, mouse/3D pad.
Gaps found against the firmware and fixed in `SMPC_HLE.sv`: OREG8 reads 0x01 (was 0); SYSRES/CKCHG no longer
release SSH and sound (they stay in reset until SSHON/SNDON), SYSRES lowers no SSH NMI, CKCHG leaves a pending NMI
alone; NMIREQ is a 4-tick low pulse and clears SF 24 ticks later; peripheral-only INTBACK (no status) polls the pads
immediately (the firmware does) instead of waiting for the optimised slot; the optimised poll is moved 550 ticks
earlier (the firmware delivers 4,150-4,900 ticks before V-blank in, the HLE was at 3,850); reset commands start 22-29
ticks later. `TIME_SET` must be tied to 1 in the wrapper (the firmware always reports STE).

Test: `make -C sim smpc` (`sim/smpc/tb_smpc.sv`). The firmware is converted from `ref/.../smpc.mif` to a hex file in
`sim/smpc/build/` at build time and never committed. Both SMPCs get the same bus writes, the same V-blank (NTSC, 66,860
ticks per frame at the 4 MHz SMPC clock), the same two standard digital pads (3-wire TH/TR model; port 2 removable).
Sequence: power-on, INTBACK status, SETSMEM, SETTIME, MSHON, SNDON, SSHON, CDOFF/CDON, SSHOFF, SNDOFF, RESENAB/RESDISA,
NMIREQ, CKCHG352/320 (with SSH and sound on), INTBACK peripheral (optimised, non-optimised, peripheral only, port 2
empty), direct-mode PDR read-back, SYSRES. Results (`sim/smpc/tools/cmp.py`): SR and OREG0-31 identical in every
dump (status with RTC and SMEM, two-pad data `F1 02 EF AF F1 02 73 9F`, empty port `F0`); event timing H-L in ticks of
0.25 us: commands -12..+8, CKCHG/SYSRES -55..0 (commands of 406,000 ticks), optimised pad poll -723..0, non-optimised
-18..+40, peripheral-only +0..+474. Tolerances: 60 ticks (15 us) for commands, 800 ticks (200 us) for pad polls; the
firmware itself varies by about +-600 ticks between runs of the same poll, and games read the pad data at V-blank
in, 1 ms after the poll.

Not reproduced: the firmware holds the reset lines for about 1.63 M ticks (0.41 s) after power-on (the HLE releases
at once; the BIOS has not started then); the first peripheral INTBACK after power-on is answered early with `F0 F0`
by the firmware; pad types other than the standard digital pad (under the macro); multitap and multi-request
peripheral data; RTC ticks past 1 s were not compared.

Games: none needs the microcontroller; the ~20 titles that need command/INTBACK delays (Virtua Racing, Discworld,
Dracula X, Virtual Hydlide, ...) depend on the timings above.

## POCKET_CUT_SH2_WDT

Removes the watchdog timer of both CPUs (macro forces `WDT_DISABLE` for both). WTCSR/WTCNT/RSTCSR read 0, writes are
ignored, no interval-timer interrupt, no watchdog reset, `WDTOVF_N` stays high. The standby wake-up use of the WDT is
gone with it.

Sim (72 runs, 18 programs x 4 environments): **68 match exactly**; `t_intc` (all 4 environments) differs from clock
~24,600 / 24,900 / 40,800 / 28,600, the WDT interval-timer test: the interrupt at vector 0x70 never arrives and
WTCSR/RSTCSR reads return 0. Other programs never touch the WDT. Games: none found (`game-impact.md` section 7).

## POCKET_CUT_SH2_PURGE (not recommended)

Replaces the 256 tag-dirty and 64 LRU-dirty flip-flops of each cache (with their 64:1 read muxes and per-bit write
decoders) by a 3-bit stamp per entry in MLAB (`CACHE_STAMP`, 64x3, one lookup copy and one scrub copy per way and
for the LRU RAM) and an epoch counter. A stamp 0 is dead, a live entry carries the epoch (1..7); `CCR.CP` advances
the epoch in the same clock the flip-flops would be set; a line purge writes stamp 0. The scrubber visits one set per
CE_F clock (a lap is 128 clk_sys = 64 bus cycles) and rewrites stale stamps to 0 so that an old stamp cannot match
again when the epoch wraps; its write uses the clock in which the cache has no CE_R write, and is skipped if the CPU
wrote the same set in the preceding clock. After `RST_N` a sweep of 128 clk_sys clears all stamps and all lookups
miss until it finishes.

Differs from the golden only when: (1) seven or more `CCR.CP` purges fall inside one scrub lap (128 clk_sys): an
entry the scrubber has not reached yet then matches again. Measured on the DUT (`+epochdbg`): 14 back-to-back CCR
stores give only 8 purges (a store while `CCR.CP` is still set cancels it, in the golden too), at 0, 4, 58, 124 and then every
54 clk; seven purges therefore need about 300 clk, more than twice the
128 clk lap, so a single CPU cannot reach it (`t_purge_burst` stays exact); (2) the cache is filled within 128 clk of `RST_N` (the
test bench releases `RES_N` at 200 clk under this macro; in the system reset is far longer). Everything else,
including the address array (`0x60000000`) and the LRU read-back, was exact.

Sim: **72/72 exact** (13 original programs plus `t_divu_msh/ssh/both`; `t_purge_few` and `t_purge_burst` fill 64 lines, rewrite them behind the cache, issue 3 / 14 CCR purge stores and re-read).
Games: ~30 titles depend on cache coherency behaviour (`game-impact.md`: Area 51, Clockwork Knight 2, Dragon Force II,
Fighting Vipers, House of the Dead, Mr. Bones, NiGHTS slave cache, WipEout, Grandia disc 1 end, ...). The cut keeps
that behaviour in every sequence tested, but the corner in (1) is argued, not proven on hardware, and it adds
MLAB/timing risk to the cache path; marked not recommended.

## POCKET_CUT_SH2_DIVU_SHARED

One divide datapath (R/D/Q/R64/D64 registers, the 65-bit adders, step counter) serves both CPUs
(`SH/SH7604/DIVU_SHARED.sv`: `SH7604_DIVU_SHR` shared, `SH7604_DIVU_CL` per CPU with DVSR/DVDNT/DVCR/VCRDIV/mirror
registers and the bus side). `Saturn.sv` instantiates the shared unit between MSH and SSH and `SH7604` gets two ports
(`DVS_I`, `DVS_O`). Uncontended, every cycle matches the golden.

Contention: if the datapath is taken by the other CPU, a start write cannot be stalled (the cache drops a write one
clock before DIVU `BUSY` would rise, the same reason a write during a running divide is ignored in the golden). It
is accepted into the registers and the start is deferred (`PEND`); the CPU keeps running, and any later DIVU access
of that CPU (the result read) stalls through `BUSY` until its own division has finished. Priority: pending MSH,
pending SSH, new MSH, new SSH. A second requester's result is thus late by the rest of the other division, at most
39 CE_R clocks (78 clk_sys, 1.4 us), added to its own 39 as before. Results are exact.

Sim: uncontended `t_divu_msh` and `t_divu_ssh` (one CPU divides, the other idles): 8/8 exact cycle by cycle.
`t_divu_both` (both CPUs divide with deterministic operands, +nocmp, final memory compared; `make -C sim/sh2
contend-mem`): memory identical in the four environments. Whole suite: **52/72 exact**. The 20 that differ are every run of `t_divu` (first difference at clk 3.9k-6.5k), `t_divu_both` (3.1k-4.0k; cycle timing, final memory is equal) and `t_rand1/2/3` (32k-195k), the programs in which both CPUs divide at overlapping times; the random programs were not checked individually for another cause. Games: both CPUs dividing at once is
likely in 3D titles (VF1 style matrix work), so cycle timing of those differs; no title is known to depend on it
(`game-impact.md` section 7: low).

## Default build

No macro, no change: `make -C sim sh2` (72 runs = 18 programs x 4 environments, ALL PASS; five programs were added:
`t_divu_msh`, `t_divu_ssh`, `t_divu_both`, `t_purge_few`, `t_purge_burst`), `make -C sim scsp` (6 seeds x 2 builds
PASS), `make -C sim sh1` PASS. Standalone map of the final default source: SCSP 2,174 ALM / 3,155 ALUT / 1,643 regs
(identical to before), SH-2 pair 8,084 ALM / 11,587 ALUT / 5,901 regs (identical).
