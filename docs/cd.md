# CD drive for the Pocket (replaces Main_MiSTer's CDD)

Status: simulated against a model of Main_MiSTer's `saturncdd.cpp`; **not synthesised with Quartus, not run on
hardware, not connected to the Saturn core** (the core is not integrated yet). Everything below that says
"estimate" is from yosys `synth_intel_alm` (Cyclone V mapping, `-noflatten`), not from the Quartus fitter.

## 1. Layers

```
Saturn CD block (SH-1 + YGR019)
        |  CD_COMCLK/COMREQ_N/COMSYNC_N/CDATA/HDATA       CD_DATA/CD_CK/CD_AUDIO
  +-----+--------------------------------------------------+
  | cdd_pocket   hps2cdd-compatible adapter (thin)          |
  |   cdd_link   SH-1 serial link + two 16x8 packet RAMs     |  src/fpga/core/cd/
  |   cdd_ctl    CDD command set, status packets, 75 Hz tick |
  |   cd_stream  TOC, prefetcher, sector ring, sector feed   |  <- no SH-1 dependency
  |     cd_feed, cd_toc_ram                                  |
  +----+-----------------------------+-----------------------+
       | APF bridge (clk_74a)        | 16-bit async SRAM
```

`cd_stream` is the part that survives a later high-level CD block: it takes TOC lookups (`lk_*`), "restart
prefetch at FAD" (`pf_*`) and "start streaming the oldest ready sector" (`sd_*`) and produces the 16-bit word
stream. `cdd_ctl` is one possible client; a CPU-based CD block model would be another (MMIO onto the same ports).
`cdd_link`/`cdd_ctl` are the only SH-1-specific blocks.

`cdd_pocket` keeps the core-facing ports of `HPS2CDD` (`CLK, RST_N, CDD_CE, CD_CDATA, CD_HDATA, CD_COMCLK,
CD_COMREQ_N, CD_COMSYNC_N, CD_DATA[17:0], CD_CK, CD_AUDIO`). The ARM-facing ports (`EXT_BUS`, `CDD_ACT/WR/DI`,
`CD_BUF_*`) are replaced by the Pocket ports: bridge (`clk_74a, bridge_wr/addr/wr_data`), target commands
(`target_dataslot_read/id/slotoffset/bridgeaddr/length/ack/done/err`), SRAM pins, and the disc header replay
`BOOT_BUSY/BOOT_WR/BOOT_ADDR/BOOT_DATA`.

### Integration (not done yet)

