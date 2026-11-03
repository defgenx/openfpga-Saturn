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
| | SCSP RAM 512 KB | bank 3 rows 256-511 |
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
| SDRAM bank 3 in the VDP2 schedule | one random access per 8 cycles per bank = 14 M/s at best; in the final schedule every bank is activated by VDP2 in every dot and bank 3 also by the SCSP (a READ holds a bank 9 cycles), and 1 of 16 command cycles is left | no |
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
each (256 entries, one M10K each, FB0 and FB1 can write in the same clk_sys); the engine drains the fuller one first (the
occupancy difference is a running register, `dlt`, moved by the push and the pop of each edge: the two subtractions and
the compare it replaces in front of the pointer update were the longest clk_ram path inside the module; it needs `rst`
high for two clk_sys or more, which `ram_reset` gives) and FB_RDY goes low while either holds 192 entries or more, so a
draw is held back and the erase (which cannot stall) keeps room. A draw read of a tail pixel holds FB_RDY low until the data is in `FB1_Q`, as an FB0 read does; the display read
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
changes its addresses. `sync` is high from F+6, so the frame counter is set to 7 when it is first seen (`slot`, the
cycle generated at an edge, is `fc + 1` kept as its own register so the command decode starts from flip-flops). All commands
are registered on the pins; the SDRAM clock is the inverted clk (DDIO), so it samples half a cycle later.

| Cycle | Command |
|---|---|
| 0 (= 16) | SCSP: ACT bank 3, row 256 + word address bits 17-10, when a request is pending |
| 1 | latch the VDP2 addresses and strobes; WRITE bank 2 (a group A write of the previous frame) |
| 2, 5, 8, 11 | ACT bank 0 (A0), 1 (B0), 3 (B1), 2 (A1) |
| 3 | SCSP READ, no auto precharge |
| 4 | SCSP WRITE |
| 6 | PRECHARGE bank 3 after a SCSP READ |
| 7, 10, 12, 15 | READ bank 0, 1, 3, 2 (ACT + 5, + 5, + 4, + 4) |
| 9, 13, 12, 17 (= 1) | WRITE bank 0, 1, 3, 2 |
| 14 | free |

Every VDP2 READ and WRITE and the SCSP WRITE carry auto precharge; scrub reads are VDP2 READs whose data is dropped. A
VDP2 write (one 16 bit lane, the only kind VDP2 issues) replaces both reads of its group: A to bank 0 or 2 (half bit),
B to bank 1 or 3. The sound RAM is all in bank 3 (rows 256-511), which B1 and the SCSP share at an 8 cycle period;
banks 0-2 hold one VDP2 row per frame.

AS4C32M16MSA-6BIN datasheet rev 1.0 (Dec 2017), AC characteristics of the -6 grade, against 8.73 ns (114.5 MHz). The
model `sim/mem/models/sdram_model.sv` checks every row of this table.

| Parameter | Limit | Schedule |
|---|---|---|
| ACT to READ/WRITE, tRCD | 18 ns | 4 or 5 cycles (34.9 ns); SCSP READ 3 cycles (26.2 ns) |
| ACT to precharge, tRAS (no tRAS lockout in the datasheet) | 48 ns | READ: auto precharge at READ + BL = ACT + 6 or 7 (52.4 ns); SCSP READ: PRECHARGE at ACT + 6; WRITE at ACT + 4 or later: precharge tWR after it (49.9 ns) |
| precharge to ACT, tRP | 18 ns | banks 0-2: 9 cycles or more after a READ; bank 3: 2 cycles = **17.5 ns** after a READ when B1 and the SCSP alternate (below), 3 or more otherwise |
| WRITE to ACT, tWR + tRP (tDAL) | 33 ns | 4 cycles = 34.9 ns (bank 3), more elsewhere |
| ACT to ACT, same bank, tRC | 60 ns | 8 cycles = 69.8 ns (bank 3), 16 cycles (banks 0-2) |
| ACT to ACT, other bank, tRRD | 12 ns | ACTs at 0, 2, 5, 8, 11: 2 cycles = 17.5 ns or more |
| WRITE to bank m during a READ burst of bank n | interrupts it: words after the WRITE are not driven, DQM high 2 clocks before | never: every WRITE is 5 cycles or more after any READ (its last word is sampled at READ + 4); A0 READ 7 / B1 WRITE 12, B1 READ 12 / A1 WRITE 17 and A1 READ 15 / SCSP WRITE 20 are the "Read to Write" case of the datasheet (Figure 6, WRITE on the clock after the last word) |
| READ during a READ burst | interrupts it CL later | never: READs are 2 cycles or more apart |
| DQM | write mask at the WRITE, read mask 2 clocks later | write byte enables only; no read word is due within 2 cycles of a WRITE, so a byte write masks nothing else |
| init | 200 us, PRECHARGE ALL, 2 AUTO REFRESH, MRS, EMRS before the first ACT | 200 us, PRECHARGE ALL, 2 x AUTO REFRESH 12 cycles apart (tRFC 80 ns), MRS (BL2, CL3, single writes), EMRS (BA = 10, A = 0: full drive strength, all banks), 4 cycles each (tMRD 2) |
| command / address / DQM / write data setup, hold | 2.0 / 1.0 ns | SDC output delay 2.0 / -1.0 ns, no board delay (`core_constraints.sdc`) |
| command bus | one per cycle | 15 of 16 cycles used, none twice |

