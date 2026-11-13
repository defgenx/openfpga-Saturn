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

## Timing round 7 (branch `memfix`, 2026-11-02)

Round 6 fitted 18 seeds (`memfix7-s<seed>`) and closed none. One group is left on clk_ram: MSH / SSH `BUS_RLS` / `A` (and SCU
`CBUS_A`) -> `ddram_pocket`, clk_sys -> clk_ram, 8.73 ns: s18 -0.060 into the mirror M10K `ramh_ram` `porta_we_reg` (4 levels,
8.46 ns, 1.78 ns of it the M10K input setup, 5.2 ns routing), +0.036 / +0.044 into `ramh_dirty` (8 levels), s16 -0.013 into
`raml_write_data[*]` (5 levels; the write-edge enable of 39 registers, fanout 39, 2.0 ns to the far registers). The path lists
are `memfix7-s16` / `memfix7-s18` `src/fpga/sta_q`.

Source side: nothing to take off. `BUS_RLS` is a register already (`MST_BUS_RLS` / `SLV_BUS_RLS`, `MASTER` is the constant
`MD[5]`), so are the BSC's `A`, `CS3_N`, `RD_N`, `WE_N` and the SCU's `CBUS_A` / `CBUS_WR`; the first LUT of every path is the
Saturn bus mux (`SH7604P` `{A,DO} = !BUS_RLS ? ... : ...`, MSH behind SSH behind SCU), 1.1 to 1.3 ns of routing from a
fanout-114 register. The changes are on the ddram side (`eb91a44`), each exact under the bus protocol the design already
relies on, each with the bench below:

| Path (round 6 slack) | Change | Why exact | Expected |
|---|---|---|---|
| `BUS_RLS` / `A` -> `ramh_ram` `porta_we_reg` (s18 -0.060, s16 +0.445; 4 levels + M10K setup) | the mirror write enable is `ramh_wr & ramh_ram_sel_q`: the 4 KB select registered on clk_ram at the same edge as `ramh_wr` (saturn_pocket) | every master changes the address only at an edge where its write strobes have been low for a clk_sys (`SH7604P_BSC`: `WE_N` high at the T2 CE_F, the next `A` at a CE_R; `SCUP2`: `CBUS_WR` is a one clk_sys pulse, `CBUS_A` moves at CE_R in the next `CBUS_WRITE`), so while `ramh_wr` is set the select is the same at both edges | 2 levels into a LAB register, no M10K setup: about +2.5 ns; the M10K enable is clk_ram -> clk_ram |
| `BUS_RLS` / `A` -> `raml_write_data` / `raml_write_addr` / `raml_be` (s16 -0.013 / +0.177 / +0.177; 5 levels, fanout 39) | the three are written while `raml_write_busy` is low (the request edge sets it from 0, so it takes them) and hold while it is set | a master waits on `raml_busy` before its next write (BSC TW samples `WAIT_N`; SCU `CBUS_WRITE_WAIT`), so no request edge finds the flag set and the a_state machine reads what the request edge took | bus mux into a register with a register enable: about +2 ns; the decode keeps `raml_write_busy` and `raml_rcache_dirty` only (fanout 2) |
| `BUS_RLS` / `A` -> `ramh_dirty` / `ramh_plru` / `ramh_curr` / `ramh_alloc` / `ramh_read_busy` (s18 +0.036 / +0.35 / +0.52 / +0.44 / +0.45; 8 levels) | the valid bit is folded into the tag compare (`ramh_hit`), the write invalidation uses `ramh_hit \| ramh_alloc`, `ramh_miss` (request and the four hits) is one kept LUT | a matching dirty line is dirty already; a read request edge is the clk_ram edge after a clk_sys edge and a write request edge the other one (`ramh_wr` is one clk_ram later), so a write never sets what the same edge clears | the separate hit LUT and the OR of the hits leave the chain: 8 -> 6 levels, about +0.8 ns |

Map (`memfix-map`, baseline re-mapped, deterministic): `ddram_pocket` 558 -> 558 ALUTs, 524 -> 525 registers; design 17,888 ->
17,902 ALMs needed with the +20 ALUTs in untouched entities (SH2P_core +6, SH2P_dec +5, VDP2P +5, SCSPP +4, VDP1P +3, M68K -4,
SH2P_alu -4, ...), the synthesis noise of the area-hunt section. A first form with the compare as 20 kept 3 bit slices (a two
level compare) mapped at 17,905 with ddram 552 ALUTs: each slice is a 6 input LUT, one ALM; not kept.

Bench (scratchpad `eq8`, model of `eq7` `tb_eq_ddram`): HEAD `ddram_pocket` against the new one, two psram_bench per side, every
client output, PSRAM request and chip-model counter compared at every clk_ram edge, both clocks from one process. The clients
change on clk_sys and follow the bus: a read is held until busy is low, a write is issued when busy is low with a strobe of 1
(SCU) to 3 (SH-2) clk_sys, the address moves one clk_sys after a strobe at the earliest, read bursts re-assert RD after one
clk_sys with the next word, addresses mix the mirror window, its neighbour page and a 16 line working set. 3 runs x 3 M clk_ram
(phase 0 seed 1, phase 1 seed 2, phase 0 seed 3): 0 mismatches; per run about 56 k WRAM-H reads (27 k misses, 21.5 k hits, 4 k in
the mirror, 8 k bursts), 8 k writes (1 k to the mirror), 20 k back-to-back accesses, 6 k WRAM-L writes. Broken copies (1 M
clk_ram): select two edges late 4,747 mismatches, `raml_be` from `raml_wr_old` 396,445, tag bit 5 dropped from one way's compare
981,946. `sim/sh2` `DUT=sh2p GOLD=<Saturn_MiSTer>/rtl`: ALL PASS. No cycle shifts, so the full-system simulation was not rerun.

To fit: the round 6 seeds (18, 16 first). The remaining crossing paths of the group are the 15 bit compare behind the bus mux
(`ramh_plru` / `ramh_curr`, 6 levels) and `raml_read_busy` / `raml_rcache_dirty` (s18 +0.27 / s16 +0.48; the read-edge decode).

## Timing round 9 (branch `memfix`, 2026-11-02)

Round 8 (the round 7 RTL and the `pocket_audio` gate, `994bb34`) fitted 16 of 18 seeds (`memfix9-s<seed>`; s6 / s18
need 1,849 / 1,854 LABs) and closed none. The paths of all 16 fits were listed with `quartus_sta -t` at the four corners
(`openfpga-Saturn-worktrees/pipe10`: `corners.tcl`; `groups.py` groups them by source / destination name with the bit
index dropped). Three causes, none of them inside one block:

