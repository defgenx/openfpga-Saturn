# Debug overlay (`POCKET_DEBUG_OVERLAY`)

A row of 16 squares at the top left of the picture (24 x 12 pixels, pitch 32, in the 640 wide scaler slot), drawn in
`pocket_video`. Build with `set_global_assignment -name VERILOG_MACRO "POCKET_DEBUG_OVERLAY=1"` in `ap_core.qsf`.
When the Saturn produces no sync or DE (no VS and DE activity in the last 0.3 to 0.6 s), or its frame is gated
(docs/integration.md section 3, frame gate), `pocket_video` generates its own frame, 854 x 263 on the 320 clock and
910 x 263 on the 352 clock (59.8 Hz on both), 640 x 224 active, mid-grey background; so the squares show even with
the Saturn in reset.

Colours: green = condition holds; red = not; yellow = the signal toggled in the last 0.3 to 0.6 s (activity squares are
never green). Legend, left to right:

| # | Square | Kind | Meaning when green / yellow |
|---|---|---|---|
| 1 | PLL | level | system PLL locked |
| 2 | SCSP out | activity | the SCSP's mixed output sample (`SOUND_L`/`SOUND_R`) changed; tracked by its parity, which toggles only between different samples, so yellow also means a non-zero sample |
| 3 | I2S out | activity | the I2S data pin `audio_dac` (after `pocket_audio` and `sound_i2s`) toggling; it stays low while every sample is zero |
| 4 | Disc read | sticky level | at least one disc data slot read completed (`cd_stream` `rd_cnt`, counted since power-up) |
| 5 | 16 reads | sticky level | 16 disc reads completed (the BIOS reads past the disc header) |
| 6 | 64 reads | sticky level | 64 disc reads completed (a game's files are loading) |
| 7 | Game entered | sticky level | the master SH-2 executed the disc's first-read address (IP.BIN bytes 0xF0-0xF3, from the header replay; Hyper Duel: 0x06010000) after that WRAM-H word was written following the first disc read. The address alone does not work: the BIOS runs its own code there (0x0601184E at 1.17 s in the sim) before reading the disc |
| 8 | 68K bus | activity | sound 68K address strobe (`SCAS_N`) toggling |
| 9 | 352 clock | sticky level | the SMPC selected the 352 clock (`SMPC_DOTSEL`, CKCHG352) at least once since power-up |
| 10 | DISP | level | VDP2 TVMD.DISP set |
| 11 | VBL | activity | VBL_N toggling (VDP2 vertical blank) |
| 12 | Read errors | sticky level | no disc read has ended with an error (`cd_stream` `err_cnt` zero); red after the first error |
| 13 | CD | activity | CD block register window (ACS2#) accessed |
| 14 | SMPC | level | SMPC firmware released the master SH-2 (MSHRES# high) |
| 15 | Lost words | sticky level | no disc data word was lost to a full ring FIFO (`cd_stream` `ovf_cnt` zero); red after the first loss |
| 16 | TOC | level | disc TOC loaded (`disc_ok`; wired with `POCKET_CUT_CDB_LLE`, which `ap_core.qsf` sets, else always red) |

Squares 2, 3, 8 and 11 are read from registered copies of their taps (2: the SCSP output parity, 3: the
I2S pin through a two-flop synchroniser; 8, 11: `SCAS_N` (the `DBG_68K` tap) and `VBL_N`). The boot squares (4-7, 9,
12, 15) are registered in `saturn_pocket`; the `cd_stream` counters are never cleared (a menu Reset keeps them).

Sound path, from the core outward: 8 yellow = the 68K runs; 2 yellow = the SCSP mixes non-zero samples; 3 yellow =
non-zero samples reach the DAC pin.

Disc boot, in order: 16 TOC loaded, 4 first disc read, 5 sixteen reads, 6 sixty-four reads, 7 game code running, 9
the game selected the 352 clock (Hyper Duel does this before its first picture). The first red square of that chain
is where the boot stops. 12 or 15 red means the disc data reaching the core is damaged or incomplete.

Reading it: 1 red means no clocks. 14 red means the master SH-2 is held by the SMPC. 10 shows whether the game or
BIOS has turned the display on.

Cost: about 60 ALMs (activity detectors, a 25 bit window counter, the generated timing shares the overlay counters).

## Fixed 352 clock (`POCKET_FIXED_352`)

Diagnostic build macro (with `POCKET_PLL_LITE`), never set in the committed `ap_core.qsf`. `saturn_pocket` gives
`pll_lite` DOTSEL 1 and the CE mode (`clk_mode`) DOTSEL 1 whatever the SMPC selects, so `clk_sys` stays at the
compile-time 352 rate (57.2728 MHz NTSC, 56.875 MHz PAL) and CKCHG320/352 never reconfigures or relocks the PLL. The
mode is still written at power-up and re-applied at each host reset, and a PAL change still relocks. The VDP2 keeps its
own 320/352 setting (TVMD), so 320-dot content, the BIOS included, runs 6.5 % fast (NTSC).

It separates the two things that happen together at a game's first CKCHG352 (Hyper Duel: the first runtime relock and
the first time at 57.27 MHz): with the macro the BIOS already runs at 57.27 MHz, and no relock follows.

The BIOS picture is not a valid test of the 57.27 MHz timing: 320 timing on the 352 clock is 63.75 Hz, above the
scaler's 61 Hz. Up to v0.2.13 those frames went to the scaler (v0.2.12 variant B: stripes from the BIOS on, the
overlay squares 1 line tall). With the frame gate the BIOS shows the generated frame and the squares (59.8 Hz), and
the Saturn's frames go out again from the first VBlank after the VDP2 runs 352 timing. The switch between the
generated and the Saturn timing cuts one frame short (as the switch at power-up always did).

## Hex text row

Under the squares, at x 32..159 and y 16..31 (black background, white digits, cell 16 x 16, glyph 3 x 5 scaled 4 x 2),
one row of 8 hex digits: the master SH-2 program counter.

```
 [square row]
 P P P P P P P P      MSH PC, 32 bit
```

- The default row. `POCKET_DEBUG_SNDROW=1` shows the debug6 row instead (below).
- Releases v0.2.13 to v0.2.16 have no overlay: no squares, no grey fallback frame. v0.2.18 sets `POCKET_DEBUG_OVERLAY=1`
  with the PC row (seed 4, 1,848 / 1,848 LABs).
- `POCKET_DEBUG_NOROW=1` leaves the row out (squares only), the fallback when the row does not fit (it also fits at
  seed 6).
- **PC**: the master SH-2 pipeline's execute-stage PC (`PIPE.EX.PC` in `SH2P_core`, so a loop in the instruction cache
  shows too), sampled once per overlay window (about 0.3 s). A polling loop shows the same few values on every sample.