- `CDD_CE` is the existing 176.4 kHz `CDD_2X_CE`. `RST_N` = `~rst_sys`; it resets only the link and the feed, the
  drive state and TOC survive a Saturn reset (as the ARM's state does).
- Boot header: connect `cdboot_download = BOOT_BUSY`, `ioctl_wr = BOOT_WR`, `ioctl_addr = BOOT_ADDR`,
  `ioctl_data = BOOT_DATA` to the existing capture block in `Saturn.sv` (game id, area, cartridge request word).
  Hold the Saturn in reset while `BOOT_BUSY`.
- `core_top.v`: drive `target_dataslot_read/id/slotoffset/bridgeaddr/length` from the module (the module issues
  only reads; a second client such as the backup RAM writer needs a small arbiter on the same port) and feed back
  `ack/done/err`. Tri-state the SRAM pins: `sram_dq = sram_dq_oe ? sram_dq_o : 16'bz`.
- Constraints: `t_*` ports are driven from `clk_sys` registers that are stable before the request toggles and until
  `done`; `rw_a/rw_d` (bridge words for the ring) are stable for one bridge word time (>= 32 `clk_74a`). Mark both
  as false/multicycle paths.

## 2. Memory

| Block | Where | Size |
|---|---|---|
| Sector ring | **PSRAM1** through `ddram_pocket` (`rg_*` ports), 8 slots x 4 KB at ring word addr `{slot[2:0], word[10:0]}`, byte 0x108000 | 32 KB |
| TOC + boot header | `cd_toc_ram`, 512 x 32 dual clock | 2 M10K |
| Packet RAMs | 2 x 16 x 8 (MLAB) | ~0.5 LAB |
| Bridge word FIFO | 64 x 45 bit in `cd_stream` (the chip can be busy with a VDP1 burst) | 2 M10K |
| Feed FIFO | none: the feed reads the ring one word per `CDD_CE` | 0 |

PSRAM1, not M10K, for the ring: 4 sectors of 2352 B are 75 Kbit = 8-12 M10K depending on aspect ratio (it was in the
SRAM first, which cost 32 M10K blocks of framebuffer 1, docs/memory.md section 5). `cd_stream` writes one 32 bit bridge
word per request (`rg_wr`, held until `!rg_wbusy`) behind a 64 entry FIFO, and reads one word per request (`rg_rd`: wait
two clocks, then for `!rg_rbusy`). The backup RAM image lives in PSRAM0. A sector is announced to the engine only after the
FIFO has drained.

## 3. Data slots

`dist/Cores/defgenx.Saturn/data.json` (checked with `tools/check_json.py --no-bitstream`):

| id | name | use |
|---|---|---|
| 0 | Game (.json) | first slot: a game's instance JSON (parameters `0x113`: reloadable, core-specific, instance JSON, full reload of core), optional; binds the TOC and the track files |
| 1 | BIOS | any `.bin`/`.rom` picked by the user in the core's folder (parameters `0x103`: user-reloadable from the core's menu, core-specific, full core reload on a new pick; the browsed filename does not persist, so the Pocket asks at every start), pushed to bridge `0x20000000` |
| 16 | Disc (.img) | the disc as one `.img` (the merged image Saturn-prepare-card writes, TOC in its first sector) or `.bin`, picked directly, optional; `deferload`, parameters `0x09` (reloadable, read-only), bridge address `0x30000000`, size up to 1 GB; read on demand |
| 2 | Disc TOC | the disc's 2048-byte `.toc`, bound by the JSON only (parameters `0x00`: not reloadable, so not in the menu), **pushed** at load to bridge `0x60000000` |
| 3, 4 | Backup RAM, Cart backup RAM | unchanged ids and addresses |
| 17..39 | CD file 01..23 | `deferload`, `secondary` (filled only from a JSON), served once slot 0 has the full-reload bit (below) |

**Hardware evidence (v0.2.18, 2026-11-06).** With the disc files bound by an instance JSON (slot 1, parameters
`0x11` or `0x13`, the layout up to v0.2.18) the Pocket pushes the TOC but never answers a single `0x0180` read of the
deferload track slots: the BIOS shows "Disc unsuitable for this system". With the disc image as the first slot,
picked directly, defined as the PSX core defines its disc (deferload, required, an `address`, a 1 GB
`size_maximum`), Hyper Duel and Panzer Dragoon boot. Only the picked file is served, so a disc must be one file:
`Saturn-prepare-card` merges the tracks by default (section 4). Separate track files would need the core to open them itself
(target `0x0192` openfile); not implemented.

**Hardware evidence (2026-11-06, later).** With slot 0 parameters `0x113` (bit 8, "full reload of core", added to
`0x13`) and the track slots `deferload` + `secondary`, the Pocket serves the JSON's track files: a game picked as its
`.json`, with separate track files, boots. Without bit 8 no read of a JSON-bound deferload slot is ever answered.

**TOC from the image.** When the core starts with every slot loaded (`dataslot_allcomplete` while out of reset) and
after each `0x008A` update of slot 16, `cd_stream` issues one `0x0180` read of slot 16, offset 0, 2048 bytes, to
bridge `0x60000000`: the image's header sector (section 5) lands in the TOC RAM like a pushed `.toc` and its word
511 commits it. When word 0 of that read is not the magic (an image without the header sector, a `.bin`), the
read writes nothing, so a TOC pushed by the JSON stays and without one `disc_ok` stays low. A slot without a file
answers an error and writes nothing. The JSON route loads the TOC twice (push, then the read): two commits of the
same bytes, the second resets the Saturn once more right after it starts. **Untested** on hardware: whether the APF
serves a `0x0180` read whose bridge address is outside the slot's `address`, and whether it sends `0x008A` for a
slot picked at boot (the core does not rely on it). A runtime swap to an image without the header keeps the
previous disc's TOC.

