# Release feature restoration measurements

Source: `571587dd238efa5a349d18910c654bbb888b5ec9` (v0.2.15), freshly fetched `origin/main` matched at start. Host: taro. Device: 5CEBA4F23C8. Seed: 5. Map: NUM_PARALLEL_PROCESSORS=1. No RTL edits or public writes.

Image: `raetro/quartus:21.1` / `sha256:817a783727492269d33aa98c903e8efc216e95d785ee76bfc8f426eddee98d0b`.

Seven small = EXTCC SHADOW BACKLINE LNCOL MOSAIC SPRWIN LINEWIN. All ten = all VDP2 cuts, with WDT still cut. Every single restore removes exactly one QSF macro line. Counts include entity descendants; parentheses below are deltas against baseline, not the entity-only parentheses in Quartus's raw table.

| Restored feature | Whole-design map ALMs (delta) | VDP2P ALUT / regs (delta) | MSH+SSH ALUT / regs (delta) |
|---|---:|---:|---:|
| baseline | 17,758 (+0) | 5,479 (+0) / 4,170 (+0) | 8,170 (+0) / 3,162 (+0) |
| extcc | 17,823 (+65) | 5,518 (+39) / 4,179 (+9) | 8,223 (+53) / 3,162 (+0) |
| shadow | 17,808 (+50) | 5,511 (+32) / 4,180 (+10) | 8,208 (+38) / 3,162 (+0) |
| backline | 17,757 (-1) | 5,473 (-6) / 4,171 (+1) | 8,172 (+2) / 3,162 (+0) |
| special | 17,826 (+68) | 5,549 (+70) / 4,249 (+79) | 8,179 (+9) / 3,162 (+0) |
| lncol | 17,793 (+35) | 5,514 (+35) / 4,211 (+41) | 8,229 (+59) / 3,162 (+0) |
| zoom | 17,967 (+209) | 5,772 (+293) / 4,365 (+195) | 8,173 (+3) / 3,162 (+0) |
| rparamb | 17,982 (+224) | 5,766 (+287) / 4,330 (+160) | 8,176 (+6) / 3,162 (+0) |
| mosaic | 17,798 (+40) | 5,499 (+20) / 4,191 (+21) | 8,196 (+26) / 3,162 (+0) |
| sprwin | 17,798 (+40) | 5,501 (+22) / 4,186 (+16) | 8,206 (+36) / 3,162 (+0) |
| linewin | 17,793 (+35) | 5,498 (+19) / 4,172 (+2) | 8,167 (-3) / 3,162 (+0) |
| wdt | 17,870 (+112) | 5,486 (+7) / 4,170 (+0) | 8,437 (+267) / 3,242 (+80) |
| seven-small | 17,880 (+122) | 5,665 (+186) / 4,273 (+103) | 8,196 (+26) / 3,162 (+0) |
| all-ten | 18,368 (+610) | 6,382 (+903) / 4,734 (+564) | 8,193 (+23) / 3,162 (+0) |

Costs are not additive: the seven single deltas sum to +264 ALMs, but their combined map is +122; the ten single deltas sum to +765, versus +610 combined. BACKLINE's -1 whole-design ALM result should be read with the untouched-entity variation below, not as proof that restoration always saves area.

## Untouched-entity variation

These are cross-configuration observations, not repeated-identical-baseline statistics. Synthesis can change packing/optimization elsewhere after a feature restore.

| Entity / comparison set | ALUT delta range | Register delta range |
|---|---:|---:|
| MSH, VDP2-only restores | -3 to +28 | +0 to +0 |
| SSH, VDP2-only restores | -9 to +39 | +0 to +0 |
| SH2, VDP2-only restores | -3 to +59 | +0 to +0 |
| VDP2P, WDT-only restore | 7 | 0 |

## Individual SH-2 rows

| Run | MSH ALUT / registers | SSH ALUT / registers |
|---|---:|---:|
| baseline | 4104 / 1588 | 4066 / 1574 |
| extcc | 4132 / 1588 | 4091 / 1574 |
| shadow | 4131 / 1588 | 4077 / 1574 |
| backline | 4103 / 1588 | 4069 / 1574 |
| special | 4112 / 1588 | 4067 / 1574 |
| lncol | 4126 / 1588 | 4103 / 1574 |
| zoom | 4114 / 1588 | 4059 / 1574 |
| rparamb | 4103 / 1588 | 4073 / 1574 |
| mosaic | 4119 / 1588 | 4077 / 1574 |
| sprwin | 4101 / 1588 | 4105 / 1574 |
| linewin | 4110 / 1588 | 4057 / 1574 |
| wdt | 4245 / 1628 | 4192 / 1614 |
| seven-small | 4111 / 1588 | 4085 / 1574 |
| all-ten | 4119 / 1588 | 4074 / 1574 |

