# Memory subsystem

Everything Saturn_MiSTer keeps in SDRAM1, SDRAM2 and HPS DDR3 is mapped onto the Pocket's chips by
`src/fpga/core/mem/`. `rtl/Saturn/Saturn.sv` is unchanged: the client ports are those of `sdram1.sv` and `ddram.sv`
(plus a loader and a CD-buffer write port) and the VDP1 framebuffer ports of `VDP1.sv`. `mem_pocket.sv` wires it all
with Pocket pin names. All of it is simulated (`make -C sim mem`); none of it has run on hardware.

Sections: 1 map, 2 framebuffer decision, 3 SDRAM schedule, 4 PSRAM, 5 SRAM and the CD ring (PSRAM1), 6 bandwidth budget,
7 load path, 8 resources, 9 simulation, 10 untested and risks.

Clocks: `clk_ram` = 2 x `clk_sys` (107-114.5 MHz), phase aligned, no CDC between them (as in MiSTer). The loader FIFO
is the only crossing (from `clk_74a`).

## 1. Memory map

| Chip | Content | Where |
|---|---|---|
| SDRAM (64 MB, 4 banks, row 13 / col 10) | VDP2 A0 128 KB | bank 0 rows 0-63 |
| | VDP2 B0 128 KB | bank 1 rows 0-63 |
| | VDP2 A1 128 KB | bank 2 rows 0-63 |
| | VDP2 B1 128 KB | bank 3 rows 0-63 |
| | SCSP RAM 0-256 KB (word addr bit 17 = 0) | bank 2 rows 128-255 |
| | SCSP RAM 256-512 KB | bank 3 rows 128-255 |
| PSRAM0 (16 MB; die 0 = 0-8 MB, die 1 = 8-16 MB) | BIOS 512 KB | 0x000000 |
| | backup RAM image, 64 KB (`{FF,byte}` words) | 0x100000 |
| | WRAM-L 1 MB | 0x200000 |
| | WRAM-H 1 MB | 0x300000 |
| | cartridge window 8 MB (ROM, RAM carts, backup cart image at its base), all of die 1 | 0x800000-0xFFFFFF |
| PSRAM1 | VDP1 VRAM 512 KB | 0x000000 |
| | CD block DRAM 512 KB | 0x080000 |
| | CD sector buffer (`cdbuf`, 16 KB) | 0x100000 |
| | CD sector ring, 8 x 4 KB (`cd_stream`) | 0x108000-0x10FFFF |
| SRAM (128K x 16) | VDP1 framebuffer 1, columns 192-351 (index 0xC000-0x15FFF) | words 0x0000-0x9FFF |
| | VDP1 framebuffer 0, x < 352, index x*256+y | words 0xA000-0x1FFFF |
| M10K | VDP1 framebuffer 1, columns 0-191 (index 0x0000-0xBFFF) | 96 blocks |

The PSRAM0 offsets are the MiSTer DDR3 offsets of the same regions, with the cartridge moved from 0x4000000 to
0x800000 (die 1, so the address is a concatenation, not a sum). WRAM-L is on PSRAM0 and not the proposed split with PSRAM1: PSRAM1 keeps VDP1 VRAM and the CD memories so the
two FSMs in `ddram_pocket` never wait on each other (section 6).

## 2. VDP1 framebuffers

Required rates, from `VDP1.sv` (NTSC 352 wide, dot 7.16 MHz, `clk_sys` 57.27 MHz):

| Access | Rate |
|---|---|
| display read, one 16 bit word per dot, address changes every 8 clk_sys | 14.3 M/s in the line, 5.1 M/s averaged over the frame |
| frame erase (writes the pixel just displayed, `DCE_R`) | same |
| VBlank erase (`VBE`): one write per `CE_R`, no stall possible | 28.6 M/s for up to 84,480 writes (2.9 ms) |
| draw (random read / write, FB_RDY handshake; the FSM issues one access per 2 clk_sys) | up to 28.6 M/s |
| CPU access | single words |

Roles swap every frame, so both buffers must take display + erase and draw.