The previous scaffold's slot 1 (cue) and 2 (track) are gone: the core does not read cue sheets. The core
decodes the pushed slots by bridge address and reads only ids 16..39 by id, so the slot order needs no RTL change.

Card layout (v0.2.4's): the BIOS in `Assets/saturn/defgenx.Saturn/`; each disc's tracks, `.toc` and instance
`.json` side by side in `Assets/saturn/common/` or one of its subfolders, `data_path` empty. **Hardware evidence** (a Pocket): this data.json, as v0.2.4 shipped it, with the
instance JSON in `common/` next to its `.toc` and tracks, starts the core. v0.2.5 and v0.2.6 moved the Disc slot
to id 0 with parameters `0x13` (core-specific) and the JSON to `defgenx.Saturn/`, following the data.json page's
"core-specific file, only valid in the first slot" wording; that layout does not work on the Pocket, so the rule
is not applied (`tools/check_json.py` does not check it). Analogue's instance JSON page says the files it lists
"should be located starting in the same folder as the instance JSON": every slot file resolves from the JSON's
folder plus `data_path`, and `Saturn-prepare-card` refuses a JSON for which that does not hold (section 4). **Untested** on
hardware: a JSON in another folder with a non-empty `data_path` (`Saturn-prepare-card --card --json-dir`).

## 4. Why no cue parser on the Pocket

The cue is interpreted by `Saturn-prepare-card` (`tools/prepare-card/`, Go, standard library only), which ports
`LoadCUE` from `saturncdd.cpp` quirk for quirk (start/end per track, INDEX 00/01 handling, PREGAP, one file per track
or one file for all) and writes the `.toc`, the merged `.img` and the instance JSON. The core then needs no string
handling, no file-name opening (`0x0192`) and no large buffers: only arithmetic on a fixed table. Cost of that
choice: a PC tool has to run over the discs (the install scripts run `Saturn-prepare-card --card`, below); CHD is
not supported (the same as the PSX core).

The release carries static binaries (`tools/prepare-card/build.sh`, run by `./build.sh package`): at the card root
`Saturn-prepare-card` (macOS 13 or later, universal, ad-hoc signed, not notarized) and `Saturn-prepare-card.exe`
(Windows x64); in `Saturn-prepare-card-others/` the Windows arm64 and x86 and the Linux x64, arm64, armv7 and x86
builds. The tool replaces `mktoc.py`: the command line, the messages and the files are the same, checked by
`tools/prepare-card/equiv.py` against the last `mktoc.py` in git history (synthetic discs only).

**Double-clicked** (no arguments), it works on the card it sits on: the folder of the executable, symlinks
resolved, or the card root above `Saturn-prepare-card-others/` (a double-clicked program starts in the home
folder, not next to itself). It checks the card and marks each item `[OK]` (in place), `[->]` (it moves or
prepares it) or `[!!]` (a problem to fix by hand, with the fix): the BIOS images in `Assets/saturn/defgenx.Saturn/`
(512 KB `.bin`/`.rom`; none is a "NO BIOS" problem, a wrong size is flagged), BIOS-named 512 KB files at the card
root (moved) or in other folders, each game's folders, `.cue` files whose tracks are missing (with the unlisted
`.bin` files of that folder as the likely misnamed ones), loose discs (moved), `.cue` files in the wrong folder,
`.bin`/`.img` files no `.cue` lists, and a folder that is not a card root (no `Cores/` or `Assets/`). A verdict
line follows ("Card ready" or the numbered problems), then the numbered games with their state (new, prepared,
out of date, cannot be prepared) and one question: Enter prepares the new and out-of-date ones, `a` all, numbers
a choice, `q` quits. A picked game is rebuilt from its tracks (its `.img` copied again in full), so picking a
prepared game repairs it; with every game prepared, Enter quits. The moves are done unless `q`; the overwrite
prompt below still asks per game. After a
summary and a second verdict it waits for Enter. ANSI colours only on a terminal (and a Windows console with VT
support), not with `NO_COLOR`. `--card SD_ROOT --check` prints the check only (exit status 1 with problems).