## Seven-small full compile

`./build.sh compile` exit 0; elapsed 541.22 seconds. The unmodified release qflow remaps with one processor, then uses ALL for fit/STA and restores the QSF on exit. A PATH wrapper supplies the unique Docker container name.

Effective Docker command launched by build.sh:

```sh
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-seven-small-fit -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/seven-small-fit/tree:/build -w /build/src/fpga raetro/quartus:21.1 sh ../../tools/qflow.sh
```

| Fit | ALMs needed | LABs used / available | M10K used / available | Worst setup (ns) | Worst hold (ns) |
|---|---:|---:|---:|---:|---:|
| Seven-small, seed 5 | 18,218 | 1,848 / 1,848 | 303 / 308 | 0.088 | 0.105 |

Resource rows from ap_core.fit.rpt:

```text
; ALMs needed [=A-B+C]                                        ; 18,218                ;       ;
; Total LABs:  partially or completely used                   ; 1,848 / 1,848         ; 100 % ;
; M10K blocks                                                 ; 303 / 308             ; 98 %  ;
```

The full compile's repeated seven-small map estimated 17,880 ALMs (+0 versus the map-only run). VDP2P ALUT +0, regs +0; MSH ALUT +0, regs +0; SSH ALUT +0, regs +0.

Compile diagnostics:

```text
Info (332102): Design is not fully constrained for setup requirements
Info (332102): Design is not fully constrained for hold requirements
```