| Option | Sustained random 16 bit | Verdict |
|---|---|---|
| PSRAM, synchronous burst | single word read 13 clk_ram (113 ns) = 8.8 M/s, write 15-21 clk_ram = 5.5-7.7 M/s per chip; sequential bursts reach 57 M/s but draw, CPU and erase strobes are single words | cannot take 28.6 M/s of VBlank erase or full-rate drawing, and the chip also carries VRAM or WRAM |
| SDRAM bank 3 in the VDP2 schedule | one random access per 8 cycles per bank = 14 M/s at best; in the final schedule every bank is activated every 8 cycles (VDP2 and SCSP), so no bank has time to spare, and 4 of 16 command cycles are left | no |
| cropped 352x240x16 = 165 KB in M10K, both buffers | 330 KB of the 385 KB M10K; the rest of the core needs about 100-110 KB (docs/saturn-architecture.md) plus 2 M10K TOC, caches | no |
| cropped 352x256x16 = 176 KB (MiSTer's own M10K part), one buffer | one cycle, unlimited | fits: 141 of 308 blocks (first version); 103 blocks with the SRAM tail below |
| both buffers cropped to 352x240 | `OUT_Y` is 8 bit and the PAL modes show 256 lines, so 256 rows are addressable and can be displayed; 240 rows would cut 6% (9 blocks) and break PAL | no |
| 8 bit per pixel | VDP1 16 bit pixel mode needs all 16 bits, and the buffer mode is per frame | no |
| part of a buffer in SDRAM spare slots | no bank has time to spare (above) | no |
| SRAM, 256 KB asynchronous | read 4 clk_ram (35 ns) = 28.6 M/s, write 3 clk_ram (26 ns) = 38 M/s, dedicated pins | holds one buffer (176 KB cropped) and still takes 28.6 M/s writes |

Choice: **FB0 in the Pocket SRAM, FB1 split: columns 0-191 in M10K (49,152 words, 96 blocks), columns 192-351 in the
rest of the SRAM (40,960 words, the whole SRAM is framebuffer pixels); both cropped to the first 352 columns** (index =
x*256 + y, the layout of `vdp1_fb_352x256x16`). Writes at x >= 352 are dropped and reads return 0; MiSTer keeps those
columns in DDR3, here they cost 179 KB of M10K that does not exist. Games that draw sprites beyond column 351 and read
them back, or use the rotated frame buffer modes past column 351, are the cases that differ. SRAM is the only off-chip
memory that sustains VBlank erase; the M10K part is the only on-chip place for the rest. 49,152 words is the floor for
this memory plan: both buffers need 180,224 words and the SRAM has 131,072 (the CD ring lives in PSRAM1, section 5).

The SRAM tail makes two SRAM streams possible at once (FB0 draw with FB1 tail erase, and the reverse). They have one FIFO
each (256 entries, one M10K each, FB0 and FB1 can write in the same clk_sys); the engine drains the fuller one first and
FB_RDY goes low while either holds 192 entries or more, so a draw is held back and the erase (which cannot stall) keeps
room. A draw read of a tail pixel holds FB_RDY low until the data is in `FB1_Q`, as an FB0 read does; the display read
tracks `FB1_A` in the tail like `FB0_A`. The cost is the second tracker and FIFO in `vdp1_fb_pocket` (+50 ALMs).

Measured in `sim/mem/tb_fb` (SRAM model with tAA 10 ns):

| | Result |
|---|---|
| draw, both buffers, back to back with the VDP1 handshake | 34 ns per pixel (2 clk_sys, the FSM bound) |
| display read | pixel on FB0_Q within 4 clk_sys of the address change; erase write to that pixel does not disturb it |
| display read of FB1 across the M10K / tail boundary (column 192) | valid within 4 clk_sys, 664 pixels |
| FB1 tail erase (20,000 writes at 1 per 2 clk_sys) with FB0 drawing, and FB0 erase with FB1 tail drawing | 0 lost, 0 wrong, draw slowed by FB_RDY |
| VBlank erase, 30,000 writes at 1 per 2 clk_sys | 0 lost, 0 wrong |
| SRAM with tAA 30 ns (-DSRAMAA_PS=30000) | fails: reads return X, as expected for the 35 ns read cycle |

If M10K cannot spare 96 blocks the other buffer has to go to PSRAM1 (not implemented): drawing into it runs at about
a third of the speed and VBlank erase on it loses writes. The SRAM part number is not known (`docs/pocket-platform.md`
2.1); `RD_CYC` and `WR_CYC` in `sram_pocket.sv` are the two knobs (write needs WE# low 8.7 ns at WR_CYC = 3).

## 3. VDP2 VRAM and SCSP RAM on the SDRAM (`sdram_pocket.sv`)

### Schedule

One frame = 16 clk_ram = one dot, locked to `DCE_R`. Cycle numbers count from F = `DOT_CE_F`, the edge at which VDP2
changes its addresses. `sync` is high from F+6, so the frame counter is set to 7 when it is first seen. All commands
are registered on the pins; the SDRAM clock is the inverted clk (DDIO), so it samples half a cycle later.

| Cycle | Command |
|---|---|
| 1 | latch the VDP2 addresses and the four read strobes |
| 2, 4, 6, 8 | ACT bank 0 (A0), 1 (B0), 2 (A1), 3 (B1) |
| 5, 7, 9, 11 | READ BL2 with auto precharge on those banks (ACT + 3) |
| 14 | ACT bank 2 for SCSP; READ or WRITE at cycle 17 (= 1 of the next frame) |
| 0 (= 16) | ACT bank 3 for SCSP; READ or WRITE at cycle 3 |
| 13, 15, 10, 12 | free |

A VDP2 write (one 16 bit lane, the only kind VDP2 issues) replaces the reads of its group: A to bank 0 or 2 (half bit):
ACT 2 or 6, WRITE 9; B to bank 1 or 3: ACT 4 or 8, WRITE 11. SCSP picks the bank by address bit 17.

AS4C32M16MSA-6BIN against 8.73 ns (114.5 MHz). Datasheet values are those quoted by the other Pocket cores and in
`sim/mem/models/sdram_model.sv`; the datasheet itself was not re-read.

| Parameter | Limit | Schedule |
|---|---|---|
| ACT to READ/WRITE, tRCD | 18 ns | 3 cycles = 26.2 ns |
| ACT to precharge, tRAS | 42 ns | auto precharge at READ + 2 = ACT + 5 = 43.7 ns |
| ACT to ACT, same bank, tRC | 60 ns | 8 cycles = 69.8 ns |
| ACT to ACT, other bank, tRRD | 12 ns | 2 cycles = 17.5 ns |
| precharge to ACT, tRP | 18 ns | 3 cycles = 26.2 ns |
| write recovery | 2 cycles | write at ACT + 3 or later, next ACT >= write + 5 |
| bank re-activation | | exactly 8 cycles after the previous ACT in every bank (VDP2 ACT at 2 + 2b, SCSP ACT at 10 + 2b) |
| command bus | one per cycle | 12 of 16 cycles used, none twice |
| DQ bus | no overlap | VDP2 data in cycles 8-15, SCSP data 0-7; writes sit in the gaps left by absent reads |

The write cycles were found by exhaustive search over all nine VDP2 read/write combinations and every frame-to-frame
transition (cmd bus, ACT spacing, bank readiness, DQ read/write turnaround). At 107.5 MHz (320 wide) every margin
grows; at 100 MHz the schedule would still need 16 cycles per dot, which is why `clk_ram` stays 2 x `clk_sys`.

### Latency (VDP2)

VDP2 samples the four words on the second `DOT_CE_R` after the request = F + 24. Word 0 of each pair lands in
`doutXX[31:16]` at READ + 5 and word 1 in `doutXX[15:0]` at READ + 6 (F + 11, 13, 15, 17 for the complete words). Window: after F + 8 (the previous set is sampled there) and before F + 24, so 6 cycles of margin
at the late end. `tb_sdram` models exactly this pipeline and checks every word: 0 errors in 3 profiles x 300 us.

### SCSP

SCSP samples `RAM_Q` on the second `CYCLE0_CE` after its request, 265.7 ns later, and ignores `RAM_RDY`. Requests can
follow each other every 177 ns (22.58 MHz CE, 11.29 MHz cycle). The controller waits for its bank's slot (0-16 cycles),
reads, and delivers no earlier than `SCSP_MIN_AGE` = 14 cycles after the request so that the data cannot overwrite the
previous request's word before that was sampled.

| Bound | Cycles | ns |
|---|---|---|
| earliest sample of the previous request after the next request is seen (20 cycles later) | 29 | 253 |
| delivery floor | 14 | 122 |
| worst landing, request just after the slot (1 + 16 + 3 + 5 + 1) | 26 | 227 |
| measured in `tb_sdram`, requests every 177 ns, 65% reads | 1-25 | 8-218 |

Margin at the late end is 27 ns; there is none for a second request that arrives while the first is still waiting
(`dbg_scsp_drop` counts it, 0 in all runs). SCSP writes use the same slot and are posted. The slot reads its request
registers (`sc_addr`, `sc_din`, `sc_be`, `sc_t0`) at ACT and CAS instead of keeping a copy: a request is captured at most
16 cycles before its ACT and the CAS follows 3 cycles later, and the next request is at least 20 cycles behind it.

### Refresh

There is no AUTO REFRESH after init. A group with no VDP2 read in a frame, and a SCSP slot with no request, issue a dummy
read of the next row of their bank (`scr[]` counters: 64 rows in banks 0/1, 256 in banks 2/3, which wrap without a
compare; SCSP RAM is at rows 128-255), which restores it. Real
VDP2 timing has two no-access windows per line (`REFRESH` and `NOACCESS2`, 9 dots), so banks 0 and 1 are scrubbed at
least 9 times per 63.5 us line, against 64 rows per bank to cover in 64 ms. Results:

| Test | Result |
|---|---|
| 66 ms, line pattern with those windows, 64 ms retention limit | PASS, 255 scrub wraps |
| 3 ms, VDP2 reading in every dot, 2 ms limit | FAIL (retention, banks 0 and 1), as it must: a VDP2 that never idles cannot be scrubbed |

### Clock out and data capture

The SDRAM clock is the inverted clk through a DDIO (`sdram_clk_out.sv`), as the C64 and SNES cores do. The first word of a
read reaches the FPGA register 4.7 to 5.7 cycles after the command register edge (half cycle + clock-out delay + 3 cycles
CL3 + tAC + input delay), so the default samples DQ on rising edges at READ + 5 (word 0) and + 6 (word 1).

**Runtime settings** (Core Settings menu, `interact.json`; core_top registers 0x0C and 0x10, latched by `sdram_pocket`
while `init` is high, so they apply at the next menu Reset without reloading the core):

| Menu entry | Values | `cap_sel` | Word 0 / word 1 sampled at READ + |
|---|---|---|---|
| SDRAM read capture | +4 / +5 (default) / +6 / +7 (rising edge) | 0 / **1** / 2 / 3 | 4,5 / 5,6 / 6,7 / 7,8 |
| | +3.5 / +4.5 / +5.5 / +6.5 (falling edge) | 4 / 5 / 6 / 7 | 3.5,4.5 / 4.5,5.5 / 5.5,6.5 / 6.5,7.5 |
| SDRAM clock | Inverted (default) / Normal | `clk_norm` 0 / 1 | `dram_clk` = ~clk / clk (the SDRAM sees every command half a cycle earlier) |

Settings are an experiment aid, not extra features: the SDC constrains only the default (rising edge, READ + 5).
"Normal" gives the SDRAM a clock edge at the moment the command pins change, so command hold is marginal by design.
Later capture (+6, +7) delays the VDP2 results by one or two clk_ram (VDP2 still samples 24 clk_ram after the request).
Rule of thumb from the model, with T = clock-out delay + input delay (the data valid window is about 4.2 ns):

| T (ns), clock out + pin to register | best setting |
|---|---|
| 2.0 to 3.0 | +4.5 falling (`cap_sel` 5) |
| 3.5 to 7.5 | +5 rising (1, default) |
| 8.0 to 11.5 | +5.5 falling (6) |
| 12.5 | +6 rising (2); 12.0 and above 12.5 fail with every setting in the sweep |

Sweep: `make -C sim sndram` then `sh sim/sndram/sweep.sh [TIN_ps]` (SH-2 through SCSP to the SDRAM model), or
`sh sim/mem/sweep.sh [TIN_ps]` (`tb_sdram`: VDP2 and SCSP traffic, every model timing check). Both give the same
table for TIN 1 ns and 3 ns; a row is the clock/command-out delay TCO, a column `cap_sel` 0..7, `#` = pass.
Command and clock share the TCO, as on the device. (An earlier `sim/sndram` sweep looked irregular for TCO above
4.4 ns: Verilator evaluates the right-hand side of `<= #d` at the end of the delay, which flipped the clock phase;
the bench now uses explicit delay FIFOs.)

**Comparison with the controllers that run on a Pocket** (openfpga-SNES `rtl/upstream/sdram.sv`, openfpga-C64
`sdram.v`, both from MiSTer):

| | SNES / C64 | Saturn `sdram_pocket` |
|---|---|---|
| clock | C64 64 MHz (SNES lower than ours), DDIO `~clk`, no PLL phase step | 114.5 MHz, DDIO `~clk`, no PLL phase step (same) |
| CAS latency | 2 | 3 (a 2-cycle shorter window to hide, more tAC budget) |
| capture | one register on the rising edge, SDC multicycle 2 from `dram_clk_pin` | rising edge READ + 5 (multicycle 5), or the falling-edge option |
| pin output registers | C64: `FAST_OUTPUT_REGISTER` on every `dram_*` output and `FAST_OUTPUT_ENABLE_REGISTER` on `dram_dq` | **absent before this build**: command, address and data registers sat in the fabric, with a pad delay several ns above the DDIO clock's; now set in `ap_core.qsf` |
| DQ input register | fabric register (no `FAST_INPUT_REGISTER`) | fabric register (same); both edges are captured from the same pad, so it cannot be packed into the I/O cell |
| SDC | `dram_clk_pin` generated clock, input delay 6.4 / 3.2 ns (C64), output delay 1.5 / -0.8 | `dram_clk_pin`, input delay 5.5 / 2.5, output 1.5 / -1.0 |

The likeliest breaking difference is the output register placement: with fabric output registers the command pins
lag the DDIO clock pin by an unknown, per-pin amount, so a command can be sampled a cycle late. Neither working core
runs CL3 at 114 MHz, so the data window (about 4 ns) is tighter than theirs. Not yet confirmed on hardware.

DQ turnaround: a write that follows read data by 2 cycles overlaps the SDRAM's output disable (tHZ) by up to 1.04 ns at
the datasheet maximum tHZ of 5.4 ns; the overlap is 0 with the clock path 1 ns early. Byte writes (partial DQM) also
mask word 1 of the read two cycles later in the neighbouring slot: a CPU byte write into VDP2 VRAM while the other group
reads can corrupt the second word of one fetch. Word and long writes are not affected.

## 4. PSRAM (`psram_sync.sv`)

One instance per chip, synchronous fixed latency, chip clock = clk_ram / 2 = 57.3 MHz, latency code 4 (code x tCLK
= 70 ns, minimum 60 ns), `BCR` = sync / fixed / LC4 / no wrap / continuous. The pin protocol, the two-form register
writes and the half-rate F/R-edge structure are those of `psx_vram_psram.sv` from GuardianSoul/openfpga-PlayStation
(MIT); it was re-targeted from 2 ganged chips at
33.9 MHz to one chip at 57.3 MHz. The async configuration write is stretched (WE# 70 ns) for the shorter slots.

Client port, 16 bit words (`ddram_pocket` forms the halfword address and the word count; the controller keeps no lane or
beat logic): `addr` halfword address (bit 22 = die), `cnt` words (reads 1-1023, writes 1 or 2), `din` = {word 0, word 1}
with `be` = {enables of word 0, of word 1}, held by the client until the controller is idle. A read returns its words on
`rdata`/`rvalid`, `rlast` marks the final word and busy is low in that cycle. A 2 word write starts at an even address
(it never crosses a 128 halfword row). The power-up wait is not in the controller (`INIT_US = 0`): `mem_pocket` holds both
chips until `sdram_ready` (200 us after `rst_ram`, longer than the 150 us the chips need).

`tb_psram` and `tb_ddram` (model: tACLK 9 ns, tKOH 2 ns, tHZ 7 ns, setup 3 / hold 2 ns, tCEM 4 us, 150 us power-up;
rules after the PSX model, written independently):

| Access | clk_ram cycles | ns |
|---|---|---|
| first word of a read | 14 | 122 |
| 32 byte line (16 words) | 44-56 | 384-488 |
| 1-2 word write | 15-17 | 130-150 |
| longest CE# low | | 2.3 us (limit 4 us) |

WRAM-H line fill seen by the CPU (`ramh_busy`), `tb_ddram`:

| Condition | Fills | Latency |
|---|---|---|
| PSRAM0 otherwise idle | 198 | 47-48 cycles = 410-419 ns |
| WRAM-H/WRAM-L/cart/backup mix on PSRAM0 plus VDP1 VRAM, CD RAM/buffer and the loader running | 148 | 48-120 cycles = 419-1047 ns, mean 593 ns |

Hits answer in 4 clk_ram. The loaded maximum is a fill queued behind a posted write drain and a long burst on the same
chip; VDP1 and CD traffic on PSRAM1 does not appear in it. `RAMH_SLOW = 1` (wait on `ramh_busy`) is required; at
28.6 MHz a fill is 12 bus cycles idle.

## 5. SRAM and the CD ring

The SRAM holds framebuffer pixels only (`sram_pocket.sv`, section 2). The CD sector ring (8 slots x 4 KB, docs/cd.md)
is in PSRAM1 at byte 0x108000 and reaches it through two `ddram_pocket` channels; `cd_stream` has the ports
`rg_*` instead of the SRAM pins.

* Write: one 32 bit write (two ring words) per bridge word, `ringw_*`, on the chip B arbiter after the reads. The request
  is not copied in `ddram_pocket`: `rg_wa`/`rg_wd` stay unchanged until `rg_wbusy` has fallen. `cd_stream` queues the
  bridge words in a 64 entry FIFO (one M10K pair) because the chip can be busy with a VDP1 burst (up to about 1000
  clk_ram) while a bridge word arrives every 25 clk_sys. A sector counts as complete (`ring_add`) only when the FIFO is
  empty and the last write has been issued; `ovf_cnt` counts words lost to a full FIFO (0 in `sim/cd`).
* Read: `ring_*`, 16 bit words with a 32 byte line cache. A ring write drops the cached line. The feed asks for the next
  word right after outputting the previous one, so it has one word period (648 clk_ram) for a line fill; a fill behind a
  full VDP1 burst can be later than that, which delays that word and nothing else.
* `ddram_pocket` +40 ALMs for the two channels, `sram_pocket` -20 (no arbitration), `vdp1_fb_pocket` gets 16,384 more
  tail words (32 M10K blocks fewer).

The old limit (a VBlank erase at full rate plus a sector burst lost erase writes) is gone with the ring.

## 6. Bandwidth budget

| Chip | Load | Capacity | Margin |
|---|---|---|---|
| SDRAM | VDP2 8 DQ cycles per 16 = 114.5 MB/s, SCSP up to 5.6 M requests/s (11 MB/s useful, 2 DQ cycles each), writes in the gaps | fixed schedule, 229 MB/s raw | command bus 12/16, every bank re-activated every 8 cycles; the timing table above: tRC 9.8 ns, tRRD 5.5 ns, tRCD 8.2 ns, tRAS 1.7 ns (smallest), tRP 8 ns |
| PSRAM0 | WRAM-H and WRAM-L line fills (32 B in 384-488 ns = 66-83 MB/s when streaming), SCU DMA bursts, posted writes at 130-180 ns | one chip, about 70 MB/s for 32 B lines, 10 M random words/s | a fill is 12 SH-2 bus cycles; no hit-rate data (no software run), see risk 9 |
| PSRAM1 | VDP1 texture bursts 5-30 MB/s, CD RAM 1-3 MB/s, CD buffer 0.4 MB/s, CD ring 0.8 MB/s (588 words in 250 us when a sector arrives) | same | 3-5x |
| SRAM | display read 5.1 M/s + erase 5.1 M/s + draw up to 14 M/s typical (28.6 peak), both buffers | read 28.6 M/s, write 38 M/s | active line: 4+3 cycles of 16 for display and erase; draw takes the rest |
| M10K FB1 | any | one access per clk_sys | n/a |

## 7. Load path (`load_pocket.sv`)

`bridge_loader`'s `ld_*` bus (clk_74a) goes through a 256 x 59 bit gray-code FIFO (one M10K; overflow counter in
`dbg_overflow`, 0 in the test at the bridge's minimum word spacing) to a 32 bit write port of `ddram_pocket` (PSRAM0 byte
address >> 2). A bridge word is at least 32 clk_74a = 25 clk_sys apart; a two-word write takes 15-21 clk_ram plus about
4 of FSM, so a word is absorbed in about half its slot.

| Slot (`ld_sel`) | Destination | Conversion |
|---|---|---|
| [0] BIOS 512 KB | PSRAM0 0x000000 | two image words per write, as the file reads (big endian words: word = {byte0, byte1}) |
| [1] backup RAM 32 KB | PSRAM0 0x100000 | each byte becomes `{8'hFF, byte}` (the 64 KB image of MiSTer): one bridge word = two writes |
| [2] backup cart 512 KB | PSRAM0 0x800000 (cartridge window base) | same expansion |

`LD_LITTLE` (default 1) says whether `ld_data[7:0]` is the first file byte. `loading` (clk_ram) is high while words are
in flight: hold the Saturn in reset with it. The save-out direction (APF `0x0184` writes of backup RAM) and a cartridge
ROM slot are not implemented; the loader port is address-agnostic, so a cart slot needs only a `ld_sel` code.

## 8. Resources (Quartus 21.1, 5CEBA4F23C8, area profile, `sizing/mem/run.sh`)

`mem_pocket` mapped and fitted alone with virtual pins (`sizing/mem/run.sh <name>`; `MODE=map` stops after
`quartus_map` and writes `<name>.cones.txt`, the post-map LUTs attributed to the registers they feed). ALMs are the
fitter's "ALMs needed" per sub-block; the virtual pins add about 630 ALMs to the `mem_pocket` total of a standalone run,
which are not counted below. The in-system column is the entity table of the full Pocket compile (`mem_pocket` 1,708 ALMs
there); the scaled column applies the ratio measured here to those numbers.

| Sub-block | ALM before | ALM after | M10K before | M10K after | in-system before | in-system scaled |
|---|---|---|---|---|---|---|
| `ddram_pocket` | 816 | 436 | 21 | 15 | 784 | 419 |
| `psram_sync` x2 | 132 + 129 | 92 + 108 | 0 | 0 | 159 + 159 | 111 + 133 |
| `sdram_pocket` | 296 | 260 | 0 | 0 | 324 | 285 |
| `vdp1_fb_pocket` | 178 | 205 | 177 | 98 | 196 | 226 |
| `load_pocket` + `sram_pocket` | 54 + 34 | 54 + 20 | 2 | 2 | 86 | 72 |
| Total | 1,639 | 1,175 | 200 | 115 | 1,708 | about 1,250 |

`cd_stream` adds the 64 entry ring write FIFO (2 M10K, about 25 ALMs) outside this table; the CD ring left the SRAM
(section 5) and FB1 is 49,152 words = 96 blocks plus 2 for the write FIFOs.

The framebuffer is 176 blocks before, not 141: Quartus builds a 16 bit array with byte enables from 512 x 16 blocks
(8192 bits), so 90,112 words take 176 blocks; the 141 is 1,417 kbit / 10.24. Now FB1 is 49,152 words = 96 blocks, plus 2
for the write FIFOs. Columns of 5 + 2 + 1 bits per byte lane take the same 128 blocks (tried); 10 bit columns (1K x 10,
10240 bits) would need a read-modify-write for partial byte writes and give 112.

What changed, ALM by ALM (standalone, same flow):

| Step | Effect |
|---|---|
| read caches as M10K, 16 bit write port, 16 / 32 bit read port (no output muxes, no input registers) | ddram 816 -> 483 together with the next four items |
| narrow state: one WRAM-H fill flag, tree PLRU, 15 bit tags, 32 bit write data, no bios channel, cart window on die 1 (the base is a concatenation) | |
| `psram_sync`: no copy of din/be, no 64 bit dout/shift, no timer for the power-up wait (client drives `init_go`), word oriented port (halfword address, word count, no lane logic) | psram 261 -> 193 |
| `ddram_pocket`: the PSRAM port forms halfword addresses directly (byte enables are per word, 4 bits) | ddram 483 -> 416 |
| `sdram_pocket`: SCSP slots read the request registers, word 0 of a VDP2 fetch lands directly, scrub counters wrap without a compare, SCSP rows 128-255 | sdram 296 -> 258 |
| `vdp1_fb_pocket`: FB1 tail in the SRAM, second FIFO and tracker | fb 178 -> 236, 47 M10K blocks fewer |

Where the remaining LUTs are (`sizing/mem/s12.cones.txt`): `ddram_pocket` address and write data muxes (a_addr 98, a_wd 53,
b_addr 51 LUTs: nine channel sources), `sdram_pocket` pin address mux (96), the FB1 read mux across 128 blocks (48), the
framebuffer engine SRAM address (47), the SDRAM scrub counters (45), VDP2 write data lane (36), `ramh_dout` (32). The
other candidates were costed and not done: writes invalidating the channel's cache line (drops the write address
registers, about 50 ALMs, but WRAM-L read lines die on every write), a shared PSRAM engine for both chips (loses the
concurrency of section 6), moving the CD ring off the SRAM (16,384 words = 32 blocks of tail, needs the `cd_stream` ring
interface changed).

Timing closure at 114.5 MHz (clk_ram) is unknown.

## 9. Simulation (`make -C sim mem`, iverilog, about 25 s; `make -C sim mem-long` 10 min; `negative`, `skew`)

| Bench | Checks | Result |
|---|---|---|
| `tb_sdram` (3 profiles x 300 us, 66 ms retention) | VDP2 reads at the real DOT_CE_F/R pipeline, writes, SCSP at the real CE timing, every SDRAM timing parameter, DQ overlap, retention | 0 errors; DQ overlap 1.04 ns at worst-case tHZ |
| `tb_psram` | 1263 writes of 1-2 words (partial masks), 749 reads of 1-150 words across both dies and rows, `rlast` position | 0 mismatches, 0 model errors |
| `tb_ddram` | WRAM-H/L, BIOS (through the loader port), backup, cart, VDP1 VRAM (posted writes, bursts), CD RAM/buffer, loader, concurrently | 0 errors; WRAM-H fill 47-48 cycles idle, 48-137 loaded (was 48-120: more fills in this run, 159 against 148) |
| `tb_fb` | draw (read, partial writes) on FB0, FB1 and the FB1 tail, display + erase of FB0 and of FB1 across the tail boundary, VBlank erase with the CD ring, erase of the tail while FB0 draws and the reverse | pass; negative runs fail as expected |
| `tb_load` | 2048 loader writes from 4096 + 1024 + 1024 bridge bytes (backup cart at PSRAM0 0x800000) | pass |
| `mem-long` | 66 ms retention with the 256 row scrub of banks 2/3 | pass |
| `sim/cd` (`cd`, `cd-real`) with the ring memory model of `tb_cdd` (4 clk write busy, reads 2-40 clk and now and then 500) | | pass |
| `tb_ddram` ring | 3 sectors of 588 bridge words written and read back while the other clients run | 0 errors |

The models were written here from the datasheet values quoted in the other cores' sources; they share any
misreading with the controllers.

## 10. Untested on hardware, and risks

1. SDRAM data capture edge and clock phase (section 3): menu settings SDRAM read capture / SDRAM clock; the debug overlay
   square 15 is a write/read-back self-check of the SDRAM. Window is 4 ns wide in the model.
2. SDRAM DQ turnaround at worst-case tHZ: 1 ns overlap; byte writes disturb word 1 of a neighbouring read.
3. No AUTO REFRESH: retention depends on VDP2's real no-access windows. A game that disables them (it cannot: they are
   `H_CNT` based) or a pause state with VDP2 reading continuously would lose banks 0/1 after 64 ms.