```
Saturn-prepare-card game.cue -o out/ [--data-path P] [--ramcart-db saturn_ramcart.txt] [--merge auto|always|never] [--wwf] [--road-rash]
```

`--merge auto` concatenates the files into one `.img` when the cue has more than 24 files (the number of file slots).
`--ramcart-db` takes MiSTer's `saturn_ramcart.txt` and puts the 1M/4M RAM cartridge request into the boot header,
as Main_MiSTer does after its database lookup.

`data_path` (`--data-path`) is the tracks' folder seen from the folder the JSON goes to, with a trailing `/`; leave
it empty and put the JSON next to the tracks (section 3). The track `filename`s are relative to the cue's folder; a
cue that reaches outside it (`../`) is refused, the APF does not take relative paths. When the files do not
resolve from `-o` plus `data_path`, the tool says so.

```
Saturn-prepare-card --card SD_ROOT [--dry-run] [--yes] [--ramcart-db saturn_ramcart.txt] [--json-dir DIR] [--merge M]
```

Card mode, run by `install.sh` / `install.ps1` after the copy (the scripts pick the build for the host and pass the
card); with arguments but no `--card` or `.cue`, the card is the tool's folder, else the current one. It asks
nothing but the overwrite question below, and only on a terminal:

- tidying first: a `.cue` at the card root or in `Assets/saturn/` moves, with the files it lists, into
  `Assets/saturn/common/<cue name>/`; a 512 KB `.bin`/`.rom` at the card root named like a BIOS moves into
  `Assets/saturn/defgenx.Saturn/`. Nothing already in place is moved, and nothing is overwritten.
- every `*.cue` under `Assets/saturn/common/` (hidden and `._` files skipped) gets its `.toc` and merged `.img`
  (`--merge always` is the default here) next to it, and its JSON in `Assets/saturn/defgenx.Saturn/` with
  `data_path` the game's folder under `common/`. Files are written only when their content changes; a merged
  `.img` of the right size, newer than every track, is kept, and only its header sector is rewritten when the TOC
  changed. An `.img` without the header sector (one sector shorter) is rewritten. `--json-dir DIR` writes every
  JSON into `common/DIR` instead, `data_path` then being the tracks' folder relative to it (tracks outside `DIR`
  are refused).
- an existing `.img`, `.toc` or `.json` that would change is overwritten only after `[y]es / [n]o / [a]ll /
  n[o]ne`, once per game; without a terminal it is kept, `--yes` overwrites. An overwrite rewrites the whole
  `.img` from the tracks, never only its header sector, so no old track data survives it.
