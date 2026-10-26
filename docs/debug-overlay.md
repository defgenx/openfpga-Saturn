# Debug overlay (`POCKET_DEBUG_OVERLAY`)

A row of 16 squares at the top left of the picture (24 x 12 pixels, pitch 32, in the 640 wide scaler slot), drawn in
`pocket_video`. Build with `set_global_assignment -name VERILOG_MACRO "POCKET_DEBUG_OVERLAY=1"` in `ap_core.qsf`.
When the Saturn produces no sync or DE (no VS and DE activity in the last 0.3 to 0.6 s) `pocket_video` generates its own
858 x 262 frame, 640 x 224 active, mid-grey background; so the squares show even with the Saturn in reset.

Colours: green = condition holds; red = not; yellow = the signal toggled in the last 0.3 to 0.6 s (activity squares are
never green). Legend, left to right:

| # | Square | Kind | Meaning when green / yellow |
|---|---|---|---|
| 1 | PLL | level | system PLL locked |
| 2 | Reset | level | Saturn out of reset (`rst_sys` low: host reset exit, BIOS slots complete, RAM reset, loader idle) |
| 3 | BIOS | level | BIOS words arrived, loader drained, no FIFO overflow |
| 4 | Slots | level | `reset_n` into `saturn_pocket` high (host Reset Exit and `dataslot_allcomplete`) |
| 5 | SDRAM | level | SDRAM init done |
| 6 | PSRAM | level | both PSRAM controllers idle after init |
| 7 | MSH | activity | master SH-2 bus start (BS#) toggling |
| 8 | SSH | activity | slave SH-2 bus start toggling (SMPC released it) |
| 9 | WRAM-H | sticky level | the CPU bus has selected WRAM-H (0x06000000) at least once since power-up |
| 10 | DISP | level | VDP2 TVMD.DISP set |
| 11 | VBL | activity | VBL_N toggling |
| 12 | SCU | activity | SH-2 IRL (SCU interrupt level) changing |
| 13 | CD | activity | CD block register window (ACS2#) accessed |
| 14 | SMPC | level | SMPC firmware released the master SH-2 (MSHRES# high) |
| 15 | SCSP | activity | sound RAM chip select toggling (SCSP slots / 68K) |
| 16 | TOC | level | disc TOC loaded (`disc_ok`) |

Reading it: 1 red means no clocks. 2 red with 4 red means the host never released the core; 2 red with 4 green and
3 red means the BIOS did not arrive (the FIFO overflowed if the loader was not ready). 7 and 14 red with 2 green means
the SH-2 is held by the SMPC. 9 green means the BIOS reached its copy of WRAM-H; 10 shows whether the game or BIOS has
turned the display on.

Cost: about 60 ALMs (activity detectors, a 25 bit window counter, the generated timing shares the overlay counters).

## Hex text row

Under the squares, at x 32..159 and y 16..31 (black background, white digits, cell 16 x 16, glyph 3 x 5 scaled 4 x 2),
one row of 8 hex digits: the master SH-2 program counter.

```
 [square row]
 P P P P P P P P      MSH PC, 32 bit
```

- **PC**: the master SH-2 pipeline's execute-stage PC (`PIPE.EX.PC` in `SH2P_core`, so a loop in the instruction cache
  shows too), sampled once per overlay window (about 0.3 s). A polling loop shows the same few values on every sample.
- Digits live in an 8 x 4 M10K buffer rewritten continuously by `saturn_pocket`; the 3 x 5 font is a 128 x 3 M10K ROM
  in `pocket_video`. Squares 8 (SSH) and 15 (SCSP) have no activity detector in this build (always red).
- The normal build leaves no room for more: with the PC row alone the fit is 1,847 / 1,848 LABs. A version with
  COMREG/SF, IRL, IST (and IMS, TVMD, frame counter) needed 1,851 to 1,852 LABs. The taps for those exist
  (`DBG_TXT` in `Saturn.sv`: SMPC_SERV, SCUP2, VDP2P) and can be enabled once the design has room.
- `sim/platform/tb_overlay.sv` checks the rendered digits against an independent copy of the font for a known buffer.

## debug5: SMPC_SERV state

```
 5 P P P C C S L        marker 5 | SERV PC (ia[11:2], 3 digits, sampled each window) | last COMREG (2) | S | L
```

- S bit 3..0: SF, SNDRES_N, MSHRES_N, SSHRES_N (1 = released / set).
- L bit 3..0: MRES_N, SERV i_rst (1 = reset), SYSRES_N, CDRES_N.
- PC is the word address of the instruction fetched by the SERV core (`ia[11:2]`), COMREG the last command the SH-2 wrote.
Squares 7, 8, 11 and 15 have no detector in this build (always red).
