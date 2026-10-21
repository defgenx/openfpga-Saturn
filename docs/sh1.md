# SH-1 (SH7034) pruning for the CD block

Branch `sh1-prune`. The SH-1 in the CD block runs a fixed firmware from its internal ROM, so the on-chip
peripherals it uses can be found by static analysis and the rest tied off. Everything below is
reproducible: `tools/sh1_census.py` (census), `make -C sim sh1` (differential simulation),
`sizing/sh1/` (area measurement). The firmware images are read from `ref/Saturn_MiSTer/rtl` and are never copied.

## 1. Which firmware

`Saturn.sv` instantiates `SH1 #("rtl/cdb105m.mif")`, so `cdb105m.mif` is the one the core uses. `Saturn/CD/CD.sv`
(default `sh7034.mif`) is not instantiated. The census covers all five images:

| Image | Notes |
|---|---|
| `cdb105m.mif` | default |
| `cdb105.mif` | differs from 105m by one word (0x5C60) |
| `Saturn/CD/sh7034.mif` | 105m with each 32-bit word byte-swapped, 2 bytes differ |
| `cdb106.mif`, `cdb106m.mif` | different code layout; same peripheral set plus one read of PCDR (port C data, tied 0 in `SH1.sv`) |

The 64 KB `SH1_MEM` is the firmware ROM (0x0000-0xC4AB code and data, 0xF800-0xFACB tail) with the 4 KB
SH7034 RAM at the 0xE000 page. It has to stay. It is already one M10K array (524,288 bits, 56 M10K).
Trimming the unused 0xC4AC-0xF7FF range would need a build-time sliced MIF (Quartus cannot init a shorter
RAM from the full MIF); not done.

## 2. Census method (`tools/sh1_census.py`)

Decodes SH-1 (SH-2-only encodings are treated as illegal), traces from every vector-table entry, follows
branches, calls, `jmp/jsr @Rn` through ROM pointer tables and propagates register constants (literal
pools, ADD/shift/AND/OR, GBR as a set of values, read-modify-write of I/O registers). Two traces:

* precise: vectors and resolved calls only (about 5.8K instructions);
* conservative: also every code-like pointer found in literal pools or data words (about 19.8K instructions,
  40 KB of the 50 KB image). All pruning decisions use the conservative trace.

Per on-chip register it records read/write sites, every constant written (`set`), bits OR-ed or AND-ed
(`or`/`and`), and unknown-valued writes (`DYN`). Restores from the stack of a value read from the same
register are recognised. Output: `ever1` (bits ever written as 1) and `ever0` per register.
`--check-fw src/fpga/saturn/SH/SH7034/SH7034_fw.sv` fails if an RTL mask lacks a bit the firmware sets.

Findings common to all images: no SH-2-only opcodes; never used: ADDV, SUBV, NEGC, CMP/GE, CMP/STR, DIV0S,
MOVT, SHAL, SHAR, MAC.W, CLRMAC, SLEEP and (SH-2 only) MUL.L, MAC.L, DMULS/U.L, BRAF, BSRF, BT/S, BF/S, DT.
Used: MULU.W (about 75 sites), MULS.W (1), STS/LDS MACL/MACH (saves in handlers), DIV1, TAS.B, TRAPA.
Hand-off for the `SH_core` rewrite: MAC.W/MAC.L/MUL.L/DMUL*/CLRMAC need no hardware for this firmware; the
SH-1 never executes BRAF/BSRF/BT/S/BF/S/DT. `MULT.sv` is already reduced (section 4).

## 3. Peripheral usage (conservative trace, all images)

| Block | Used? | Evidence |
|---|---|---|
| SCI0 | yes | SMR=0x80 (clocked synchronous, internal clock), BRR=0x63, SCR TE/RE/RIE only; only RXI vector (101) has a handler |
| SCI1 | registers written (init), no traffic | already `SCI1_DISABLE` |
| ITU4 | yes | TSTR bit4 only; TCR=ø/8; compare A/B and OVF interrupts (vectors 96-98) |
| ITU3 | capture only | TIOR3 IOB capture on TIOCB3 (COMREQ), vector 93; counter never started |
| ITU0-2 | flags only | counters never started (TSTR=0x10 is the only non-zero value ever written); no interrupt priority for ITU0/1 |
| ITU modes | unused | PWM, phase counting, complementary/reset-synchronised PWM, buffer registers BRA/BRB (written, never read), TCLKA-D, output compare, counter clear |
| DMAC0/1 | yes | external DREQ requests (RS=2/3), vectors 72/74 |
| DMAC2/3 | configured | SAR/DAR/TCR/CHCR written in code only reachable through data pointers; request sources ITU0/1 compare (never run) |
| DMAC | unused | decrement address modes, burst/auto-request, A/D and SCI request sources, byte size beyond TS |
| INTC | partly | IPRA=0 (IRQ0-3 off), IPRB 0x0068 (IRQ6/7), IPRC 0x8600, IPRD 0x6666, IPRE=0, ICR never written; NMI handler exists but pin tied high |
| BSC | yes | BCR=0x8000, WCR1/2/3, DCR=0x7500, RCR/RTCSR/RTCNT/RTCOR (refresh); areas 1 (DRAM), 2 (YGR019), 6, RAM page 0xF |
| PFC | yes | PACR1/2, PBCR1/2, PAIOR, PBIOR, PADR, PBDR (bit 6 toggled), PCDR read only by 106 |
| WDT, UBC | written at init | already disabled by parameters |
| A/D, TPC, standby | written at init (0xEE8/9, 0xFEE, TPC regs, SBYCR) | not implemented in the core; reads return zero |

