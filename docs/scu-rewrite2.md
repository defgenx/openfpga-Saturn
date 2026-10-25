# SCUP2: clean-sheet SCU attempt (branch `scu-rewrite2`, `POCKET_SCUP2`)

State: scaffold only. `src/fpga/saturn/Saturn/SCUP2/` is a renamed copy of SCUP (module `SCUP2`, `SCUP2_DSP`), selected by
`POCKET_SCUP2` in `Saturn.sv`, simulated with `make -C sim scu DUT=SCUP2` (passes, identical to SCUP), sized with
`sizing/scup2/` (qrun). No area reduction has been built on top of it; its measured area is that of SCUP: 2,408 standalone
fitter ALMs (SCU baseline 2,426, in-system 2,215), 5 M10K, 3 DSP blocks.

## Why a time-shared DMA engine, MLAB level state and a sequential DSP do not reach 1,300

Measured structure of SCUP (standalone fit, `docs/scu-rewrite.md`, `sizing/scup/`):
- The DMA engine is already one engine for the three levels; per-level DR/DW/DC are already in MLAB and swapped through the
  channel RAM. The MLAB move removed 212 flops and gained about 20 ALMs (10 ALMs per MLAB LAB, half empty).
- DSP 625 ALMs (574 in system): 404 flops and about 600 ALUTs. Holding AC/P/RX/RY in a register-file RAM needs the same
  number of temporaries to keep the parallel (read-old, write-new) semantics of a DSP step, so flops are not saved; the bank
  read muxes, ALU, flag logic, CT counters and the D1 bus are each 30 to 130 ALUTs and have no single large shareable part.
- Everything outside the DSP is 1,450 ALMs of 3,400 ALUTs spread over about 150 sinks (largest: BDO 160, DMA address
  registers 60 to 100 each, REG_DO 85, CDO 66, CBUS_D 67), 1,173 of them with at most 3 inputs. A microcoded bus
  sequencer does not remove this: the FSM next-state and output logic is already a ROM-by-case, and a block-RAM ROM keyed by
  state and conditions needs 7 blocks per FSM (allowance is +8 for all of them); the per-register source muxes it would drive
  stay.
- Budget arithmetic: 1,300 in system with the DSP at 574 leaves 726 for everything else (now 1,641), i.e. -56 percent of
  the non-DSP logic, or the DSP would have to fall to about 350 with the rest at 950.

Each candidate measured or estimated from the profile saves 1 to 5 percent: DMA_IA into RAM (-30), DSP_DR/DSP_DW into RAM
with staged writes (-25), DSO mux split (-12 ALUTs), single RTN/WTN counter (-40, changes unaligned-transfer edge cases),
ROM decode of the DSP instruction (-40 ALMs for +2 M10K). Together about 150 to 250 ALMs.