Why bank 3 has a short tRP. VDP2 fetches four independent rows per frame and all four banks hold one of them; the SCSP
needs a slot every 16 cycles (its deadline, below) in the bank of its data, so one bank takes two rows per frame. A READ
holds its bank for tRAS + tRP = 6 + 3 cycles at 114.5 MHz, so two READs cannot share a bank in 16 cycles. Bank 3 uses
6 + 2 (tRP 17.5 ns, 0.5 ns short) for B1 READ -> SCSP ACT and SCSP READ -> B1 ACT, only in frames with a SCSP request
(`n_trp_short` in the model, +SD_TRP_PS=17400 in the benches); the other split, 5 + 3, is tRAS 43.7 ns, 4.3 ns short,
which is what v0.2.4 did at every access of every bank. At 107.4 MHz (320 wide) 2 cycles are 18.6 ns and every row of
the table holds. A WRITE holds its bank 8 cycles (tWR in ns), so a SCSP write frame meets tRP on its own side.

How the cycles were found (exhaustive search over every ACT / READ / WRITE position per slot, all slot pairs in the same
and in adjacent frames: command bus, tRRD, per-bank timing, the VDP2 window below, no WRITE 1-4 cycles after a READ of
another slot and no READ one cycle after a VDP2 READ): with the sound RAM split over banks 2 and 3 (v0.2.4), or with
the groups paired per bank as Saturn_MiSTer's `sdram1.sv` pairs them (A0 / A1 in bank 0, B0 / B1 in bank 1, SCSP alone;
there BL1 and READ at ACT + 3, against the 42 ns tRAS of MiSTer's AS4C32M16SB), two 8 cycle banks each fix both write
cycles of their two clients at ACT + 4, and no position of the other group's reads keeps every write outside a read
burst. With one shared bank there are solutions; a write 6 cycles after every read (one idle cycle on the bus) has none.

### Latency (VDP2)

VDP2 samples the four words on the second `DOT_CE_R` after the request = F + 24. Word 0 of each pair lands in
`doutXX[31:16]` at READ + 5 and word 1 in `doutXX[15:0]` at READ + 6 (F + 13, 16, 18, 21 for the complete A0, B0, B1,
A1 words). Window: after F + 8 (the previous set is sampled there) and before F + 24, so 2 cycles of margin at the late
end. `tb_sdram` models exactly this pipeline and checks every word: 0 errors in 3 profiles x 300 us at 114.5 MHz and 2 at 107.4 MHz (`+W320`).

### SCSP

SCSP samples `RAM_Q` on the second `CYCLE0_CE` after its request, 265.7 ns later, and ignores `RAM_RDY`. Requests can
follow each other every 177 ns (22.58 MHz CE, 11.29 MHz cycle). The controller waits for the slot (cycle 0, 0-16
cycles), reads at ACT + 3, and delivers no earlier than `SCSP_MIN_AGE` = 14 cycles after the request so that the data cannot overwrite the
previous request's word before that was sampled.

| Bound | Cycles | ns |
|---|---|---|
| earliest sample of the previous request after the next request is seen (20 cycles later) | 29 | 253 |
| delivery floor | 14 | 122 |
| worst landing, request just after the slot (1 + 16 + 3 + 5 + 1, as v0.2.4) | 26 | 227 |
| measured in `tb_sdram`, requests every 177 ns, 65% reads | 1-25 | 8-218 |