- Digits live in a two-word 16 bit M10K buffer, both words rewritten alternately every clk_sys by `saturn_pocket`; the 3 x 5 font is a 128 x 3 M10K ROM
  in `pocket_video`.
- The normal build leaves no room for more: with the PC row alone the fit is 1,847 / 1,848 LABs. A version with
  COMREG/SF, IRL, IST (and IMS, TVMD, frame counter) needed 1,851 to 1,852 LABs. The taps for those exist
  (`DBG_TXT` in `Saturn.sv`: SMPC_SERV, SCUP2, VDP2P) and can be enabled once the design has room.
- `sim/platform/tb_overlay.sv` checks the rendered digits against an independent copy of the font for a known buffer.

## debug6: sound RAM word 0 handshake (`POCKET_DEBUG_SNDROW=1`)

```
 W W W W R R R R        W = data of the last SH-2 write to 0x25A00000 (B-bus, as seen at SCSPP)
                        R = data returned for the last completed SH-2 read of that word
```

Each half is written into the M10K text word by its own byte enables when the event happens (a write is the data on
the B-bus when SCSPP accepts it with word address 0; a read is the data on the B-bus output two cycles after the read
completes). A half that never changes stays 0000.

## debug7: runtime SDRAM timing and the self-check

Same hex row as debug6. The shipped build has no SDRAM self-check (it did not fit), so square 15 is always red. The Core Settings menu has
a new list, applied at the next menu **Reset** (no core reload): **SDRAM read capture** (+4 to +6 clk_ram after READ
on the rising edge, +3.5 to +5.5 on the falling edge; default +5 rising). Options and the delay ranges they cover:
docs/memory.md section 3.

Bring-up procedure: with the default the self-check square tells whether the SDRAM works at all. If square 15 is red,
step "SDRAM read capture" through +4.5 (falling), +5.5 (falling), +6, +4 (and +3.5), Reset each time, until square 15 turns green;
then the BIOS read of word 0 (hex row, R half) should return the written value. The settings are not part of the normal
build's constraints; note the first setting that turns square 15 green.