| Group (round 8 slack) | Finding | Change |
|---|---|---|
| every clk_sys <-> clk_ram crossing, both ways (s1 -0.88 hold, s7 -1.32, s4 -1.17, s14 -0.81, s10 -0.60, s12 -0.54, s5 -0.16, s19 -0.09) | PLL output counter placement: below | qsf: counter[0] / counter[1] locked to `PLLOUTPUTCOUNTER_X54_Y0_N1` / `_Y2_N1` |
| SCSPP `OP7.SLOT` -> `ACC_L` / `ACC_R` (s3 -0.098 slow 0C, 7 levels, 17.3 ns: the slot compare, `MX_W`, a DSP multiply, two adders); `OP4.KON` / `KOFF` / `OP4_SCR2.KRS` / `OP4_SCR5.OCT` -> `OP5.EVOL` / `EVOL_RAM_D` (s8 -0.143, s19 +0.009, s5 +0.100, 12 levels) | slot-pipeline registers: two clk_sys or more by the CE schedule | SDC multicycles (below) |
| fast-corner hold into clk_ram request registers (s9 `SCSP MEM_D` -> sdram `sc_din` -0.071, `VDP2 VRAMA_D` -> `v_wd` -0.032; s13 `cdb dr_d` -> ddram `cdram_write_data` -0.206; s7 `cart MEM_A` -> `cart_rcache_addr` -0.200) | registers that take clk_sys data only at the clk_ram edge after a clk_sys edge; the hold check at the coincident edge has no capture behind it | SDC hold exceptions (below) |

No RTL change, so no cycle shifts and no new equivalence bench; the SDC claims have simulation checks (below).

### PLL output counters

The fitter puts the four used counters of the system PLL (`FRACTIONALPLL_X54_Y1_N0`) on any of `PLLOUTPUTCOUNTER_X54_Y0..Y8`.
On Y0..Y3 (global clocks G8..G11) the counter cell plus the route to the clock control block is 2.53 ns (min) / 2.90 ns
(max); on Y4..Y8 (G4..G7) 3.07 / 3.52 ns. A crossing path sees the difference as skew: clk_ram on an upper counter loses
0.55 ns on every clk_ram -> clk_sys setup and every clk_sys -> clk_ram hold, clk_sys on one loses it the other way.

| Seeds | counter[0] / counter[1] | Worst crossing paths |
|---|---|---|
| s3, s8, s9, s13, s15 | both Y0..Y3 | -0.57 (s15) .. +0.24 (s3) |
| s1, s4, s7, s10, s11, s14, s16, s17 | clk_ram on Y5..Y8 | clk_ram -> clk_sys setup -0.15 .. -1.32, clk_sys -> clk_ram hold to -0.88 |
| s5, s12, s19 | clk_sys on Y5..Y7 | clk_sys -> clk_ram setup -0.09 .. -0.54, clk_ram -> clk_sys hold -0.004 |

The qsf locks counter[0] to Y0 and counter[1] to Y2 (seed 3's placement); counter[2] / counter[3] (clk_vid, +12 ns) stay
free. `pll_lite` reconfigures M and K only, so the counter index does not matter to it. A location assignment is only
checked by a fit (`quartus_fit --check_ios` does not place the counters): see the seed 3 fit under Result.

### SCSP multicycles

`CE` (SCSP_CE) pulses are two clk_sys apart or more (the round 6 argument above); CLK_DIV toggles at each CE, CYCLE_NUM
steps at CE & CLK_DIV. When each register changes (all also at RES_N = SYSRES_N, which the SMPC holds low for many clocks):

| Register | Written at |
|---|---|
| `OP4.*`, `SCNT`, `OP4_WD0`, `OP5.*`, `EVOL_RAM_D`, `MONITOR_EG/SGC`, `OP7.*` | SLOT1_CE (CYCLE1_CE, CYCLE_NUM 7) |
| `OP4_WD1` | SLOT0_CE (CYCLE1_CE, CYCLE_NUM 3) |
| `OP4_SCR2/5/6`, `LFO_RAM_4` / `EVOL_RAM_4` output registers | CYCLE0_CE with CYCLE_NUM 4 |
| `SCR_SCR1` output register (`OP4_SCR1`) | every CYCLE0_CE |
| `EFREG_RAM` output register (`EFREG_Q`, SCSPP_DSPC) | CYCLE0_CE with CYCLE_NUM 2 |
| `ACC_L` / `ACC_R` | SLOT1_CE and DSEL, the clk_sys after the CYCLE_NUM 6 CYCLE0_CE |
| `DSEL` | every clk_sys; `SCR_G7` output (`OP7_SCR8`): every CYCLE0_CE |

Every register in the first five rows changes only at CE edges and the OP5 set captures only at CE edges, so two CE edges
apart is two clk_sys or more: `-from` the OP4 set `-to` the OP5 set, setup 2 / hold 1 (this replaces the EVOL_RAM_4 pair
of round 6). For ACC: OP7 (CYCLE_NUM 7) and EFREG_Q (CYCLE_NUM 2) are at least 6 CE steps before the next DSEL edge and
a full slot before the next SLOT1_CE; DSEL and `OP7_SCR8` (reloaded at the CYCLE_NUM 6 CYCLE0_CE, one clk_sys before the
DSEL capture) are single-cycle and stay out of the set. Re-timed on the round 8 fits: worst path into ACC is DSEL or
SCR_G7 q_b, +0.997 (s3) / +1.205 (s8) at slow 0C; into the OP5 set +6.4 (the CE enable path).

Simulation check (`make -C sim/scsp mc-check`, `MC_CHECK` in `tb_top.sv`; the compact build): at every clock it counts
captures of each `-to` set where a register of its `-from` set changed at the clock before, and `-to` changes outside
their enable. 6 seeds, 400 rounds each (4.5 M clocks, 210 k ACC and 105 k OP5 captures per seed, with reset pulses and
hard resets): 0 / 0 / 0. The control set {DSEL, OP7_SCR8}, single-cycle on purpose, is flagged at every DSEL capture
(104 k to 112 k per seed). The golden SCSP for `GOLD` is the main checkout's `ref/Saturn_MiSTer` (the worktree's
submodule is empty).

### Odd-edge request registers

A clk_ram request edge is `x && !x_old` with x a clk_sys signal and x_old its clk_ram copy, so it can only be the clk_ram
edge right after a clk_sys edge ("odd"); at the coincident ("even") edge x_old already equals x. A register written only
at such edges never captures at the even edge, so the default hold check there (launch and latch at the same instant)
has no capture behind it; `-hold -end 1` moves it to the even edge before, which a clk_sys launch cannot reach. The
strobe registers (x itself) stay out of every `-from`, so their hold is still timed and no early capture can happen:

| `-to` | written at | `-from` |
|---|---|---|
| sdram `v_wd`, `v_wbe`, `v_row`, `v_col` | `fc == 0`; `fc` is set to 7 at the odd edge of each sync (`sync && !sync_old`) and counts every edge, so `fc == 0` is seen at odd edges only (from the first sync on) | every clk_sys rising launch (`-rise_from`: a falling launch is at an odd edge) |
| sdram `sc_addr`, `sc_din` | SCSP read / write request edge | SCSPP `MEM_A`, `MEM_D` (strobes `MEM_RD`, `MEM_WE`, `MEM_CS` excluded) |
| ddram `cdram_write_data`, `cdram_write_addr`, `cdram_rcache_addr` | cdram write / read request edge | every `cdb` register but `cdb_dram` `RAM_WE`, `RAM_RD`, `RAM_CS` |
| ddram `cart_rcache_addr`, `cart_write_addr`, `cart_write_data` | cart read / write request edge | CART `MEM_A`, `MEM_DO` (strobes `MEM_RD`, `MEM_WE` excluded) |

Simulation check (`make -C sim/mem mc-check`, `MC_CHECK` in `tb_sdram.sv`, profiles 0 / 1 / 2, 300 us each): 2,300 `fc == 0`
edges and about 1,500 SCSP request edges per run, none at an even edge; `fc == 1` is seen at even edges (2,300), so both
kinds are sampled. tb_sdram still PASSes. The ddram rows follow from the request-edge form alone.

Re-timed on the round 8 fits, the remaining hold paths into these registers are from the x_old registers (+1.9 ns slow,
+0.64 fast 0C on s3 / s8).

### Result

The SDC changes re-timed on the round 8 placements (`sta_r10f` in each fit directory), worst over the four corners,
setup / hold, clk_sys and clk_ram:

| Seed | round 8 | with the SDC |
|---|---|---|
| s3 | -0.098 / +0.112 | **+0.084 / +0.112** |
| s8 | -0.143 / +0.115 | **+0.058 / +0.115** |
| s9 | +0.016 / -0.071 | **+0.016 / +0.105** |
| s13 | -0.045 / -0.206 | -0.045 / +0.023 |
| s5, s19 | -0.164 / +0.055, -0.085 / -0.004 | unchanged (clk_sys counter on Y5..Y7) |
| s1, s7, s14 | -0.54 / -0.88, -1.32 / -0.39, -0.81 / -0.75 | setup unchanged, hold +0.051 / +0.024 / +0.046 |

s3, s8 and s9 close with the SDC alone: every clock, setup / hold / recovery / removal, four corners (lowest +0.016,
s9 clk_ram setup; cram0/1 hold +0.074). Those three have both counters on Y0..Y3; the lock gives every seed that.

Map (`memfix-map`, `quartus_map`): 17,927 ALMs needed before and after (no RTL change).

