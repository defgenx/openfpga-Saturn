# Game impact of dropping Saturn features (for the Pocket port)

Purpose: rank features by how many games depend on them, so the port drops the ones that break the fewest games.
ALM figures come from `docs/sizing.md` (full-Saturn map estimate, 28,813 ALMs vs 18,480 on the Pocket FPGA),
`docs/cd.md`, `docs/scsp.md`, `docs/vdp1.md`, `docs/sh2.md`. ALUT-to-ALM conversion uses the same x0.687 factor as
sizing.md. "?" means no measurement exists.

## Read this first: what the evidence can and cannot say

- **Verified** = read in source code or a maintained project document (cited). Mostly these are lists of games that
  *needed a fix or special handling* in an emulator. That shows a game *uses* a feature; it does not prove the game
  *breaks without it*.
- **Inference** = reasoning from hardware semantics or from the absence of reports. Marked "inf".
- **No source gives "% of the library that uses feature X".** Nobody has instrumented the whole ~1,000-title library.
  Counts below are "named games found", a lower bound. Where a count looks small, that is a property of the
  documentation, not proof the feature is rare. Treat "confidence" accordingly.
- The three mature emulators (Mednafen/Beetle Saturn, Ymir, Kronos/Yabause) are all **HLE for the CD block and HLE
  for the SMPC**. That is the strongest single piece of evidence in this document.

Sources (local shallow clones in `/Users/adelvecchio/Documents/workspace/_ref/`, read as data):

| Tag | Source |
|---|---|
| [M-db] | `beetle-saturn/repo/mednafen/ss/db.c` (game DB: carts, "horrible hacks") from https://github.com/libretro/beetle-saturn-libretro |
| [M-prob] | `.../mednafen/ss/notes/PROBLEMATIC-GAMES`, `SCSP-FM-GAMES`, `WIDESCREEN-GAMES` |
| [M-cdb] | `.../mednafen/ss/cdb.c` header comment "Finicky games" |
| [Y-log] | https://github.com/StrikerX3/Ymir `CHANGELOG.md` (clone: `ymir/repo`) |
| [Y-dev] | Ymir `docs/dev-notes/` (`finicky-games/*.txt`, `rarely-used-features.txt`, `game-quirks.txt`, `game-bugs.txt`) |
| [Y-842] | Ymir issue #842 "Dynamic recompiler for SCU DSP" (`gh issue view 842 --repo ymir-emu/Ymir`) |
| [SX] | https://segaxtreme.net/threads/scu-dsp-for-matrix-transformation.24242/ (forum, claims from memory/Yabause debug view) |
| [HP] | https://hiddenpalace.org/News/Angels_with_Burning_Hearts:_Burning_Rangers_Prototype |
| [MiSTer] | https://github.com/MiSTer-devel/Saturn_MiSTer issues (titles only, scanned) |
| [mdocs] | this repo's `docs/*.md` |

Not reachable/used: Mednafen forum bug list (HTTP 503), MAME driver (HTTP 403), Sega VDP2 manual (definitions only,
not consulted beyond general knowledge). Yabause/Kronos source holds almost no game-specific notes (checked
`kronos/repo`: no game names near DSP/CD code), so Kronos counts as "HLE exists and is the reference for many
games" only.

---

## 1. CD block

Cost today: SH-1 + 64 KB firmware RAM 3,146 ALMs + 56 M10K, YGR019 325 ALMs [mdocs sizing.md]. `docs/cd.md` also
holds the Pocket CD drive adapter (`cdd_pocket` ~1,200 ALMs): `cdd_link`+`cdd_ctl` (~700) exist only to feed the
SH-1 and would go with it; `cd_stream`/`cd_feed` (~500) survive an HLE block. An HLE CD block model must be added
(cost unmeasured; `cd.md` section 8 guesses a SERV-style soft CPU firmware of 16-32 KiB = 13-26 M10K, ALMs ~300 +
state, **unbuilt**). Net ALM saving estimate (inference): about **3,000-3,500 ALMs and ~30-43 M10K**.

