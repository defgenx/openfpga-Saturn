# Fit status

Measured full compiles of the Pocket core (`src/fpga/ap_core.qsf`, area profile, seed 13, 5CEBA4F23C8).
Per-entity tables are in `sizing/pocket-build/`.

| Build | Config | ALMs needed | LABs needed | M10K | DSP |
|---|---|---|---|---|---|
| `integrate` | upstream blocks, LLE CD, no rewrites | 30,723 | | 309 / 308 | 29 |
| `pocket-build` full | HLE CD, M68KP, VDP2P, VDP1P, SH2P, PLL_LITE; no feature cuts | 22,509 (122%) | 2,279 / 1,848 | 308 / 308 | 29 / 66 |
| `pocket-build` lite | same + SCU DSP and SCSP DSP cuts | | 2,119 / 1,848 | | |
| `main` 7255033 full | same as full + mem-shrink; no feature cuts | 21,996 (119%) | 2,224 / 1,848 | not placed | 29 / 66 |
| `main` 981e25f full | same + SCSPP; no feature cuts | 21,571 (117%) | 2,180 / 1,848 | not placed | 34 / 66 |
| `main` a2992a4 full | same + VDP2P 4,740, mem CD ring in PSRAM1, SH2P fixes | 21,368 (116%) | 2,162 / 1,848 | not placed | 41 / 66 |
| lite a2992a4+ | main + SCU DSP, SCSP DSP and low-impact VDP2 cuts (RPARAMB, EXTCC, LNCOL, MOSAIC, SPRWIN, LINEWIN, BACKLINE) | 19,691 (107%) | 1,993 / 1,848 | not placed | 37 / 66 |
| lite a1dc102 | same + SCUP2 | 19,477 (105%) | 1,968 / 1,848 | not placed | 37 / 66 |
| lite 270a3e2 | same, OPTIMIZATION_MODE "AGGRESSIVE AREA" | 19,477 (105%) | 1,968 / 1,848 (97 memory LABs) | not placed | 37 / 66 |
| lite `mlab-m10k` | same, 61 MLAB RAMs moved to M10K (falling-edge read) | 18,572 (100%) | 1,878 / 1,848 | not placed; 289 blocks implied (+61) | 37 / 66 |
| lite d1402c7, seeds 1 / 2 / 3 | same as `mlab-m10k`, SEED changed | 18,566 / 18,551 / 18,521 | 1,874 / 1,875 / 1,868 (of 1,848) | not placed | 37 / 66 |
| **lite smpc-serv2 (seed 13)** | same + SMPC on SERV | **18,295 (99%)** | **1,848 / 1,848: fits** | 293 / 308 | 37 / 66 |
| **lite cd-trim (on 1a3c356)** | + CD path and CE trims | **18,155 (98%)** | **1,846 / 1,848: fits** | 292 / 308 | 38 / 66 |
| **lite restore (on a797a8c), seeds 7 / 1 / 2** | + area hunt, compact SCSP DSP, VDP2 EXTCC / LNCOL / BACKLINE back in | **18,146 / 18,147 / 18,160 (98%)** | **1,843 / 1,846 / 1,846: fits** | | 42 / 66 |

Lite smpc-serv2 timing (slow 85C): main clock (counter[0]) setup slack -11.641 ns, TNS -7,728, Fmax 24.5 MHz; counter[1] -4.367; cram0/1 clock pins -3.2/-3.3. Not closed.

Fitter ALMs per block, full config (`full_sh2p.entities.txt`):

| Block | ALMs |
|---|---|
| SH7604P x2 | 2,850 + 2,792 |
| VDP2P | 4,724 |
| SCU (DSP 574) | 2,215 |
| SCSP | 1,995 |
| VDP1P | 1,932 |
| mem_pocket | 1,708 |
| m68kp | 887 |
| cdb_hle | 742 |
| SMPC (LLE) | 538 |
| cd_stream | 379 |
| core_bridge_cmd | 186 |

Gap to the device: about 4,030 ALMs (431 LABs). M10K is exactly full; the VDP1 framebuffer 1 in
`vdp1_fb_pocket` holds 1,417 kbit (141 blocks) of the 1,921 kbit used.

## MLAB to M10K (branch `mlab-m10k`)