There is no margin at the late end: the full-system simulation consumes deliveries up to 28 clk_ram after the request
(`ch2 latency` histogram in `trace.log`), and a build that landed the word one clk_ram later (READ + 6) returned every SCSP
sample fetch one request stale (silence); the capture of section 3 lands at READ + 5, as Saturn_MiSTer's. This is why
the SCSP READ goes out at ACT + 3 without auto precharge and closes the row with a PRECHARGE at ACT + 6: an auto
precharge READ at ACT + 4 would meet tRAS too but land one cycle later. There is no margin either for a second request
that arrives while the first is still waiting (`dbg_scsp_drop` counts it, 0 in all runs). SCSP writes use the same slot
(WRITE at ACT + 4) and are posted. The slot reads its request registers (`sc_addr`, `sc_din`, `sc_be`, `sc_t0`) at ACT
and CAS instead of keeping a copy. A request is captured at most 16 cycles before its ACT and the CAS follows 3 or 4
cycles later, but the next request can come 18 clk_ram after the previous one (four SCSP CE at 2 or 3 clk_sys each in
the 320 wide modes; 20 at 114.5 MHz), so one that arrives between the ACT edge and the CAS is only flagged (`l_rd` /
`l_wr`) and taken from the request lines at cycle 5: the SCSP keeps `MEM_A`, `MEM_D` and its strobes until its next
request. Its wait stays within 16 cycles (cycle 5 to the next cycle 0); its `sc_t0` counts from cycle 5, which only
matters for the delivery floor, and the word lands 19 cycles after that. Without this, `tb_sdram +W320` returned the
neighbouring request's word for a read and the full-system run (320 wide, 107.4 MHz) lost the sound driver. Cycle 5 is
an odd clk_ram edge, so the hold exception of `sc_addr` / `sc_din` still holds (`make mc-check` counts these captures).

### Refresh

There is no AUTO REFRESH after init. A group with no VDP2 read in a frame issues a dummy read of the next row of its
two banks (`scr[]` counters: 64 rows in banks 0-2, 512 in bank 3, which wrap without a compare: B1 rows 0-63, the
unused rows 64-255 and the sound RAM rows 256-511), which restores it. The SCSP slot does not scrub (a dummy ACT there
would add the short tRP of bank 3 to every frame), so the sound RAM depends on the VDP2 windows as VRAM does. Real VDP2
timing has two no-access windows per line (`REFRESH` and `NOACCESS2`, 9 dots), so every bank is scrubbed at least 9
times per 63.5 us line: 64 rows in 7 lines, bank 3's 512 in 57 lines (3.6 ms), against 64 ms. Results:

| Test | Result |
|---|---|
| 66 ms, line pattern with those windows, 64 ms retention limit | PASS |
| 3 ms, VDP2 reading in every dot, 2 ms limit | FAIL (retention), as it must: a VDP2 that never idles cannot be scrubbed |

### Clock out and data capture

The SDRAM clock is the inverted clk through a DDIO (`sdram_clk_out.sv`), as the C64 and SNES cores do, so the SDRAM
samples a command half a clk_ram after the command register edge (READ + 0.5 plus the clock-out delay). With CL3 it
launches word 0 at its second clock edge after that (READ + 2.5 plus the clock-out delay) and word 1 at the third; a word
is valid at the pad from tAC (5.5 ns max) after its launch edge to tOH (2.5 ns min) after the next one: 5.7 ns per word.

DQ is captured in the I/O cell input register (`cap_p`, `FAST_INPUT_REGISTER` on the register and on the `dram_dq` pins
in `ap_core.qsf`), so every bit has the same pad-to-register delay, and the word is taken from that register one clk_ram
after its sample edge: word 0 at tag stage `cs_st` + 4. This is the structure of Saturn_MiSTer's `sdram1.sv`, which runs the
same 114.5 MHz clk_ram with CL3, `SDRAM_CLK = ~clk` through a DDIO and `FAST_INPUT_REGISTER` on `SDRAM_DQ`: there the pin
registers take the READ one clock after `state[0]`, `rbuf0 <= SDRAM_DQ` samples every clock and `out_read = state[5].RD`
moves `{rbuf1, rbuf0}` into `dout`, so each word is the sample taken 4 clocks after its READ reached the pins and lands
5 clocks after it. The Pocket default is the same READ + 4.

The capture edge is fixed (word 0 sampled at READ + 4, word 1 at + 5, both landing one clk later); the former
"SDRAM read capture" menu entry and core_top register 0x0C are gone.