- before writing a JSON, every slot filename (and `data_path`) is checked: no `..` or `.` component, no leading
  `/`, no `\` or `:`, and the file exists at the JSON's folder + `data_path` + filename (a `.toc` / `.img` the
  same run writes counts). A disc that fails is reported and gets no JSON.
- the WWF / Road Rash flags and the RAM cart byte of an existing `.toc` are carried over (cart: only when the
  database gives none), so a regeneration does not drop options given by hand.
- JSON name: the cue's name. Discs of the same name in one JSON folder (case-insensitive, FAT ignores case) are
  prefixed with their subfolders joined by ` - `, leaving out a last folder equal to the game name
  (`USA/Game/Game.cue` -> `USA - Game.json`); a remaining clash gets ` (2)`.
- a JSON in the tool's shape (only `magic`/`data_path`/`data_slots`, slot 2 a `.toc`, then 16, 17, ...) at the
  target name is rewritten in place. With `--json-dir`, one in `Assets/saturn/defgenx.Saturn/` is matched to its
  disc by `data_path` and `.toc` name and renamed `.json.old` once that disc's JSON is written; without its `.cue`
  it is first carried over to its tracks, named after its `.toc`. Any other `.json`, and a target JSON not in the
  tool's shape, is left alone (the message still calls the shape "mktoc").
- exit status 1 when any disc failed (the others are still written).

## 5. TOC format (version 2)

2048 bytes = 512 big-endian 32-bit words (the order the bridge delivers with `bridge_endian_little = 0`). All
positions are FADs (LBA + 150), 24 bits.

| word | content |
|---|---|
| 0 | magic `0x53434454` |
| 1 | `[31:24]` version = 2, `[23:16]` track count in BCD, `[9]` Road Rash hack, `[8]` WWF hack, `[6:0]` track count N |
| 2 | lead-out FAD (`toc.end + 150`) |
| 4..68 | boot header, 260 bytes: disc bytes 16..271 (sector 0 user data, 256 B), byte 256 RAM cart type (0 none, 2 = 1M, 3 = 4M), byte 257 `0xA1`, 2 zero bytes |
| 72 + 3r | record r (0..N), word A: `[23:0]` end FAD, `[24]` data track, `[25]` 2048-byte sectors, `[30:26]` file index |
| 73 + 3r | word B: `[23:0]` start FAD, `[31:24]` INDEX 01 offset (sectors, 0..255) |
| 74 + 3r | word C: `[23:0]` FAD of file sector 0 |
| 511 | last word; its write commits the TOC |

Record N is the lead-out (start = lead-out FAD, flags 0). File index f is data slot `16 + f`.

Merged image (`<Game>.img`): one header sector of the disc's sector size (2352, or 2048 for a MODE1/2048 disc)
whose first 2048 bytes are this TOC (the same bytes as `<Game>.toc`) and the rest zeros, then the track files in
cue order. Every word C counts the header: file sector 0 of the image is the header, so C is one less than for the
tracks alone (149 for a disc whose track 1 starts the first file). Sector for FAD x of a
track: file sector `max(x, 150) - C` at byte offset `* 2352` (or `* 2048` when bit 25 is set).
A TOC commit makes the controller Unload + Reset + Load (status goes to stop, the ring is dropped) and replays the
boot header.

## 6. Command set

Reproduced from Main_MiSTer `saturncdd.cpp` (status packet layout, BCD fields, checksum, tick cadence, seek delay
formula, idle position loop, 3 TOC phases A0/A1/A2, security-ring statuses):

| Command | Main_MiSTer | here |
|---|---|---|
| 0x00 NOP | yes | yes |
| 0x02 seek security ring | yes | yes (2 ticks `0xB2`, 2 ticks `0xB6`) |
| 0x03 read TOC | yes | yes |
| 0x04 stop | yes | yes |
| 0x06 read | yes (starts 4 sectors before the target, seek delay by distance) | yes, same |
| 0x08 pause | yes | yes |
| 0x09 seek | yes | yes (see deviation 2) |
| 0x0A/0x0B scan | falls to default (cancels pending read/seek/pause) | same |
| speed | `comm[10] == 1` is 1x, else 2x | same; audio is always played at 1x |
| command checksum | computed, result ignored | ignored |
| wwf / Road Rash game hacks | by game id | TOC header flags (`--wwf`, `--road-rash`), set by the PC tool |
| CHD | yes | no |

Deviations (all small, all in `sim/cd/cdd_model.py` so the testbench checks the same behaviour):

1. INDEX 01 only (`index_num` is not modelled); a command with index >= 1 adds the INDEX 01 offset.
2. A SEEK issued while reading: Main_MiSTer still sends one data sector on that tick; here no sector is sent and the
   position does not advance.
3. **Stall-pause** (new): when a read tick finds no sector in the ring the status is `0x22` (seeking) with the same
   position fields and the position does not advance; reading resumes with `0x36` when the sector arrives. The ring
   sync pattern of the lead-out security sector is the standard one (the ARM leaves bytes 0..11 as stale buffer content).
4. Relative time of a pregap-less first track uses `|FAD - start|`; Main_MiSTer special-cases `lba < 0`, which only
   differs when track 1 has a PREGAP command.
5. The time between ticks is exactly 2352 (1x) or 1176 (2x) `CDD_CE` pulses; the ARM alternates 13/14 ms.

Sector content is built like the ARM: Mode 1 sectors get the EDC recomputed over bytes 0..2063 and the ECC area
zeroed (Mode 2 is left alone), 2048-byte tracks and sectors before the track start get a synthesised sync + header;
lead-out sectors are generated (LFSR of `MakeSecureRingData`). Both checked against the original C functions.

## 7. Bridge behaviour, stall handling, prefetch

- One `0x0180` read per sector (2352 B, or 2048 B at ring offset 16 for cooked tracks), into the ring slot's 4 KB
  bridge window; one request open at a time; up to 6 sectors are prefetched (ring 8 slots), starting with the
  READ/SEEK command. A flush (new READ/SEEK, new disc) drops ready sectors; the request in flight is discarded when
  it completes.
- Request handshake on `clk_74a`: `target_dataslot_read` held for 6 clocks, then wait for `ack` or `done` low, then
  `done`. A non-zero error code is counted (`err_cnt`) and the sector is still marked ready (the data is whatever
  arrived).
- The stall is bounded by the ring: at 2x six sectors are 40 ms, at 1x 80 ms. A 300 ms stall therefore always
  produces stall ticks; the drive reports `0x22` ticks until the bridge answers, then resumes without losing or
  repeating a sector. Whether the Saturn firmware tolerates a ~300 ms seek status mid-read is **not known**; real
  seeks across the disc last up to ~0.5 s (`seek_delay` up to 42 ticks).
- Throughput requirement: 150 reads/s (2x) with a single request in flight, i.e. a round trip below 6.67 ms
  including the 2352-byte transfer. Unmeasured (see `pocket-platform.md` 3.5).

## 8. Resource estimate

yosys `synth_intel_alm -family cyclonev -noflatten` of `cdd_pocket` with `cd_toc_ram` black-boxed, ALM estimate =
non-arithmetic ALUTs / 1.6 + arithmetic ALUTs / 2 (range with 1.3..2.0 ALUTs per ALM given):

| module | ALUT | arith ALUT | FF | ALM est. |
|---|---|---|---|---|
| cdd_ctl | 677 | 312 | 379 | ~580 |
| cd_stream (without TOC RAM, with SRAM port + bridge handshake) | 355 | 304 | 415 | ~375 |
| cd_feed | 168 | 63 | 128 | ~135 |
| cdd_link | 169 | 19 | 333 | ~115 (the 256 packet-RAM flops become MLAB: real value ~60) |
| **total** | 1369 | 698 | 1255 | **~1,200 (1,030..1,400); ~1,150 with the packet RAM in MLAB** |

M10K: **2** (TOC RAM) + MLAB packet RAMs; SRAM: 32 KB. Target was <= 1,200 ALMs and <= 8 M10K: the M10K
target is met with margin, the ALM target is met at the central estimate only, with no margin. The first
version (25-bit signed LBA arithmetic, one adder per expression, bridge-domain copies of the request) estimated at
~1,600 ALMs; moving to FAD (no signs, no +150), one shared ALU, and driving the target-command ports straight
from the held registers took ~400 ALMs out. Quartus numbers are needed before trusting any of this.

### FSM or soft CPU

Chosen: hand-written FSM. Reason: with the cue parsed by a PC tool the control job is a few hundred states' worth
of arithmetic on a fixed table, which one 25-bit ALU runs in ~50 states; it also let the whole behaviour be
checked tick-for-tick against a Python port (section 9).

The numbers do not favour it unconditionally. A SERV (bit-serial RV32I, ~200-300 LUT per the coordinator's
sizing notes, ~35 clocks per instruction) running the `cdd_ctl` + lookup/fetch logic as firmware would need about
2 KiB of code/data (2 M10K) + register file (1 M10K) + MMIO glue, and the hardware parts that stay (link ~60-115, feed
~135, ring/SRAM/bridge ~150) give roughly **700-800 ALMs and ~5 M10K, i.e. ~350-450 ALMs less than this FSM**
(estimate, not built). Speed is sufficient: the heaviest iteration (status + conversions + a 99-step TOC walk) is
a few thousand instructions, ~100-200k clocks, against 381k clocks per 2x tick. The PSX core's SERV needs 16 KiB
(13 M10K) because it also parses cues, handles disc swap and cheats; this design does not.

Recommendation: keep the interfaces (`pk_*`, `lk_*`, `pf_*`, `sd_*` are plain registers and strobes, all
MMIO-able) and, when the CD block moves to a high-level model, run that model as SERV firmware on `cd_stream`.
A Yabause `cs2.c`-style command set (partitions, filters, buffer chain, 0x30 status/command registers) is
state-heavy but data-light: the sector data stays in the CD block DRAM that already exists, so firmware plus state
would be about 16-32 KiB (13-26 M10K, estimate from the size of the PSX firmware and of `cs2.c`; not measured), which is the real
cost to weigh against the ~3,100 ALMs + 56 M10K of the SH-1 it would replace.

## 9. Tests (`make -C sim cd`)

`sim/cd/`: `tb_cdd.sv` (SH-1 serial host, APF target-command model with the real ack/done semantics and variable
latency, async SRAM model, YGR019-side capture), `gen_disc.py` (two synthetic discs), `cdd_model.py` (Python port of
the ARM's Process/Update/CommandExec on the TOC format), `check.py` (replays the log through the model: every status
packet and every 1176-word sector must match).

Time scale: `CDD_CE` every 40 `clk_sys` clocks instead of 325 so that a run takes minutes; the bridge latency is
scaled likewise and the 300 ms stall is 300 ms of CDD time (300e6 ns x 40 / 324.7). `make -C sim cd-real` runs
the stall scenario (plus the ring scenario) at 325 clocks per CE (about 10 minutes); it passed once (41 stall ticks, 30 sectors checked) on the final RTL minus the cosmetic `dbg` change.

Disc A: track 1 MODE1/2352 (120 sectors, junk EDC/ECC), track 2 AUDIO in its own file with a 150-sector INDEX 00
pregap. Disc B: track 1 MODE1/2048.

## 10. Not tested / open

- Quartus synthesis, timing (57 MHz `clk_sys`, `clk_74a` crossings), any hardware.
- Real bridge round-trip time and whether one outstanding 2352-byte read keeps up with 2x.
- An instance JSON away from its tracks (non-empty `data_path`, section 3), `bridge_endian_little` byte order
  (the testbench uses the core_top default, big endian; `BRIDGE_LITTLE` flips it), SRAM timing at the real pins.
- Behaviour of the Saturn firmware against a ~300 ms `0x22` status in the middle of a read; against the lead-out
  security ring (only checked against the ARM's code, not against a BIOS).
- Index > 1, track changes inside one commanded read, disc swap while running (a TOC re-push restarts the drive; no
  lid-open status is shown), discs with PREGAP commands, CHD, > 99 tracks.
- No Saturn BIOS ever ran against this.

## 11. Sources and licences

`cdd_link.sv` keeps the wire timing of Saturn_MiSTer `rtl/hps2cdd.sv` (GPL-3.0, same as this repository) with the
byte store rewritten; `cdd_ctl.sv`/`tools/prepare-card`/`cdd_model.py` re-implement the behaviour of Main_MiSTer
`support/saturn/saturncdd.cpp` (GPL-3.0) from reading it; no file was copied. GuardianSoul/openfpga-PlayStation is
GPL-2.0-only as a whole and was only studied (one slot per track file in an instance JSON, one 0x0180 read per
sector, prefetch ring, TOC as a table built off-device); nothing from it was reused.
