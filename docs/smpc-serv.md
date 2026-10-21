# SMPC as firmware on SERV (`POCKET_SMPC_SERV`)

`src/fpga/saturn/Saturn/SMPC_SERV.sv` (ports of `SMPC_HLE`) + `firmware/smpc/` (C, RV32I, `make -C firmware/smpc`, image
`smpc_fw.hex`). Hardware: SH-2 register interface, IREG/OREG RAM, output pins (set/clear masks), PDR/DDR/IOSEL/EXLE,
24-bit 4 MHz tick counter, command timestamp, event flags, one deadline compare. Firmware: commands, INTBACK (status,
peripheral, CONTINUE/BREAK, vblank wait), standard digital pad polling, RTC (EXT_RTC load, seconds/calendar, SETTIME), SETSMEM.
It follows `SMPC_HLE.sv`; mouse, 3D pad, analog pads and keyboard are not implemented (as under `POCKET_CUT_SMPC_HLE`).
SERV runs about one instruction per 5 ticks (0.25 us), so the command path is hand-shortened and waits on the hardware
timestamp.

## Verification
`make -C sim smpc HLE=SMPC_SERV` (LLE HMCS400 vs SMPC_SERV, same stimulus and tolerances as the HLE run): SR and OREG0-31
identical in every dump; timing violations 0 at the harness tolerances (60 ticks commands, 800 ticks pad polls).
Largest offsets H-L: commands pins +45 / SF +31; INTBACK status MIRQ +23; pad polls +171..+641 (1-pad +641).
`make -C sim smpc` (HLE) still passes. Single stimulus, one frame phase: not a sweep.

## Measured (standalone `quartus_fit`, area profile, virtual pins; `sizing/smpc-serv/`)
| Variant | ALMs | regs | M10K |
|---|---|---|---|
| LLE SMPC in the full build (main) | 538 | | 2 |
| SERV RF in M10K (s2, before later trims) | 492 (about 416 without the 76 ALMs of virtual-pin effect) | 377 | 3 |
| SERV RF in MLAB (`SMPC_RF_MLAB`, s4) | 669 (about 593) | 347 | 2 |

Breakdown (s2): SERV 194, MLABs 60 (5 byte RAMs of 10 ALMs), shell about 160.

## Result against the target (<= 250 ALMs, M10K net <= 0): not met
- SERV alone is 178-194 ALMs; the SH-2 interface, timer, pins and RAMs add about 220.
- RF in M10K: about 416 ALMs (-120 vs LLE) but 3 M10K (+1). RF in MLAB: 2 M10K but about +55 ALMs vs LLE.
- Firmware is 2,452 bytes; 2 M10K hold 2,048 (512 x 32). 404 bytes to remove (or use the 8 spare bits per ROM row, about
  +30 ALMs of fetch logic) before the image fits; the simulation uses a 1,024-word ROM (`ROM_AW=10`).

## Deviations
Pad polls start 100-250 ticks later than the HLE; calendar ignores leap years (as the HLE); SRES soft reset not handled;
frame length is the NTSC constant (PAL not handled yet); SETTIME applies at once.

## Area round (branch `area-hunt`)

- The firmware is built as RV32I (`-march=rv32i`, 3,024 bytes, fits the 4 KB ROM): SERV without the compressed decoder and the aligner
  (`serv_compdec` 58 + `serv_aligner` 17 ALMs). `sim/smpc HLE=SMPC_SERV` data_diffs=0, timing_violations=0.
- Data RAM (32 x 32), IREG (8 x 8) and OREG (32 x 8) are M10K blocks (3) instead of six MLABs (an MLAB instance takes whole LABs in the
  fit). The data RAM and IREG are read through a register like the ROM (valid in the `dack` cycle). The data RAM is written with
  byte enables as `reg [3:0][7:0]`, the form Quartus infers; a partial-vector write `ram[a][7:0] <= ..` is not inferred and becomes
  1,024 flip-flops. OREG is read by the SH-2 side through the falling-edge address register (`SMPC_SERV_FERAM`; `A` is a register of the
  SH-2 bus controller), which gives the data in the same clock as the MLAB did. `sim/smpc/tb_smpc.sv` therefore drives the bus inputs
  with non-blocking assignments (after the clock edge, like the registered bus outputs).