| Feature | Games known to depend | Symptom without it | Conf. | Sources |
|---|---|---|---|---|
| LLE CD block (real SH-1 firmware) vs HLE | Ymir shipped HLE only until it added an optional LLE mode; the release notes list what LLE fixed *at that time*: Gunbird (music stops on pause), Mr. Bones, Pocket Fighter (A/V sync), X-Men: Children of the Atom, X-Men vs. Street Fighter and Marvel vs. Street Fighter (hang at Capcom logo), Primal Rage (USA), Hop Step Idol, Hissatsu Pachinko Collection, DonPachi, Shichuu Suimei Pitagraph, Deroon Dero Dero, Sol Divide, "probably more": **~13 named** (verified). Almost all were later fixed in the HLE as well (see next row). Mednafen (HLE only) lists **~20 "finicky" titles** that need specific CDB behaviour: Astal, Batman Forever, Break Point, DJ Wars, Dragon Force II, Hop Step Idol, Independence Day (USA), Jung Rhythm, Magical Drop III, NBA Action, Steam-Heart's, Tactics Ogre, Taito Chase H.Q., Tenchi Muyou! Ryououki Gokuraku, Tennis Arena, World Cup France '98, BIOS CD player, Gremlin demo disc. | Boot hang, FMV hang/stutter, music not resuming, loading stalls. Visible, usually a hard hang at a specific point. | high that HLE covers the large majority (3 independent HLEs ship); med on the exact count of games that remain LLE-only (unknown, probably <1%) | [Y-log] lines 76-93, 454-470; [M-cdb]; [M-prob] "Rely on CDB..." sections |
| HLE nuance: seek/Busy timings | Digital Dance Mix Vol. 1 (needs a realistic seek time), Batman Forever, Jung Rhythm (seek too fast breaks), Magical Drop III, Tennis Arena, Time Bokan. HLE fixes in Ymir: Amagi Shien, Brain Battle Q, Hebereke's Popoitto, Hissatsu Pachinko, WanChai Connection, Magical Drop III intro, Legend of K-1 FMVs, Chou Jikuu Yousai Macross, Dragon Force logo FMV, LifeScape, Mahjong Yon Shimai, Shellshock, Senken Kigyouden, Sonic Jam music, Panzer Dragoon II Zwei (buffer exhaustion softlock) | These are bugs of an *imperfect HLE*, not of HLE as a concept. Each was a hang or missing FMV/music. The HLE must model Busy status, seek delay, pause-on-buffer-full and resume. | high | [Y-log] 76-93, 215-239; [Y-dev] finicky-games/cdblock-timings.txt; [M-prob] |
| Filters / selectors with real file-number or FAD filtering | NiGHTS into Dreams and Christmas NiGHTS (intro FMV split by subheader file number: 2 filters chained pass/fail), Digital Dance Mix Vol. 1; Ultraman Zukan (fail-output filter) | Missing FMV audio or video, broken title graphics | high | [Y-dev] cdblock-nontrivial-filters.txt; [Y-log] 683 |
| Mode 2 Form 2 sectors, "Get Sector" with get length < 2324, Get/Calculate Actual Size, read FIFO | Chisato Moritaka - Watarase Bashi, Digital Dance Mix Vol. 1 (FMV/animation corrupt otherwise) | Corrupt FMV | high | [Y-log] 76-79, 217-219 |
| Put Sector Data command | Virtual On Cyber Warriors (replay buffers, 2340 B/sector), Sega Ages After Burner II, Fantasy Zone, OutRun, Space Harrier | Replay/saves of replay broken, or crash on replay | med | [Y-dev] cdblock-put-sector.txt; [M-cdb]; [Y-log] 77 |
| Copy protection / disc authentication | Gremlin Interactive demo disc needs commands rejected during authentication. No game-level "copy protection depends on SH-1 firmware" case found in any source. | Boot fails on that disc | med (absence in sources, inf) | [M-cdb] |
| MPEG card commands | The MPEG card is an add-on; Mednafen has `mpeg.c`. Games that *require* it: not found in sources. Lunar SS MPEG (T-27904G) and Sega's MPEG-aware titles use it for FMV; without a card they fall back or play no FMV (inf). Out of scope for a Pocket port (no card). | No MPEG FMV | low | [M-db] backup list names Lunar MPEG; no further source |
| CD-DA / index 2+ seek / CD audio | NBA Action, Taito Chase H.Q. need seek to index 2+; Astal, Steam-Heart's, BIOS CD player need Play/Seek nuances. CD audio itself (Pocket side) must stay. | Music missing or reloads | high | [M-cdb]; [Y-log] 686 |