Lite a1dc102 needed 97 Memory LABs for 631 memory ALMs (65 small RAMs). Those RAMs are now M10K blocks whose read address is
registered on the falling edge (the `*_FERAM` modules, pattern of `SCUP2_CBUS_CACHE`): the value is what the asynchronous MLAB read
gave before the next rising edge, so every sim stays cycle-exact. Rules: the read address must come from registers (not from another
falling-edge RAM's output, not from a late input), writes stay on the rising edge. `-DPOCKET_FE_CHECK` in a Verilator build prints
`FE_ADDR_LATE` when an address changes after the falling edge (only reset pulses did, in sh2, vdp1, vdp2, scsp, m68k).

Measured (`tools/pocket_lite.sh`, quartus_sh --flow compile, fit still fails): ALMs 19,477 -> 18,572, LABs required 1,968 -> 1,878
(30 over 1,848), Memory LABs 97 -> 14, RAM implementation bits 2,334,720 -> 2,959,360 (228 -> 289 blocks of 308; blocks not
reported because placement failed). Converted: SH7604P x2 (regfile A/B, cache LV a/b, DMAC RDBUF/SAR-DAR, DIVU, INTC), VDP2P (9 rotation
parameter RAMs, CDPRING x4, CY registers x4, character parameter pair, write FIFO), VDP1P (WBUF, GSTEP, ACCS x2, pattern FIFO, colour
table), SCSPP stacks, m68kp register file, SCUP2 DMA lanes. Left in MLAB (34 ALMs, 14 LABs): VDP2P `nmp`/`rmp` (address derives
from the `cy_*` falling-edge RAMs; a chained read fails vdp2 sim), SMPC (LLE sim is only a tolerance compare against the HLE),
SCSPP key/bit RAMs (1 ALM). Timing: the read becomes a half-cycle path (not run through STA).

## CD path and clock enables (branch `cd-trim`)

Measured in-system (`tools/pocket_lite.sh` to `lite-cd`, quartus_sh --flow compile, fit still fails at placement), against the
lite-mlab entity table:

| Block | before | after | How |
|---|---|---|---|
| CEGen x4 (CDD, CD, SCSP, SMPC) | 38 + 30 + 28 + 32 | SCSP 24, CD 14, CDD 5, SMPC 3 | `ce_gen` only as wide as the ratio needs; CD is 3125/3528 of the SCSP 2x enable, SMPC (4 MHz) is every 10th CD enable, CDD (176.4 kHz) every 256th SCSP 2x enable (exact: `sim/platform/tb_ce`, 3M clocks against the accumulators) |
| cd_stream | 370 | see below | sector offset (file sector * 2352) in one multiplier (it was 3 adds of 28 bits, 142 LUTs), TOC address by increment, TOC RAM read through the address register, ring write FIFO as an M10K instance (the inferred one carried 58 bypass registers), `rg_wa/rg_wd` straight from the FIFO output |
| cdb_hle | 739 | see below | RV32I firmware and SERV without the compressed decoder (ROM 16 KB = +4 M10K), DRAM port address/data as muxes of the granted client, no b staging in the transfer engine (b only matters for copy segments, which the firmware starts on an idle engine), 18 bit host counter (<= 200 sectors x 1,176 words), FIFO without bypass registers |
| ddram_pocket | | | the two posted write FIFOs in M10K with a registered read address (3 blocks), no MLAB and no bypass registers; an entry is offered one clock after it was written |

`sim/cdb` needs `make -C sim cdb` with the ring model of `tb_cdb` (it still addressed the SRAM pins after the ring moved to PSRAM1).
`check_hle.py` accepts a CD-DA pair whose R word is the previous pair's: the script samples at an arbitrary clock, and the RV32I
firmware moved that clock onto the L/R update.

## Timing round 1 (branch `timing`)

Setup slack (slow 1100mV 85C), lite build on main d6082c1:

| | main d6082c1 | timing c9dfce9 |
|---|---|---|
| ALMs / LABs / M10K | 18,155 / 1,846 / 292 | 18,096 / 1,846 / 292 |
| counter[0] | -11.267 | -3.938 (TNS -804) |
| counter[1] | -4.880 | -4.325 (TNS -157) |
| cram0 / cram1 | -3.04 / -3.14 | -0.402 / -0.193 |
| hold, all clocks | | >= 0 |
| **final 9ff7e8a (lite default, seed 13)** | all merged rewrites + timing rounds 1-3 | **18,201 (98%)** | **1,844 / 1,848** | 285 / 308 | 38 / 66 |

Root causes and fixes:
- Falling-edge M10K reads: a path from a `*_FERAM` read register to a CE_R register has 1.5 clk_sys, but STA gave it 0.5 and the old
  `MSH|core` multicycle did not match (RAM outside `core`). SDC now: `-fall_from clk_sys` to MSH/SSH registers, setup 2 / hold 1;
  INT_ACCEPTED (CE_R only) to the core, setup 2. Paths into a FERAM address register keep their half period (not covered by the
  core multicycle). Checked in the RTL: SH7604P_INTC.INT_ACCEPTED changes on CE_R only; the core captures on CE_R.
- cram pins: the generated clock sat on the port with zero insertion delay while the data registers have ~3 ns; it is now defined on
  `psram*|p_clk`. FAST_OUTPUT_(ENABLE_)REGISTER packs the pin registers into the I/O cells.
- vdp1_fb_pocket: the clk_ram engine took VDP1's combinational FB address (11 logic levels in one clk_ram); it now uses a clk_ram
  register (one clk_ram later). `make -C sim mem` fb: PASS (tb_fb_slow fails with and without the change).

Remaining (not closed), all real paths:
- SH CACHE/BSC regs updated on CE_F (IBADDR, VEC_BUF) to core regs: one clk_sys, ~22 ns through the cache array read or the vector ALU path.
- VDP1 falling-edge RAM (PAT_FIFO, GSTEP, CLT, WBUF) to draw registers, VDP2 `cdpa` address from `cd_area_symbol` (half period): need
  per-block proof that the consumers are CE_R before a multicycle is allowed.
- clk_sys to clk_ram crossings (SSH bsc, VDP1 VRAM_A to ddram; one clk_ram) and clk_ram internal paths in sdram/fb/psram.
- SRAM pins: output delay is relative to an ideal clk_ram, the launch has ~3 ns insertion delay.

## Timing round 2 (branch `timing2`)

Lite, full compile: 18,188 ALMs, 1,848 / 1,848 LABs, 287 / 308 M10K. Setup slack: counter[0] -0.543 (TNS -15), counter[1] -1.253 (TNS -32),
cram0 -0.473, cram1 -0.442; dram_clk_pin +1.64; hold >= 0 on all clocks. (Round 1: -3.938 / -4.325 / -0.40 / -0.19.)
An intermediate compile with the same RTL and an SDC without the DIVU/oe_n lines: 18,137 ALMs, 1,847 LABs, c0 -1.730, c1 -0.990. The
placement moves the worst slack by about 1 ns between seeds-equivalent runs.

Changes:
- SDC: `-add_delay` on the `-max` and `-min` output delays (the old calls replaced each other on shared pins; 332054 warnings gone).
  SRAM pins get a reference clock on `sram_pocket.e_oe_n` (`sram_ref`), so outputs and the read data are timed against the clock the
  pin registers see; `sram_oe_n` itself is excluded (it is the reference). SRAM worst slack +1.8 ns (was -3.8).
- SDC: CE_R-only INTC registers, DMAC VCRDMA* and DIVU VEC8 to the core get setup 2 (all written inside CE_R branches).
- RTL: `sram_pocket` registers the byte strobes (was a comb of `e_we`/`e_be`).
- RTL: VDP1P GSTEP, CLT, PAT_FIFO and ACCS are MLAB again (`VDP1P_MLAB` parameter FE = 0): VDP1P's FSM steps every clk_sys, so a
  falling-edge read is a real half-cycle path there. 5 M10K freed, LABs unchanged. vdp1 sim: PASS.
- Not changed, real paths: `bsc.VEC_BUF` (CE_F) to the core (external vector mode only; one clk_sys), VDP2P `cdpa` read address
  (CPN steps every clk), clk_sys to clk_ram requests (SSH bsc, SCU, VDP1 VRAM_A into ddram) and sdram `dram_a` logic, PSRAM `p_oe`
  turn-on (output buffer 3.4 ns).


Final 9ff7e8a timing (slow 1100mV 85C setup): counter[0] -0.846 (TNS -41), counter[1] -1.166 (TNS -79), cram0 -0.514, cram1 -0.315, dram_clk_pin +1.654; hold >= 0. Compile 22 min with map --parallel=1, fit/sta --parallel=11.

## Area hunt (branch `area-hunt`, 2026-10-27)

Goal: room for the SCU DSP (about 300 ALMs compact), the SCSP DSP (about 200), VDP2 line colour / extended colour calc / back line
(about 108) and the framebuffer handshake fix, with no feature removed. Lite configuration of `main` e615372, one processor,
`raetro/quartus:21.1`.

How to read the numbers:
- `quartus_map` takes 7 minutes and its ALM estimate follows the fitter's "ALMs needed" of the same netlist and seed.
- "ALMs needed" = used in final placement - recoverable by dense packing + unavailable. Once the design has room the fitter packs
  less densely and the estimate moves a lot with the seed (b2: seed 7 18,039, seed 1 17,795; "recoverable" 398 / 571), and the LAB count
  of a successful fit sits at the 1,848 cap. Compare map estimates, the touched entities in the per-entity table and several seeds.
- An MLAB instance takes 10 ALMs (a whole LAB) in the fit whatever its width (the map counts bits only); `SAFE_STATE_MACHINE` etc. below
  were measured at map level.
- Fit noise on entities nobody touched is +-50 ALMs per large block (MSH +30, SSH -76, M68K +42 between two runs).

| Build | map est. | ALMs needed seed 7 / seed 1 | LABs | M10K | slack counter[0] / [1] |
|---|---|---|---|---|---|
| lite e615372 (before) | 17,912 | 18,204 / 18,216 | 1,847 / 1,848 | 285 | -1.456 / -2.929 |
| + SMPC firmware RV32I | 17,808 | 18,145 / | 1,844 | 285 | |
| + SMPC RAMs, game id, RTC, audio, CR/RR in MLAB (a2) | 17,712 | 18,074 / | 1,847 | 287 | |
| + tiny MLABs to M10K, bridge loader, RTC regs (b2) | 17,692 | 18,039 / 17,795 | 1,848 / 1,843 | 293 | |
| `area-hunt` HEAD (F): + RR in M10K, SAFE_STATE_MACHINE off | 17,639 | 17,762 / 17,733 | 1,848 / 1,848 | 294 | -0.577 / -2.567 |

Stress test (same seed 7, quartus_fit stops at the LAB check): the same restore on both trees, SCSP DSP uncut (`POCKET_CUT_SCSP_DSP` off:
the full DSP, about 440 ALMs, not the compact one) and the VDP2 `LNCOL`, `EXTCC`, `BACKLINE` cuts off (about 108), map estimate 18,361 on
e615372 and 18,098 on `area-hunt`: the fitter requires **1,885 LABs before and 1,853 after** (device 1,848). The hunt freed about 32 LABs
(map estimate -263 ALMs); with the compact SCSP DSP (about 200 instead of 440) the restore fits, the SCU DSP (about 300) does not yet.

Savings (fit entity table, seed 7, "ALMs needed" of the touched entity before -> after; each has a simulation, see the commit):

| Change | Entity ALMs | How verified |
|---|---|---|
| SMPC_SERV firmware as RV32I, SERV without `serv_compdec` and `serv_aligner` (ROM stays 4 KB: 3,024 bytes) | SMPC_SERV 397.7 -> 308.7 (-89) | `sim/smpc HLE=SMPC_SERV`: data_diffs=0, timing_violations=0; `sim/irq` |
| SMPC_SERV data RAM, IREG and OREG: six MLABs -> three M10K (data RAM `reg [3:0][7:0]` byte lanes, OREG read on the falling edge) | SMPC_SERV 308.7 -> 261.6 (-47) | same, plus `-DPOCKET_FE_CHECK`: no `FE_ADDR_LATE` |
| cdb_hle: CR and RR (128 flip-flops, then MLABs) and the transfer FIFO (MLAB) in M10K (falling-edge read), `sk_base` copy dropped | cdb_hle 611.2 -> 544.0 (-67) | `sim/cdb test` with `-DPOCKET_FE_CHECK`: 26 + 6 checks, 0 failed |
| SCSPP KB / KBO / KEY RAMs (three MLAB LABs) in M10K (falling-edge read) | SCSP 1,179.0 -> 1,160.3 (-19) | `sim/scsp` 6 seeds x 2 builds, golden vs shrunk, WAV identical |
| bridge_loader: `ld_addr` / `ld_data` are the held bridge bus instead of a 56 bit copy | loader 17.4 -> 1.5 (-16) | `sim/sys` boot ROM (BIOS goes through the loader): 0 failed steps |
| core_bridge_cmd: RTC date / time registers are the host parameter registers 0x24 / 0x28 | icb 195.3 -> 174.5 (-21) | `sim/sys` |
| sound_i2s: FIFO write on a strobe from pocket_audio instead of comparing the previous 32 bit sample | sound_i2s 83.3 -> 65.5 (-18) | I2S pins identical to the old pair over 8 ms (random and silent samples) |
| pocket_audio: 27 bit accumulator (acc < in_clk < 2^26) | audio 108.4 -> 93.9 (-15, with the strobe) | output identical to the old module, four in_clk values; `sim/platform` |
| saturn_pocket: Dezaemon 2 game id kept as four compare bits (was 64 flip-flops), RTC payload not copied (45 flip-flops) | in saturn_pocket | unit comparison of the match result (4,000 headers); `sim/sys` |
| `SAFE_STATE_MACHINE` off | map 17,661 -> 17,639 (-22) | no RTL change |
| cdb_hle: the firmware read mux (rom, ram and 13 MMIO words) is one AND-OR on a one-hot select registered from the data address (was a decoded `case` plus a 3:1 mux) | cdb_hle: estimate -35 to -45 (yosys LUT6: 243 -> 194 incl. 15 flip-flops; not fitted) | `sim/cdb` HLE logs byte-identical to the previous RTL (script_cmds, script_nodisc, script_cooked), plus 200,000 random cases old vs new mux |
| pll_lite: DPRIO write data is a combinational select on `st` (was a 16 bit register `o_wd` with a 7-way load); only valid while `o_wr` is high, DPRIO ignores it otherwise | pll_lite: estimate -20 to -30 (yosys LUT6: 205 -> 163 and 16 flip-flops fewer; not fitted) | `sim/pll` PASS; cycle-by-cycle old vs new over 136 writes: wr, rd, address, data identical |
| ce_gen: `nxt >= in_clk` taken from the borrow of `nxt - in_clk` (one carry chain less, SCSP and CD clock enables) | saturn_pocket: estimate -0 to -13 (Quartus may already share them; not fitted) | 3 M cycles random old vs new, `ce` and `ev` identical (real `in_clk` values, chained CD instance, free parameters) |

Touched entities together about -290 ALMs; the whole design -441 (the rest is packing and seed noise in blocks nobody touched).
M10K +9 (285 -> 294): SMPC data RAM, IREG, OREG; SCSPP KB, KBO, KEY; cdb CR, RR, transfer FIFO. 14 blocks remain (the DSP restores
need some). Setup slack after the changes is not worse (table; the same seed, counter[4] is the 90 degree clk_ram_cap output).

Tried, no gain (map estimate on the same RTL, or fit with the same seed): `SYNTH_TIMING_DRIVEN_SYNTHESIS off` (0),
`REMOVE_REDUNDANT_LOGIC_CELLS on` (0), `ADV_NETLIST_OPT_SYNTH_WYSIWYG_REMAP on` (0), `PRE_MAPPING_RESYNTHESIS on` (+451),
`ALLOW_ANY_SHIFT_REGISTER_SIZE_FOR_RECOGNITION on` + `AUTO_SHIFT_REGISTER_RECOGNITION always` (+39; the netlist has no fabric shift
chains outside SERV's bit-serial registers), `QII_AUTO_PACKED_REGISTERS "MINIMIZE AREA"` (fit identical), `PLACEMENT_EFFORT_MULTIPLIER 3`
(fit ALMs identical). A `ramstyle` MLAB `reg [1:0][8:0]` two-lane array is not inferred as a RAM (72 flip-flops): merging
`cdpa_lo` / `cdpa_hi` into one MLAB was dropped.

Looked at, nothing to take: the debug overlay is `ifdef`-ed out (no `dbg_*` entity in the fit; `dbg_tx` is a tie-off); the PLL writer
`pll_lite` is 90 ALMs (M and K only; a Altera reconfiguration core is 737, the read-modify-write values of DPRIO 0x15/0x17 cannot be
made constants without the silicon); the pad controller and bridge peripheral use only `cont1_key` / `cont2_key`; PSRAM address
counters are row-limited already; DIVU is a serial single-adder unit.

Not done (estimates):
- VDP1P MLABs (CLT, GSTEP, PAT_FIFO, ACCS x2: five LABs, -50 ALMs) with `VDP1P_MLAB FE=1`: the read becomes a half-cycle path
  (the reason `timing2` put them back).
- VDP2P `nmp` / `rmp` (two LABs): the read address comes from another falling-edge RAM.
- Write-data holds of `ddram_pocket` shared between `raml` and `cart` (about -25 ALMs): a write on one channel stalls the other.
- The 763 VDP2 register-file flip-flops (`REGS.*`, about 380 ALMs) as RAM need sequential readers in the dot pipeline
  (`vdp2-rewrite.md`).

Observation (not changed): `rtc_valid` of `core_bridge_cmd` is a level that stays high after the first RTC command, while
`saturn_pocket` treats it as a pulse (`rtc_dly <= 2'b01` on every clock), so `rtc_tog` never toggles and the SMPC never gets
the Pocket's time through `rtc_load`. An edge detector on `rtc_valid` would fix it.


## Timing round 3 (branch `memfix`, 2026-11-01)

Goal: close the memory clock (counter[1]) and the main clock (counter[0]) without changing cycle behaviour. v0.2.3 (seed 7,
18,265 ALMs, 1,848 LABs) had counter[4] -5.17, counter[1] -3.21 (TNS -197), counter[0] -1.88, cram0/1 -0.39 / -0.46 at the slow
corner, and its SDRAM constraints were wrong (below), so the +1.65 of `dram_clk_pin` meant nothing. The release build is still in
`openfpga-Saturn-worktrees/rel19T-s7`; its paths were listed with `quartus_sta -t` scripts (per group: source, destination,
clock pair, launch / latch edge, data delay).

What each failing group turned out to be:

| Group (v0.2.3 slack) | Finding | Done |
|---|---|---|
| counter[4] -5.17, dram_dq -> cap_q | quarter-phase capture register; the read path is wrong as a whole (below) | register removed |
| counter[1] -3.21, cap_q -> dout (0.75 clk) | same | removed |
| psram0 internal -2.06, ddram -> psram0 -1.99 (231 paths) | half-rate machine: the pin and segment registers are written only at F edges from F-edge registers, two clk_ram; ph was merged across both chips and in every pin cone | multicycle 2 / 1 per chip in the SDC (proof in its comment); `req_f` without ph; `dont_merge` on ph |
| SSH / MSH / SCU -> ddram ramh_tag -0.67 (359 + 82 + 44 paths) | real one-clk_ram paths: the CA bus mux, 15 bit tag compare, hit, victim, tag enable in 8.7 ns, 6 ns of it routing | left to the fitter; -0.29 in the best fit |
| ddram internal ramh_tag -> ramh_tag -0.56 (65) | tags are written at read-request edges only (odd clk_ram edges, four apart); dirty is not in the set (write edges are even) | multicycle 2 / 1 |
| counter[0] -1.88, VDP1P PAT_FIFO falling-edge read | `fit-dsp` bf3abe7: rising-edge read one cycle ahead with a bypass | cherry-picked; counter[0] +0.15 |
| cram0/1 -0.39 / -0.46, p_oe -> cram_dq | the fitter could not pack p_oe into the I/O cell: its clock enable differed from p_dq's (synchronous clear inferred for the release value) | p_dq / p_oe written together, no synchronous control (`ALLOW_SYNCH_CTRL_USAGE OFF`) |
| vdp1_fb_pocket -0.23, VDP1 -> fb i0r / i1r | display-address pipeline registers on clk_ram fed by VDP1's address cone; a one-clk_ram later display read is probably tolerated (`tb_fb`: pixel within 4 clk_sys of the address change) but not proven, so no exception | left to the fitter |

The SDRAM read path (docs/memory.md section 3) was the real problem of the release, timing report or not: DQ went from the pad
through a 3:1 mux into the ten landing registers (9.5 to 10.5 ns at the slow corner, 1 ns of spread between bits), and the SDC
multicycle counted from the READ edge instead of the SDRAM's data launch edge, two clk_ram too lenient, while the simulation model
launched the data one SDRAM clock late. It is now Saturn_MiSTer's structure (I/O cell input register, READ + 4, used one clk later),
with the model corrected and the pad delays in the benches.

Fits of the final RTL (`memfix`, `AGGRESSIVE AREA`, one processor; `openfpga-Saturn-worktrees/memfix<round>-s<seed>`):

| Round | RTL | Seeds | ALMs needed | LABs | Result |
|---|---|---|---|---|---|
| 1 | I/O cell DDIO pair + quarter register + cap_sel | 7 2 8 9 10 11 | 18,318 to 18,346 | 1,852 to 1,857 | no fit |
| 2 | one I/O cell register, fixed READ + 4 | 7 2 8 9 10 11 14 | 18,282 (14) to 18,345 | 1,848 (14), 1,852 to 1,857 | **seed 14 fits** |
| 2 | same | 16 1 3 4 5 13 | 18,316 to 18,355 | 1,852 to 1,857 | no fit |
| 3 | + psram pin registers without synchronous control (`4da6f29`, map estimate 18,089) | 14 2 | | 1,861 | no fit: the register attribute applies to the entity and costs 13 LABs; reverted in round 4 |
| 4 | round 2 RTL + the four changes below (`e93c65f` `4d745d5` `6fb79ed` `5c9a520`) | | | | to fit |

Slow 1100mV 85C slack of the round 2 seed 14 build (`memfix2-s14`, RTL `aaf7818`), setup / hold in ns:

| Clock | v0.2.3 seed 7 | round 2 seed 14 | Remaining paths |
|---|---|---|---|
| counter[0] clk_sys | -1.879 / 0.264 | **+0.148** / 0.270 | |
| counter[1] clk_ram | -3.208 / 0.139 | -0.792 / 0.168 | VDP1 HTIM_PIPE -> fb i1r (44, -0.79), VDP2 HTIM -> fb i1r (3), fb rptr0 -> rptr1 (56, -0.33), MSH / SSH BUS_RLS -> ddram ramh_tag (135, -0.29) |
| counter[4] clk_ram_cap | -5.166 / - | unused | register removed |
| cram0_clk_pin / cram1_clk_pin | -0.388 / -0.460 | -0.462 / -0.457 (hold +1.66) | p_oe still in the fabric in this round (round 3 adds the attribute) |
| dram_clk_pin | +1.652 (wrong multicycle) | +1.644 / +3.077 with the corrected constraint | I/O cell `cap_p[15:0]`: all 16 packed ("Fast Input Register assignment") |
| sram_ref | +1.787 | +1.772 / +3.028 | |
| clk_74a, bridge_spiclk, counter[2] | positive | +3.47, +8.62, +12.31 | |

18,282 ALMs, 1,848 / 1,848 LABs; hold >= 0 on every clock; recovery / removal positive. Round 3 is fitted two seeds at a
time (`memfix3-s<seed>/fit.log`, `output_files/ap_core.sta.summary`); when one fits, replace this table with its numbers and
check that `psram0|p_oe` and `psram1|p_oe` appear as "Fast Output Enable Register assignment" in `ap_core.fit.rpt` (round 2
still had "Can't pack ... clock enable signal violation" for them).

Full-system simulation (`sim/sys`, Hyper Duel, 120 M clk_sys, `+SCUPROBE`, the worktree's bench and corrected model): `i2s.raw`,
`scsp.raw`, `pocket.raw` and `trace.log` identical to `build_fit/run4`, `audio:` line identical (196,918 SCSP samples, 113,765
non-zero, 8 key-on events). A first run from the main checkout's old bench (capture +4.5 written at boot, old model) with the
round 1 RTL landed the words one clk_ram later than the release and returned every SCSP sample fetch one request stale: the SCSP
has no clk_ram to spare past READ + 5 (docs/memory.md).

## Timing round 4 (branch `memfix`, 2026-11-01)

Round 3 (`4da6f29`) did not fit: the `ALLOW_SYNCH_CTRL_USAGE OFF` attribute on `p_dq` / `p_oe` applies to the psram_sync entity
and cost 13 LABs (1,861 needed on seeds 14 and 2). It is reverted; the round 4 RTL is the round 2 netlist plus the four
cycle-exact changes below. Each has a HEAD-vs-new equivalence bench (Verilator, every output compared at every clock, random
stimulus in the shape of the real traffic; a deliberately broken copy of the new module fails the same bench), and `make -C sim
mem` and `make -C sim/vdp1` (golden VDP1 against VDP1P, 40 scenarios) pass.

| Path (round 2 slack) | Change | Expected | Commit |
|---|---|---|---|
| cram0/1 pins -0.46 (p_oe -> cram_dq) | `psram_sync`: p_dq and p_oe written at every F edge from a function of the segment state, no constant in any branch. Round 2's `ap_core.fit.rpt`: the eight p_dq bits whose configuration value depends on `cop[0]` had their own clock enable (`p_dq[0]~7`, fanout 8), the eight constant bits and p_oe had `ph`, so p_oe packed into 8 of the 16 I/O cells per chip and failed the others with "clock enable signal violation". The configuration value is staged in `act_adr[15:0]`; p_dq is don't-care while p_oe is low (pins high impedance) | p_oe in all 32 I/O cells, cram pins positive as in round 3, no entity-wide option | `e93c65f` |
| VDP1 HTIM_PIPE -> fb i1r -0.79 (44 paths, 5 levels, 8.9 ns) | `VDP1P`: `\|HTIM_PIPE` kept as a register (HTIM_PIPE_ANY, updated with the pipe at DCE_R); the erase-address select is one LUT of four register outputs | 5 -> 3 logic levels on a routing-dominated clk_sys -> clk_ram path: +0.8 to +1.5 ns | `5c9a520` |
| fb rptr0 -> rptr1 -0.33 (8 levels, two carry chains) | `vdp1_fb_pocket`: the FIFO choice reads a running occupancy difference `dlt` (moved by each edge's push and pop) instead of two subtractions and a compare | rptr* see two levels of != and the enable; the dlt loop is two levels, the pick, the step and one 10 bit chain: about +1.5 ns | `4d745d5` |
| MSH / SSH BUS_RLS -> ddram ramh_tag -0.29 (97 paths), A -> ramh_tag -0.12 | `ddram_pocket`: a missed line's tag is written at the edge after the request edge (`ramh_alloc`) from `ramh_addr`, and the fill address is `ramh_addr` (the master holds it under WAIT); SDC setup 2 from clk_sys into `ramh_tag` and `a_addr` | those paths get two clk_ram. The 15 bit compare into `ramh_curr` / `ramh_plru` / `ramh_read_busy` (-0.13 / +0.09 / positive) keeps its logic (compare, way, the BUS_RLS mux: four levels, 5.5 ns of routing from the BSC): this group is not closed by RTL and is left to the fitter with the tag enable fanout (60 registers) and the data paths out of its way | `6fb79ed` |

Assumptions the benches enforce: `rst` of the framebuffer module is high for two clk_sys or more (`ram_reset`: 256; a single
clk_sys clears `wptr*` at the last reset edge and either form of the logic then pops entries that were never written), the
WRAM-H master holds the address while `ramh_busy` (the bus does), p_dq is compared only while p_oe is high. The ddram bench
runs both clk_sys phases against the PSRAM half-rate slots (`psram_sync` `ph` free-runs from power-up): the broken copy that
keeps `ramh_tag[ramh_curr]` as the fill address fails only in the phase where the fill can issue at the tag-write edge.

Area (yosys, LUT6 and flip-flops of the module alone, HEAD -> new): psram_sync 317 -> 322 per chip (flip-flop count unchanged, the
17 pin registers lose their synchronous clear), vdp1_fb_pocket 571 -> 578 and +10, ddram_pocket 1,065 -> 1,011 and +4 (the tag
read mux of the fill address and the victim-indexed tag write are gone), VDP1P +1 flip-flop. About -15 ALMs net.

Full-system simulation of the round 4 RTL (`sim/sys/build_memfix4`, the round 3 command: Hyper Duel image and TOC, 120 M
clk_sys, `+SCUPROBE`, 106 minutes): `i2s.raw`, `scsp.raw`, `pocket.raw` and `trace.log` byte-identical to `build_fit/run4`,
`audio:` line identical.

First fits of `5c9a520` (seeds 14 and 7): 18,320 / 18,324 ALMs needed, 1,854 / 1,852 LABs, no fit; p_oe packed in all 32 I/O
cells. Per entity against round 2 seed 14: mem_pocket 1,241 -> 1,210 / 1,217 (ddram -4 / -9, psram1 -14 / -11, psram0 -2, fb -4 /
+3), VDP1P -1 / +5; the +38 is in untouched blocks (MSH +32, SSH +49, SCU +12, SMPC +16, VDP2P -28), the seed noise of the
area-hunt section. Round 2 had fit on one seed of thirteen.

## Area round 5 (branch `memfix`, 2026-11-02)

`700ec89` (VDP1P GSTEP / CLT / ACCS in M10K) is reverted (`c6275f6`): +7 ALMs and +67 registers, no LAB saved over 20
seeds. Then four exact rewrites, each with a Verilator old-vs-new bench (every output, every clock, random stimulus;
a deliberately broken copy fails):

| Commit | Change | map ALUT (entity) | fit ALMs (entity, s14 round 4 -> s14 / s7) |
|---|---|---|---|
| `6003560` | `pocket_audio`: prev * 65536 + d * ph per channel in one `altmult_add` block (two DSP blocks, was one) | 182 -> 161 | |
| `ef9663d` | `io_pad_controller`: command bit picked from the two constant words by `tr_bit`; no `rx_word` copy; heartbeat count on `auto_poll_cnt` | 141 -> 120 | 93.7 -> 71.7 / 68.3 |
| `e9f8605` | `sound_i2s`: MCLK accumulator with one adder | 78 -> 62 | 64.7 -> 62.2 / 61.8 |
| `4d05570` | `ce_gent`: test against in_clk - step, one adder with a step or step - in_clk operand (SCSP and CD enables, 48 kHz accumulator); 3-bit registered mode instead of the 26-bit `in_clk` | CD 40 -> 14, SCSP 55 -> 46, audio 161 -> 138 | audio 106.7 -> 79.5 / 78.9, CD 19.2 -> 7.3 / 7.5, SCSP 20.5 -> 24.7 / 23.9 |

Design map estimate 18,026 -> 17,932 (-94). `POCKET_CUT_SH2_DIVU_SHARED` mapped on `e9f8605`: 18,083 against 17,995
without it (+88: the shared unit of the golden SH7604 is larger than the two serial `SH7604P_DIVU`s). Not a candidate.

Fits (`openfpga-Saturn-worktrees/memfix6-s<seed>`), ALMs needed / LABs: 14: 18,228 / 1,847, 7: 18,197 / 1,846, 2: 18,290 / 1,849
(no fit), 3: 18,226 / 1,848, 8: 18,223 / 1,848, 9: 18,246 / 1,848, 10: 18,238 / 1,848, 11: 18,222 / 1,847, 16: 18,217 /
1,848, 1: 18,251 / 1,848, 4: 18,211 / 1,848, 5: 18,247 / 1,848, 13: 18,239 / 1,846, 6: 18,254 / 1,847. 13 of 14 seeds fit
(round 4: none of 20). Every fit: 0 "Can't pack", the 16 `cap_p` as Fast Input Register, 16 + 16 `p_oe` copies as Fast Output
Enable Register, 302 / 308 M10K, 46 / 66 DSP.

Timing is not closed on any seed. Slow 85C setup counter[0] / counter[1]: s16 -0.503 / -0.441, s8 -0.590 / -0.474,
s9 -0.604 / -0.083, s4 -0.649 / -0.274, s5 -0.681 / -0.336, s14 -1.143 / -0.333, s7 -1.618 / -0.088, s11 -1.182 / -1.791;
fast 0C hold on counter[0] or counter[1] slightly negative on s3, s7, s9, s10, s11, s16, s1, s4 (-0.008 to -0.214); every other
clock positive. The failing groups: MSH `bsc.VEC_BUF` -> `SH2P_core` `PIPE.ID.IR` / `PIPE.ID.PC` (every seed, 18 levels,
the external-vector path of round 2), VDP1 `VRAM_A` / ddram `vdp1vram_rcache_busy` crossings, MSH / SSH `BUS_RLS` and `A`
-> ddram `ramh_*`, and on some seeds SCSPP `OP7.SD` and `vdp1_fb_pocket` `rptr*` / `dlt`.

Full-system simulation of `4d05570` (`sim/sys/build_memfix6`, the round 4 command): `i2s.raw`, `scsp.raw`, `pocket.raw`,
`trace.log` byte-identical to `build_memfix5/run`, `audio:` line identical.

## Timing round 6 (branch `memfix`, 2026-11-02)

Round 5 fitted 13 of 14 seeds and closed none: slow 85C counter[0] -0.50 to -1.62, counter[1] -0.02 to -1.79, fast 0C hold
-0.008 to -0.11 on some seeds. The paths were listed with `quartus_sta -t` on the fitted builds (`memfix6-s<seed>/src/fpga/sta_q2`,
scratchpad `paths_fit3.tcl` / `paths_fit4.tcl`: 3,000 clk_sys and 1,500 clk_ram paths, fast-model hold, full detail of the worst).
Each RTL change has a Verilator HEAD-vs-new bench (every output, every clock, random stimulus; a deliberately broken copy fails),
scratchpad `eq7`; none shifts a cycle, so the full-system simulation was not rerun. The SH-2 golden differential (`sim/sh2`,
`DUT=sh2p GOLD=<Saturn_MiSTer>/rtl`, 76 runs) and the VDP1 golden scenarios (`sim/vdp1`, 40 scenarios) pass on the new RTL.

| Group (round 5 slack) | Finding | Change | Expected | Commit |
|---|---|---|---|---|
| MSH / SSH `bsc.VEC_BUF` -> `core.PIPE.ID.IR` / `PIPE.ID.PC` (every seed, -0.4 to -1.15, 18 levels, 18.3 ns); SMPC `PINS` (NMI_N) -> the same (-0.53) | the external vector (VEC_BUF, written at the CE_F edge) and NMI_N enter the EX operand mux as `vec`, then the IMMT case, the IMM_VAL shift, the RSC mux and the SA mux: six LUTs before the adder, whose result feeds T, the decoder class and the IR enable. One clk_sys path by the schedule (VECT_WAIT drops at the same CE_F edge) | `SH2P_core`: `VEC_VAL = {vec, 2'b00}` joins at the ALU A input through `VEC_A` (IMMT VECT & RSC & SA); REG_C no longer carries the vector. The three VECT decode states have SA, RSC_IMM, no SB, SZ long, no BI (SH2P_pkg) | 6 -> 2 LUTs from VEC_BUF or NMI_N to the adder: +2.5 to +3 ns on the leg; the next core paths are unknown (hidden under the flood: > -0.48 on s14, > +0.11 on s16) | `a0d0fea` `ab66928` |
| ddram `vdp1vram_rcache_busy` / `read_busy` / `vdp1vram_fifo.AMOUNT` -> VDP1P `CMD_ST` (clk_ram -> clk_sys, s7 -1.62, s16 -0.26, 10 levels in 8.7 ns) | `vdp1vram_busy` is an OR of three clk_ram registers; in VDP1P, `CMD_READ_DONE` (VRAM_RDY) sits under nine LUTs of the CMDS_READ decision tree (JP, END, COMM, CCB) | `ddram_pocket`: the OR is a register written from the next values (blocking temporaries, `ddp_infifo` FULLN). `VDP1P`: RD_NEXT (state, delay, GRD_READ, CMD_READ) is an always_comb of the CMD registers and CMD_READ_DONE only selects it | 10 -> about 4 levels: +3 ns | `210f48d` `59e7872` |
| SCSPP `SCR_SCR3` q_b / `OP6.LEVEL` -> `OP7.SD` (s16 -0.50 / -0.22, two DSP multiplies in series, 17.6 ns); `EVOL_RAM_4` q_b -> `OP5.EVOL` (+0.03) | slot pipeline: SCSP_CE pulses are two clk_sys apart at least, CLK_DIV halves them, so CYCLE0_CE and CYCLE1_CE edges are four clk_sys apart at least; the RAM output registers change at CYCLE0_CE edges only, OP6 / OP7 / OP5 at SLOT1_CE (a CYCLE1_CE) only | SDC `set_multicycle_path -setup 2 / -hold 1` from those registers to OP7.SD / OP5.EVOL / EVOL_RAM_D, proof in the SDC comment; checked with quartus_sta on the s16 build: OP7.SD worst -0.503 -> +4.82 (the CE path), hold +0.57 | closed | `33edf28` |
| `vdp1_fb_pocket` `rptr0` / `wptr1_d` -> `rptr1` / `dlt` (s16 -0.44, 6 to 8 levels) | `ne0` / `ne1` = (wptr_d != rptr), 9 bit compares in front of the pick and the pops | `ne0` / `ne1` are registers, `ne <= rst ? \|wptr : (wptr != rptr)`: wrong only for the edge after a pop, when the engine is in es 4 and reads neither | two levels off every path of the group | `8966fa5` `20a61a0` |
| fast 0C hold: MSH `bsc.A` -> ddram `ramh_tag` (one LUT, clk_sys -> clk_ram, -0.11), pocket_audio `cur_r` -> `prev_r` (DSP-packed register, -0.11) | clock network skew on short paths; not an RTL matter (a clk_ram copy of the address moves the same skew to its own D input) | qsf `OPTIMIZE_HOLD_TIMING "ALL PATHS"` (the default covers I/O and minimum-tPD paths only) | hold padded by the fitter | `e62f708` |
| SCU `CBUS_A`, MSH / SSH `BUS_RLS` / `A` -> ddram `ramh_read_busy` / `ramh_plru` / `ramh_dirty` / `raml_read_busy` / `ramh_din` (clk_sys -> clk_ram, s11 -1.79 at 10.4 ns data delay, s14 -0.33, s7 -0.09; 5 to 8 levels) | the request edge is the clk_ram edge after the clk_sys launch and the hit test runs at it: one clk_ram by the schedule, 6 to 7 ns of it routing on the bad seeds (the Saturn bus mux, the tag compare and the way select) | none: a later hit test or a clk_sys register of the address would move the fill or the busy flag by one clk_ram | left to the fitter, as round 3 | |
| ddram `ramh_ram` (M10K, clk_ram) -> SCU `DMA_WTN` (s16 -0.13, 5 levels, 7.1 ns) | the fast WRAM-H word is read at the clk_ram edge after the address and used at the next clk_sys edge; an output register would land it one clk_ram later | none | left to the fitter | |

Map (`memfix-map`, `quartus_map`, ALMs needed): 17,932 -> 17,888 (-44). Entities (ALUTs): SH2P_core 1,774 / 1,766 -> 1,766 / 1,755,
VDP1P 3,191 -> 3,116 (the shared CMDS_READ decision), ddram_pocket 556 -> 558, vdp1_fb_pocket 377 -> 381. The first form of the
vector mux (one-hot shift, VEC_A and VEC_B) mapped at 18,045: +80 ALUTs per core, the 32 bit ALU operand muxes losing their
two-per-ALM packing; the second form (`ab66928`) is what is committed.

Benches (scratchpad `eq7`): `tb_eq_sh2core` (SH2P_core, random instruction words with TRAPA / NOP / SLEEP, interrupts whose vector
changes under the request, VECT_WAIT / BUS_WAIT / EN stalls, NMI_N toggles, RES_N pulses: 3 seeds x 3 M clocks, 54 k vector
fetches), `tb_eq_ddram` (round 4, both clk_sys phases, 3 M clk_ram), `tb_eq_vdp1p` (round 4, 2 seeds x 2 M clocks), `tb_eq_fb`
(round 4, 2 seeds x 3 M clk_ram). Broken copies: a vector bit wrong in VEC_VAL (fails at clock 10), FULLN without the all-ones
term (8,956 mismatches), CMD_DELAY 22 for 23 (1,788), a non-empty flag one clk_ram late (1.36 M).

To fit: the round 5 seeds; look at the next clk_sys paths of the SH2P cores once the VEC_BUF group is gone, and at the
`BUS_RLS` / `A` -> ddram group per seed.
