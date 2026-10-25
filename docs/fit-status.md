# Fit status

Measured full compiles of the Pocket core (`src/fpga/ap_core.qsf`, area profile, seed 13, 5CEBA4F23C8).
Per-entity tables are in `sizing/pocket-build/`.

| Build | Config | ALMs needed | LABs needed | M10K | DSP |
|---|---|---|---|---|---|
| `integrate` | upstream blocks, LLE CD, no rewrites | 30,723 | | 309 / 308 | 29 |
| `pocket-build` full | HLE CD, M68KP, VDP2P, VDP1P, SH2P, PLL_LITE; no feature cuts | 22,509 (122%) | 2,279 / 1,848 | 308 / 308 | 29 / 66 |
| `pocket-build` lite | same + SCU DSP and SCSP DSP cuts | | 2,119 / 1,848 | | |
| `main` 7255033 full | same as full + mem-shrink; no feature cuts | 21,996 (119%) | 2,224 / 1,848 | not placed | 29 / 66 |
| `main` 981e25f full | same + SCSPP; no feature cuts | 21,571 (117%) | 2,180 / 1,848 | not placed | 34 / 66 |
| `main` a2992a4 full | same + VDP2P 4,740, mem CD ring in PSRAM1, SH2P fixes | 21,368 (116%) | 2,162 / 1,848 | not placed | 41 / 66 |
| lite a2992a4+ | main + SCU DSP, SCSP DSP and low-impact VDP2 cuts (RPARAMB, EXTCC, LNCOL, MOSAIC, SPRWIN, LINEWIN, BACKLINE) | 19,691 (107%) | 1,993 / 1,848 | not placed | 37 / 66 |
| lite a1dc102 | same + SCUP2 | 19,477 (105%) | 1,968 / 1,848 | not placed | 37 / 66 |
| lite 270a3e2 | same, OPTIMIZATION_MODE "AGGRESSIVE AREA" | 19,477 (105%) | 1,968 / 1,848 (97 memory LABs) | not placed | 37 / 66 |

Fitter ALMs per block, full config (`full_sh2p.entities.txt`):

| Block | ALMs |
|---|---|
| SH7604P x2 | 2,850 + 2,792 |
| VDP2P | 4,724 |
| SCU (DSP 574) | 2,215 |
| SCSP | 1,995 |
| VDP1P | 1,932 |
| mem_pocket | 1,708 |
| m68kp | 887 |
| cdb_hle | 742 |
| SMPC (LLE) | 538 |
| cd_stream | 379 |
| core_bridge_cmd | 186 |

Gap to the device: about 4,030 ALMs (431 LABs). M10K is exactly full; the VDP1 framebuffer 1 in
`vdp1_fb_pocket` holds 1,417 kbit (141 blocks) of the 1,921 kbit used.
