# How openfpga-PlayStation made PSX_MiSTer fit the Pocket, and what Saturn can take from it

Analysis only. No code was changed. Written 2026-10-21.

## 0. Sources, license, and what the evidence can and cannot show

### 0.1 What was read

| Short name | Path | Notes |
|---|---|---|
| `PSX:` | `/Users/adelvecchio/Documents/workspace/_ref/openfpga-PlayStation` | Shallow clone, 1 commit. A full clone is at `_ref/openfpga-PlayStation-study` (same tree, 32 commits). |
| `REL:` | `/Users/adelvecchio/Documents/workspace/_ref/psx-pocket-release055/src/GuardianSoul.PlayStation_0.5.5_2026-10-19_source/project` | The 0.5.5 release source archive (`gh release download v0.5.5`). It is the exact Quartus project of the shipped bitstream: `apf_top.qsf`, `pocket.sdc`, the patched copies of upstream files. No fit or map reports. |
| `UP:` | `/Users/adelvecchio/Documents/workspace/PSX_MiSTer` | Upstream at `cd17b5a` (the version the Pocket core pins), plus the earlier `docs/pocket/FEASIBILITY.md`. |
| `SAT:` | `/Users/adelvecchio/Documents/workspace/Saturn_MiSTer` | Includes `sizing/output_files_saturn_full/saturn_full.map.rpt`, a Quartus 21.1 synthesis run for the 5CEBA4. |

Evidence grading used below:

- **[E]** evidence: read in a file I cite (path:line).
- **[E-num]** evidence with a number attached.
- **[P]** projection: my reasoning or arithmetic, not backed by a measurement in these sources.

### 0.2 License of openfpga-PlayStation

- The core as a whole and every bitstream: **GNU GPL v2** (`PSX:LICENSE`, `PSX:THIRD_PARTY_NOTICES.md:3-5`, `PSX:README.md:198-200`).
- Files written for the project are **also MIT** ("Copyright (c) 2026 PSX Pocket contributors", `PSX:licenses/MIT.txt`) unless a header says otherwise. Examples: `rtl/memory/psx_vram_psram.sv`, `rtl/memory/psx_sdram_ctrl.sv`, `rtl/memory/psx_m10k_sdp.vhd`, `rtl/memory/psx_wfifo_m10k.vhd`, `rtl/pocket/psx_cue_mount.sv`, `rtl/pocket/joypad_pad_table.vhd`, and the `scripts/prepare_*.py` patchers.
- The upstream-derived parts keep their own terms. PSX_MiSTer is GPL-2.0. The Laxer3a GTE is GPL-2.0 or a commercial license (`THIRD_PARTY_NOTICES.md:25`). The patched VHDL that the scripts generate is a derivative under the upstream license (`THIRD_PARTY_NOTICES.md:12-13`).
- The APF framework files are under the Analogue APF license; where it conflicts with the GPL, the GPL prevails (`THIRD_PARTY_NOTICES.md:29`).
- A clean-room SDRAM controller exists because MiSTer's `sdram.sv` is GPL-3.0-or-later and cannot share a bitstream with the GPL-2.0-only GTE (`PSX:rtl/memory/psx_sdram_ctrl.sv:5-7`).
- Consequence for openfpga-Saturn (whose `LICENSE` is GPLv3): the techniques are free to reuse. The MIT-licensed modules can be copied with their notice. The GPL-2.0-only derivatives (patched PSX_MiSTer VHDL, Laxer GTE) cannot be merged into a GPLv3 combined work. None of those is needed for Saturn. This is not legal advice. I did not find a license file in the local `Saturn_MiSTer` clone; check upstream before copying anything across.
- The README says the HDL, scripts and docs were largely written by AI assistants (Codex and Claude), checked by simulation against upstream and by hardware tests (`README.md:177-183`). Treat unverified claims in its comments with that in mind.

### 0.3 Limits of the evidence (important)

1. **The public history cannot answer "how much did each commit save".** The 32 commits are one "Initial public source" commit (590 files, 64,296 lines) followed by release and game-list commits. The longer design notes the scripts cite (`docs/pocket-gte-mac-ram.md`, `docs/clean-room-memory.md`, `docs/overnight-decisions.md`, `docs/pocket-vram-full-rate.md`) are not in the repository.
2. **No fit report is committed**, and the only whole-design number is the LAB count in script comments. Per-change savings exist only as scattered comments (table in section 2.4). Where I give a saving as a range it is a projection.
3. **The device number that matters is LABs, not ALMs.** See section 1.

---

## 1. What "it fits" means: 1,847 of 1,848 LABs

The 5CEBA4 has 18,480 ALMs, which is 1,848 LABs of 10 ALMs. The PSX project's fit metric is the fitter's LAB count:

- `Total LABs: partially or completely used ; N / 1,848` is parsed in `PSX:scripts/run_pocket_seed_sweep.py:127-129`, `fit_cpu_tag_trial.py:64`, `measure_pocket_seeds.py:103-105`.
- The target is **1,663 LABs (90%)**: `run_pocket_seed_sweep.py:88,129` (`target_LABs=1663`, `deficit_to_1663`), `prepare_pocket_sdram_only.py:243`, `record_pocket_measurements.py:68-69`.
- The shipped build sits at **1,847 LABs** ("lets --disc-swap fit at 1,847 LABs", `prepare_pocket_early.py:319`). A rejected tweak "regresses 1847 -> 1848" (`prepare_video_368_budget.py:5`).
- Earlier milestones: a "1,910-LAB candidate" with every area variant selected (`prepare_full_pocket.py:22,303`, i.e. 103% of the device, a failed fit) and "the older 1860-LAB fit" (`prepare_pocket_sdram_only.py:206`).

Two consequences:

- `docs/pocket-platform.md` (section 1.3) converts 1,847 LABs into "about 18,470 ALMs". That is an upper bound only. A LAB counts as used when any ALM in it is used, so the true ALM count is lower. The ALM total of the release is **not published** in anything I could read. [P] A fit that is LAB-limited at 99.9% usually holds roughly 85-95% of its ALMs.
- The fitter reports the LAB requirement even when the design does not fit ("Error (170012): Fitter requires N LABs ... only 1848", `record_pocket_measurements.py:59-60`). The project uses this to measure over-capacity configurations, for example the save-state delta. Saturn can use the same trick to rank candidate cuts without needing a successful fit.

---

## 2. Q1: which blocks were removed, simplified, rewritten or shared

### 2.1 The overall approach: patch, do not rewrite

The core keeps PSX_MiSTer's CPU, GPU, SPU, MDEC, CD, DMA, timers, pads and card RTL. About 170 `scripts/prepare_*.py` programs rewrite the upstream VHDL at build time (anchor-checked text transforms: "an anchor that moved is an error, never a silent skip", `prepare_save_states.py:14-15`), most of them labelled "cycle-identical" and each with a lockstep simulation (`Makefile` `test-*` targets). The release source tree shows which patched files are really compiled (`REL:apf_top.qsf`, directories `gpu-recip/`, `dma-m10k/`, `dualshock-fit/spu.vhd`, `cpu-execute-share/`, `divider-bank/`, `gte-mac-ram/`, `memorymux-fifo-ram/`, `cd-xa-ring-norw/`, `dpram-sdp/`, `spu-cache-slim/`, `release-init/`, `psx/psx_top/gte-adapter` + `gte-multicycle`).