Why +4, from the timing analyser of the v0.2.3 build (slow 1100mV 85C / fast 1100mV 0C): the dram_clk pin follows the
ideal clk_ram falling edge by 6.59 / 2.63 ns; an I/O cell input register sees clk_ram 4.33 / 0.69 ns after the ideal edge
and its data 2.84 / 1.29 ns after the pad. Word 0 is at the pad from READ + 2.5 clk + clock-out + 5.5 ns until
READ + 3.5 clk + clock-out + 2.5 ns, so the I/O cell register holds it when it samples between READ + 3.73 and + 4.35
(slow) or between + 3.56 and + 4.18 (fast), in clk_ram periods of 8.73 ns. +4 is inside both with 2.4 ns (setup, slow) and
1.4 ns (hold, fast) to spare; +3 (0.7 clk before the word at the slow corner) and +5 (past it) miss the word at both
corners, as does any half-step of either edge. The SDC times it (`dram_clk_pin` to clk_ram, setup multicycle -end 2:
word 0 at READ + 4 is the 2nd clk_ram edge after its launch edge, 1.5 clk_ram later; the hold check stays at the default
edge because word 1 follows one SDRAM clock later).

What this replaces. Up to v0.2.3 the rising-edge settings took DQ from the pad straight into the ten landing registers
(9.5 to 10.5 ns to the register at the slow corner, with 1 ns of spread between bits), falling-edge and quarter-phase
(`clk_ram_cap`, PLL counter 4, now unused) registers were the other settings, and the SDC multicycle counted from the
READ edge instead of the SDRAM's data launch edge (-end 5 instead of 3 for the +5 default it timed): the pass it reported
was 17 ns too lenient. The model (`sim/mem/models/sdram_model.sv`) launched the data one SDRAM clock late (CL4
behaviour) and cut every word's hold to tLZ instead of tOH, which is why "+4 rising reached the BIOS logo" on the Pocket
while the bench wanted +4.5 and +5. Both are corrected (tAC 5.5 / tOH 2.5 ns are kept: the -6 and -7 grades of the
AS4C32M16 are within them); `tb_sys`, `tb_sdram` and `tb_sndram` carry pad delays (`+TCO=n`, default 5100 ps =
slow-corner clock-out less the I/O register's 1.49 ns clock lead over its data path, `+TIN=n` 0) so the default setting
is what they exercise.

Sweep with the corrected model (`sh sim/mem/sweep.sh [TIN_ps]`, one line per TCO): READ + 4 passes for TCO 2.0 to 7.5 ns
(READ + 5 and + 6, tried while the setting existed, nowhere). The hardware-equivalent TCO for the I/O cell register is 5.1 ns
(slow) and 3.2 ns (fast), so the margins are 2.4 ns at the slow end and 1.2 ns at the fast end. `sim/sndram` (SH-2 through
SCSP to the model, `NOCHK=1`: the self-check it gates on is compiled out) gives the same range.

Landing at READ + 5 keeps the VDP2 window (words land from F + 10 to F + 17, the set is sampled at F + 24, the previous
one at F + 8) and is the SCSP delivery of the old +5 default (worst case 26 clk_ram after the request); one clk_ram later is
too late for the SCSP (section "SCSP" above), so a capture register may not be added without moving the sample edge.

The command, address, data and enable pin registers are I/O cell registers (`FAST_OUTPUT_REGISTER`,
`FAST_OUTPUT_ENABLE_REGISTER`, `ap_core.qsf`), and the pin command registers power up as NOP (zero is an MRS).
A dram_clk phase option (`dram_clk` = clk) was left out: both working cores use `~clk`, and the command pins would then
change 0.8 ns after the clock edge at the chip.

**Comparison with the controllers that run on a Pocket** (openfpga-SNES `rtl/upstream/sdram.sv`, openfpga-C64
`sdram.v`, both from MiSTer):

| | SNES / C64 | Saturn `sdram_pocket` |
|---|---|---|
| clock | C64 64 MHz (SNES lower than ours), DDIO `~clk`, no PLL phase step | 114.5 MHz, DDIO `~clk`, no PLL phase step (same) |
| CAS latency | 2 | 3 (a 2-cycle shorter window to hide, more tAC budget) |
| capture | one register on the rising edge, SDC multicycle 2 from `dram_clk_pin` | one I/O cell register on the rising edge, READ + 4 (setup multicycle 2 from the data launch edge) |
| pin output registers | C64: `FAST_OUTPUT_REGISTER` on every `dram_*` output and `FAST_OUTPUT_ENABLE_REGISTER` on `dram_dq` | same, `ap_core.qsf` |
| DQ input register | fabric register (no `FAST_INPUT_REGISTER`) | I/O cell (`FAST_INPUT_REGISTER`), as Saturn_MiSTer's `sdram1.sv` |
| SDC | `dram_clk_pin` generated clock, input delay 6.4 / 3.2 ns (C64), output delay 1.5 / -0.8 | `dram_clk_pin`, input delay 5.5 / 2.5, output 1.5 / -1.0 |

Neither working core runs CL3 at 114 MHz, so the data window (5.7 ns at the pad, 4.2 ns after the FPGA's own corner
spread) is tighter than theirs. Not yet confirmed on hardware.

DQ turnaround. No WRITE is issued while a read burst is in flight (table above), so the SDRAM never drives a word into a
write cycle. The three WRITEs on the clock after a burst's last word start driving the bus while that word is turning
off: the FPGA drives from W + 7.4 ns (slow; 3.1 fast), the SDRAM releases at most tHZ = 6 ns after its edge W - 1, which
is W - 0.5 clk + clock-out (6.59 / 2.63 ns), so they can overlap by up to 0.8 ns (slow) / 1.2 ns (fast) at the worst-case
tHZ, on a word the FPGA captured a clk earlier. `tb_sdram` measures it with its pad delays (1.6 ns) and fails above
+OVERLAP_PS (1700 in the Makefile).

What v0.2.4 did wrong (the model now catches all of it; `+SD_OLDMAP` selects its sound RAM map): every READ was at ACT +
3 with auto precharge at ACT + 5, 43.7 ns against tRAS 48 ns, in every bank; the group A write at 9 cut the B0 read at 7
and the group B write at 11 the A1 read at 9 (`tb_sdram` profile 2: 381 poisoned VDP2 words in 300 us), the SCSP bank 3
write at 3 cut the bank 2 slot's read at 1 (a scrub there: one SCSP request is served at a time); the init had no EMRS.

## 4. PSRAM (`psram_sync.sv`)

One instance per chip, synchronous fixed latency, chip clock = clk_ram / 2 = 57.3 MHz, latency code 4 (code x tCLK
= 70 ns, minimum 60 ns), `BCR` = sync / fixed / LC4 / no wrap / continuous. The pin protocol, the two-form register
writes and the half-rate F/R-edge structure are those of `psx_vram_psram.sv` from GuardianSoul/openfpga-PlayStation
(MIT); it was re-targeted from 2 ganged chips at
33.9 MHz to one chip at 57.3 MHz. The async configuration write is stretched (WE# 70 ns) for the shorter slots. The pin
registers are I/O cell output registers as in the PSX core (`FAST_OUTPUT_REGISTER` / `FAST_OUTPUT_ENABLE_REGISTER`,
`ap_core.qsf`). `p_dq` and `p_oe` are written at every F edge from a function of the segment state, with no constant in
any branch: an I/O cell has one clock enable for its output and output-enable registers and no synchronous control, and
the fitter packs `p_oe` next to a `p_dq` bit only when both registers end up with the same enable. With per-branch
assignments the synthesis gave the eight `p_dq` bits whose configuration value depends on `cop[0]` their own enable and
the eight constant bits (and `p_oe`) `ph`, so half the pins kept `p_oe` in the fabric (cram0/1 pins -0.46 ns, round 2 in
docs/fit-status.md); `ALLOW_SYNCH_CTRL_USAGE OFF` on the registers packed them but applied to the entity and cost 13
LABs. While `p_oe` is low the DQ pins are high impedance and `p_dq` holds `act_adr[15:0]`, which also carries a
configuration value one slot ahead of its write. The chip clock register `p_clk` and the read data register `dq_r` are
I/O cell registers too (pin timing below).

### Pin timing

Chip figures: the AS1C8M16PL datasheet itself was not found; the AS1C4M16PL-70BIN datasheet (Alliance, same family, 64 Mb,
Rev 1.0 Aug 2018, burst READ / WRITE tables 14 and 16) is used, whose tACLK (7 ns at 108 MHz, 5.5 at 133) matches the
distributor data of the 128 Mb part. Values of the slowest grade that runs 57.3 MHz (the 83 MHz column; the 133 MHz grade
is faster in every one): tACLK 9 ns max, tKOH 2 min, tSP 3 min, tCSP (CE#) 4 min, tHD 2 min, tCLK 12 min. Fixed latency
code 4 is allowed up to 66 MHz (table 6). Board: 0.5 ns per trace assumed (not measured), so the SDC uses output setup
3.5 (CE# 4.5), output hold 2.5, input 10.0 max / 2.0 min against the clock at the `cram*_clk` pin.

The pin clock is a generated clock on the `cram*_clk` port (sourced from the `p_clk` register), so the route and
1.8 V output buffer of the clock are in every check. Up to v0.2.4 the clock was defined on the `p_clk` register, which
dropped the clock's 5.6 ns of route and buffer (2.3 + 3.3 ns, slow 85C) from every read check, and `p_clk` and the read
register were fabric registers. The v0.2.4 placement re-timed with the corrected SDC (`docs/fit-status.md`, PSRAM and
SRAM pin timing): read setup -3.38 (cram0) / -4.47 (cram1) at slow 85C, where the old SDC reported about +2.

The read loop at slow 85C: the chip clock leaves the R edge register, reaches the pin, the chip drives the word tACLK
after that edge, and the word travels back to a register that samples at the next R edge (17.46 ns later). With `p_clk`
and the capture register in the I/O cells the loop loses most of the fabric routes at both ends (seed 3 fit, slow 85C:
clock at the pin 8.33 -> 6.84 ns, pad to register 6.03 -> 2.97 ns) and the capture register's clock is the I/O clock,
0.8 ns later than a LAB's: read setup +1.02 (cram0) / +0.91 (cram1) at slow 85C, hold +4.3 at fast 0C. Rules:

* every pin register changes only at F edges, half a clk_ram before the chip clock edge that samples it (setup 8.73 ns);
  the hold check is against the chip edge before (SDC `-hold -start 1`), never against an edge at the launch instant.
* `dq_r` samples DQ at every clk edge (no enable, no logic in front, so it packs into the I/O cell next to `p_dq` and
  `p_oe`), and `rdata` is `dq_r`: the word sampled at the R edge that sets `rvalid` is in it during the `rvalid` cycle,
  as the old R-edge register's was. `rdata` is don't-care outside `rvalid` (`ddram_pocket` writes its caches only with
  `rvalid`).
* the only edge in the data window is that R edge: the word is at the pad from about 17 ns after the launch edge (slow)
  until about 22 ns (fast: clock out + tKOH after the next edge), so neither the F edge before nor the one after works.
* the path `dq_r` -> `ddram_pocket` cache M10K data input is one clk_ram from the I/O cell (was from a fabric register):
  +2.88 ns in the seed 3 fit.
* the SDC takes the clock sources with `-no_duplicates`: the fitter keeps a fabric copy of a register it packs into a pin
  when the register feeds back into its own logic (`e_oe_n` does), and both copies match the name.

The board delay (0.5 ns per trace) is an assumption; without it the read margin is about 1 ns larger. A slower chip clock
is not needed at 57.3 MHz.

Client port, 16 bit words (`ddram_pocket` forms the halfword address and the word count; the controller keeps no lane or
beat logic): `addr` halfword address (bit 22 = die), `cnt` words (reads 1-1023, writes 1 or 2), `din` = {word 0, word 1}
with `be` = {enables of word 0, of word 1}, held by the client until the controller is idle. A read returns its words on
`rdata`/`rvalid`, `rlast` marks the final word and busy is low in that cycle. A 2 word write starts at an even address
(it never crosses a 128 halfword row). The power-up wait is not in the controller (`INIT_US = 0`): `mem_pocket` holds both
chips until `sdram_ready` (200 us after `rst_ram`, longer than the 150 us the chips need).

Each register is written twice, asynchronously with the clock stopped (a power-on die), then clocked (a die another core
left synchronous). A clocked register write is a burst-of-one write in the mode the die is already in (AS1C4M16PL fig. 10
note 3), so CE# stays low 10 chip edges after the latch edge: enough for fixed code 8, the longest another core can leave.

`tb_psram` and `tb_ddram` (model: tACLK 9 ns, tKOH 2 ns, tHZ 7 ns, setup 3 / hold 2 ns, CE# setup 4 ns, tCEM 4 us, 150 us power-up,
plus the AS1C4M16PL rules cited at each check in `sim/mem/models/psram_model.sv`; `make psram-modes` starts the dies in
other cores' modes):

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

Hits answer in 4 clk_ram. The hit test runs at the clk_ram edge after the request's clk_sys edge; a missed line's tag is
written one edge later and the fill address is taken from `ramh_addr` as well, which the master holds under WAIT until
the fill is done, so both are two-clk_ram paths from the SH-2 address registers (`core_constraints.sdc`) and the 15 bit
compare, the way choice and the busy flag are the only one-clk_ram paths left on that crossing. The loaded maximum is a
fill queued behind a posted write drain and a long burst on the same
chip; VDP1 and CD traffic on PSRAM1 does not appear in it. `RAMH_SLOW = 1` (wait on `ramh_busy`) is required; at
28.6 MHz a fill is 12 bus cycles idle.

## 5. SRAM and the CD ring

The SRAM holds framebuffer pixels only (`sram_pocket.sv`, section 2). A read drives UB# and LB# low: an x16
asynchronous SRAM drives a byte of DQ only while its enable is low, and with both high it leaves the bus floating (up
to v0.2.4 reads ran with both enables high, so every SRAM pixel read returned the floating bus; `sram_model` now
enforces the rule and `tb_fb` fails with the old strobes). The CD sector ring (8 slots x 4 KB, docs/cd.md)
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

SRAM pin timing. The chip has no clock; the reference is the OE# pin (`sram_ref_pin`, a generated clock on the
`sram_oe_n` port sourced from the `e_oe_n` register), every other pin is held within `SRAM_SKEW` = 2 ns of it, and read
data is valid `SRAM_SKEW` + tAA + 1 ns of board after it (tAA 10 ns assumed: the part is not known). Up to v0.2.4 the
reference was the `e_oe_n` register (5.8 ns of route and 3.3 V buffer dropped from the read check, which read +1.8 ns and
is -2.70 at slow 85C with the corrected SDC) and `fb_q` was a fabric register 4.6 ns from its pad, sampled 3 clk_ram after
the address edge. Now every SRAM pin register and the read register `dq_r` are I/O cell registers (`ap_core.qsf`), and
`dq_r` samples at every edge: `fb_q` is `dq_r`, so in the `fb_done` cycle it holds the word sampled at the edge that sets
`fb_done`, 4 clk_ram (34.9 ns) after the address edge. The pins of the next access change at that edge too and reach the
chip 3 to 8 ns later, so the sample still sees the word (hold check at that edge, input minimum -`SRAM_SKEW`). `fb_q` is
don't-care outside `fb_done` (`vdp1_fb_pocket` reads it only then). In `tb_fb` (pin delays 3.5 ns out, 1 ns in) a read
passes up to tAA 30 ns (was 21 ns); the negative run uses 35 ns. Seed 3 fit: read setup +15.0 ns at slow 85C with tAA
10 ns (so tAA up to about 25 ns), hold +0.23 at fast 0C, pin window +1.28 / +1.27.

## 6. Bandwidth budget

| Chip | Load | Capacity | Margin |
|---|---|---|---|
| SDRAM | VDP2 8 DQ cycles per 16 = 114.5 MB/s, SCSP up to 5.6 M requests/s (11 MB/s useful, 2 DQ cycles each), writes in the gaps | fixed schedule, 229 MB/s raw | command bus 15/16; bank 3 re-activated every 8 cycles (B1 and SCSP), banks 0-2 every 16; the timing table above: tRCD 8.2 ns (SCSP READ), tRAS 1.9 ns (WRITE), tRP -0.5 ns (bank 3, section 3), tRC 9.8 ns, tRRD 5.5 ns |
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

Timing at 114.5 MHz (clk_ram): the half-rate `psram_sync` pin and segment registers and the `ddram_pocket` WRAM-H tags
carry two-clk_ram multicycle exceptions (`core_constraints.sdc`, with the proof in its comments); see `docs/fit-status.md`
for the measured slack.

## 9. Simulation (`make -C sim mem`, iverilog, about 25 s; `make -C sim mem-long` 10 min; `negative`, `skew`)

| Bench | Checks | Result |
|---|---|---|
| `tb_sdram` (3 profiles x 300 us at 114.5 MHz, 2 at 107.4 MHz, 66 ms retention) | VDP2 reads at the real DOT_CE_F/R pipeline, writes, SCSP at the real CE timing, every SDRAM timing parameter, DQ overlap, retention | 0 errors, no read word cut by a WRITE, no READ-interrupted burst; tRP 17.5 ns in bank 3 counted at 114.5 MHz (about 2,300-2,500 per 300 us, section 3; none at 107.4 MHz); DQ overlap 1.6 ns with the worst-case tHZ on a WRITE right after a burst (limit 1.7 ns, Makefile `SDARGS`) |
| `tb_psram` | 1263 writes of 1-2 words (partial masks), 749 reads of 1-150 words across both dies and rows, `rlast` position | 0 mismatches, 0 model errors |
| `tb_ddram` | WRAM-H/L, BIOS (through the loader port), backup, cart, VDP1 VRAM (posted writes, bursts), CD RAM/buffer, loader, concurrently | 0 errors; WRAM-H fill 47-48 cycles idle, 48-137 loaded (was 48-120: more fills in this run, 159 against 148) |
| `tb_fb` | draw (read, partial writes) on FB0, FB1 and the FB1 tail, display + erase of FB0 and of FB1 across the tail boundary, VBlank erase with the CD ring, erase of the tail while FB0 draws and the reverse | pass; negative runs fail as expected |
| `tb_load` | 2048 loader writes from 4096 + 1024 + 1024 bridge bytes (backup cart at PSRAM0 0x800000) | pass |
| `mem-long` | 66 ms retention with the 512 row scrub of bank 3 | pass |
| `sim/cd` (`cd`, `cd-real`) with the ring memory model of `tb_cdd` (4 clk write busy, reads 2-40 clk and now and then 500) | | pass |
| `tb_ddram` ring | 3 sectors of 588 bridge words written and read back while the other clients run | 0 errors |
| `sim/sys`, Hyper Duel, 120 M clk_sys, `+SCUPROBE` (320 wide: clk_ram 107.4 MHz) | v0.2.4 with the old model, v0.2.4 with this model (`+SD_OLDMAP`), this schedule | v0.2.4 / old model: 0 model errors, audio 196,918 SCSP samples (114,785 non-zero), 8 key-ons. v0.2.4 / this model: 182 M model errors (tRAS at every ACT, the missing EMRS), 136,256 read words cut by a WRITE, audio identical to the old-model run (no SCSP read was cut, the VDP2 ones were). This schedule: 0 model errors, 0 cut words, 196,918 samples (112,380 non-zero), 8 key-ons, every SCSP fetch equal to the model (`smp` check), `i2s.raw` / `scsp.raw` / `pocket.raw` differ by at most 3 LSB (RMS 1 against a signal RMS of 63): the run is 7.3 us ahead from boot (TVMD.DISP at 1,945,231,626 ns against 1,945,238,919 ns) |

The SDRAM model follows the AS4C32M16MSA datasheet (section 3). The PSRAM and SRAM models were audited against the
AS1C4M16PL-70BIN datasheet (Alliance, Rev 1.0 Aug 2018) and the generic x16 asynchronous SRAM truth table (byte enables
gate reads and writes); the SRAM part and speed are still unknown.

## 10. Untested on hardware, and risks

1. SDRAM data capture edge (section 3): READ + 4 in the I/O cell register, as Saturn_MiSTer, with 2.4 / 1.4 ns of margin
   at the slow / fast corner against the datasheet window; the debug overlay square 15 is a write/read-back self-check of
   the SDRAM.
2. SDRAM tRP in bank 3 is 17.5 ns against 18 ns at 114.5 MHz (B1 READ -> SCSP ACT and SCSP READ -> B1 ACT, section 3;
   met at 107.4 MHz), and three WRITEs follow a read burst's last word at the next clock, which overlaps that word's
   turn-off by up to 1.2 ns at the worst-case tHZ.
3. No AUTO REFRESH: retention depends on VDP2's real no-access windows, for the sound RAM too (the SCSP slot does not
   scrub). A game that disables them (it cannot: they are `H_CNT` based) or a pause state with VDP2 reading continuously
   would lose rows after 64 ms.
4. SCSP deadline margin 27 ns; an SCSP clock that runs faster than the NCO in `tb_sdram` shortens it.
5. PSRAM synchronous mode at 57.3 MHz / LC4 (the PSX core runs 33.9 MHz). `READ_ADJ` / `WRITE_ADJ` are the bring-up
   knobs. The controller does not park the chips back in asynchronous mode: after this core the chips stay
   synchronous until power-off, which breaks other cores that use them asynchronously (the PSX core parks them).
6. SRAM part and speed unknown; the framebuffer needs tAA up to about 25 ns (section 5, with the FPGA's own pad delays)
   and a write cycle of 26 ns with WE# low 8.7 ns.
7. A CD ring line fill behind a long VDP1 burst on PSRAM1 can arrive later than one CD word period (section 5).
8. The framebuffers drop columns 352-511. M10K use of the memory subsystem is 146 blocks (47%) before the CD TOC RAM, SH-2
   caches, SH-1 and SCSP are counted. FB0 draw with an FB1 tail erase (or the reverse) slows the draw while FB_RDY is held low.
12. `sdram_pocket` SCSP slots depend on requests being at least 18 clk_ram apart (four SCSP CE; section 3).
13. `psram_sync` is held until `sdram_ready`; the PSRAM power-up wait is the 200 us SDRAM one.
9. WRAM-H fills take 410-1050 ns. The effect on game speed depends on the cache hit rate, which was not measured.
10. Cartridge ROM loading and backup save-out are not implemented; the 64 KB backup image conversion assumes `{FF, byte}`.
11. SDC: the pin paths are constrained (sections 3, 4, 5 and `core_constraints.sdc`) against clocks defined on the pins;
    board trace delays are assumed (0.5 ns per PSRAM trace, 1 ns SRAM round trip), not measured. The `clk_sys` to
    `clk_ram` crossings are ordinary single-cycle paths of one clock family, timed as such.
