# Status and next move

## Where the port stands

The Saturn does not fit the Pocket's FPGA (5CEBA4F23C8: 18,480 ALMs, 36,960 combinational nodes, 308 M10K) as
a port of Saturn_MiSTer, even after rewrites that stay cycle-exact with the original and the cuts that impact
few games.

Measured with Quartus 21.1, area profile:

| Build | Fitter ALMs needed | Notes |
|---|---|---|
| Upstream Saturn system alone | 27,639 (~27,100 without the sizing wrapper's virtual pins) | [sizing.md](sizing.md) |
| Full Pocket build (`integrate`): SH-1, SCSP, VDP1, SH-2 exact rewrites, no cuts | 30,723 (166%), 309/308 M10K | [integration.md](integration.md), `sizing/integrate/` |

Fitter ALMs per block in the full Pocket build: VDP2 6,667, each SH-2 ~3,460 (SH_core ~1,275), SCU 2,378,
SH-1 2,251, VDP1 2,045, SCSP 1,955, FX68K 1,654, SMPC 552, YGR019 334; Pocket side: mem_pocket 1,788,
cdd_pocket 889, PLL reconfiguration 737.

Projection (not measured) with the SCU and VDP2 exact rewrites, every recommended cut
([cuts.md](cuts.md), [scu.md](scu.md), [vdp2.md](vdp2.md)), the HLE CD block ([cdb-hle.md](cdb-hle.md)) and a
lighter PLL writer: about 23,000-24,000 ALMs, still about 5,000 over.

Why the exact approach stops there: a rewrite that must match the original cycle for cycle saved 10-27% per
block (SCU best, SH-2 pair 2%), and the two SH-2s cannot share a datapath (one evaluation window per clock,
SH_core Fmax 51 MHz; [sh2.md](sh2.md)). The remaining options are cutting a central feature (slave SH-2, VDP2
layers), which is rejected.

## What is reusable

- Pocket framework, clocks, video into the scaler, 44.1 to 48 kHz audio, constraints ([integration.md](integration.md)).
- Memory subsystem on SDRAM + 2 PSRAM + SRAM ([memory.md](memory.md)).
- CD streaming from data slots and the HLE CD block on SERV ([cd.md](cd.md), [cdb-hle.md](cdb-hle.md)).
- The differential simulations in `sim/` against `ref/Saturn_MiSTer`: they become the functional reference
  for the rewrites.
- The game-impact study ([game-impact.md](game-impact.md)): which behaviours games depend on, so a rewrite
  knows what timing it must keep.

## Next move: rewrite the CPUs and video chips for the Pocket

Decision: keep every central feature (both SH-2s with cache, DIVU, DMAC; full VDP1; VDP2 with all layers
games need; SCU DMA semantics; SCSP with the 68K) and rewrite the large blocks with an architecture designed
for the Pocket's area, instead of porting MiSTer's.

Ground rules for the rewrites:

- Equivalence target moves from cycle-exact at every port to the behaviour games depend on: bus timing and
  wait states at the system buses, interrupt and DMA timing, VRAM access-slot timing, frame timing. The
  existing differential sims become transaction-level checks with documented tolerances.
- Area first: datapaths serialised over the available clock cycles (clk_sys is 2x the SH-2 clock and 8x the
  VDP2 dot clock), state in M10K/MLAB, one shared arithmetic unit where the original has several.
- Each block gets an ALM budget and is measured standalone (area profile) before integration.

Draft budgets (fitter ALMs; planning numbers, not measurements), for a total around 16,500 (90%):

| Block | Now | Budget |
|---|---|---|
| VDP2 | 6,667 | 3,500 |
| SH-2 pair | ~6,900 | 4,000 |
| SCU (with DSP) | 2,378 | 1,300 |
| VDP1 | 2,045 | 1,400 |
| SCSP | 1,955 | 1,400 |
| 68K | 1,654 | 1,000 |
| CD block (HLE, built) | 926 (map) | 900 |
| SMPC | 552 | 550 |
| Pocket side (memory, CD stream, PLL, glue) | ~3,400 | 2,500 |

Suggested order: SH-2 first (largest and most reused: two instances), then VDP2, then the rest; integrate and
fit after each block.