Many experiments in `scripts/` were not selected for the release (`prepare_cpu_regfile_ram.py` "no default change", `prepare_native_divider_dsp.py` "No production selection", `prepare_spu_fir_dsp.py`, `prepare_spu_gaussian_mac.py`, `prepare_pgxp*.py` "experimental"). I only credit a technique as shipped when I found it in `REL:`.

**What was not cut.** The release plays FMV and CD music (`README.md:6-8`), so MDEC, XA-ADPCM, SPU reverb and the CD model are all still in. `REVERBOFF => '0'`, `SPUon => '1'` in `REL:psx_mister_psx_top_resource.vhd:334-338`. LibCrypt is kept (the plugin and `.sbi` flow). None of the "amputation list" in `UP:docs/pocket/FEASIBILITY.md` (drop MDEC, XA, CD timing model, analog, libcrypt) was used. The only option from that list that went was the second memory card and non-digital controller devices.

### 2.2 Block by block

| Block | Upstream -> Pocket | Evidence | Saving [E-num] or note | Shipped in 0.5.5 |
|---|---|---|---|---|
| **GTE** | MiSTer's `gte.vhd` (1,782 lines + `gte_mac0/mac123/UNRDivide`) replaced by **Laxer3a's microcoded PS-GTE** (`GTEEngine.sv`, microcode ROM in block RAM, three parallel `GTESelPath` units) behind a 39-line adapter. The engine runs on `clk2x` with a clock enable on alternate edges, so it is effectively a 1x engine with a 2-cycle budget. | `PSX:rtl/gte/laxer_mister_adapter.sv:15-27`; `REL:psx/psx_top/gte-adapter/GTEMicroCode.sv:36-41` (`microCodeROM[255:0]`, registered read); `REL:pocket.sdc:14-16` | Size delta not recorded in the repo. [P] This is the single biggest swap, replacing a block measured at 4,200 ALMs stripped in `UP:FEASIBILITY.md:37`. | yes |
| GTE register/table storage | Matrix, vector, translation tables (`matRam1-3`, `addRam`, `vecRam1-3`), the MAC register bank and CFC2/MFC2 shadows moved from flip-flops/MLAB into M10K read on the falling `clk2x` edge | `REL:gte-mac-ram/GTEComputePath.sv:38-40,107,140-142` all `ramstyle = "M10K, no_rw_check"`; `PSX:scripts/prepare_gte_m10k.py:5` | **64 ALMs** for the three table groups; CFC2/MFC2 shadows ~4 LABs (`prepare_gte_shadow_m10k.py:6`) | yes (mac-ram, tables); shadows via `gte-shadow-m10k` unverified |
| **GPU divisions** | Upstream has six 46-clock restoring dividers (45-bit/25-bit). Replaced by **one reciprocal of the shared divisor plus a pipelined multiply with one correction step**, bit-exact; three small 11-bit dividers remain | `PSX:scripts/prepare_gpu_recip.py:3-14`; `REL:gpu-recip/gpu_poly.vhd:45-47,218`; `rtl/pocket/psx_gpu_recip_unit.vhd` | Not quantified; removes ~3 of 6 wide dividers and the 45-bit divider datapaths | yes |
| GPU polygon setup | Vertex/colour/texture state from flip-flops into 3 small RAMs, loaded serially (+3 gpu clocks/triangle); `dy` gradients 160 FFs -> RAM; vertex sort by re-reading RAM (+4 clocks/triangle) | `prepare_gpu_vertex_ram.py:1-9`; `prepare_gpu_dy_ram.py:1-2`; `prepare_gpu_sort_reread.py:1-10`; `REL:gpu-recip/gpu_poly.vhd:196-201,246` | sort-reread avoids "per-field multiplexers about **250 ALUTs** larger" (`prepare_gpu_sort_reread.py:7`) | yes (vertex RAM, dy RAM, sort-reread flag per recipe) |
| GPU adders and multipliers | One adder per colour channel shared across three exclusive states; subtract after the mux instead of 14 subtractors + 4 10:1 muxes; 32x32 multiply narrowed to 32x13 where the operand is provably 13-bit; multiplier retimed behind its operand registers | `prepare_gpu_poly_stepadd.py:1-14`; `prepare_gpu_poly_diffmux.py:1-12`; `prepare_gpu_mul_narrow.py:1-10`; `prepare_gpu_mul_retime.py:1-11` | not quantified; the narrow/retime ones were timing fixes ("misses by 2.9 ns", `prepare_gpu_mul_narrow.py:9`) | stepadd/diffmux listed as options of the 0.5.5 recipe (`prepare_main_hold_cells.py:4-5`); narrow/retime unverified |
| GPU texture cache | 256 valid-bit FFs become an 8-bit generation number stored in the existing tag MLAB (clear = increment, +256 clocks every 255th clear) | `prepare_gpu_tag_generation.py:1-10`; `REL:main-hold-cells/gpu_pixelpipeline.vhd` (9 "generation" hits) | 256 FFs | yes |
| GPU debug/limits | Rectangle watchdog removed (`gpu_rect`); upstream option inputs tied to constants: `REPRODUCIBLEGPUTIMING`, `noTexture`, `textureFilter`, `dither24`, `render24`, `drawSlow`, `oldGPU`, ... | `prepare_gpu_no_watchdog.py:1-12`; `REL:psx_mister_psx_top_resource.vhd:305-339` | Same edit applied to `gpu_poly` **grew** it "2,371 -> 2,551 ALUTs in a full map" (`prepare_gpu_no_watchdog.py:9`), so it was applied to `gpu_rect` only. Removing logic can add area. | yes |
| **CPU** | Execute-stage sharing: one add/sub and one comparator serve the ALU, SLTI/U and optional address arithmetic; SLL/SRL through one right shifter with bit reversal. Optional turbo data cache removed by tying its controls off. 2 x 32x32 register-file MLABs left alone (the M10K variant is an unselected experiment). | `prepare_cpu_execute_share.py:1-12`; `prepare_no_turbo_cache.py:1-4`; `REL:cpu-execute-share/cpu.vhd:569-616` (still `RamMLAB`) | Not quantified | yes (execute-share, no turbo cache) |
| **SPU** | Reverb coefficient block moved into LUT/M10K RAM (guest copy in M10K, engine copy MLAB); 19 static control registers read back from block RAM; ADSR tables computed from one registered setting (**275 FFs -> 32**); CD-input queue (16-entry MLAB) so FMV audio does not drop/repeat a sample; SPU RAM reads through a slim cache on SDRAM. Reverb engine itself retained. | `prepare_spu_reverb_table.py:1-14`; `prepare_spu_static_readback.py:1-13`; `prepare_spu_adsr_lean.py:1-10`; `prepare_spu_cd_queue.py:1-20`; `REL:dualshock-fit/spu.vhd:209-220`; `REL:spu-cache-slim/psx_spu_ch3_cache.sv` | 243 FFs (ADSR); reverb tables 32x16 x2 | yes |
| SPU, rejected | Time-sliced FIR on a DSP, Gaussian MAC in DSP, 39-tap hardware reverb resampler with one multiplier engine | `prepare_spu_fir_dsp.py`, `prepare_spu_gaussian_mac.py` ("Unselected experiment"), `prepare_spu_reverb_resample.py` | n/a | no (`resample` has 0 hits in `REL:dualshock-fit/spu.vhd`) |
| **MDEC** | Retained. IDCT multiplier operand register stage added (timing, cycle-identical); true dual-port DPRAM instances with one writer and one reader specialised to simple dual port M10K | `prepare_mdec_idct_pipe.py:1-12`; `prepare_dpram_sdp.py:1-6`; `REL:dpram-sdp/sources/2/mdec.vhd` | n/a | yes |
| **CD controller** | Retained with its timing model. 8 sector buffers repacked at 640 words each (**32 M10K -> 20**); a 10:1 read mux "cost about **100 ALMs**" so slices were arranged to a 3:1 mux; 60-statement response FIFO chain into one byte mux; XA ring buffers without read-during-write pass-through; division/modulo replaced by exact thresholds / repeated subtraction | `prepare_cd_sector_pack.py:1-10,52-55`; `prepare_cd_response_mux.py:1-14`; `prepare_cd_arithmetic.py:1-4`; `REL:cd-xa-ring-norw/cd_xa.vhd` (diff 15 lines vs upstream); `REL:dpram-sdp/sources/3/cd_top.vhd:2507-2509` | 12 M10K; ~100 ALMs of avoided mux | yes (sector pack: `packedLo/packedHi` present) |
| CD, experimental | "FFVII-minimum" controller dropping CD-DA play and TOC query commands | `prepare_cd_ffvii.py:1-8` ("Measurement only") | n/a | no |
| **DMA** | Per-channel MADR/BCR and static CHCR bits in LUT RAM, then moved to M10K read on the falling `clk1x` edge; adders shared | `prepare_dma_channel_ram.py:1-16`; `prepare_dma_m10k.py:1-20`; `prepare_dma_share.py:1-12`; `REL:dma-m10k/dma.vhd:132-149` | six MLABs at "ten ALMs of logic area" each (`prepare_dma_m10k.py:5`) = about **60 ALMs** | yes |
| Memory mux | 8x70-bit CPU write FIFO from MLAB to two M10K, interface timing identical | `prepare_memorymux_fifo_ram.py:1-24`; `REL:memorymux-fifo-ram/` | n/a | yes |
| **Save states** | Not in the release. Upstream savestate ports tied off / `savestates.vhd` replaced by a lean reset-only init (727 -> 566 lines); a CPU-assisted save design (trap to EXP1 + firmware) exists in the repo but is not in the build. | `prepare_reset_only.py`; `prepare_release_init.py:1-5`; `prepare_save_states.py:1-16`; `REL:release-init/savestates.vhd`; `PSX:scripts/record_pocket_measurements.py:121-129` (measured save/load/rewind delta in LABs) | UP measured savestates at 550 ALMs stripped (`UP:FEASIBILITY.md:45`); the Pocket repo measures the delta via LAB requirements but I could not read the value | removed |
| **Controllers** | Mouse, GunCon/Justifier, neGcon, arcade stick, Pop'n, multitap, SNAC fixed off; pad 1 = DualShock, pad 2 off. DualShock protocol cut to one port: "about **500 ALUTs** smaller in map" (`prepare_pocket_early.py:829`); decoding then moved into one 512x20 M10K ROM: "about half the pad logic" (`prepare_pocket_early.py:334`, `joypad_pad_table.vhd:4`). SIO registers fixed at reset values (`sio_fixed.vhd`; the FFVII census showed it unused). | `prepare_pocket_dualshock.py:1-12`; `REL:joypad_pad_table.vhd` | ~500 ALUT, then ~half of the rest | yes |
| **Memory cards** | Slot 2 removed: "frees ~12 LABs" (`prepare_pocket_early.py:236`). Card 1 is an APF save slot kept in the PSRAM VRAM region; two 64-bit copy registers removed from `joypad_mem` | `prepare_memcard_lean.py:1-12`; `REL:joypad_card1.vhd` | ~12 LABs | yes |
| Debug/diagnostics | Debug overlay, boot trace, perf log, EXE loader, 8 MB RAM, turbo, widescreen/crosshair options tied off or compiled out. Perf stage counters cost "~100 ALMs" so they are off. | `prepare_pocket_early.py:283`; tie-offs `REL:psx_mister_psx_top_resource.vhd:293-340` | n/a | yes |
| PGXP | Large `pgxp_*` patch set and shadow memory exist | `rtl/pocket/pgxp_hooks/` | "experimental postprocessor, not a production default or fit claim" (`prepare_pgxp.py:1-6`) | no |