4. SCSP deadline margin 27 ns; an SCSP clock that runs faster than the NCO in `tb_sdram` shortens it.
5. PSRAM synchronous mode at 57.3 MHz / LC4 (the PSX core runs 33.9 MHz). `READ_ADJ` / `WRITE_ADJ` are the bring-up
   knobs. The controller does not park the chips back in asynchronous mode: after this core the chips stay
   synchronous until power-off, which breaks other cores that use them asynchronously (the PSX core parks them).
6. SRAM part and speed unknown; the framebuffer needs a read of 35 ns and a write cycle of 26 ns with WE# low 8.7 ns.
7. A CD ring line fill behind a long VDP1 burst on PSRAM1 can arrive later than one CD word period (section 5).
8. The framebuffers drop columns 352-511. M10K use of the memory subsystem is 146 blocks (47%) before the CD TOC RAM, SH-2
   caches, SH-1 and SCSP are counted. FB0 draw with an FB1 tail erase (or the reverse) slows the draw while FB_RDY is held low.
12. `sdram_pocket` SCSP slots depend on requests being at least 20 clk_ram apart (they are: CE spacing 177 ns).
13. `psram_sync` is held until `sdram_ready`; the PSRAM power-up wait is the 200 us SDRAM one.
9. WRAM-H fills take 410-1050 ns. The effect on game speed depends on the cache hit rate, which was not measured.
10. Cartridge ROM loading and backup save-out are not implemented; the 64 KB backup image conversion assumes `{FF, byte}`.
11. SDC constraints for the pin paths, the `sync` and `fb` crossings between `clk_sys` and `clk_ram`, and the `cd_stream`
    signals into the shared SRAM are not written.