External bus accesses resolved by the census: area 1 (0x09000000-0x0908001C), area 2 (0x0A000000-0x0A180008),
area 6 (0x0E000000), internal RAM (0x0F000000-0x0F000FFC).

## 4. What was removed or tied off

All controlled by `SH7034 #(.FW_PRUNE(1))`, set in `Saturn/CD/SH1.sv`; `FW_PRUNE=0` keeps the original behaviour.
Constants live in `SH7034/SH7034_fw.sv` (bits the firmware ever writes as 1; the rest stay at reset value
and synthesis folds the logic behind them).

* ITU: TSTR/TSNC/TMDR/TFCR/TCR/TIOR/TIER write masks per channel; TCNT0-3 and GRA/GRB that never change
  (GRA0-3, GRB0-2) held at reset value; input capture only reachable on ITU3 B; BRA/BRB dropped.
* DMAC: per-channel CHCR masks (no decrement modes, only the request sources used), SAR/DAR limited to the 28-bit bus, DMAOR=DME.
* INTC: IPRA-E/ICR masks, which removes the IRQ0-5, ITU0/1, SCI1, WDT sources from the priority logic.
* SCI0: SMR/SCR masks. PFC: port register masks. BSC: BCR/DCR/PCR masks.
* MULT: one 17x17 multiplier for MULU.W/MULS.W (was two), MAC.W/MAC.L/CLRMAC removed.

Not done: FF-to-M10K for the DMAC/ITU registers. They sit on the bus with same-cycle reads, and a synchronous
RAM read would change bus timing, which the cycle-exact comparison below forbids.

## 5. Measurement (`quartus_map`, area profile, 5CEBA4F23C8, `sizing/sh1`)

SH1 (SH7034 + 64 KB SH1_MEM):

| | ALUTs | Regs | DSP | Block mem bits | ALMs (est.) |
|---|---|---|---|---|---|
| baseline (`ref/`) | 4,263 | 2,524 | 2 | 524,288 | 2,996 |
| pruned | 3,398 | 1,908 | 1 | 524,288 | 2,403 |

M10K stays at 56 (same RAM). Per block (ALUT/regs): ITU 640/465 to 158/124, INTC 181/174 to 63/47, MULT
109/77 to 7/76, PFC 130/164 to 100/97, DMAC 670/451 to 632/407, BSC 157/215 to 145/201, SCI0 161/112 to 162/95,
SH_core unchanged (1,890/853; owned by the SH_core rewrite). With the BALANCED profile quoted in sizing.md
(4,581 ALUTs) the saving is larger in ALUTs because the area profile already shrinks the baseline.

## 6. Verification

`make -C sim sh1`: Verilator, golden `ref/` SH1/SH7034/SH_core (renamed `REF_*` with sed at build time) against the
pruned one, each with its own YGR019, 512 KB DRAM model (random wait states) and a CDD serial model, driven by the
same SCU-side host script (get status, hardware info, init, TOC, session info, device connection, reset selector).
Every clock the SH-1 pins, YGR019 outputs, the SH7034 CPU bus (address, data, byte enables, request, wait) and
the peripheral bus and interrupt request/vector lines are compared.

Result: 0 mismatching cycles over 30,000,000 clocks (wait states and gated clock enables) and over
24,000,000 clocks without waits; firmware boots (DRAM test, init of all peripherals), reaches the idle loop and
answers the commands above. `cdb105m.mif` only is exercised in simulation; the other images are covered by the
static census. The simulation also logs which on-chip registers the CPU touched (`COV` lines).

## 7. Risks (paths the analysis could not prove)

* 548 GBR-relative accesses in about 50 functions entered through data pointers have unknown GBR; they are
  RAM-structure accesses in every simulated path, but could in principle address ITU/INTC registers. If one
  started ITU0-3 (TSTR) or enabled IRQ0-5, the pruned core would differ. `--check-fw` reports resolved sites only.
* Six unresolved indirect jumps/calls (`jsr @r0` at 0x1AC6/0x1B3C/0x1B42, `jmp @r13` at 0x5668, `jsr @r5` at
  0xBA04, `jmp @r0` at 0xF926 via a RAM table) are not followed.
* Unknown-valued writes remain for TDR, GRA4/GRB4, DAR0, SAR1/DAR1, DMATCR1; their registers are not masked.
* Input capture on ITU0-2 is disabled on the assumption that `Saturn.sv` ties TIOCA0/A1/A2/B2 to constants (it does).
* SAR/DAR bits 31:28 are assumed never set (28-bit bus).
* The SH-1 clocked-synchronous SCI keeps its asynchronous logic: BRR/SMR are not provably constant before the first write.
