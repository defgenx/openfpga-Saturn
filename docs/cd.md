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
| Sector ring | **256 KB SRAM** (16-bit async, the Pocket's `sram_*` pins), 8 slots x 4 KB at SRAM word addr `{slot[2:0], word[10:0]}` | 32 KB used |
| TOC + boot header | `cd_toc_ram`, 512 x 32 dual clock | 2 M10K |
| Packet RAMs | 2 x 16 x 8 (MLAB) | ~0.5 LAB |
| Feed FIFO | none: the feed reads the SRAM one word per `CDD_CE` | 0 |

SRAM, not M10K, for the ring: 4 sectors of 2352 B are 75 Kbit = 8-12 M10K depending on aspect ratio, more than the
whole budget. The SRAM is dedicated to this block (the backup RAM image has to live elsewhere).
The SRAM port arbiter serves bridge writes first (2 half-words, 6 clocks per 32-bit bridge word) and feed reads
second (3 clocks); one word every 2 `CDD_CE` at 1x and every `CDD_CE` at 2x is far below that.

## 3. Data slots

`dist/Cores/defgenx.Saturn/data.json` (checked with `tools/check_json.py --no-bitstream`):

| id | name | use |
|---|---|---|
| 0 | BIOS | unchanged |
| 1 | Disc | the game's instance JSON (parameters `0x11`: reloadable + instance JSON) |
| 2 | CD TOC | 2048-byte `.toc`, **pushed** at load to bridge `0x60000000` (no deferload) |
| 3, 4 | Backup RAM, Cart backup RAM | unchanged ids and addresses |
| 16..39 | CD file 00..23 | `deferload`; one `.bin` per file of the cue (or one merged `.img`), read on demand |

The previous scaffold's slot 1 (cue) and 2 (track) are gone: the core does not read cue sheets.
**Untested**: how the Pocket selects the instance JSON through slot 1 and `parameters` bit 4. The PSX core's
`make_pocket_instances.py` shows the folder layout it uses; this has to be checked on hardware.

## 4. Why no cue parser on the Pocket

The cue is interpreted by `tools/mktoc.py`, which ports `LoadCUE` from `saturncdd.cpp` quirk for quirk (start/end
per track, INDEX 00/01 handling, PREGAP, one file per track or one file for all) and writes the `.toc` and the
instance JSON next to the game. The core then needs no string handling, no file-name opening (`0x0192`) and no
large buffers: only arithmetic on a fixed table. Cost of that choice: the user runs a PC tool once per disc
(`mktoc.py game.cue -o <folder>`); CHD is not supported (the same as the PSX core).

```
mktoc.py game.cue -o out/ [--data-path P] [--ramcart-db saturn_ramcart.txt] [--merge auto|always|never] [--wwf] [--road-rash]
```

`--merge auto` concatenates the files into one `.img` when the cue has more than 24 files (the number of file slots).
`--ramcart-db` takes MiSTer's `saturn_ramcart.txt` and puts the 1M/4M RAM cartridge request into the boot header,
as Main_MiSTer does after its database lookup.

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

Record N is the lead-out (start = lead-out FAD, flags 0). File index f is data slot `16 + f`. Sector for FAD x of a
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
- Instance JSON selection through slot 1, `bridge_endian_little` byte order (the testbench uses the core_top
  default, big endian; `BRIDGE_LITTLE` flips it), SRAM timing at the real pins.
- Behaviour of the Saturn firmware against a ~300 ms `0x22` status in the middle of a read; against the lead-out
  security ring (only checked against the ARM's code, not against a BIOS).
- Index > 1, track changes inside one commanded read, disc swap while running (a TOC re-push restarts the drive; no
  lid-open status is shown), discs with PREGAP commands, CHD, > 99 tracks.
- No Saturn BIOS ever ran against this.

## 11. Sources and licences

`cdd_link.sv` keeps the wire timing of Saturn_MiSTer `rtl/hps2cdd.sv` (GPL-3.0, same as this repository) with the
byte store rewritten; `cdd_ctl.sv`/`mktoc.py`/`cdd_model.py` re-implement the behaviour of Main_MiSTer
`support/saturn/saturncdd.cpp` (GPL-3.0) from reading it; no file was copied. GuardianSoul/openfpga-PlayStation is
GPL-2.0-only as a whole and was only studied (one slot per track file in an instance JSON, one 0x0180 read per
sector, prefetch ring, TOC as a table built off-device); nothing from it was reused.