### 2.3 Platform blocks written for the Pocket

| Block | Size indicator | Evidence |
|---|---|---|
| SDRAM controller (clean-room, one 16-bit chip, CL3, open-row, SPU-first) | 618 lines | `PSX:rtl/memory/psx_sdram_ctrl.sv:1-60`, instantiated `#(.SINGLE_CHIP(1),.CAS_LATENCY(3),.SPU_FIRST(1),.OPEN_ROW(1))` in `REL:main-hold-cells/psx_native_memory.sv:92` |
| PSRAM VRAM controller (both chips ganged 32-bit, synchronous burst) | 504 lines | `PSX:rtl/memory/psx_vram_psram.sv:1-70` |
| CD streaming (APF data-slot reads, track table, disc swap) + cue mounting on the **SERV bit-serial RISC-V** core with a 16 KiB RAM | `psx_cd_stream.sv` 660 lines, `psx_cue_mount.sv` 318 lines, `cue_mount.c` 800 lines | `PSX:rtl/pocket/psx_cue_mount.sv:1-30` ("far smaller than the same logic as a state machine") |
| Audio 44.1 -> 48 kHz sinc converter with packed coefficient ROM | `psx_audio_sinc*.sv` | `prepare_audio_rom_packed.py:63-106` |
| Video: 8 APF scaler slots, stretch/pad logic | `psx_apf_video_wide.sv` 265 lines | `prepare_pocket_early.py` flags `--wide-lines`, `--hybrid-slots`, ... |

### 2.4 Every quantified saving I could find (complete list)

