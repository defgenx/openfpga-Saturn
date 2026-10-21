# High-level CD block (branch `cdb-hle`)

Replaces the low-level CD block (SH-1 running Sega's firmware + YGR019 + the CDD serial layer `cdd_link`/`cdd_ctl`)
with a high-level one: a SERV soft CPU running C firmware that implements the CD block command set, around a
hardware data path. Selected with `` `define POCKET_CUT_CDB_LLE `` in `Saturn/Saturn.sv` (the name says what is cut:
with the define the LLE is removed and the HLE is built; without it the SH-1 path is exactly as before).

Status: simulated (Verilator, SERV running the real firmware image), mapped with `quartus_map`. **Not placed and
routed, not timing-closed, not run on hardware, never run against a Saturn BIOS.**

## 1. Result

| | LLE today | HLE | change |
|---|---|---|---|
| SH-1 + 64 KB firmware RAM (pruned) | 2,403 ALM, 56 M10K | - | |
| YGR019 | ~325 ALM | - | |
| `cdd_link` + `cdd_ctl` (outside `Saturn`) | ~700 ALM (yosys estimate) | - | |
| HLE block (`cdb_hle` incl. SERV, ROM, RAM) | - | **926 ALM**, 1,155 regs, ~17 M10K | |
| **Block total** | ~3,430 ALM, 56 M10K | 926 ALM, 17 M10K | **about -2,500 ALM, -39 M10K** |

Budget was <= 1,400 ALM and <= 30 M10K: met with margin. `cd_stream`/`cd_feed`/`cd_toc_ram` (~500 ALM, 2 M10K)
stay as they are and are used unchanged.

Whole `Saturn` module, same flow (`quartus_map`, area profile, 5CEBA4F23C8, `sizing/cdb/saturn/`, the STV files
listed by `Saturn.qip` do not exist in this repo and are not needed):

| | ALMs (Quartus estimate) | registers | block memory bits |
|---|---|---|---|
| without the define (SH-1 + YGR019) | 27,181 | 23,148 | 732,608 |
| with `POCKET_CUT_CDB_LLE` | 25,221 | 21,943 | 373,312 |
| difference | **-1,960** | -1,205 | -359,296 |

The -1,960 is inside `Saturn`; the ~700 ALM of `cdd_link`/`cdd_ctl` come on top once `cdd_pocket` is replaced by
`cd_stream` alone (not measured with Quartus, yosys figure from `docs/cd.md`).

M10K of the HLE: ROM 3,072 x 32 true dual port = 12, byte-wide RAM 4 x 1,024 x 8 = 4, SERV register file 1
(512 x 2 bit, may go to MLAB), 8-word FIFO in MLAB. Standalone map: `sizing/cdb/cdb_hle.qsf`.

## 2. Architecture

```
SCU A-bus (CS2)                                   cd_stream (unchanged)
  |  HIRQ, mask, CR1-4, RR1-4, data port          lk_*  TOC lookup      pf_*  prefetch at FAD
  v                                               sd_*  sector issue    cd_data/ck/audio  1176-word stream
+--------------------------- cdb_hle -----------------------------------------------------------+
| host regs  <-- MMIO -->  SERV (RV32IC) + ROM 12 KB + RAM 4 KB   (firmware/cdb/cdb.c)           |
| data port FIFO <--> cdb_xfer (read / write / copy / zero-fill segments, 2 queued)              |
| cdb_sink: stream words -> DRAM buffer slot, header latch, CD-DA to CD_SL/CD_SR                 |
| cdb_dram: three clients (sink, xfer, CPU window) -> CD_RAM_* (ddram_pocket cdram port)          |
+------------------------------------------------------------------------------------------------+
```

* **Host side** (`cdb_hle.sv`): same register offsets, `AWAIT_N` wait states and edge handling as `YGR019.sv`
  (the SCU part is derived from it, GPL-3.0). HIRQ is set by the CPU and cleared by the host's AND-write; CR1-4 are
  host-written, RR1-4 CPU-written. A host write to CR4 raises `EV_CMD`; a host read of RR4 raises `EV_RRD`
  (Mednafen's `ResultsRead`, used to decide whether the periodic report may overwrite the results).
* **Data path**: bulk sector data never passes through the CPU. `cdb_sink` writes each arriving sector into a DRAM
  slot (byte order as the YGR019 delivers to the SH-1, so a DRAM word is the host-order halfword) and latches
  header words 6-9 (`m s f mode`, `file chan submode cinfo`) for the CPU. `cdb_xfer` runs one segment
  `{addr, addr2, count}` and holds a second: Get Sector Data queues one segment per buffer, so the CPU has a full
  sector time to queue the next one and the host never waits between sectors. Copy and zero-fill use the same
  engine. The 8-word FIFO between engine and data port is the only host-facing buffer.
* **CD-DA**: audio sectors are consumed by the sink from the same stream, left on even words and right on odd words,
  to `CD_SL/CD_SR`, which is what the YGR019 did. One sector can be armed in `cdb_hle` while the previous one is
  still streaming (`sd_*` arm registers), so playback has no gap at sector boundaries.
* **DRAM** (CD block DRAM at PSRAM1 `0x080000`, 512 KB, the port the SH-1 build uses): 200 buffers of 1,280 words
  (2,560 bytes; a buffer holds the raw 2,352-byte sector), word address `n*1280`; the 6,144 words after them hold
  the TOC (204 words), Q subcode, the file info table (256 x 12 bytes, big-endian) and the root directory record.
  The CPU reaches DRAM only through a window register (`DR_A`, `DR_D`, auto-increment, the access stalls the bus
  until done).
* **cd_stream was not changed.** Its existing ports are sufficient: `pf_flush` = "read from FAD x" (the speed is
  chosen per sector with `sd_spd2`), `lk_*` for the TOC, `sd_go` per sector. The Q subcode is not read from the disc
  (the stream has none); track, index and relative time come from the TOC lookup.
* `Saturn.sv` gains ports only under the define: `CDD_CE` (176.4 kHz) and the `cd_stream` client ports
  (`LK_*`, `PF_*`, `SD_*`, `DISC_*`, `TOC_*`, `FD_BUSY`, `CD_DATA18`); `CD_D`, `CD_AUDIO`, the serial link ports and
  `CD_CE` are unused or only time the A-bus waits. The caller instantiates `cd_stream` (not `cdd_pocket`) and wires
  it to those ports; boot-header replay stays on `cd_stream`'s `boot_*` ports. Not done: `core_top` integration.

## 3. MMIO map (SERV data bus, `0x4000_0000 + 4*index`; ROM `0x0`, RAM `0x8000_0000`)

| idx | name | access | |
|---|---|---|---|
| 00 | HIRQ | R / W = set bits | |
| 01-05 | HMASK, CR1-4 | R | host written |
| 06-09 | RR1-4 | W | RR4 write clears `EV_RRD` |
| 0A | EV | R | bit0 cmd, 1 results read, 2 sector done, 3 disc change, 4 FIFO empty, 5 seg1 free, 6 xfer idle, 7 lk busy, 8 disc ok, 9 pf ready, 10 feed busy, 11 engine busy, 12 sink overrun, 13 host timeout, 14 armed |
| 0B | EVCLR | W | bit0 cmd, 1 sector, 2 disc change, 3 timeout |
| 0C | TICKS | R | counts `CDD_CE` (176.4 kHz) |
| 10-14 | XF_MODE, A, B, CNT, HCNT | W, W, W, W (commit), R | mode 0 stop/flush, 1 read, 2 write, 3 copy, 4 zero-fill |
| 18-19 | DR_A, DR_D | W, R/W | DRAM window |
| 1C-1E | SK_BASE (arm), HDR_A, HDR_B | | sector base, latched header |
| 20-26 | LK_X, LK_IDX, LK_CTL, LK_R0, LK_START, NTR, TOCEND | | `cd_stream` lookup |
| 28-2C | PF_FAD, PF_CTL, SD_CTL, SD_HDR, OVR_CLR | | prefetch, sector issue (arm; bit 5 disarms) |

## 4. CPU choice

All measured with `quartus_map` (area profile, 5CEBA4F23C8), CPU alone, `sizing/cdb/cpu/`.

| CPU | ISA | ALMs | registers | memory | CPI | comment |
|---|---|---|---|---|---|---|
| **SERV** (ISC) | RV32IC, no CSR | **293** | 182 | RF 1,024 bit | ~35 (bit-serial) | chosen |
| PicoRV32 (ISC), minimal | RV32IC | 715 | 543 | 2,048 bit | ~4 | 2.4x the area |
| FemtoRV32 quark (BSD-3) | RV32I | 1,285 | 1,210 | none (regfile in flops) | ~4 | 4.4x, no RVC |
| neorv32 | not measured | | | | | minimal configuration is larger than PicoRV32 (cited, not built) |

SERV at 57.27 MHz executes about 1.6 M instructions/s (35 clocks per instruction nominal, not measured separately). What the firmware needs: command replies must be quicker
than the host's polling (real CD blocks answer in tens to hundreds of microseconds; measured LLE here: 25-67 us),
the 16.6 ms periodic report and one sector per 6.7 ms (2x data) or 13.3 ms (audio). Measured HLE command latency
including the testbench's 20 us poll granularity: median 129 us, worst 917 us (Copy of a 1,176-word sector with
the DRAM copy engine). A status request is about 100 us of firmware time. The sector path is estimated at about 1,000
instructions per sector (filter evaluation, buffer lists), under 1 ms of 6.7 ms (estimate). RVC (`-march=rv32ic`) is used:
12,136 bytes of code, 1,580 bytes of RAM, ROM 12 KB. A faster CPU was not needed.

## 5. Command coverage

Firmware: `firmware/cdb/cdb.c`, built with `riscv64-elf-gcc` (`brew install riscv64-elf-gcc`), image committed as
`src/fpga/saturn/Saturn/CD/hle/cdb_fw.hex` and `.mif` (our own code). Logic follows Mednafen/Beetle Saturn
`ss/cdb.cpp` (GPL-2.0-or-later, header kept in the file). Ymir (GPL-3.0) and Kronos were read for behaviour
only.

| group | commands | state |
|---|---|---|
| status | 00 status, 01 hardware info, 02 TOC, 03 session info, 04 init (incl. software reset), 06 end data transfer | done |
| 05 open, 12 scan | answer with status, no effect (the LLE answers the same way) | stub |
| play/seek | 10 play (FAD and track/index forms, repeat, no-pickup-change), 11 seek / pause / stop | done; index >= 2 not available |
| subcode | 20 Q (5 words), R-W (0xFF fill) | done |
| device | 30/31/32 connection, last buffer destination | done |
| filters | 40-47 range, subheader, mode, connections incl. the false output chain, 48 reset selector | done |
| buffers | 50 size, 51 sector count, 52/53 calc/get actual size, 54 sector info, 55/56 FAD search | done |
| sector data | 60 sector length, 61 get, 62 delete, 63 get+delete, 64 put (zero-filled), 65 copy, 66 move, 67 copy error | done |
| file system | 70 change dir, 71 read dir, 72 scope, 73 file info, 74 read file, 75 abort | done (directory parsing in firmware from the sectors, as Mednafen) |
| authentication | E0 / E1 | the Mednafen behaviour: audio disc type 1, otherwise read the volume descriptor at the data track + 16 and report type 4; commands answer "rejected" while it runs |
| MPEG | 0x80-0xFF, any unknown command | CMOK with all four result words `0xFFFF` (what the LLE returns without a card) |

Periodic status (HIRQ SCDQ every 16.57 ms, report overwrites the results while unread), PEND after three periodic
ticks of BUSY, BFUL, CSCT, DRDY, EHST, ECPY, ESEL, EFLS, DCHG, boot values (`HIRQ = 0x0BE1`, results `0043 4442
4C4F 434B`) follow Mednafen; the boot value matches the LLE.

## 6. Behaviour that games depend on (docs/game-impact.md section 1)

| behaviour | titles | HLE |
|---|---|---|
| realistic seek time, two Play commands back to back (the first must be dropped) | Digital Dance Mix Vol. 1 | Mednafen's seek formula (about 40 ms base plus distance); a new Play flushes the pipeline and restarts the seek. Not played on a game |
| chained filters, pass/fail outputs, file-number split | NiGHTS, Digital Dance Mix, Ultraman Zukan | done; the connection logic is a port, the disconnect side effects included |
| Mode 2 Form 2, get length < 2324, actual size | Chisato Moritaka, Digital Dance Mix | done (tested: 2048/2336/2340/2352 reads) |
| Put Sector Data | Virtual On, Sega Ages | done and tested with 2048- and 2352-byte puts; see deviation 9 |
| Get TOC spam during playback | Mass Destruction | TOC is built once per disc and answered from DRAM; Get TOC only waits while another transfer is open |
| commands rejected while authenticating | Gremlin demo disc | done (E1 is rejected while E0 runs) |
| status BUSY during seek, pause when buffers are full, resume | Panzer Dragoon Zwei, Gunbird, Steam-Heart's | reproduced as Mednafen does (status PAUSE while the buffers are full, resume when space is freed). Whether this is enough for Panzer Dragoon Zwei is not known |
| seek to index 2 and above | NBA Action, Taito Chase H.Q. | **not possible**: the TOC format has INDEX 01 only |
| BIOS CD player, Tactics Ogre, DJ Wars, World Cup France '98, ... | | not tested, depend on exact status timing; the status values and the flow follow Mednafen, which runs them |

## 7. Known deviations

1. The drive is modelled as Mednafen does: data always at 2x, audio at 1x (the speed bit of Init and Play is ignored),
   startup 1 s after a disc is loaded, then a seek to FAD 150. Position, track, index and relative time come from the
   TOC, not from Q subcode. INDEX 01 only; pregap shows as index 0 with a counting-down relative time.
2. No stall status: when the bridge cannot deliver a sector the drive stays in PLAY and does not advance
   (`cdd_ctl` reported `0x22`).
3. TOC details: first/last entries use ctrl/adr `0x41`/`0x01` from the data flag, disc type byte 0.
4. A data-port read while no transfer is running returns 0 immediately instead of the stale FIFO word; a read that
   waits more than ~140 us for the engine times out (flag `EV_TO`).
5. End Data Transfer returns the number of words the host really read (Mednafen: reads + 5 prefetched).
6. Hardware info: `0000 0001 0000 FF00` before Init, `0600` after (the LLE without a drive keeps FF00).
7. The firmware answers from a loop, not an interrupt: a periodic report is up to ~100 us late.
8. DRAM copy and zero-fill take 0.2-1 ms per sector; Mednafen does them instantly.
9. A Put Sector Data buffer written with sector length 2352 and an arbitrary header is accepted into the
   partition by the HLE (Mednafen's rule: mode 0 passes a mode-0 filter); the LLE answered a following Get with
   "wait" (it dropped the buffer). Cause not determined.
10. Disc change: `disc_new` runs eject (OPEN, DCHG, EFLS) then the startup sequence. Not exercised in simulation.
11. Scan (12) and Open (05) have no effect.

## 8. Tests

`make -C sim cdb` (about 12 minutes, Verilator, SERV executes the committed firmware image against the real RTL):

* `sim/cdb/tb_cdb.sv`: SCU-side host model (`YGR019`-compatible access timing), `cd_stream` with an APF bridge and
  SRAM model, a `ddram_pocket`-style `cdram` model with random latency, script interpreter
  (`cmd`, `wait`, `data`, `putdata`, `dram`, ...), log.
* Disc `C` (`gen_iso.py`): 100 raw MODE1/2352 sectors with an ISO 9660 file system (PVD, root, subdirectory,
  3 files) and an audio track with pregap. Disc `B` (`sim/cd/gen_disc.py`): cooked 2048-byte track (synthesised
  sync/header/EDC).
* `check_hle.py` compares the log with values computed from the disc images: TOC (204 words), session info, 4 sectors
  into the partition and PEND, Get Sector Data bytes, sector length 2352/2340/2336 sizes, the file-system chain
  (authenticate, change dir, scope, file info, read file with the data compared byte for byte), cooked track
  (sync, header, EDC area, body), CD-DA sample check against the audio file. **26 + 6 checks, 0 failed.**
* **LLE comparison** (`make -C sim cdb-compare`, same script on pruned SH-1 + cdb105m + YGR019 + `cdd_pocket`):
  `script_nodisc.txt` has 63 records (selectors, buffers, put/copy/move/delete, sector length, bad arguments, MPEG
  and unknown commands, data transfers with data compared word by word). After aligning the HLE with what the LLE
  answered (rejected = four `0xFFFF`, unknown commands answer, Get Sector Info on an empty partition = WAIT),
  **5 of 63 records differ**: Hardware Info after Init (deviation 6) and the put/get of a 2352-byte sector
  (deviation 9, 4 records). Latency: LLE median 46 us (max 67), HLE median 129 us (max 917), both with 20 us poll
  granularity.
* **Limit of the LLE comparison**: with the real firmware the CDD layer `cdd_ctl` never completes the disc security
  ring in simulation (the firmware repeats the seek-ring command, no sector is ever streamed: `cd_ck = 0` over 4 s
  of simulated time), so the LLE reports "no drive" (status `0x00` with `FF` fields) and rejects selector commands.
  Everything that needs a disc therefore cannot be compared against the LLE and is checked against the images
  instead. This is a finding about `docs/cd.md` (which says no BIOS ever ran against it), not something this
  work fixed. Mapping of status fields is masked in `compare.py` for this reason.
* Time scale: realistic (324.7 clocks per `CDD_CE`); the HLE boot to first CMOK is 0.43 s of simulated time as in
  Mednafen.

## 9. Risks and open items

* No Saturn BIOS or game has run on it. Nothing is known about how the BIOS reacts to the response latency
  (100 us class), the 1 s startup or the status values; the LLE answers in ~46 us.
* Timing closure of the A-bus path (`AWAIT_N` is a register output as in YGR019) and of SERV at `clk_sys`
  is not checked (no fit). The DRAM request interface follows `ddram_pocket` (edge triggered, busy two clocks
  after the edge, tested against a model, not against the real module).
* Bridge latency: the HLE reads at the speed the ring delivers; the real Pocket round trip is unmeasured
  (`docs/cd.md`).
* Index >= 2 seeks and Q subcode need a richer TOC.
* Directory reading is byte-serial in firmware: tens of microseconds per directory record (estimate, not measured), so a typical directory takes milliseconds, but a large directory (hundreds of entries) is slower than Mednafen's.
* The firmware is the only copy of the logic; it is 12 KB of C in one file. A bug in a rarely used command is
  visible only by running the title.
* Integration into `core_top` (instantiating `cd_stream`, `CDD_CE`, the new `Saturn` ports) is not done.

## 10. Files

`src/fpga/saturn/Saturn/CD/hle/` (`cdb_hle.sv`, `cdb_xfer.sv`, `cdb_sink.sv`, `cdb_dram.sv`, `serv/` ISC-licensed
SERV sources with its LICENSE, `cdb_fw.hex/.mif`), `firmware/cdb/` (C source, linker script, Makefile), `sim/cdb/`,
`sizing/cdb/` (`cpu/` CPU candidates, `cdb_hle.qsf`, `saturn/` whole-Saturn A/B projects), `Saturn.qip` lists the new
files, `Saturn.sv` selects with the define.
