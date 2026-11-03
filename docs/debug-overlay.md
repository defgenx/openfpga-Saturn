# Debug overlay (`POCKET_DEBUG_OVERLAY`)

A row of 16 squares at the top left of the picture (24 x 12 pixels, pitch 32, in the 640 wide scaler slot), drawn in
`pocket_video`. Build with `set_global_assignment -name VERILOG_MACRO "POCKET_DEBUG_OVERLAY=1"` in `ap_core.qsf`.
When the Saturn produces no sync or DE (no VS and DE activity in the last 0.3 to 0.6 s) `pocket_video` generates its own
858 x 262 frame, 640 x 224 active, mid-grey background; so the squares show even with the Saturn in reset.

Colours: green = condition holds; red = not; a square can also be left out (4); yellow = the signal toggled in the last 0.3 to 0.6 s (activity squares are
never green). Legend, left to right:

| # | Square | Kind | Meaning when green / yellow |
|---|---|---|---|
| 1 | PLL | level | system PLL locked |
| 2 | SCSP out | activity | the SCSP's mixed output sample (`SOUND_L`/`SOUND_R`) changed; tracked by its parity, which toggles only between different samples, so yellow also means a non-zero sample |
| 3 | I2S out | activity | the I2S data pin `audio_dac` (after `pocket_audio` and `sound_i2s`) toggling; it stays low while every sample is zero |
| 4 | Sound RAM | level | the last SH-2 read of sound RAM word 0 (0x25A00000) returned the value of the SH-2 write before it: green = match, red = mismatch, not drawn until the first read after a write (debug6 taps `DBG_SND`) |
| 5 | SDRAM | level | SDRAM init done |
| 6 | PSRAM | level | both PSRAM controllers idle after init |
| 7 | 68K reset | level | sound 68K out of reset (`SNDRES_N` high, SMPC SNDON) |
| 8 | 68K bus | activity | sound 68K address strobe (`SCAS_N`) toggling |
| 9 | WRAM-H | sticky level | the CPU bus has selected WRAM-H (0x06000000) at least once since power-up |
| 10 | DISP | level | VDP2 TVMD.DISP set |
| 11 | VBL | activity | VBL_N toggling (VDP2 vertical blank) |
| 12 | SCU | activity | SH-2 IRL (SCU interrupt level) changing |
| 13 | CD | activity | CD block register window (ACS2#) accessed |
| 14 | SMPC | level | SMPC firmware released the master SH-2 (MSHRES# high) |
| 15 | SDRAM self-check | level | always red: the self-check in `sdram_pocket` is compiled out (`ifdef POCKET_NEVER`, it did not fit); with it, after SDRAM init `sdram_pocket` writes `A55A` / `5AA5` to sound RAM words 0x100 / 0x20100 and reads both back, green if both match |
| 16 | TOC | level | disc TOC loaded (`disc_ok`; wired with `POCKET_CUT_CDB_LLE`, which `ap_core.qsf` sets, else always red) |

Squares 2, 3, 7, 8 and 11 are read from registered copies of their taps (2: the SCSP output parity, 3: the
I2S pin through a two-flop synchroniser; 7, 8, 11: `SNDRES_N`, `SCAS_N` (the `DBG_68K` tap) and `VBL_N`). Square 4 takes
`DBG_SND` unregistered, as the debug6 row did (event and data are valid in the same cycle), and registers the compare.

Sound path, from the core outward: 8 yellow = the 68K runs; 4 green = the SH-2 reads back what it wrote to sound RAM;
2 yellow = the SCSP mixes non-zero samples; 3 yellow = non-zero samples reach the DAC pin.

Reading it: 1 red means no clocks. 14 red means
the master SH-2 is held by the SMPC. 7 red means the BIOS never released the sound 68K (SMPC SNDON); 7 green with 8 not
yellow means the 68K is out of reset but not running. 9 green means the BIOS reached its copy of WRAM-H; 10 shows whether the game or BIOS has
turned the display on.

Cost: about 60 ALMs (activity detectors, a 25 bit window counter, the generated timing shares the overlay counters).

## Hex text row

Under the squares, at x 32..159 and y 16..31 (black background, white digits, cell 16 x 16, glyph 3 x 5 scaled 4 x 2),
one row of 8 hex digits: the master SH-2 program counter.

```
 [square row]
 P P P P P P P P      MSH PC, 32 bit
```

- The default row. `POCKET_DEBUG_SNDROW=1` shows the debug6 row instead (below).
- `POCKET_DEBUG_NOROW=1` leaves the row out (squares only). That is the shipped debug build: with the row the fit needs
  1,852 of 1,848 LABs.
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