| Change | Number | Where |
|---|---|---|
| GTE tables MLAB -> M10K | 64 ALMs | `prepare_gte_m10k.py:5` |
| DMA tables MLAB -> M10K | 6 MLABs x 10 ALMs | `prepare_dma_m10k.py:5` |
| GTE read shadows MLAB -> M10K | ~4 LABs | `prepare_gte_shadow_m10k.py:6` |
| ADSR tables | 275 FFs -> 32 FFs | `prepare_spu_adsr_lean.py:2,10` |
| `dy` gradients to RAM | 160 FFs | `prepare_gpu_dy_ram.py:2` |
| Texture-cache valid bits | 256 FFs | `prepare_gpu_tag_generation.py:3` |
| CD sector buffers | 32 -> 20 M10K | `prepare_cd_sector_pack.py:2,7-9` |
| CD read mux layout | 10:1 mux = ~100 ALMs, avoided | `prepare_cd_sector_pack.py:54-55` |
| Vertex sort by RAM re-read | ~250 ALUTs | `prepare_gpu_sort_reread.py:7` |
| DualShock cut to one port | ~500 ALUTs | `prepare_pocket_early.py:829` |
| DualShock decode into ROM | ~half of pad logic | `prepare_pocket_early.py:334` |
| Memory card slot 2 | ~12 LABs | `prepare_pocket_early.py:236` |
| Perf stage counters (kept off) | ~100 ALMs | `prepare_pocket_early.py:283` |
| Removing `gpu_poly` watchdog | **+180 ALUTs** (2,371 -> 2,551) | `prepare_gpu_no_watchdog.py:9` |
| Rejected 368-wide video tweak | 1,847 -> 1,848 LABs | `prepare_video_368_budget.py:5` |
| Upstream savestates, options off (user's own study) | 31,215 -> 26,135 ALMs (-5.1K) | `UP:FEASIBILITY.md:20-21` |
| Final design | 1,847 LABs of 1,848 | `prepare_pocket_early.py:319` |

The sum of the itemised savings is only a few hundred to ~1,500 ALMs. The bulk of the gap between the 26.1K synthesis estimate and a fitting design therefore comes from the items that are **not** quantified: the compile profile (2.5), the GTE swap, the memory architecture, plus the fact that LABs are being counted instead of ALMs (section 1). I cannot split it further from these sources.

---

## 3. Where `UP:FEASIBILITY.md` went wrong

The earlier study projected 31,215 ALMs full, 26,135 with options tied off, 22,600 trimmed, 19,300 rewritten, with a no-go verdict. Comparing against what the Pocket core actually does:

1. **It measured with default Quartus settings and treated that as the floor.** The sizing projects use no area settings (`UP:sizing/psx_min.qsf`: only family, device, top, `VHDL_2008`, virtual pins). The Pocket build uses `OPTIMIZATION_TECHNIQUE AREA`, `STATE_MACHINE_PROCESSING MINIMAL BITS`, `AUTO_RESOURCE_SHARING ON`, register retiming off, WYSIWYG remap off, and `ALM_REGISTER_PACKING_EFFORT HIGH` (section 4). The repo defines `baseline`, `area`, `area-share`, `area-min-state` profiles side by side (`prepare_resource_targets.py:66-74`), so the authors measured these as a separate lever, but the size of the effect is not recorded.
2. **It treated the GTE as a block to rewrite serially** ("1 MAC @ 4x clk1x", 4,200 -> 2,700, a 4x clock with 135 MHz timing). The Pocket core instead **adopted an existing, smaller microcoded GTE** and ran it at 1x with a 2-cycle path (`pocket.sdc:14-16`). Never rewriting a block in-house is the biggest difference in effort.
3. **It treated RAM-able state as logic.** The study counted flip-flop arrays and MLABs as ALMs ("an MLAB costs ten ALMs of logic area", `prepare_dma_m10k.py:5`) but listed M10K as non-binding ("ALMs are the blocker", `FEASIBILITY.md:54`). The Pocket repo spends dozens of patches moving tables, shadows and per-primitive state into the 308 M10Ks (see 2.2, 6).
4. **It assumed big functional cuts were necessary** (drop MDEC, XA, CD timing, analog, libcrypt, about 2,350 ALMs of "cost games"). None were made; FMV, XA and CD audio work in the release.
5. **It planned savestate removal as an RTL rewrite touching ~15 files** (`FEASIBILITY.md:89`). The Pocket repo ties the `SS_*` ports to constants and lets synthesis prune the logic (`prepare_resource_targets.py:23-36,106`: `*_FIXED` tables and `savestates_disabled()`), then substitutes a lean init.
6. **It put VRAM on SDRAM and main RAM on PSRAM.** The shipped core is the opposite (see 7): main RAM, BIOS and SPU RAM on the SDRAM, VRAM on both PSRAMs in synchronous burst mode (`REL:core_top.sv:682-683`). The "unproven" PSRAM sync-burst path (`FEASIBILITY.md:77-78`) works on hardware.
7. **It measured ALM estimates; the Pocket project is judged on LABs after packing**, and uses fitter packing effort and seed choice as tools (sections 1, 4).
8. **The study is right about one thing**: the budget was tight (a 1,847/1,848 LAB result is "essentially the whole device"), and timing on a C8 part is fragile (waived clock-crossing hold misses of -0.035 to -0.25 ns in `support/release_timing_waivers.json`). The correct reading is "a no-go as a port of the unmodified core, a go with ~170 area patches and a different memory plan".

---

## 4. Q2: synthesis and fitter settings

### 4.1 PSX Pocket (`REL:apf_top.qsf`) vs Saturn_MiSTer (`SAT:Saturn.qsf`)

| Setting | PSX Pocket 0.5.5 | Saturn_MiSTer `Saturn.qsf` | Direction |
|---|---|---|---|
| `OPTIMIZATION_TECHNIQUE` | AREA (`:688`) | SPEED (`:39`) | opposite |
| `OPTIMIZATION_MODE` | default | HIGH PERFORMANCE EFFORT (`:31`) | opposite |
| `STATE_MACHINE_PROCESSING` | MINIMAL BITS (`:696`); `gpu_poly` one-hot only where a path demands it (`prepare_gpu_poly_onehot.py`) | default | |
| `AUTO_RESOURCE_SHARING` | ON (`:695`) | default | |
| `MUX_RESTRUCTURE` | ON (`:689`) | ON | same |
| `ALLOW_ANY_RAM_SIZE_FOR_RECOGNITION`, `..._ROM_...` | ON (`:690-691`) | default | |
| `PRE_MAPPING_RESYNTHESIS` | OFF (`:692`) | ON | opposite |
| `ADV_NETLIST_OPT_SYNTH_WYSIWYG_REMAP` | OFF (`:693`) | ON | opposite |
| `PHYSICAL_SYNTHESIS_REGISTER_RETIMING` | OFF (`:694`) | ON; also `PHYSICAL_SYNTHESIS_EFFORT EXTRA`, `..._COMBO_LOGIC ON`, `..._REGISTER_DUPLICATION ON`, `ROUTER_REGISTER_DUPLICATION ON`, `ROUTER_LCELL_INSERTION_AND_LOGIC_DUPLICATION ON` | opposite |
| `ALM_REGISTER_PACKING_EFFORT` | **HIGH** (`:898`, flag `--pack-high` "lets --disc-swap fit at 1,847 LABs", `prepare_pocket_early.py:319,2047`) | LOW (`:53`) | opposite |
| `QII_AUTO_PACKED_REGISTERS` | default | SPARSE AUTO | opposite |
| `FITTER_EFFORT` / router | STANDARD FIT, `ROUTER_TIMING_OPTIMIZATION_LEVEL MAXIMUM` (`:896-897`, flag `--fit-effort-max`: "closes the small fast-corner hold misses that Auto Fit leaves") | STANDARD FIT, aggressive routability | |
| `SEED` | **13** (`:679`); seed sweeps record LABs per seed (`run_pocket_seed_sweep.py`, `measure_pocket_seeds.py`) | 1 | |
| `MAX_BALANCING_DSP_BLOCKS` | 66 (`:683`) | n/a | |
| `AUTO_SHIFT_REGISTER_RECOGNITION` | OFF on synchroniser chains and the video-out block (`:804,859`; `prepare_pocket_cd_cdc.py:278-280`) so Quartus does not turn them into altshift_taps | n/a | |
| `DONT_MERGE_REGISTER` / `PRESERVE_REGISTER` | only on `vram_commands*bank_enable*` (`:698-699`) | n/a | |
| Identity "hold cells" (dont_touch LUTs) | on 56 bus bits (`prepare_main_hold_cells.py:1-14`, `psx_hold_cell.sv`) | n/a | costs area, fixes fast-corner hold |
| `ENABLE_SIGNALTAP` | ON in the qsf (`:14`), though no tap is shipped as far as I could see | n/a | |
| Tool | Quartus Prime **Lite 25.1** (`BUILDING.md:5`) | Quartus 17/Lite per the MiSTer flow | |

Statements to take from this:

- **[E]** The Saturn_MiSTer build is configured for speed on every knob that PSX Pocket set for area. Saturn's own sizing run used `OPTIMIZATION_MODE "BALANCED"` (`SAT:sizing/saturn_full.qsf`), which is neither.
- **[E]** DSP: the project did not try to force multipliers into or out of DSP blocks globally. DSP inference is left to Quartus; the only DSP experiments (dividers with DSP subtraction, SPU FIR/Gaussian in DSP) are unselected.
- **[E]** RAM inference is controlled per object with `ramstyle` attributes (`"M10K, no_rw_check"`, `"MLAB, no_rw_check"`). The `no_rw_check` is what lets the tool use M10K without read-during-write bypass logic.
- **[E]** The fit is not seed-neutral: seeds, packing effort and fitter effort all move the LAB count by one or two LABs at the edge, and the last tweaks are accepted or rejected on that basis (`prepare_video_368_budget.py:5`). Seed 13 is hard-coded.

### 4.2 Component sizing method

`prepare_resource_targets.py` builds one Quartus project per component (cpu, gte, gpu, spu, mdec, cd_top, dma, ...) with the optional ports tied to constants, so each block can be sized in isolation, then re-measures in the connected "full top". The measurement notes warn that component results are not additive ("LAB packing is not additive to a physical top", `measure_spu_scalar_buffer_area.py:106`; "Component allocation is not LAB saving", `fit_main_memory.py:98`). `--measure-ablate spu-reverb` removes the reverb engine in a throwaway build purely to read its fitted size (`prepare_pocket_early.py:294`).

---

## 5. Q3: moving logic into memory, ROM and DSP

All items below are cycle-identical unless noted.

| Technique | Example in repo | Why it works | Evidence |
|---|---|---|---|
| **MLAB / FF array -> M10K with a falling-edge read** | DMA channel tables, GTE tables and shadows, SPU guest and engine readback, CPU regfile (trial) | A block RAM that samples a register-sourced address on the falling edge returns, before the next rising edge, exactly what the asynchronous MLAB read returned. Writes stay on the rising edge. Valid bits stay in FFs to reproduce reset clear. The read becomes a half-cycle path. | `prepare_dma_m10k.py:1-20`; `prepare_gte_m10k.py:1-20`; `prepare_spu_guest_m10k.py:1-12` |
| Register bank -> LUT RAM keyed by state | DMA MADR/BCR/CHCR (24+32+... bits x 7 channels), GTE matrices, SPU reverb block | Only one entry is read per cycle; the 31-way or 16-way readback mux goes with it | `prepare_dma_channel_ram.py:1-16`; `prepare_gte_control_ram.py:1-9`; `prepare_spu_reverb_table.py:1-14` |
| Per-primitive state FFs -> RAM, loaded serially | GPU vertex, colour, texcoord; `dy` gradients; tag valid bits as generation | A few extra cycles per triangle, not per pixel | `prepare_gpu_vertex_ram.py`, `prepare_gpu_dy_ram.py`, `prepare_gpu_tag_generation.py` |
| Derived tables computed from one registered setting | SPU ADSR (275 -> 32 FFs) | Combinational function of a register already present | `prepare_spu_adsr_lean.py` |
| **Protocol decode in a ROM** | DualShock protocol in one 512x20 M10K | A per-byte state machine is a table indexed by (state, command byte) | `rtl/pocket/joypad_pad_table.vhd:4`; `prepare_pocket_early.py:334` |
| ROM/RAM packing | CD sector buffers at 640 words per sector (32 -> 20 M10K); sinc coefficient bank packed into fewer M10K | Used address range is much less than the power-of-two RAM | `prepare_cd_sector_pack.py`; `prepare_audio_rom_packed.py:63-106` |
| Wide muxes -> single mux with computed select | CD response FIFO (60 sequential assignments -> one source select + one byte mux); `gpu_poly` difference muxing; SDRAM selector | A priority chain is rebuilt as "pick source, then mux once" | `prepare_cd_response_mux.py:1-14`; `prepare_gpu_poly_diffmux.py`; `prepare_sdram_selector.py:1-6` |
| Division -> thresholds / reciprocal | CD LBA track classification; GPU gradients | Constants and one shared divisor | `prepare_cd_arithmetic.py:1-4`; `prepare_gpu_recip.py:3-14` |
| One shifter / adder for many opcodes | CPU execute share | Mutually exclusive opcodes | `prepare_cpu_execute_share.py:1-12` |
| **Microcode ROM** | Laxer GTE: 256-entry microcode in M10K; three SelPath MAC lanes reused for every command | Sequencing instead of a per-command datapath | `REL:psx/psx_top/gte-adapter/GTEMicroCode.sv:28-47` |
| Soft CPU for housekeeping | SERV (bit-serial RISC-V) running `cue_mount.c` out of 16 KiB RAM for cue parsing, path handling, disc swap and cheats | "far smaller than the same logic as a state machine" | `rtl/pocket/psx_cue_mount.sv:1-30`; `THIRD_PARTY_NOTICES.md:27` |
| Multipliers to DSP | Not forced; left to the tool. The multiplier-narrowing patch shrinks a 32x32 to 32x13 | | `prepare_gpu_mul_narrow.py` |
| Clean-room dual-port RAM specialisation | `dpram-sdp`: true dual-port with one writer and one reader -> simple dual port M10K | Drops the dual-port arbitration and pass-through logic | `prepare_dpram_sdp.py:1-6` |

**[E]** Shift registers into RAM: the project goes the other way on purpose for CDC synchronisers (`AUTO_SHIFT_REGISTER_RECOGNITION OFF`), because inferred altshift_taps break the synchroniser. For data FIFOs it converts MLAB FIFOs to M10K (`psx_wfifo_m10k.vhd`, `psx_m10k_sdp.vhd`).

---

## 6. Q4: clocking and timing

- **No clock was lowered.** The CPU PLL generates the same ratios as MiSTer: `clk1x` 33.8688 MHz, `clk2x` 67.7376 MHz, `clk3x` 101.6064 MHz from the 74.25 MHz reference (`REL:core_top.sv:634-640`), a 53.693166 MHz video PLL (`:740-742`), and an optional fourth 67.7376 MHz output at a fixed phase for the PSRAM chip clock (`:640`, `prepare_pocket_early.py:1173-1174`). The speed grade is C8 (`REL:apf_top.qsf:5`).
- **Multicycle on the GTE.** The Laxer engine is enabled only on alternate `clk2x` edges (`psx_laxer_mister_adapter` `engine_enable = reset || (ce && clk2xIndex)`, `laxer_mister_adapter.sv:15-18`) and the SDC grants it a 2-cycle setup budget with hold 1 (`REL:pocket.sdc:14-16`). Reset is gated by the same index so the relation is unconditional (`prepare_gte_multicycle.py:1-13`: "The original RTPS/RTPT divider-to-multiplier path misses one 2x period by 5.6 ns"). The M10K table reads get the same multicycle budget (`pocket.sdc:111-113`). Compatibility cost: none, the engine is still 1x architecturally.
- **Pipeline-register insertion keeping cycle behaviour:** `prepare_gpu_half_pipe.py` ("misses the 2x clock by 1.7 ns", two extra states on the flat path), `prepare_gpu_mul_retime.py`, `prepare_mdec_idct_pipe.py` (5.2 ns miss, fixed with one operand stage, "every IDCT result is still written at least 9 cycles before idct_done"), `prepare_gpu_area_reg.py`, `prepare_gpu_read_late.py` (worst `clk2x` path, "about 60% routing at 99.9% LABs"). A few cost latency: +3 clocks per triangle (vertex RAM), +4 (sort re-read), +2 per flat triangle (half pipe), +256 clocks per 255th texture-cache clear.
- **Timing closure by waiver, narrowly:** clk2x->clk1x hold -0.05 ns floor, clk1x->clk2x hold -0.06, video-clock reset blanking, and video status synchronisers (`PSX:support/release_timing_waivers.json`). Same-clock paths cannot be waived (`BUILDING.md:49-52`). Hold fixes use identity LUTs and a 150 ps CPU hold reserve (`prepare_main_hold_cells.py`, `prepare_native_hold_cells.py`).
- **Clock-domain crossings were tightened, not removed:** held-payload request/response with `set_max_delay 10`, Gray FIFOs with `set_max_skew` (`pocket.sdc:24-34`, audio stream block), per-domain reset release (`prepare_pocket_reset_release.py`).
- **PSRAM chip clock** is generated through a DDIO output and `create_generated_clock`, with `set_multicycle_path -setup 2` on the read capture (`pocket.sdc:135-143`).

---

## 7. Q5: memory controllers and CD streaming

### 7.1 Memory layout actually shipped

`REL:core_top.sv:682-683`: "Main RAM, BIOS and SPU RAM on SDRAM at clk3x; VRAM on both PSRAMs (clk2x)". The earlier layouts (`--psram-main`: main RAM on PSRAM with SDRAM VRAM; `--sotn-memory`) are still selectable flags in `prepare_pocket_early.py` but were superseded. SRAM is unused.

| Memory | Holds | Controller | Key facts |
|---|---|---|---|
| SDRAM (16-bit, 4 banks) | 2 MB main RAM + 512 KB BIOS + 512 KB SPU RAM | `psx_sdram_ctrl` `CAS_LATENCY 3`, `OPEN_ROW 1`, `SPU_FIRST 1` | One access at a time; auto-precharge unless `OPEN_ROW`; refresh after accesses; **CL3 delays every read beat by one `clk3x`, so reads cost one extra `clk1x` (29.5 ns) unless the row is already open** (`psx_sdram_ctrl.sv:29-37`). The SPU has a hard 768-clk1x deadline, so its requests are served right after refresh. A 64-line slim SPU read cache absorbs most SPU reads. |
| PSRAM x2 (CellularRAM, 16-bit each) | 1 MB VRAM + memory-card image | `psx_vram_psram`, `FULL_RATE=1`, `LATENCY=5` | Chips ganged to 32-bit, **synchronous fixed-latency burst**; chip clock 67.7 MHz in the release (33.9 MHz in the first version), "about twice the VRAM bandwidth" (`prepare_pocket_early.py:306`). Clock stopped when in async mode ("a free-running clock in asynchronous mode turned writes into bursts", `psx_vram_psram.sv:21-22`); every configuration register written twice, once in async form and once in sync form; writes posted. 64-word row segments bounded by tCEM. |
| M10K | CPU I-cache and scratchpad, GPU caches, CD buffers (20 M10K), SPU tables, GTE microcode, 16 KiB SERV RAM | n/a | |

### 7.2 What this shows for Saturn [E]

- Synchronous-burst PSRAM with a hand-written controller is demonstrably workable on a real Pocket (v0.5.5, "Main memory and video memory are faster"). `saturn-architecture.md` section 7.2 plans PSRAM access in asynchronous mode (~70 ns random); the PSX controller is a ready MIT-licensed starting point for the burst-friendly clients (VDP1 VRAM, framebuffer erase/display read, WRAM-H line fills).
- It does not change the verdict that VDP2's four random 32-bit reads per 140 ns slot must stay on SDRAM (`saturn-architecture.md` section 3.4); PSRAM first-word latency is 11 cycles at 67.7 MHz (about 160 ns) in the LATENCY 3 form and more in the full-rate form (`psx_vram_psram.sv:51-52`).
- The SDRAM controller shows the handshake pattern (priority channels, "SPU first", open-row policy) and what hardware-validated CL3 behaviour looks like at 101.6 MHz on this exact part.

### 7.3 CD streaming (brief; another agent covers it in depth)

- Sector reads are APF data-slot target reads into bridge windows; `psx_cd_stream` keeps `NBUF-1` sectors prefetched (`--cd-buffers`), tracks a generated track table, and runs a disc swap sequencer that opens the lid for 1 s, remounts and closes (`prepare_pocket_disc_swap.py:1-20`).
- Cue/bin parsing and path handling are firmware on SERV, not a host tool and not an FSM (`psx_cue_mount.sv:1-30`; `cue_mount.c`).
- XA-ADPCM and CD-DA are processed in the retained `cd_xa` and SPU CD input queue.

---

## 8. Q6: what was given up

From the release notes, README and scripts:

| Area | Given up | Evidence |
|---|---|---|
| Features | Save states (reset-only; saving is memory card only and is written on quit through the Pocket menu); memory card slot 2; mouse, lightguns, multitap, SNAC, neGcon, arcade stick; 8 MB RAM; turbo/overclock options; texture filter, 24-bit rendering/dither24, PGXP (experimental, not shipped); EXE loader; debug overlays; widescreen option | `README.md:111-127,154`; `psx_mister_psx_top_resource.vhd:293-340`; `prepare_pocket_early.py:236` |
| Timing fidelity | "Some games may run slower than on a real console"; release 0.5.5: "The Pocket's memory may answer more slowly than the PlayStation's own memory in those scenes" (Bloody Roar II see-through fighters during some attacks) | `README.md:165`; release notes v0.5.5 |
| Video | Picture can jump sideways for one frame on mode switches; a thin diagonal line on the white Sony screen; stray lines; Fill Screen artifacts (pixel-thin letters, picture low, line artifact top-left); PAL shifted/cut on some screens; flicker or white line at top | `README.md:166-169`; v0.5.5 notes |
| Reproducibility | 480i woven rather than selectable; weave and steady-field modes; some APF scaler quirks need extra black lines and padding | `README.md:136-137`; `prepare_pocket_early.py` flags `--lead-line`, `--pad-lines` |
| Cycle behaviour | Added latencies: +3/+4 GPU clocks per triangle, +256 on texture-cache generation wrap; physical bounds waived on a few clock crossings | section 6 |
| Coverage | The public game list is thin: 35 entries, 19 Playable, 16 Boots (user reports), no "Major issues" or "Doesn't boot" entries | `PSX:docs/compatibility.json` |
| Setup burden | Per-game JSON files via a separate plugin/helper; BIOS and discs supplied by the user; LibCrypt discs need an `.sbi` | `README.md:16-68` |

Not given up: FMV (MDEC), XA and CD-DA audio, SPU reverb, analog DualShock in the Digital/Analog setting, disc swapping, one memory card per game, multi-track discs up to 99 tracks.

---

## 9. Q7: generalisation to Saturn

### 9.1 Saturn baseline (measured, `SAT:sizing/output_files_saturn_full/saturn_full.map.rpt`)

Quartus 21.1.1 synthesis of module `Saturn` (the system top, without `ddram`/`sdram*`/`hps_io`/`hps2cdd`/video chain), `BALANCED`, `LIGHT_SATURN=1`:

| Block | Comb. ALUTs | Registers | Block-RAM bits | DSP | ALM est. (x0.687) [P] |
|---|---|---|---|---|---|
| SH7604 MSH (x1) | 5,858 | 3,026 | 32,768 | 3 | ~4.0K |
| SH7604 SSH (x1) | 5,793 | 3,014 | 32,768 | 3 | ~4.0K |
| VDP2 | 9,032 | 7,822 | 32,768 | 12 | ~6.2K |
| SH1 (SH7034, CD block) | 4,573 | 2,518 | 524,288 | 2 | ~3.1K |
| SCU (incl. SCU DSP 1,111 ALUT, 3 DSP) | 4,353 | 1,708 | 16,384 | 3 | ~3.0K |
| VDP1 | 4,027 | 2,370 | 0 | 1 | ~2.8K |
| SCSP | 3,580 | 2,022 | 21,920 | 5 | ~2.5K |
| fx68k (68000) | 2,865 | 1,394 | 39,584 | 0 | ~2.0K |
| SMPC (HMCS400 LLE) | 949 | 384 | 20,480 | 0 | ~0.65K |
| YGR019 | 472 | 446 | 0 | 0 | ~0.3K |
| CART, DCC, top glue | ~430 | ~130 | 0 | 0 | ~0.3K |
| **Total** | **41,928** | **24,834** | **720,960** | **29** | **28,813 reported ("ALMs needed", line 552)** |

Sub-block figures worth noting (same report): each SH7604 has `SH_core` 2,163 ALUT, `SH7604_CACHE` 973, `SH7604_BSC` 558, `SH7604_DIVU` 532 (581 regs), `SH7604_DMAC` 479, `SH7604_MULT` 364 (3 DSP). SH7034: `SH_core` 2,152, `ITU` 666, `DMAC` 599, `SCI0` 170, `INTC` 176, `BSC` 196, `MULT` 151. fx68k: `excUnit` 1,933, `pla_lined` 541, `fx68kAlu` 363. Memory ALUT usage is only 734 ALUTs and total MLAB bits 17,472, so MLAB-to-M10K conversions can recover at most ~370 ALMs. 10,111 ALUTs are 6- or 7-input functions (wide muxes), and the 24,834 registers make Saturn register-dense (VDP2 alone holds 31%).

**This corrects the sizing picture in `docs/pocket-platform.md` section 0.3/1.4.** That document estimates "about 41,500 ALMs, 2.25x the Pocket", taken from the DE10-Nano's 99% fullness. The synthesis estimate for the same system top is **28,813 ALMs, 1.56x the device**, close to the PSX's 26,135. The 12.7K difference between 28.8K synthesised and 41.5K fitted contains the MiSTer framework (not in this top), `ddram`/`sdram1`/`sdram2`, VDP1 framebuffer glue, the HPS bridge, and whatever the SPEED-mode settings in 4.1 (retiming, register duplication, logic duplication, sparse packing) add. [P] I expect a large part of that gap is the speed profile, but I cannot show it from these files: the Saturn fitted number was not measured in area mode.

Rough gap to close [P]: Saturn 28.8K + ~3K Pocket-side glue (APF about 0.5-0.6K per `pocket-platform.md` 1.2, memory controllers, CD drive emulator) = ~32K, to get to 18.4K LABs is a **~42% cut**. The PSX figure on the same accounting is 26.1K + 1.6K + 0.45K + 1K = 29.2K -> 18.4K, a ~37% cut, which the Pocket core achieved. So Saturn is harder than PSX but of the same order, not 2.25x.

### 9.2 Ranked techniques with expected savings

"Evidence" says whether the PSX evidence for the technique is solid. "Saturn mapping" says whether the application to a Saturn block is **[E]** (supported by something in these files about Saturn), or **[P]** (my projection).

| Rank | Technique | Evidence on PSX | Saturn application | Expected saving | Mapping |
|---|---|---|---|---|---|
| 1 | **Area compile profile**: `OPTIMIZATION_TECHNIQUE AREA`, `MINIMAL BITS`, resource sharing ON, retiming/WYSIWYG/pre-map resynthesis/physical synthesis/duplication OFF, `ALM_REGISTER_PACKING_EFFORT HIGH`, fitter STANDARD + max router effort, seed sweep. | Profile in qsf and in code (`prepare_resource_targets.py:66-74`); effect on size not recorded. | Whole design. `Saturn.qsf` has the opposite setting on 9 knobs (4.1). | [P] 10-20% of total, i.e. ~3-6K ALMs, plus 1-3 LABs from seeds. Can be measured in about 20 minutes with the existing `sizing/` map project by changing `OPTIMIZATION_MODE` and adding the profile. Timing on C8 at 57 MHz will worsen; the cost is the rest of this list. | Setting comparison is [E]; magnitude [P] |
| 2 | **Measure first with fitter LAB requirement and ablation**: `record_pocket_measurements.py` pattern (use "Fitter requires N LABs" on failing fits), seed pairs, `--measure-ablate`, full-top not component. | `record_pocket_measurements.py:59-70`; `measure_pocket_seeds.py`; `prepare_gpu_no_watchdog.py:9` (a removal that added 180 ALUTs). | Applies to every other item. | Avoids wrong decisions; no area by itself. | [E] method |
| 3 | **Prune unused peripherals/options by a usage census**, tie to constants, let synthesis remove them. | `sio_fixed` ("FFVII never uses SIO"), census tool `PSX:tools/ffvii-census`, `no-memcard2` ~12 LABs, controllers off ~500 ALUT, options tied: 31.2K -> 26.1K (`UP:FEASIBILITY.md:20-21`). | **SH7034 in the CD block** (4,573 ALUT): the firmware image `cdb105m.mif` is fixed and can be analysed statically for which on-chip peripherals it touches; unused SCI channels, ITU channels, DMAC channels and port logic can be tied off. Also unused SH7604 on-chip modules per instance (FRT, DMAC, DIVU, WDT usage per CPU), SMPC options, cart types beyond RAM carts and backup. | [P] SH7034 peripherals ~1,400 ALUT (ITU 666 + DMAC 599 + SCI 170 + INTC 176 partly) -> ~0.5-1.0K ALM if most are unused; SH7604 pair ~0.2-0.5K. Needs a firmware/usage audit; some are certainly used (DMAC for CD transfers). | Block sizes [E], savings [P] |
| 4 | **Soft CPU firmware instead of an FSM for the CD drive emulator** (SERV + 16 KiB RAM). | `psx_cue_mount.sv:1-30`; shipped with disc swap, multi-disc menu, cheats. | The Saturn core has **no CDD logic at all** (ARM does it; `saturn-architecture.md` intro and section 5.1). The CDD protocol (12-byte status/command packets, 75 Hz cadence, TOC, seek, play/pause, 2x), cue parsing and APF slot reads must be built new, and PSX shows how to keep it small. | [P] New-block cost avoided: SERV ~200-300 LUTs [P, from SERV's published size, not in these sources] vs. an FSM for protocol + TOC at ~1-2K ALMs. | Mapping [E] (need identified); numbers [P] |
| 5 | **FF arrays and MLAB -> M10K, falling-edge read, `no_rw_check`, `dpram-sdp`**. | Many items in 2.4; Saturn has 2.4 Mbit of M10K headroom (0.72 of 3.15 Mbit used in the map; VDP1 FB aside). | Saturn's MLAB use is small (734 ALUTs), so the direct gain is **at most ~370 ALMs**. The larger gain is turning register arrays that Quartus left in flip-flops into RAM: SH7604 has `SH_mem` register-file RAMs already; **VDP2 holds 7,822 registers** and VDP1 2,370 in what looks like per-layer/per-command state, SCSP 2,022, DIVU 581 x2. | [P] 300-1,200 ALMs, concentrated in VDP2/VDP1. Needs source audit for arrays written one entry at a time and read one entry at a time. | Block register counts [E]; savings [P] |
| 6 | **Cycle-identical sharing of arithmetic and muxes** (one adder per channel across exclusive states; mux-then-subtract; one shifter; shared comparator). | `prepare_gpu_poly_stepadd/diffmux/share`, `prepare_cpu_execute_share`, `prepare_dma_share`: all "cycle-identical"; sort-reread ~250 ALUT. | SH_core in SH7604 (2 x 2,163 ALUT) and SH7034 (2,152): the ALU, comparison and shift paths. VDP1 (4,027 ALUT) line/polygon DDA steppers. VDP2 (9,032 ALUT) coefficient/rotation arithmetic (12 DSP). SCSP slot datapath. | [P] 5-10% of those blocks: ~0.8-1.5K ALMs across the SH-2 pair, SH-1, VDP1, VDP2 combined. | [P] |
| 7 | **Serialise rarely-hot wide units** (GPU: reciprocal + multiply instead of 6 dividers; GTE engine on alternate clocks). | `prepare_gpu_recip.py`; multicycle `pocket.sdc:14-16`. | Candidates: SH7604 `DIVU` (532 ALUT + 581 regs, 2 copies) is hardware-serial already; the SCU DSP (1,111 ALUT, 3 DSP) multiplier path; VDP2 rotation-parameter multiplies. The SH-2 and the SCU run on `SYS_CE` = clk_sys/2 (`saturn-architecture.md` section 1.2), which makes a **2-cycle multicycle budget plausible for same-phase paths**, the same situation as the GTE. | [P] Timing first: this is the technique that makes the speed-to-area profile (rank 1) close. Savings in ALMs: ~0.3-0.8K if a multiplier/adder is shared between the two clk_sys phases. Needs per-module audit: `SYS_CE_R` and `SYS_CE_F` alternate every clk_sys, so R->F paths have only one clk_sys cycle. | Clocking fact [E]; savings [P] |
| 8 | **Replace a block with an existing smaller implementation** (Laxer GTE for MiSTer GTE). | GTE swap; adapters keep register contract; `prepare_gte_adapter.py`; validated by lockstep against the old block (`run_gte_*`). | Candidates: fx68k (2,865 ALUT, 39,584 bits microcode) vs a smaller 68000; SH-2 core. Neither has a known drop-in that is **smaller and cycle-compatible**. | [P] speculative. A smaller 68K could save at most ~0.5-1K ALM; the SCSP depends on its bus timing. I would not start here. | [P] |
| 9 | **Memory plan**: sync-burst PSRAM controller for burst-friendly clients; SDRAM for the slot-synchronous client; small caches in front. | `psx_vram_psram.sv` (MIT), `psx_sdram_ctrl.sv` (MIT), 0.5.5 hardware result. | VDP1 VRAM and framebuffers, WRAM-H line fills, CD RAM, BIOS: PSRAM sync burst. VDP2 VRAM + SCSP RAM: SDRAM with the `sdram1` schedule. | Not an ALM saving: it is what lets the 352 KB VDP1 framebuffers and the 1 MB WRAM-H leave the M10K/ALM budget at all. Controller cost itself is not published. | [E] controller works; mapping to Saturn is a plan |
| 10 | **Table/ROM-ification of state machines and protocols**. | `joypad_pad_table.vhd`, `cd_response_mux`, sector pack. | SMPC (HMCS400 already a ROM), VDP2 and VDP1 large `case` decoders, SCSP lookup (LFO, EG, pan) tables. 10,111 6/7-input ALUTs in the Saturn map point at wide muxes that may be ROM-able. | [P] a few hundred ALMs. | [P] |

### 9.3 Where PSX's techniques do **not** transfer well

- **CPU time-sharing.** The PSX core never shared or time-multiplexed the main CPU; it only shared adders inside it. Merging or interleaving the two SH-2 (together ~8K ALMs) would be the largest single prize but has no precedent in this project, and the SH-2 needs bus, cache and DMA interplay at 28.6 MHz. [P] I rank it as research, not as a technique.
- **Dropping blocks.** PSX removed almost no functional block. The only Saturn block that is optional at the whole-game level is the SCU DSP; several titles use it, so dropping it is a compatibility cut that this project's evidence does not support.
- **Zero-cost "tie off" options.** The Saturn system top was already built with `LIGHT_SATURN`, `UBC_DISABLE`, `SCI_DISABLE`, `BUS_SIZE_BYTE_DISABLE` (`saturn-architecture.md` sections 0 and 6), so the "31.2K -> 26.1K" kind of win has largely been taken.
- **SCSP** is already slot-serial (32 slots, one datapath); there is little left to serialise. Savings there are table and register-bank moves only.

### 9.4 Suggested order of work (what I would do, all of it measurement before design)

1. Re-run the existing Quartus map on `saturn_full` with the PSX area profile (and `ALM_REGISTER_PACKING_EFFORT HIGH` for fit). One run gives rank 1 and tells whether the 41.5K figure is mostly speed-mode inflation. No Docker is needed if a local Quartus Lite is available; the earlier sizing used `raetro/quartus:21.1`.
2. Run a Pocket-target **fit** of the system top with virtual pins and read "Fitter requires N LABs". Even a failing fit yields the LAB number, as the PSX project uses it.
3. Static-analyse `cdb105m.mif` for SH7034 peripheral register accesses, then prune SH7034 (rank 3) and size the CD drive emulator as SERV firmware (rank 4).
4. Audit VDP2/VDP1/SCSP register arrays for RAM candidates (rank 5), then arithmetic sharing (rank 6) in the SH_core.
5. Only then decide whether `SYS_CE` multicycle constraints (rank 7) are needed to close timing at C8, and which memory split (rank 9) is final.

### 9.5 Caveats

- All PSX savings in this document come from comments in the repo's scripts, not from a report. Where the repo gives no number I say so.
- The Saturn ALM split uses a single ALUT-to-ALM ratio (0.687); register-heavy blocks (VDP2, VDP1) are probably underestimated.
- I did not synthesise anything. Docker was off limits and no Quartus run was made for this document; all Saturn numbers come from the existing `saturn_full.map.rpt`.
- The PSX core is hardware-tested on a few titles only (35 list entries). A technique being shipped does not prove it is compatibility-neutral across a library.

---

## 10. File index

PSX repository (`PSX:`): `scripts/prepare_resource_targets.py` (profiles, tie-offs), `scripts/prepare_pocket_early.py` (flags and release recipe), `scripts/prepare_full_pocket.py` (full-feature measurement), `scripts/run_pocket_seed_sweep.py`, `scripts/measure_pocket_seeds.py`, `scripts/record_pocket_measurements.py`, `scripts/prepare_gte_*.py`, `scripts/prepare_gpu_*.py`, `scripts/prepare_spu_*.py`, `scripts/prepare_dma_*.py`, `scripts/prepare_cd_*.py`, `rtl/gte/laxer_mister_adapter.sv`, `rtl/memory/psx_vram_psram.sv`, `rtl/memory/psx_sdram_ctrl.sv`, `rtl/pocket/psx_cue_mount.sv`, `rtl/pocket/psx_cd_stream.sv`, `support/release_timing_waivers.json`, `THIRD_PARTY_NOTICES.md`, `LICENSE`, `licenses/MIT.txt`.

Release source (`REL:`): `apf_top.qsf` (settings at lines 678-698, 896-898), `pocket.sdc` (multicycle lines 14-16, 111-113, 135-143), `core_top.sv` (PLLs 634-640, memory 682-723), `psx_mister_psx_top_resource.vhd` (option tie-offs 293-340), the patched module directories listed in 2.1.

Saturn (`SAT:`): `Saturn.qsf` (speed profile), `sizing/saturn_full.qsf`, `sizing/output_files_saturn_full/saturn_full.map.rpt` (lines 552-570 summary, 581 onward hierarchy). Existing Saturn docs: `docs/saturn-architecture.md`, `docs/pocket-platform.md`.
