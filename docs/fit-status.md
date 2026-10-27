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
- The firmware's MMIO read mux of `cdb_hle` (199 LUTs) and `pll_lite`'s 16 bit write-data mux (55 LUTs).

Observation (not changed): `rtc_valid` of `core_bridge_cmd` is a level that stays high after the first RTC command, while
`saturn_pocket` treats it as a pulse (`rtc_dly <= 2'b01` on every clock), so `rtc_tog` never toggles and the SMPC never gets
the Pocket's time through `rtc_load`. An edge detector on `rtc_valid` would fix it.