Observation (verified): MiSTer, which runs the real SH-1, still has open per-game CD issues (e.g. Elevator Action
Returns BGM delay #526, Digital Dance Mix #508), so LLE is not a guarantee either. [MiSTer]

---

## 2. SMPC (system manager + peripheral controller)

Cost today: HMCS400 + `smpc.mif` 644 ALMs + 2 M10K [mdocs sizing.md]. The ST-V build already has `SMPC_HLE` (size not
measured). Mednafen, Ymir, Kronos are all HLE. Net saving estimate: **~400-550 ALMs** (inf, HLE size unmeasured).

| Feature | Games known to depend | Symptom without it | Conf. | Sources |
|---|---|---|---|---|
| LLE (HMCS400) vs HLE | None identified that *need the microcontroller*. What games need is correct **timing** of command completion and INTBACK, which an HLE must reproduce: Akumajou Dracula X, Virtual Hydlide (stuck on SEGA logo if INTBACK instant), Soukyuu Gurentai (no input), Discworld (INTBACK must time out at VBlank IN), Virtua Racing (status report before VBlank OUT, peripheral report after), Magic Knight Rayearth and F1 Challenge and Primal Rage (dual-issued SMPC commands), Langrisser V (startup timing), Nissan Over Drivin' GT-R, Assault Rigs, Destruction Derby (EU), Fighting Vipers (JP rev A), Fist, Idol Mahjong Final Romance R, Quake (EU boot), Guardian Heroes / Gekitotsu Koushien / Madden 97 EU / Ten Pin Alley / UEFA Euro 96 (SSHON when slave already on): **~20 named** (verified), all fixed in HLEs by delay tuning. | Hang on logo, no controller input | high that HLE is sufficient (3 emulators); med on completeness | [Y-dev] finicky-games/smpc-timings.txt; [Y-log] 128-142, 583-587, 805; [M-prob] "dual-issuing", "Misc" |
| Peripheral polling modes (INTBACK optimised/normal, SH-2 direct mode, TH/TR) | Golden Axe The Duel (direct mode, exact fixed bits `1 0 0`, else boots to BIOS), World Heroes Perfect, Touge King, Chaos Control Remix, Father Christmas (TH control), Virtua Gun games (PDR1/2 update on EXLE), Mouse | Controller/gun not recognised | high | [Y-dev] smpc-sh2-direct-mode.txt; [Y-log] 142, 710 |
| RTC / SMPC memory | Akumajou Dracula X reads RTC when saving (save works either way). Region/settings kept in SMPC memory (Ymir persists it). | Wrong date in saves, language reset | med | [Y-dev] game-quirks.txt; [Y-log] 38-43 |
| CD on/off, reset, SSH on/off, clock change commands | Needed by every game (SSHON, SYSRES, CKCHG320/352). Not droppable, only re-implemented. | | high | inf |

---

## 3. SCU DSP

Cost: 762 ALMs, 5 M10K, 3 DSP [mdocs sizing.md]. Biggest single-feature cut that is not a whole chip.

| Feature | Games known to depend | Symptom without it | Conf. | Sources |
|---|---|---|---|---|
| SCU DSP execution | Verified (emulator maintainers): **Grandia (FMVs push SCU DSP to the limit), all WipEout games, Quake** need fairly accurate DSP timing [Y-842]; **Burning Rangers** (SCU DSP + SCSP DSP decode ADX audio, per HP) ; Shining Force III Scenario 2 and Dragon Force II (DSP program-RAM DMA; Mednafen bug list, seen only via search snippet, page 503); Sonic R, Burning Rangers, Quake (SX, claimed by a forum poster from Yabause debug view); Fighters Megamix ("looks like", SX, unverified). **~9 named.** Counter-evidence: Elan Doree and NiGHTS reportedly do not use it (SX). Ymir fixed "Quake crash on boot" by DSP ALU state. Library-wide share: **unknown**; SGL's matrix library can use it, and SX says few games used SGL (not a count). Inference: probably well under 10% of titles, but they include prominent 3D/FMV titles. | If writes to the DSP program control are ignored: games that poll the DSP end flag/interrupt **hang**; games that use it for geometry show **missing or wrong 3D**; Grandia/WipEout/Quake FMV or 3D broken. Not graceful: a stub that completes instantly would not give correct results. | low-med on count, high that these games use it | [Y-842]; [HP]; [SX]; [Y-log] 961 |
| SCU DSP DMA into program RAM | Shining Force III Sc.2, Dragon Force II | Wrong/halted DSP programs | low (search snippet) | search result of Mednafen forum thread, not read |

Inference: cutting it is the biggest per-feature ALM saving among non-LLE items, but it silently breaks several
well-known titles (Grandia, WipEout x3, Quake, Burning Rangers, Sonic R). A cheaper alternative worth costing:
time-multiplex the DSP (it is only 321 registers, the cost is mostly the 48-bit datapath and 3 DSP blocks).

---

## 4. SCSP (sound) and the 68K

Cost: SCSP 2,462 ALMs total; **DSP is ~690 ALUT / 441 regs, about 474 ALMs** (ablation in `docs/scsp.md` section 2);
68K read mux ~320 ALUT. FX68K 1,965 ALMs, 6 M10K.

| Feature | Games known to depend | Symptom without it | Conf. | Sources |
|---|---|---|---|---|
| SCSP DSP (reverb, chorus, effects) | No library count exists. The standard Sega sound driver exposes DSP effects; game music commonly uses reverb (inf). Essential-audio use found: **Burning Rangers (ADX decode via SCU DSP + SCSP DSP)** (HP); **Grandia FMVs** push the SCSP DSP "to the limit" along with SCU DSP and both SH-2s (Y-842: also a performance sink). Ymir touched SCSP DSP for Sakura Taisen 2 audio and Burning Rangers audio issues (issues #64, #129, titles only). | Reverb/effects missing: sound is dry, usually acceptable. Burning Rangers and Grandia FMV audio would be wrong/missing. | med that reverb-only is a soft loss; low on count | [mdocs] scsp.md; [Y-842]; [HP] |
| SCSP FM synthesis (slot modulation) | Mednafen's list of "incomplete" FM users: ~30 titles with music FM (Assault Suit Leynos 2, Blue Seed, Dragon Force, Hang On GP, Hideo Nomo WSB, J.League Pro Soccer Club, Kaitou Saint Tail, Langrisser III, Magic Knight Rayearth, NiGHTS, Sakura Taisen 1/2, Sega Rally, Shining Wisdom/Holy Ark, Shinobi X, Taito Chase H.Q., Evangelion, Victory Goal...) plus ~45 titles with FM in effects/jingles (Burning Rangers, Clockwork Knight 1/2, Guardian Heroes, Lunar, Sonic Jam, Sonic 3D, Virtua Racing, ...). **~75 named, list is "incomplete"**. | Wrong timbre of some instruments/jingles. No hang. | high (list is first-hand) | [M-prob] SCSP-FM-GAMES |
| SCSP noise / short-waveform / 18-bit DAC | Daytona USA (18-bit DAC enable), Sega Ages OutRun (short waveform mode for engine) | Subtle audio roughness missing | med | [M-prob] "rarely-used SCSP features" |
| Unaligned 16-bit sample start | System menu chime, Radiant Silvergun (instruments on most songs) | Wrong notes | med | [Y-dev] scsp-unaligned-16-bit-samples.txt |
| 68K cycle accuracy | Mednafen notes 68K waitstates caused by PCM/DSP RAM accesses are unemulated and "music plays a teensy bit too fast" in some game (unnamed); NBA Jam Extreme throws an M68K exception under Mednafen (cause unknown); Time Bokan freeze maybe "DMA into SCSP RAM too fast". Ymir's "approximate bus access timings" for M68K+SH-2 fixed softlocks in Resident Evil, Guyferd, Densha de Go; Virtua Racing needs the 68K to answer through SCSP RAM before a second SCU DMA. | A less accurate 68K appears **tolerated by most games** (Mednafen's 68K is not cycle-exact bus-wise); a few softlocks/handshake games | low-med (inf from Mednafen being accepted without 68K bus-accurate timing) | [M-prob]; [Y-log] 473; [Y-dev] race-conditions.txt; scsp.inc TODO comment |

Saving candidates: SCSP DSP ~474 ALMs (unquantified count of games), smaller 68K core: unmeasured (FX68K is
1,965; a ~900-1,000 ALM alternative would save about half, inf).

---

## 5. VDP2

Cost: 6,170 ALMs, 7,822 registers, 12 DSP, 4 M10K [mdocs sizing.md]. **No per-feature ALM figure exists** (VDP2 is
one flat module; sizing.md only suggests "drop RBG0/RBG1 path"). Every "?" below is genuinely unmeasured.

Game evidence is mostly from Ymir fixes, i.e. *games observed to use a feature*. Counts are floors.

| Feature | Games known to use | Symptom without it | Visibility | Conf. | Sources |
|---|---|---|---|---|---|
| Rotation BG RBG0 (single) | Many 3D-ish backgrounds: Panzer Dragoon II Zwei (sky), Sonic Jam (Sonic World), NiGHTS (boss ground), Radiant Silvergun, Gale Racer, Need for Speed, Road & Track NFS, Savaki, World League Soccer 98, Athlete Kings, Race Drivin', Last Bronx, Grandia FMV (RBG used for video). Mednafen comment: "RBG ... the vast majority of **2D** titles do not use it". ~15 named | Missing floors/skies/FMV | very high | high | [Y-log] 624,633,637,308,975,897,731; vdp2.c comment |
| RBG1 (second rotation layer, RBG0+RBG1 simultaneously) | Image Fight (uses both during gameplay, Mednafen note); Houkago Ren'ai Club (RBG1 only); Gale Racer (RBG1 VRAM access); Mednafen note on Shienryu rotation | Missing second layer; for RBG1-only games the whole BG | very high for those | med (3 named) | [M-prob] games.txt; [Y-log] 622, 308 |
| Two rotation parameter sets A/B and per-line switching, rotation coefficient table (VRAM or CRAM) | Coefficient tables: FIFA Road to World Cup 98 uses **CRAM** as coefficient table; per-dot coefficient: Radiant Silvergun, Sonic R (warped ground in 2P, "rotation table rework"), Panzer Dragoon II Zwei (rot param mode / line color), Savaki. | Wrong perspective on floors | very high | med | [Y-dev] rarely-used-features.txt; [Y-log] 406, 736, 624 |
| Line colour screen insertion; per-line back screen | Doukoku Soshite, Find Love 2, Astal (fog), Athlete Kings, World League Soccer 98 (RBG line colour), Sonic Jam, Sakura Taisen FMVs (back screen ratio), Sega Rally boot | Wrong colour on text boxes, fog, shading | medium | med | [Y-log] 309,514,728,608,614,637,902,819 |
| Colour calculation: ratio, extended (2nd screen) calc, special colour calc, gradation | Sonic R (water, special CC), The Story of Thor (translucent UI, per-dot special CC bitmap), Astal (gradation fog), Saturn Bomberman (gradation boss arena), Gungriffon (mesh+CC), Mega Man X4 (offset), CC window: Bottom of the 9th (FMV only), Sega Sample Game | Opaque instead of translucent: visible but not game-breaking | medium | med | [Y-log] 151,171,306,307,818,977; [Y-dev] |
| Special priority (per-dot) | Mr. Bones, Waku Waku Puyo Puyo Dungeon | Wrong layer order | high | med | [Y-log] 407, 820 |
| Shadow (sprite shadow, normal/MSB shadow) | Tokyo Shadow, Blue Seed Kushinada, Last Bronx (stretched shadows), Metal Black | Missing or oversized shadows | low-med | med | [Y-log] 399,724,731 |
| Sprite window / window logic (2 windows + line windows + sprite window) | Panzer Dragoon II Zwei (illegal line-window tables Ep3, misaligned windows), Panzer Dragoon Saga (orange swirl via line window), Radiant Silvergun (rotation transition), Snatcher, Metal Black (sprite window boss effect), Albert Odyssey (dialogue boxes) | Wrong clipping, missing effects | medium-high for these | high (documented) | [Y-dev] vdp2-bad-window-params.txt; [Y-log] 617,620,623 |
| Line scroll / vertical cell scroll | Rayman, Sonic Jam (Sonic 2 special stage), Street Fighter Zero 1/2/3, Vampire Hunter/Savior, Cotton 2, Marvel Super Heroes (mid-frame SCY writes), Street Fighter Real Battle on Film | Warped/wrong scroll | high | high | [Y-dev] vdp2-vertical-cell-scroll.txt, vdp2-midframe-effects.txt, vdp2-illegal-cycxn-params.txt; [Y-log] 833 |
| Mosaic | Race Drivin' (Time Warner logo, RBG mosaic), Grandia (text boxes/portraits touch the mosaic counter) | Missing logo effect | low | low (2 named) | [Y-log] 897, 974 |
| NBG0/1 reduction (zoom), bitmap NBGs, 16M-colour (RGB888) | Bitmap + RGB888: Shin Kaitei Gunkan FMV, Capcom Generation 5 gallery, Doukyuusei-if, NFL QB Club 97 title, Baroque Report, Lunar/Hakaider (FMV bitmap), Funky Fantasy. Zoom: vertical cell scroll with zoom (Ymir 835). RGB888 bitmap is the usual FMV path. | FMV/galleries broken | very high for FMV | med | [Y-dev] vdp2-illegal-cycxn-params.txt; [Y-log] 438,829,722,723 |
| High-res 640/704, exclusive modes, double-density interlace | Sonic Jam menu (hi-res + double interlace + VDP1 DIE/DIL), Astra Superstars (gaps in hi-res), Grandia FMVs (deinterlaced RBG), Pro Pinball: The Web, Shienryu, Virtual Mahjong 2, Resident Evil options, Last Bronx, Resident Evil (VDP1 DIE/DIL), Virtua Fighter 2? (inf, not sourced) | Wrong resolution, missing half image | medium | med (menus, FMV, some gameplay) | [Y-log] 250,605-625,726,815; [Y-dev] game-quirks.txt |
| Illegal VRAM access cycle patterns (not a feature; a **fidelity requirement**) | ~14 named: SF Zero 1-3, Vampire Hunter/Savior, Rayman, Capcom Generation 5, Battle Arena Toshinden Remix, Shichuu Suimei Pitagraph, Lunar SS, Hakaider, Shin Kaitei Gunkan, World Heroes Perfect, Akumajou Dracula X, Alien Trilogy, Daytona CCE, Fighters Megamix | Shifted/duplicated graphics | medium | high | [Y-dev] vdp2-illegal-cycxn-params.txt; [M-prob] |

---

## 6. VDP1

Cost: 2,767 ALMs, 2,370 regs [mdocs sizing.md]; function profile in `docs/vdp1.md` section 2: gouraud 541 ALUT
(~372 ALM), colour calc + FB write 274 ALUT (~188 ALM), texture stepping 469, line engine 445, rotation/erase/clip
~279 ALUT (+453 regs).

| Feature | Games known to use | Symptom without it | Conf. | Sources |
|---|---|---|---|---|
| Gouraud shading | Nearly all 3D (Virtua Fighter series, Sega Rally, Daytona, Sonic R, Burning Rangers). Count not sourced. Saving ~372 ALMs. | Flat polygons: ugly but playable | med (inf from genre) | [mdocs] vdp1.md |
| Mesh, half-transparency, shadow, half-luminance | Mesh/transparent: Gungriffon, Bulk Slash, Akumajou Dracula X, Rayman, Grandia; shadows via mesh/MSB. Ymir added a "transparent mesh" enhancement; mesh on real hardware is a checkerboard. | Missing shadows/translucency | med | [Y-log] 306,484,589,618,635 |
| 8-bit framebuffer / rotation FB mode (VDP1 rotation) | Shienryu (VDP1 output rotation probably, Mednafen note), NBA Live 98 (8-bit sprite data with VDP2 type 1 mismatch), I Love Mickey/Donald (VDP2 sprite type 8). Hi-res VDP1 = Sonic Jam, Astra Superstars. | Wrong sprites in those | low | [M-prob] games.txt; [Y-dev] vdp-sprite-data-mismatch.txt |
| FB erase/swap timing (HBlank-accurate), draw timing | **~14+ games sensitive**: DragonHeart, I Love Donald Duck, Marvel Super Heroes, Panzer Dragoon 1, PhantasM, Powerslave, Sega Ages After Burner II / OutRun, Sonic R, Soviet Strike, Virtua Cop 2, Virtua Fighter 1, Yellow Brick Road, Virtua Racing and Dragon Ball Z Shinbutouden (freeze if commands too fast) | Flicker, corrupted sprites, freezes | high | [Y-dev] vdp1-sensitive-video-timings.txt, vdp1-command-timings.txt |
| Slow CPU/DMA writes to VDP1 VRAM stalling the draw | ~25 titles in Mednafen DB `HORRIBLEHACK_VDP1RWDRAWSLOWDOWN`: Albert Odyssey, All-Star Baseball 97, Arcade's Greatest Hits x2, Burning Rangers x3, Falcom Classics II, Frank Thomas BHB x2, Herc's Adventures, Tokimeki Memorial, Kaitei Daisensou, In The Hunt, Virtua Fighter / Remix x7 regional, Whizz x2, Wolf Fang SS, Yu-No | Flicker/tearing, partial corruption | high | [M-db] hhdb; [M-prob] |
| User clipping / system clipping, distorted sprites, polylines | Whizz relies on undefined user clipping state (Mednafen); Virtua Fighter 2 (13-bit vertex overflow), Sega Rally and Sonic R (infinite command-list loops) need correct draw cycle limits | Wrong clip, freezes | med | [M-prob]; [Y-dev] vdp1-bad-commands.txt |
| FB read/write by CPU/DMA (rare) | Grandia combat (SCU DMA copy of FBRAM to VDP2 NBG1 every frame), Grandia hang fix `VDP1VRAM5000FIX` | Combat scenes broken, end-of-disc-1 hang | high | [Y-dev] rarely-used-features.txt; [M-db] |

---

## 7. SH-2, SCU, DMA

Cost: each SH-2 ~4,000 ALMs (SH_core ~1,485, cache ~668, BSC ~380, DIVU ~365, DMAC ~330); SCU 2,991 incl. DSP.

| Feature | Games known to depend | Symptom without it | Conf. | Sources |
|---|---|---|---|---|
| Slave SH-2 | Used by most 3D titles (VF1 race condition between both CPUs; Fighters Megamix; DoDonPachi; NiGHTS uses slave cache as scratch). **Fraction not sourced.** Reference only: not to be dropped. | | med | [Y-dev] race-conditions.txt, sh2-cache.txt, game-bugs.txt |
| SH-2 WDT used as interval timer | **No game found** in any source (Ymir/Mednafen implement it but list no dependent title). `docs/sh2.md` keeps it for lack of an owner decision. Saving is only ~80 ALUT x2 (~110 ALMs). | Unknown | low (absence of evidence) | [mdocs] sh2.md; [Y-log] 887,967 |
| Cache purge exactness / cache emulation | Mednafen: **~30 games** rely on cache-line replacement coherency (Area 51, Clockwork Knight 2, DeJig, Doraemon, Dragon Force II, Fighting Vipers, Golden Axe The Duel, House of the Dead, Mr. Bones, Street Fighter Zero/Zero 3, Super Puzzle Fighter II, Thunder Force Gold Pack 1+2, WipEout, World Series Baseball...), plus Astal (data cache incoherency), Mr. Bones (execute from cache), NiGHTS (slave cache as RAM). Ymir force-enables cache for Dino Island, Dragon Force II, Hissatsu!, Gals Olympos. Grandia needs "full cache emulation" at disc 1 end (Mednafen db.c header). | Hangs/garbage | high | [M-prob]; [Y-log] 95-103; [M-db] header |
| DIVU shared between CPUs | VF1 shows both SH-2s doing matrix math simultaneously; contention overlap "likely" (sh2.md). Sharing would stall one CPU up to 39 cycles. | Timing change; VF1-type race outcomes | low | [mdocs] sh2.md |
| SH-2 DMAC / DMA bus hogging | Another Memories, Device Reign, Real Sound, Resident Evil, SD Gundam G Century S, Shienryu, Super Tempo, Tennis Arena, Tilk, Yuukyuu Gensoukyoku x4, Zero4 Champ (SH-2 DMA bus-hogging, Mednafen). Fighters Megamix needs NOSH2DMAPENALTY. | Hang | high | [M-prob] |
| SCU DMA semantic (hogging, delay, indirect mode) | Jung Rhythm, Powerslave, Virtual On CT (hogging); Advanced V.G., DeJig x3, Virtua Racing (not instantaneous); Johnny Bazookatone/Virtua Cop 1+2 (SCU DMA into VDP1 VRAM stalls VDP1) | Hang or garbage | high | [Y-dev] scu-dma.txt; [M-prob] |
| SCU interrupt mask/pending semantics | Rayman | Missed input | high | [Y-dev] scu-interrupts.txt |

---

## 8. Cartridges

Cost: CART 34 ALMs (10 with no cart), i.e. **~24 ALMs**; the cost is external RAM/SDRAM mapping, not logic.

| Feature | Games | Symptom without it | Conf. | Source |
|---|---|---|---|---|
| ROM cart | King of Fighters '95 (JP+EU), Ultraman Hikari no Kyojin Densetsu = **3 DB entries** (3 games) | Does not boot | high | [M-db] |
| 4 MB RAM cart (hard requirement) | Dungeons and Dragons Collection, Final Fight Revenge, Marvel Super Heroes vs. Street Fighter, Street Fighter Zero 3, Vampire Savior, X-Men vs. Street Fighter = **6 required**, +Pocket Fighter and Vampire Savior demo (optional) = 7 DB entries | Does not boot or hangs | high | [M-db] |
| 1 MB RAM cart (hard requirement) | Fighter's History Dynamite, Groove on Fight, Metal Slug, Real Bout Garou Densetsu (+Special, +demo; needs 1 MB, 4 MB breaks it), Samurai Spirits Amakusa and Zankurou, KOF '96, KOF '97, Waku Waku 7, Tech Saturn 1997.6 = **11 required**; 11 more recommended/optional (Astra Superstars, Cotton 2, Cyberbots, Marvel Super Heroes, Friends, ...) = 22 DB entries | Required titles do not boot; recommended ones lose animation/frames | high | [M-db] |
| 6/16 MB dev DRAM | Heart of Darkness prototype only | n/a | high | [M-db], [Y-log] 453 |
| Backup RAM cart | Recommended (saving): Dezaemon 2, Galaxy Force II (replays), Hexen x3 (save) in DB; many more commented out (`#if 0`). **Die Hard Trilogy crashes with a RAM cart** present. Internal backup RAM covers normal saves. | Saves fall back to internal memory | high | [M-db] |
| Action Replay / cheat cart | **No source found.** Not in DB; unnecessary for the library. | | low | inf |

The entire cart total is ~**17 hard-requirement entries (JP-only fighting games, ~1.6% of the library by inf)**; the
logic saving is only ~24 ALMs, so dropping carts only makes sense for memory-map/BRAM reasons, not ALMs.

---

## 9. Overall ranking: safest to drop first

Order = lowest game impact per ALM saved. Saving column uses repo numbers; "?" = not measured.

| # | Cut | Est. ALM saving | Games affected (verified floor) | Failure mode | Conf. | Verified / inference |
|---|---|---|---|---|---|---|
| 1 | CD block LLE (SH-1 + YGR019 + `cdd_link`/`cdd_ctl`) replaced by an HLE model | ~3,000-3,500 net (3,470 removed, ~13-26 M10K for firmware/state added; ~43 M10K freed otherwise) | ~13 LLE-only at Ymir's LLE launch, ~20 "finicky" in Mednafen, all addressed in some HLE; most today. Residual risk is HLE quality, not HLE vs LLE. | Hang at specific FMV/loading points | high on feasibility, med on residual count | Verified: 3 HLEs exist and are the default. Inference: net ALMs, since HLE is unbuilt |
| 2 | SMPC HMCS400 -> HLE (reuse `SMPC_HLE`) | ~400-550 | None need the MCU; ~20 need timing which HLE must replicate | No input / logo hang if delays wrong | high | Verified: Mednafen, Ymir, Kronos HLE. ALM net is inference |
| 3 | Cart variants: drop ROM cart (3 games), 4 MB cart (7), keep 1 MB (11 required) and internal backup RAM | ~24 ALMs (+ external mapping) | 3 + 7 | Does not boot | high | Verified (DB). Saving trivially small |
| 4 | SH-2 WDT + MSBY | ~110 (both CPUs) | none found | Unknown if a title uses it as interval timer | low | Absence of evidence (inf) |
| 5 | SCSP DSP (reverb/effects) | ~474 ALMs, 441 regs | unquantified; essential use: Burning Rangers, Grandia FMV | Reverb missing everywhere; two games' special audio | med-low | Saving verified (scsp.md ablation); game count unknown |
| 6 | SCU DSP | 762 ALMs, 5 M10K, 3 DSP | ~9 named (Grandia, WipEout x3, Quake, Burning Rangers, Sonic R, SF III Sc.2, Dragon Force II?) | Hang/missing 3D/FMV | med | Verified usage; library fraction inferred small |
| 7 | 68K -> smaller less-accurate core | ? (FX68K 1,965; alt unmeasured) | softlock-class titles (Virtua Racing handshake, Time Bokan, NBA Jam Extreme under Mednafen) | Rare softlock, pitch drift | low | Inference; unmeasured |
| 8 | VDP2 RBG1 / second rotation set A/B / coefficient-table variants | ? (VDP2 flat; 12 DSP blocks partly RBG) | Image Fight, Houkago Ren'ai Club, Gale Racer, FIFA 98, ~6+ | Missing layer | low | Inference; need VDP2 ablation run |
| 9 | VDP2 mosaic, per-line back screen, extended colour calc, gradation, CC windows | ? small | handful (Race Drivin', Astal, Saturn Bomberman, Story of Thor, Sega Sample...) | Cosmetic | low-med | Inference |
| 10 | SCSP FM mode + noise | ~50 ALUT MDCalc (~35 ALMs) + muxing | ~75 named (incomplete) | Timbre only | high on usage | Not worth it: biggest game count, tiny saving |
| NO | Cache purge flip-flops -> epoch approximation (docs/sh2.md) | ~250 ALUT per CPU (~340 ALMs both) | ~30+ | Hangs | high | Verified list; do not do |
| NO | Slave SH-2 time-sharing | ~1,500 ALUT | n/a | Not feasible at timing | high | docs/sh2.md |

### Top 10 safest cuts (impact in one line each)

1. CD block LLE -> HLE: saves ~3,000+ ALMs; breaks ~0-20 titles only if HLE is imperfect (all three reference emulators are HLE).
2. SMPC LLE -> HLE: saves ~500 ALMs; no game needs the microcontroller, ~20 need command/INTBACK delays reproduced.
3. ROM carts (KOF95 x2, Ultraman): ~0 ALMs, 3 games.
4. 4 MB RAM cart (6 required JP Capcom titles): ~0 ALMs, 6-7 games.
5. WDT/MSBY: ~110 ALMs, no known title (low confidence).
6. SCSP DSP: ~474 ALMs, reverb lost everywhere; Burning Rangers and Grandia FMV audio broken.
7. SCU DSP: ~762 ALMs + 5 M10K + 3 DSP; ~9 named titles (Grandia, WipEout, Quake, Burning Rangers, Sonic R) hang or lose 3D.
8. 68K swap to a smaller core: unmeasured saving; a few softlock/handshake titles (inference).
9. VDP2 RBG1 / A-B switching: unmeasured; ~6 named titles lose a layer.
10. VDP2 mosaic/gradation/CC window/extended colour calc: unmeasured, small; cosmetic in ~5-10 named titles.

### The 5 features that must stay

1. Both SH-2s with real cache, DIVU, DMAC and FRT/INTC (cache exactness: ~30 titles; VF1/Megamix race conditions; DMA bus hogging ~15 titles).
2. SCU DMA and interrupt semantics (hogging, non-instant completion, pending-vs-mask): ~15 titles hang otherwise.
3. VDP1 full draw pipeline with erase/swap timing and VRAM-write draw penalty (~14 timing-sensitive, ~25 slowdown-hack titles), gouraud, mesh, clipping.
4. VDP2 core: NBG0-3, RBG0 with coefficient tables, priority/colour calc/windows/line scroll/vertical cell scroll, bitmap and RGB888 for FMV, accurate VRAM cycle patterns (~14 illegal-cycle titles).
5. SCSP PCM/EG/FM sound engine with the 68K, plus CD audio data path and INTBACK/SMPC command timing (FM in ~75 titles; without INTBACK nothing boots).

## 10. Gaps and next measurements

- Per-feature VDP2 ALM cost (ablate rotation path, RBG1, windows, mosaic) via the same Quartus map flow as `docs/scsp.md`.
- Build and size an HLE CD block and `SMPC_HLE` to replace the inference numbers in rows 1 and 2.
- Library-wide counts: run the 1,000-title library through an instrumented emulator (Ymir has a debugger) and log DSP starts (SCU/SCSP), RBG1 enable, WDT enable, mosaic enable, per-title. This is the only way to turn the "named games" into real percentages.
- Read the Mednafen forum bug list (503 at time of search) and the Ymir issue tracker for DSP/RBG1 labels.