| Corner | Clock | Worst setup (ns) | Worst hold (ns) |
|---|---|---:|---:|
| Slow 1100mV 85C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[0].output_counter\|divclk` | 0.172 | 0.290 |
| Slow 1100mV 85C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[1].output_counter\|divclk` | 0.387 | 0.338 |
| Slow 1100mV 85C | `dram_clk_pin` | 1.147 | 3.076 |
| Slow 1100mV 85C | `sram_ref_pin` | 1.292 | 1.453 |
| Slow 1100mV 85C | `cram0_clk_pin` | 3.431 | 6.044 |
| Slow 1100mV 85C | `cram1_clk_pin` | 3.433 | 5.690 |
| Slow 1100mV 85C | `clk_74a` | 3.631 | 0.309 |
| Slow 1100mV 85C | `bridge_spiclk` | 10.032 | 0.570 |
| Slow 1100mV 85C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[2].output_counter\|divclk` | 13.563 | 0.581 |
| Slow 1100mV 0C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[0].output_counter\|divclk` | 0.088 | 0.283 |
| Slow 1100mV 0C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[1].output_counter\|divclk` | 0.452 | 0.323 |
| Slow 1100mV 0C | `dram_clk_pin` | 1.121 | 3.140 |
| Slow 1100mV 0C | `sram_ref_pin` | 1.302 | 1.495 |
| Slow 1100mV 0C | `cram1_clk_pin` | 3.450 | 5.710 |
| Slow 1100mV 0C | `cram0_clk_pin` | 3.463 | 6.008 |
| Slow 1100mV 0C | `clk_74a` | 3.601 | 0.302 |
| Slow 1100mV 0C | `bridge_spiclk` | 10.163 | 0.609 |
| Slow 1100mV 0C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[2].output_counter\|divclk` | 13.693 | 0.558 |
| Fast 1100mV 85C | `sram_ref_pin` | 1.609 | 1.761 |
| Fast 1100mV 85C | `dram_clk_pin` | 1.643 | 3.345 |
| Fast 1100mV 85C | `cram0_clk_pin` | 3.718 | 6.210 |
| Fast 1100mV 85C | `cram1_clk_pin` | 3.787 | 6.019 |
| Fast 1100mV 85C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[1].output_counter\|divclk` | 4.085 | 0.146 |
| Fast 1100mV 85C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[0].output_counter\|divclk` | 4.504 | 0.130 |
| Fast 1100mV 85C | `clk_74a` | 7.839 | 0.132 |
| Fast 1100mV 85C | `bridge_spiclk` | 11.992 | 0.211 |
| Fast 1100mV 85C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[2].output_counter\|divclk` | 15.399 | 0.247 |
| Fast 1100mV 0C | `sram_ref_pin` | 1.614 | 1.768 |
| Fast 1100mV 0C | `dram_clk_pin` | 1.651 | 3.355 |
| Fast 1100mV 0C | `cram0_clk_pin` | 3.704 | 6.205 |
| Fast 1100mV 0C | `cram1_clk_pin` | 3.770 | 6.041 |
| Fast 1100mV 0C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[1].output_counter\|divclk` | 4.270 | 0.131 |
| Fast 1100mV 0C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[0].output_counter\|divclk` | 4.810 | 0.105 |
| Fast 1100mV 0C | `clk_74a` | 8.241 | 0.122 |
| Fast 1100mV 0C | `bridge_spiclk` | 12.154 | 0.201 |
| Fast 1100mV 0C | `ic\|saturn\|pll\|altera_pll_i\|cyclonev_pll\|counter[2].output_counter\|divclk` | 15.596 | 0.190 |

## Commands and durations

Scratch/log root: `/home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2`. Each run has `run.log` and `run.json` there. Scratch trees are disposable; only summaries and this report are versioned.

```sh
git fetch origin --quiet
df -h /
python3 -u sizing/pocket-cuts/measure.py maps --scratch /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2 --jobs 6
koboard slot take taro --kind heavy --as "Codex - saturn-a0-cuts" --est 30
python3 -u sizing/pocket-cuts/measure.py fit --scratch /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2
koboard slot done taro-20261105T005448Z-ede8
python3 sizing/pocket-cuts/measure.py report --scratch /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2
```

Long commands were launched with Python subprocess.Popen(start_new_session=True), stdin=DEVNULL and stdout/stderr redirected to maps.log or fit.log. No shell was held waiting on compilation. rsync excludes .git, db, incremental_db, output_files, worker runs, and this measurement output directory. Tracked source bytes were verified before each run; the only permitted change was the explicitly derived QSF. The reference gitlink is a directory, unused by the release QSF.

| Run | Start UTC | Wall seconds | Exit |
|---|---|---:|---:|
| baseline | 2026-11-05T00:50:36Z | 113.71 | 0 |
| extcc | 2026-11-05T00:50:36Z | 117.59 | 0 |
| shadow | 2026-11-05T00:50:36Z | 116.91 | 0 |
| backline | 2026-11-05T00:50:36Z | 113.25 | 0 |
| special | 2026-11-05T00:50:36Z | 118.52 | 0 |
| lncol | 2026-11-05T00:50:36Z | 109.56 | 0 |
| zoom | 2026-11-05T00:52:26Z | 112.81 | 0 |
| rparamb | 2026-11-05T00:52:30Z | 113.92 | 0 |
| mosaic | 2026-11-05T00:52:30Z | 113.22 | 0 |
| sprwin | 2026-11-05T00:52:33Z | 111.42 | 0 |
| linewin | 2026-11-05T00:52:34Z | 108.69 | 0 |
| wdt | 2026-11-05T00:52:35Z | 106.68 | 0 |
| seven-small | 2026-11-05T00:54:19Z | 110.61 | 0 |
| all-ten | 2026-11-05T00:54:22Z | 111.63 | 0 |
| seven-small-fit | 2026-11-05T00:54:49Z | 541.22 | 0 |

Exact map commands:

```sh
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-baseline -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/baseline/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-extcc -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/extcc/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-shadow -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/shadow/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-backline -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/backline/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-special -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/special/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-lncol -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/lncol/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-zoom -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/zoom/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-rparamb -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/rparamb/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-mosaic -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/mosaic/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-sprwin -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/sprwin/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-linewin -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/linewin/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-wdt -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/wdt/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-seven-small -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/seven-small/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
docker run --rm --platform linux/amd64 --name saturn-a0-a0-measure-20261105-v2-all-ten -v /home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/all-ten/tree:/build -w /build/src/fpga raetro/quartus:21.1 quartus_map ap_core
```

## Retained evidence hashes

```text
9322a5ac4c6f8a5564366c732553f09791b84aa9036dc77a37d44fdb6a5aec67  all-ten/ap_core.map.summary
666f221860e939af67f97bc0104a7f65c7cef4b4a3d56baeed2acdd4006378eb  all-ten/entities.summary
3a0146d98508daf906a39e91d6160a714f33780c22ac5819e157f8ef4de7595a  backline/ap_core.map.summary
090b2827e4b11ddd69c784533a3cf2121d2fc27f917ac6a21c90bd1fcbe13b7f  backline/entities.summary
de19018ce0431c6dc2b520bcae63304205a9779152330e051a073d2f8714e1cf  baseline/ap_core.map.summary
362d93e9a756566e8f4b0a1ff2b4c7502e2f5aaa8fdddab109a8e544ff36bc67  baseline/entities.summary
9e783a0390e44f78670f1d26fb87885895fd1a0147eab7d0a249885b32e435f1  extcc/ap_core.map.summary
6dddd65cb44912cecf6281a45b04cd1bd1c30183d70d389593836b0c5c024fd7  extcc/entities.summary
4c6310af6f54f8708a09badf29bd93113a9a06806f536cd200d643110c8f7adb  linewin/ap_core.map.summary
5abedad841147a3d7679bdeda0b25d2b37adf9c9aa819281298465a0733b2e19  linewin/entities.summary
3496db2b2c17a21c2eb8084e0add158d0967e7bbbea76b7ac684e42ae6ec7af6  lncol/ap_core.map.summary
ff398f1ffd65b2ab40a8fddb7bfc1acc6e9703e16541cbb4bf0c60680fa8400a  lncol/entities.summary
3a59605afd10c2481454c1b7511af992b49b91d3d427dd9cfe1e4cc16130c43e  mosaic/ap_core.map.summary
edf1c881c69ee42e8b973b93f45a66dfd864e77cd27e9b9ebcdb6edddd3382fb  mosaic/entities.summary
33d2c60ca002385eb4eebd55fffe55555fe298dcfacb8ce25919dd1a3ee0971b  rparamb/ap_core.map.summary
6d2defa8e0f3c30b0fddbfa90a23625ed90677cfe8973ba22319066b779a2ae8  rparamb/entities.summary
91c7a1f7f41ad83bd8564c3c7a6b9a6136a7bd6147942c3210eb9de4cc986fb2  seven-small/ap_core.map.summary
e10b5256b69146e3fb511085846ad53325ee1fdcd9c9fb66e3c53c7fe774fd13  seven-small/entities.summary
994fb2dd1268825f83c6b0c0d8857f0dd08ab9cdb95a42bfff87d35fb971e946  seven-small-fit/ap_core.fit.summary
14967429f8e4ba1535a953b57dca772e7fd9a77fe11c6dab10d72e29b82e5a6b  seven-small-fit/ap_core.sta.summary
9a9d2a11b136d97c615f8f61a9c83ef9a1b5735503733ad1c329f293bf8e3357  shadow/ap_core.map.summary
8d7ee291922d2fe111fc7811af5c5748113d592280edf624575c7fa2ace00411  shadow/entities.summary
d0fe320d6c2ef9774e4d800348b3d45c9ad8dbc8b5be14a721664e824e912db5  special/ap_core.map.summary
26f7deffbf9af5aedb5a0c66218b73d5249ec55cc7543b76134a01b48f8822cc  special/entities.summary
ccba7be51ecb9b21fa0299e2c68201e71cf940d0e0bbe551da5eee7efc6d079f  sprwin/ap_core.map.summary
45abc781e9711ab861837658042a9f43d4c3f076346461230fa74a5bf2f8ae0e  sprwin/entities.summary
9379f4dc22122683432675cd4eb8dd3992b0f59f657a4e0eeaaa673f05b6058a  wdt/ap_core.map.summary
454bb228521b6c737d2c11f1cf45117c95c295d806521fb912822c2361aa072c  wdt/entities.summary
d38398622675925994875876d9f81218a64c69be86a07166b6e9dc54a8c1a02f  zoom/ap_core.map.summary
d23bd875dbae9ef21c1083600b7540287b37718a79a3cabce21cb978993c6de3  zoom/entities.summary
```

## Verification and cleanup

All 14 map estimates and VDP2/MSH/SSH rows were independently checked against raw reports. Each QSF had exactly its requested removals. Original map/fit/STA summaries were retained byte-for-byte. All 72 setup/hold entries (nine clocks at four corners) were checked. The qflow-restored QSF matched the seven-small input, and the heavy slot was released.

The first preflight stopped before Quartus because the source verifier treated a gitlink directory as a file; this was corrected and the measurements used a fresh scratch root. No Quartus measurement was retried. Quartus fit reports use Latin-1 for degree symbols; the report reader handles that encoding.

All 29 scratch trees (14 preflight copies, 14 map copies, one fit copy) were removed using individually listed absolute paths, without globs. Deletion commands and receipts: `/home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/cleanup-exact-trees.py` and `/home/omar/LocalOnly/pocket-saturn-20261105/a0-measure-20261105-v2/cleanup.log`. Logs and extracted run records remain outside the repository; no database or full report is committed.