One fit of `12295c9` with seed 3 (`openfpga-Saturn-worktrees/memfix10-lock-s3`): 18,255 ALMs needed, 1,848 / 1,848 LABs,
0 "Can't pack"; counter[0] / [1] / [2] / [3] on Y0 / Y2 / Y1 / Y3 (the lock applied, the free two also went low).
**Timing closed**: every clock and check at the four corners is positive. Lowest: clk_ram setup +0.003 (slow 0C) / +0.021
(slow 85C), VDP1P `VRAM_A` -> ddram `vdp1vram_rcache_addr` (the VDP1 read-cache hit test, one clk_ram after the clk_sys
launch: round 5's group); clk_sys setup +0.148; hold +0.051 (clk_ram), cram0/1 +0.067 / +0.078.

Left to the fitter (in the seeds with both counters low; RTL changes that would move them shift a cycle):
- clk_ram -> clk_sys read data, ddram cache M10K (`cache0` / `cache2` / `ramh_ram`) -> MSH / SSH `DAT_BUF` / `VEC_BUF`,
  SCU `DMA_*`: s15 -0.571, s8 +0.058. M10K clock-to-out 3.1 ns, then the MEM_DI / CDO / IDI muxes and 4 ns of routing in
  one clk_ram; an output register would land the word one clk_ram later.
- clk_sys -> clk_ram WRAM-H lookup, bus mux -> `ramh_plru` / `ramh_read_busy` / `ramh_alloc`: s13 -0.045, s9 +0.016, s15
  +0.042 (round 7's group).
- clk_ram busy flags -> SCU `DMA_ST` (one LUT for MEM_WAIT_N, then 7 levels of the SCUP2 DMA state logic): s13 +0.061,
  s15 -0.135.
- SH2P `bsc.VEC_BUF` -> `core.PIPE.ID.IR` (clk_sys, 17 levels through the ALU zero flag and the decoder): s3 +0.084,
  s17 -0.161.

`pocket_audio` (`994bb34`): the st[1] gate of the DSP base input costs 31 ALUTs in the entity (139 -> 170) and 25 map ALMs
(17,902 -> 17,927). The packing it prevents is a fitter netlist optimization ("Packed Register / Register Packing / Timing
optimization", `prev_l` duplicated into the DSP AY input); an instance-level `QII_AUTO_PACKED_REGISTERS` would be the
zero-area way, but it is untested (only a fit shows it), so the gate stays.

## PSRAM and SRAM pin timing (branch `psramfix`, 2026-11-03)

The cram clocks were generated clocks on the `p_clk` registers and the SRAM reference was the `e_oe_n` register, so the
clock's route and output buffer (5.6 ns on `cram1_clk`, 5.8 ns on `sram_oe_n` at slow 85C) were missing from every read
check; `p_clk`, `e_oe_n` and the read registers were fabric registers. The clocks are now generated on the ports
(docs/memory.md sections 4 and 5: datasheet values, board assumption, the hold rule of the F-edge pins).

v0.2.4 (`memfix10-lock-s3`) re-timed (`openfpga-Saturn-worktrees/psram-sta/src/fpga/sta_p`, `orig` = release SDC, `new` =
corrected SDC for the release RTL), setup / hold in ns:

| Group | SDC | slow 85C | slow 0C | fast 85C | fast 0C |
|---|---|---|---|---|---|
| cram0 read | release | +2.635 / +5.833 | +2.519 / +5.878 | +5.598 / +3.781 | +5.742 / +3.682 |
| | corrected | **-3.383** / +10.408 | **-3.298** / +10.260 | +2.078 / +6.073 | +2.423 / +5.780 |
| cram1 read | release | +2.152 / +5.090 | +2.110 / +5.165 | +5.319 / +3.472 | +5.491 / +3.429 |
| | corrected | **-4.467** / +10.169 | **-4.318** / +10.079 | +1.287 / +6.210 | +1.705 / +5.934 |
| cram pins (worst chip) | release | +0.763 / +2.044 | +0.841 / +1.933 | +3.075 / +0.217 | +3.232 / +0.067 |
| | corrected | +3.934 / +4.635 | +3.825 / +4.715 | +3.919 / +5.418 | +3.869 / +5.502 |
| SRAM read | release | +4.182 / +3.023 | +4.710 / +6.021 | +8.926 / +2.769 | +9.184 / +1.051 |
| | corrected | **-2.696** / +8.280 | **-1.852** / +10.988 | +4.586 / +5.778 | +5.209 / +3.718 |
| SRAM pins | corrected | +2.327 / +0.180 | +2.217 / +0.330 | +2.257 / +0.981 | +2.144 / +1.126 |

(the release-SDC pin hold of +0.07 was against an edge at the launch instant, which the
F-edge pins never use.) Every other clock and group is unchanged by the SDC.

Changes (`f412b34` and the SDC fix after it): `p_clk` in the I/O cell (`FAST_OUTPUT_REGISTER` on `cram*_clk`), read data
in a free-running I/O cell input register on `cram*_dq` and `sram_dq` (`rdata` / `fb_q` are those registers, valid in the
`rvalid` / `fb_done` cycle as before; the SRAM word is sampled one clk_ram later, at the edge that sets `fb_done`), every
SRAM pin register in the I/O cells. Benches (scratchpad `eqp`, Verilator, every output at every clock, `rdata` / `fb_q`
while `rvalid` / `fb_done`): `tb_eq_psram` 3 seeds x 3 M clk (about 107 k reads, 20 k writes, 905 k words, resets),
`tb_eq_sram` 3 seeds x 3 M clk (409 k reads, 409 k writes, zero-delay SRAM per side); broken copies (`dq_r` sampled at
F edges; `fb_q` from the pins after the sample edge) give 302 k / 136 k mismatches. `make -C sim/mem` passes (psram,
ddram, fb, load, boot); the PSRAM model now checks tCSP 4 ns (fails with 9 ns, as it must).

Map (`psramfix-map`): 17,927 ALMs needed, 17,323 registers, both unchanged. Seed 3 fit: 18,241 ALMs needed, 1,848 /
1,848 LABs, 302 M10K, 0 "Can't pack"; 64 Fast Input Register (16 `cap_p` + 48 `dq_r`), `p_clk` x2 and `e_oe_n` as Fast
Output Register.

| Group (seed 3 fit) | slow 85C | slow 0C | fast 85C | fast 0C |
|---|---|---|---|---|
| cram0 read | +1.024 / +6.694 | +0.995 / +6.723 | +4.187 / +4.462 | +4.359 / +4.302 |
| cram1 read | +0.909 / +6.850 | +0.910 / +6.837 | +4.092 / +4.617 | +4.272 / +4.449 |
| cram pins (worst chip) | +3.436 / +5.677 | +3.453 / +5.700 | +3.716 / +6.028 | +3.705 / +6.044 |
| SRAM read | +15.047 / +3.007 | +15.243 / +2.871 | +17.949 / +0.508 | +18.186 / +0.234 |
| SRAM pins | +1.276 / +1.271 | +1.288 / +1.320 | +1.611 / +1.673 | +1.615 / +1.690 |
| counter[0] clk_sys | **-0.393** / +0.268 | **-0.065** / +0.258 | +4.182 / +0.130 | +4.505 / +0.107 |
| counter[1] clk_ram | **-0.605** / +0.326 | **-0.432** / +0.317 | +4.072 / +0.142 | +4.272 / +0.108 |

Recovery / removal positive. The pin groups close at every corner; seed 3 does not close as a whole: clk_sys is SSH
`bsc.VEC_BUF` -> `core.PIPE.ID.PC` / `IR` (round 9's "left to the fitter" group), clk_ram is SCU `CBUS_A` and MSH / SSH
`BUS_RLS` -> ddram `ramh_read_busy` / `ramh_curr` / `ramh_plru` (round 7's group), both placement noise of the new I/O
packing (v0.2.4 seed 3: +0.084 / +0.003). The fit ran with the first form of the SRAM clock source, which matched two
registers and was ignored (no SRAM constraint during the fit); the numbers above are re-timed with the committed SDC.
To do: the other seeds of round 9 with the committed SDC.

## VDP2P multicycle (branch `integ2`, 2026-11-03)

The SDC had one blanket VDP2 exception, setup 2 / hold 1 `-from *|VDP2|* -to *|VDP2|*`, written for the shrunk VDP2
(docs/vdp2-rewrite.md, step 5: -1.47 ns single-cycle, "clock-enable paths"). It also covered registers that change at
other edges than CE_R, so some one-clock and half-clock paths were timed at two clocks. `MCLK_DIV` toggles every clk_sys
(`SYS_CE_R = MCLK_DIV`, `SYS_CE_F = ~MCLK_DIV`); call the edge that ends a CE_R clock a CE_R edge and the next one a CE_F
edge.

When the VDP2P registers change:

| Registers | Change at | Why |
|---|---|---|
| `DOTCLK_DIV`; everything under `DOT_CE_R`, `DOT_CE_F` (`(DOTCLK_DIV == n) & CE_R`) or `CE_R`: timing, fetch windows, `VRAMA*/B*_A/_RD/_WE`, `VRAMA_D`, the `RA*/RB*_BUF` and `VRAM*_Q` buffers, counters, scroll, rotation (`SUMX/Y` at CE_R & DOTCLK_DIV), dot, priority and colour stages, `REGS.HCNT/VCNT/TVSTAT`, `REG_DO`, `WE_N/DQM/BURST`, the DTAP write pointers | CE_R edges only | the enable is a subset of CE_R; the synchronous `RES_N` branch loads constants |
| CPU-written registers: `REGS.*` (all others), `SCYN_UPD`, `REG_RA`, `REG_RRDY`, `PAL_DO`, `REG_RD`, `PAL_RD`, the register-RAM `vld` flags | CE_F edges | the write needs `!REQ_N`; SCUP2 drives `BREQ_N` low at a CE_R edge for one clk_sys (`BBUS_WRITE16_*`, `BREQ_N <= 1` every clock), so the write lands at the CE_F edge after it (the sim bus model does the same) |
| `A`, the VRAM CPU port (`VRAM_WA/RA/D/WE`, `*_PEND`, `VRAM_RRDY/WRDY/WLOCK`, `DTEN_N_OLD`, `CS_N_OLD`), write FIFO pointers | both | address phase at CE_R, request and burst drain at any clock |
| `USL`, `HA`, `HM` (address unit, one bank per clock), `CSEQ`, `NBG_CH`, `NHF1_HOLD`, `NBG_CDC` (cell capture, c1-c5), `CPN` (parameter ring writes), `C` (colour ratio stage), `DCOL` (follows `BACK_DC` every clock when `DISP` is 0), `HINT`, `VINT` | every clock | no enable |
| RAM port registers: DTAP / `r_*` M10K read address registers, `*_FERAM` falling-edge read registers, MLAB and M10K write ports | every clock (FERAM: every falling edge) | `q <= mem[ra]` without an enable |

A CE_F -> CE_R path has one clk_sys, a CE_R -> every-clock path one, a FERAM read -> rising edge half a clk_sys. The SDC
now takes setup 2 / hold 1 only between registers of the first row (`vdp2_ce_r` in core_constraints.sdc, 2,728 of the
6,141 VDP2 registers in the integ2 netlist; names cut by the `POCKET_CUT_VDP2_*` macros simply match nothing). Upstream
Saturn_MiSTer has no VDP2 exception (Saturn.sdc: `derive_pll_clocks`, ascal and hps_io only).

Simulation check (`make -C sim/vdp2 mc-check`, `MC_CHECK` in `tb_top.sv`, monitor generated by `mc_gen.py` from the SDC
list, so the two cannot drift): at every clock it counts changes of each listed register (297 signals, array elements
expanded) and changes at an edge that is not a CE_R edge, reset edges excluded. 60 seeds x 1.5 M clocks (and 6 more after
the last list change): 0 off-CE_R changes; the control set (`CSEQ`, `CPN`, `USL`, `HA[0]`, `REGS.SCXIN0`, `A`) changes
off CE_R on half its changes. Not covered: block-local variables without a hierarchical name (`VRAMA/B_ALLOW`,
`RES_LATCH`, `RBG_CH`, `DC`, `CC_FST`, `DC_*_LATCH`, `CSEC_PREV*`, `BOKEN_PREV*`, `REG_RD_DELAY`, `EXLAT_N_OLD`,
`VRES_LATCH*`: read off their blocks, all inside CE_R / DOT_CE_* branches), and 30 rotation / RBG0 dot fields that the
scenes never change (`RBG_DC[0]`, `R0DOT*`, `RBG_PIPE[1]`, `PN_PIPE[*][6..7]`, ...). The golden is the main checkout's
`ref/Saturn_MiSTer` (empty submodule in a worktree); seeds 6 and 11 fail the differential compare with and without
`MC_CHECK`.

### STA, old vs new SDC, same netlist

`integ2-s3` fit (seed 3) copied to `openfpga-Saturn-worktrees/integ2-vdp2mc-s3`, `quartus_sta -t sta_vdp2mc.tcl` with the
release SDC (`.old`) and this one (`.new`); outputs in `vdp2mc/`. Worst slack, ns (TNS where negative):

| Clock | Check | SDC | slow 85C | slow 0C | fast 85C | fast 0C |
|---|---|---|---|---|---|---|
| clk_sys (counter[0]) | setup | old | +0.025 | +0.189 | +4.507 | +4.791 |
| | | new | **-13.488** (-3483) | **-13.444** (-3468) | **-1.553** (-80) | **-0.544** (-8.5) |
| | hold | both | +0.258 | +0.159 | +0.062 | -0.001 |
| clk_ram (counter[1]) | setup | both | -1.566 | -1.430 | +3.834 | +4.284 |
| | hold | both | +0.317 | +0.310 | +0.101 | +0.083 |

Every other clock (dram/sram/cram pins, clk_74a, bridge_spiclk, clk_vid) is identical; the clk_ram setup failure and the
fast 0C clk_sys hold of -0.001 are not VDP2 paths and do not change. Old SDC: no failing VDP2 -> VDP2 path at any corner.
New SDC, VDP2 -> VDP2 failing source/destination pairs (slow 85C 5,023, slow 0C 4,877, fast 85C 338, fast 0C 81):

| Group | slow 85C worst (pairs) | Example | Real? |
|---|---|---|---|
| A1 cycle-pattern FERAM (`cy_a0..cy_b1`) read -> address unit, slot logic, VRAM request registers, `tap2` | -13.488 (1,098), the only group failing at fast corners | `cy_b0` -> `VCPB1` -> `NBG_B1VA` -> `UO` -> `NBG_CH_CNT`, 20.1 ns after the falling edge | yes: `CYT` changes at DOT_CE_R, the read is at the next falling edge and `HA[0]` takes `UO` at the following rising edge (USEL 0), every dot |
| B CPU registers (`REGS.*`, `vld`) -> CE_R logic | -3.705 (3,005) | `REGS.PRISC` -> `DOT_SEC.CCRT`, `RAMCTL.RDBSA0` -> `NBG_CH_CNT` | yes, for a write mid-frame (CE_F -> CE_R) |
| C CE_R registers -> every-clock registers | -3.594 (319) | `HRES`, `CELLX`, `NMOSY` -> `HA` / `HM` | yes (`HA[0]` captures the clock after DOT_CE_R) |
| D M10K read registers (DTAP, `r_spx/y`) | -4.626 (421) | `tap3` -> `NBG_CDC`; `whit33` -> `DOT_SEC`; `tap4` -> `NBG_CH_CNT` | `-> NBG_CDC` yes (written from c1); `-> CE_R registers` no: a DTAP read address `wpn - K` repeats at the clock after EN, so the output changes at CE_R edges only |
| A2 other FERAM reads | -9.115 (68) | `rp_k` -> `RES_LATCH` (32x32 product) | no for `rp_*`: address (`DOTCLK_DIV`, `RP_POS`, `HPOS_PIPE`) and writes (DOT_CE_R) are CE_R-only, the read is used at the next CE_R edge, 1.5 clk_sys |
| E `ONE` -> DSP adders | -4.216 (109) | `ONE` -> `NBG_CH_CNT` | no: constant 1 after reset |
| A3 into a FERAM read address | -1.850 (3) | `tap2` (M10K output) -> `rp_a` address | yes, half clk_sys (the FERAM rule wants a register address) |

So the blanket exception hid paths that do not meet timing on hardware at any corner (A1: about 20 ns of logic in a
half period; under the old SDC it had 1.5 periods), plus B, C and `tap3 -> NBG_CDC`. No exception was added for them.
What the RTL needs:
- A1: the cycle-pattern nibbles for the next dot in flip-flops loaded at DOT_CE_R (`CELLX_N` is known a clock before),
  or the four `cy_*` RAMs back in MLAB / flip-flops (about 64 bits) with the `VCP*` -> `UO` -> `HA` logic shortened to one
  clock; `nmp`/`rmp` read from the same chain. A CPU write would then reach the unit at the next dot (deviation 2 of
  docs/vdp2.md).
- B: take CPU register writes at a CE_R edge (register the write strobe and data one clock): REGS becomes CE_R-only and
  joins the set; the register write lands one clk_sys later, to be re-checked with `make -C sim vdp2`.
- C and `tap3 -> NBG_CDC`: one clock between the dot event and the first address-unit / capture visit, or fewer levels
  from `CELLX`/`HRES`/BG3 to `UO` and the lane network.
Provable relaxations left out on purpose (each needs its own exception and check): DTAP read ports -> CE_R registers,
`-fall_from` the `rp_*` FERAMs to CE_R registers, `ONE` as a false path; they would clear D (except `NBG_CDC`), A2 and E.
The RTL changes and the proved relaxations are in the next section.

## VDP2P timing fixed in RTL (branch `vdp2fix`, 2026-11-03)

The groups of the STA table above, fixed in the VDP2P sources; the SDC exception stays the CE_R-only one, widened only by
registers that now change at CE_R edges and by two read-port classes proved below. Current register classes:

| Registers | Change at |
|---|---|
| everything of the old first row, plus `REGS.*` (all fields), `SCYN_UPD`, the register-RAM `vld` flags, `VAD`, `VCPN`, `VCPQ`, `CYA_N2`, `NYOFS`, `RPPQ`, `ONE`, `CRCT_Q`, `HM3` (`vdp2_ce_r`) | CE_R edges only |
| M10K reads `tap2`, `tap3`, `tap4`, `whit33` (`VDP2P_DTAP`, read only at its EN) and `r_d`, `r_p`, `r_sp` (`VDP2P_SDPR`, read at CE_R) (`vdp2_ce_r_ram`) | CE_R edges only |
| falling-edge reads `rp_a`, `rp_b`, `rp_m`, `rp_n`, `rp_k`, `rp_d0`, `rp_d1`, `rp_fr`, `rp_ff` (`vdp2_fe_ce_r`) | the falling edge after a CE_R edge |
| `RW_P`, `RW_A`, `RW_D` (CPU register write strobe), `REG_RA`, `REG_RRDY`, `PAL_DO`, `REG_RD`, `PAL_RD` | CE_F edges |
| CPU VRAM port, `USL`, `USEL`, `HA`, `HM`, `CSEQ`, `P_*` (cell capture selection), `NBG_CH`, `NBG_CDC`, `CPN`, `C`, `DCOL`, other RAM ports | every clock |

SDC (core_constraints.sdc): setup 2 / hold 1 from `vdp2_ce_r` and `vdp2_ce_r_ram` to `vdp2_ce_r`; setup 2 / hold 1 from
`vdp2_fe_ce_r` (falling launch, so 1.5 clk_sys) to `vdp2_ce_r`. Nothing else in VDP2 has an exception.

What changed, per group:

- **A1** (cycle-pattern FERAM -> address unit, half a clk_sys). The bank access decode of a dot (`VA_PIPE[0]` access
  flags, 57 bits, `VADec_t`) is a register `VAD`, loaded at DOT_CE_R from the next dot's inputs: the next cycle-pattern
  nibbles `VCPN` (word address `CYA_N2 = CYTN[2]` loaded at DOT_CE_F, nibbles read from the falling-edge RAM at the
  CE_R edge before DOT_CE_R, a half-clk_sys path of two LUT levels), the next values of the fetch windows
  (`NPN_FETCH_N` ... `NOACCESS_N`, the D inputs of those registers) and the registers. `VCPQ` (the current dot's
  nibbles, for `NxPN_CYC_BY_T`) is `VCPN` at DOT_CE_R. The address unit now starts from flip-flops.
- **C** (CE_R registers -> `HA`/`HM` in one clk_sys). The decode (`CELLX`, `HRES`, `RDBS*`, `BGON`, `SCRCTL`, fetch
  windows) is out of the path with `VAD`; `NYOFS` (NMOSY + NVCSY of layers 0/1, a DSP adder on the path) is a register
  loaded at DOT_CE_R with the sum of both next values (`NMOSY_D`, `NVCSY_D`, which also feed the two registers).
  The bank select `USEL` is a register (its value one clock ahead: CE_R and CE_F alternate and DOTCLK_DIV changes at
  CE_R edges), so `MCLK_DIV`/`DOTCLK_DIV` no longer reach the unit. The DOT_CE_R users of the bank matches (fetch
  counters, `NBG_PN_EN`, the tap and RBG pipeline selects) take bank 3 from `HM3`, the bank 3 result of DOT_CE_F (same
  inputs), instead of the unit's live output; `E_PNEN_F` (live) remains for `NBG_PN_FETCH` at DOT_CE_F.
- **B** (CPU registers, CE_F -> CE_R). A register write is registered at its request (`RW_P`, `RW_A`, `RW_D`, at the
  CE_F edge) and applied at the next CE_R edge (`RW_E = RW_P & CE_R`); the cycle-pattern and map RAM writes and
  `SCYN_UPD` use the same strobe. `REGS` joins `vdp2_ce_r`. Deviation: the write is seen one clk_sys later than in the
  golden (docs/vdp2.md, deviation 7); the harness gives the golden copy the same timing (`sim/vdp2/regwr_patch.py`).
- **D** (`tap3 -> NBG_CDC`). A capture visit takes two clocks: the selection (array, layer, count, flips, write kinds)
  is registered in `P_*` at CSEQ 1-4, the lanes are written from it at CSEQ 2-5; the character words `NBG_CH` load one
  clock later than before (CSEQ 3-6), still after their last reader; the cell boundary copy at the next DOT_CE_R reads
  the finished arrays.
- **A3** (`tap2 -> rp_a/rp_m/rp_n` read address, half a clk_sys). The tables' falling-edge read addresses come from
  `RPPQ`, RP_POS delayed two events in flip-flops (equal to `VA2.RP_POS`), not from the tap RAM.
- **E** (`ONE`). `ONE` is set at the first CE_R edge after reset (`if (CE_R) ONE <= 1`), so it is a CE_R register;
  with `NYOFS` registered every DADD output feeds a CE_R register only.
- **D, DTAP / SDPR -> CE_R registers.** `VDP2P_DTAP` reads its M10K only at EN (same value: the read address
  `wpn - K` is constant between EN edges and that word is not written until it is read), so the M10K output changes at
  EN edges only (EN is DOT_CE_R or DOT_CE_R | DOT_CE_F). The rotation per-table words (`r_dx` ... `r_spy` then, now `r_d`, `r_p`, `r_sp`; word
  `DOTCLK_DIV[1]`) used to be read every clock from an address that changes at CE_R edges, so their output changed
  one clock later, at a CE_F edge, and fed `RES_LATCH` in one clk_sys (-1.0 ns, a real path the multicycle table missed).
  `VDP2P_SDPR` reads at CE_R with the address of the next slot (`DIV_N[1]`), so the word is there from the CE_R edge
  that starts the slot; the value a slot consumes is unchanged except where the read and a write of the same word
  share an edge (the ACC write at the end of slots 0 and 2, the RPST_W write at DOT_CE_R): the first is read only in
  slots 1 and 3, where the multiplier takes the other RAM, the second only in dots without RBG_CALC, where `RES_LATCH`
  is not used. The simulation model returns the complement of the word in that case (M10K mixed-port
  read-during-write is undefined) and the differential sim still matches.
- **A2, `rp_*` -> CE_R registers.** Read addresses `RPPQ` (DOT_CE_R), `DOTCLK_DIV` (CE_R), `HPOS_PIPE` (CE_R) or
  constant, writes at DOT_CE_R: the falling-edge read output changes only at the falling edge after a CE_R edge and is
  captured at a CE_R edge, 1.5 clk_sys later or more. Same rule as the SH-2 FERAMs.
- **Write FIFO -> `VRAM_WE` / `VRAM_D`** (half a clk_sys, -0.36, not listed in the table): the FIFO stores the lane
  one-hot (`FIFO_L`, 40 bits) instead of `A[2:1]`, and the four lanes are written in parallel.
- **`CT_CRAM_A` race** (simulation only): `CT_CRAM_A` read `RBG_PIPE[0].RxCRCT`, a blocking variable of another block.
  Quartus gives it the registered value (the previous DOT_CE_R); Verilator gave the rewritten copy the new one, the golden
  the old one, so seeds 6, 11 and 36 mismatched on CRAM colours. `CRCT_Q` holds the previous DOT_CE_R value
  explicitly (no hardware change).

Simulation (`make -C sim/vdp2`, golden = main checkout `ref/Saturn_MiSTer`):
- differential: 60 seeds match; 300 seeds: 297 match, 61 / 149 / 165 fail the VRAM-contents check against unpatched
  upstream (1-3 halfwords of a CPU write missing in REF and DUT alike, both with the lane drain); they fail the same way
  at fcbf72d, so they are not from this branch (open)
- `mc-check` (monitor generated from all three SDC lists by `mc_gen.py`; the falling-edge reads are sampled at the
  rising edge and must have changed after a CE_R edge): 8 seeds x 1.5 M clocks, 337 signals, about 10 M changes per
  seed, 0 outside a CE_R edge; the control set (`CSEQ`, `CPN`, `USL`, `HA[0]`, `RW_D`, `A`) changes off CE_R on half its
  changes
- the build's cut set (`CUT="EXTCC SHADOW BACKLINE SPECIAL LNCOL ZOOM RPARAMB MOSAIC SPRWIN LINEWIN"`): 40 seeds match
- sdram_pocket (`slot` register, below): `make -C sim/mem all` passes; `sim/sndram` passes with `NOCHK=1` (the default
  run expects the sdram self-check, which is compiled out under `POCKET_NEVER`, so it reports FAIL at fcbf72d too)
- seeds 6, 11, 36, 45 (failed before this branch): 6, 11, 36 were the `CT_CRAM_A` race above, from 03d04ab on (the lane
  drain changed the stimulus), 36 from earlier; not a hardware bug. 45 is the soft-reset seed: `CT_FETCH` survives
  RES_N in both copies, so the coefficient decode runs in the blanking of the first line after a soft reset, and the
  reprogramming writes RAMCTL there; with `VAD` that write is seen at the next dot (deviation 2), so the harness waits one
  line after the soft reset before those writes.

Also in this branch, clk_ram: `sdram_pocket` decoded `slot = fc + 1` through an adder before the command muxes
(`fc -> q_a` -1.566, `fc -> sc_addr / sc_rd_p`, seed 3); `slot` is now its own register (same value, the frame counter
sync sets it to 8), so the decode starts from flip-flops.

Map (`quartus_map`, area estimate): 17,871 ALMs needed (integ2 17,925). Fit, seed 3 (`openfpga-Saturn-worktrees/vdp2fix-s3b`):
18,244 / 18,480 ALMs, 1,848 / 1,848 LABs, 303 / 308 M10K (+1: the write FIFO is 40 bits wide), 46 DSP (integ2-s3:
18,203 ALMs, 302 M10K). **Timing closed at all four corners**, every clock, setup / hold / recovery / removal:

| | slow 85C | slow 0C | fast 85C | fast 0C |
|---|---|---|---|---|
| clk_sys setup (old SDC / fcbf72d SDC on the integ2-s3 netlist) | +0.025 / -13.488 | +0.189 / -13.444 | +4.507 / -1.553 | +4.791 / -0.544 |
| clk_sys setup, this branch | **+0.466** | **+0.352** | **+4.381** | **+4.672** |
| clk_sys hold | +0.286 | +0.275 | +0.086 | +0.023 |
| clk_ram setup (integ2-s3: -1.566 / -1.430 slow) | **+0.153** | **+0.264** | +4.054 | +4.258 |
| clk_ram hold | +0.334 | +0.318 | +0.102 | +0.032 |

Worst VDP2 -> VDP2 setup (slow 85C) per group, before (fcbf72d SDC, integ2-s3) and after:

| Group | before | after (worst path of the group) |
|---|---|---|
| A1 cycle pattern -> unit | -13.488 | +3.501 (`cy_b0` -> `VCPN`); unit from `VAD`: +1.826 (`VAD` -> `HM[0]`) |
| B CPU registers -> CE_R logic | -3.705 | +14.274 (`REGS` -> `DOT_SEC`); `REGS` -> every-clock: +3.827 |
| C CE_R registers -> `HA`/`HM` | -3.594 | +2.718 (`NYOFS` -> `HA`); any -> `HA`/`HM` +1.826 |
| D `tap3` -> `NBG_CDC` | -4.626 | +6.764 (`tap3` -> `P_E4L`); any -> `NBG_CDC` +5.647 |
| D DTAP -> CE_R registers | -4.387 | +13.989 (`whit33` -> `DOT_SEC`) |
| A3 `tap2` -> `rp_a` address | -1.850 | +4.109 (`RPPQ` -> `rp_n` address) |
| A2 `rp_*` -> CE_R | -9.115 | +1.767 (`rp_a` -> `r_xyst` write data, single cycle) |
| E `ONE` | -4.216 | +14.389 |
| rotation words, write FIFO | -1.003, -0.355 | +8.383, +2.321 |
| VDP2 overall | -13.488 | **+1.767** |

A first fit of the same branch without the registered `USEL` / `HM3` (`vdp2fix-s3a`, 18,146 ALMs) failed: VDP2 -0.353
(`USL`/`MCLK_DIV` -> `NBG_CH_CNT` through the unit's live bank 3 match) and -0.05 (`DOTCLK_DIV` -> `HA`), and the
placement left SH-2 paths at -3.07 (SSH `cache.IBADDR` -> `core.RD_SAVE`, +1.23 in integ2-s3), -2.05 (MSH `bsc.VEC_BUF`
-> `core.PIPE.ID.IR`), VDP1 -0.66, SCU -0.57, ddram -0.21. Those non-VDP2 groups pass in `vdp2fix-s3b` with no change
to them: they are placement-dependent at this utilization.

## v0.2.19 build (2026-11-06)

All ten VDP2 effects back (no `POCKET_CUT_VDP2_*` macro), with the VDP2P structural rewrite (`docs/vdp2-rewrite.md`
section 12) and the v0.2.19 fixes (SRAM timing, lazy frame-buffer erase, CD data port, SCU DSP cadence, backup RAM,
audio glue). Map: 17,781 ALMs needed. Same map, fitted at several seeds:

| Seed | ALMs needed | LABs | Worst setup | Worst hold |
|---|---|---|---|---|
| 4 | 18,136 | 1,848 / 1,848 | -0.174 (MSH `bsc.A` -> `ramh_din`, counter[1]) | +0.059 |
| 4, fitter physical synthesis | | 1,865 / 1,848: no fit | | |
| 1 | 18,167 | 1,848 / 1,848 | -0.625 | +0.046 |
| 2 | 18,146 | 1,843 / 1,848 | -0.474 | -0.011 |
| 3 | 18,155 | 1,848 / 1,848 | -0.252 | +0.119 |
| **5 (release)** | **18,127** | **1,847 / 1,848** | **+0.062** (slow 85C, counter[1]) | **+0.071** |

The failing groups at the other seeds are outside the VDP2: MSH -> WRAM-H write data, VDP1 frame-buffer `sr_a`, SSH
`SLV_BUS_RLS` -> ddram. They move with the placement, as in the earlier rounds.

## v0.1.4 timing (2026-11-11)

v0.1.3 with the master SH-2 interval timer back (`POCKET_SH2_WDT_LITE`, slave WDT cut: `docs/cuts.md`). The lite WDT
entity is 25.6 ALMs and shares the SH7604P `CLK*_CE` prescaler.

First map (`1f61555`), 30 seeds: 20 need 1,849 LABs (of 1,848), 10 fit, none closes. Seed 8: 18,227 ALMs needed,
1,848 / 1,848 LABs, setup -0.147. The worst groups, by seed:

| Group | Worst slack (seed) |
|---|---|
| VDP1 `VRAM_A` -> ddram `vdp1vram_rcache_blen` / `_addr` / `read_busy` | -0.333 (s20), -0.264 (s25), -0.112 (s30) |
| MSH `bsc.MST_BUS_RLS` / `A` -> ddram `ramh_read_busy` / `ramh_alloc` / `ramh_plru` (counter[0] -> counter[1]) | -0.147 (s8) |
| SSH `bsc.WE_N` -> `ramh_din` (the MiSTer `dezaemon2_hack` compare) | -0.118 (s30) |
| VDP2 `VTIM` -> frame buffer `sr_a` | -0.074 (s8) |

The VDP1 group runs through the lower bound of the VRAM burst hit test (`vdp1vram_addr >= vdp1vram_rcache_addr`), which
the map builds as a cascade of seven LUTs on the `dataf` inputs, not as a carry chain. Both bounds are now kept 20 bit
subtractions whose sign bit gives the compare (`ddram_pocket.sv`, `vdp1vram_d_start` / `vdp1vram_d_end`); they map to
carry chains. `sim/mem` (`make ddram`) passes with no data errors.

The WRAM-H lookup stays single cycle: the SCU's CBUS DMA read is a one-clk_sys `CBUS_RD` pulse that samples
`ECWAIT_N_FF` on the next clk_sys, so the cache must raise busy at the first clk_ram edge on a miss.

Second map (`a55347f`, 17,912 ALMs estimated), seeds 30, 8, 25, 20, 12, 1 to 6 in that order:

| Seed | ALMs needed | LABs | Worst setup | Worst hold |
|---|---|---|---|---|
| 8 | 18,210 | 1,847 / 1,848 | -0.083 (slow 85C, counter[1]) | +0.072 |
| 6 | 18,237 | 1,848 / 1,848 | +0.097 (slow 85C, counter[0]) | +0.118 |
| 30, 25, 20, 12, 1 to 5 | 18,215 .. 18,276 | 1,849: no fit | | |

Third map (`0b99cde`: the CD FIFOs' one-clock hold of a just-written entry, `docs/cdb-hle.md` "Data path"; 17,915 ALMs
estimated), seeds 6, 8, 30, 25, 20, 12, 1, 2, 3:

| Seed | ALMs needed | LABs | Worst setup | Worst hold |
|---|---|---|---|---|
| 30 | 18,198 | 1,848 / 1,848 | -0.575 (slow 85C) | +0.060 |
| 25 | 18,235 | 1,848 / 1,848 | -0.364 (slow 85C) | +0.030 |
| 1 | 18,210 | 1,848 / 1,848 | -0.085 (slow 85C) | +0.037 |
| 3 | 18,187 | 1,847 / 1,848 | +0.150 (slow 85C, counter[1]) | +0.083 |
| 6, 8, 20, 12, 2 | 18,229 .. 18,314 | 1,849: no fit | | |

Fourth map (`d9fbc98`: the CD drive keeps two sectors in flight, `docs/cdb-hle.md` "Drive pace"; 17,894 ALMs
estimated), seeds 3, 1, 6, 8, 25, 30 in that order:

| Seed | ALMs needed | LABs | Worst setup | Worst hold |
|---|---|---|---|---|
| 3 | 18,219 | 1,848 / 1,848 | -0.240 (slow 85C, counter[1]) | +0.066 |
| 1 | 18,215 | 1,848 / 1,848 | -0.288 (slow 85C, counter[1]) | +0.040 |
| 6 | 18,188 | 1,848 / 1,848 | -0.799 (slow 85C, counter[1]) | -0.014 |
| 8 | 18,219 | 1,848 / 1,848 | -0.452 (slow 85C, counter[1]) | +0.043 |
| 25 | 18,194 | 1,848 / 1,848 | -0.133 (slow 85C, counter[1]) | +0.063 |
| 30 | 18,190 | 1,847 / 1,848 | +0.283 (slow 85C, counter[1]) | +0.005 (fast 0C, clk_74a) |

Fifth map (`20d1fc7`: CD ring write and read ahead of VDP1 on the PSRAM1 chip B arbiter, `docs/memory.md` section 5;
17,880 ALMs estimated), seeds 30, 3 in that order:

| Seed | ALMs needed | LABs | Worst setup | Worst hold |
|---|---|---|---|---|
| 30 | 18,217 | 1,848 / 1,848 | -0.528 (slow 85C, counter[1]) | +0.042 |
| **3 (release)** | **18,185** | **1,847 / 1,848** | **+0.008** (slow 85C, counter[1]) | **+0.120** (fast 0C, counter[0]) |

## v0.1.5 timing (2026-11-13)

v0.1.4 with the SCU request address copies in SCSPP (`SCU_RA` / `SCU_WA`, docs/scsp-rewrite.md section 3a). One map,
three seeds (`raetro/quartus:21.1`, area profile):

| Seed | ALMs needed | LABs | Worst setup | Worst hold |
|---|---|---|---|---|
| 1 | 18,200 | 1,848 / 1,848 | -0.041 (slow 85C, counter[1]) | +0.086 |
| 2 | 18,176 | 1,847 / 1,848 | -0.116 (slow 85C, counter[1]) | +0.063 |
| **3 (release)** | **18,252** | **1,848 / 1,848** | **+0.265** (slow 0C, counter[0]) | **+0.006** (fast 0C, counter[1]) |

Seed 3 meets setup, hold, recovery and removal at every corner; its hold margin on counter[1] is the smallest of the
releases so far.
