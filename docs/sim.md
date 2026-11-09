# Full-system simulation (`sim/sys`)

`tb_sys` runs `core_top`, the real Pocket top, in the `ap_core.qsf` build configuration, with the Pocket memory
models of `sim/mem` and a model of the host bridge. The plusargs are listed in the header of `sim/sys/tb_sys.sv`, the
make variables in `sim/sys/Makefile`. A run advances about 2.4 s of Saturn time per hour (Verilator 5, 2 threads).

## Checkpoints

A run to a late bug costs its full length every time a new probe is needed: 37 s of Panzer Dragoon is 15 hours.
Verilator cannot save a model built with `--timing` (`--savable` is refused), and the bench needs `--timing`. So
the checkpoint is the process itself. `sim_main.cpp` replaces Verilator's `--main` loop and, at the time `+CKPT_US`
gives, forks a frozen copy of the run: the checkpoint server. The server waits on `ckpt.fifo` in the run directory
and forks one replay per request. A replay starts from that exact state, so it reaches the bug in minutes.

```sh
cd <run dir>
<build>/obj/Vtb_sys +BIOS=... +DISC0=... +TOC=... +KEYSCHED=... +CKPT_US=35000000 +CKPT_STOP
sim/sys/replay.sh <run dir> <out dir> +WWLO=a0000 +WWHI=a1000 +RINGPC=06032430 +MAXUS=38000000
sim/sys/replay.sh <run dir> quit
```

* Without `+CKPT_STOP` the run that made the checkpoint goes on as a normal run.
* A replay runs in `<out dir>`. Every file the run had open for writing (`trace.log`, the audio dumps) is created
  again there under the same name, and its stdout goes to `sim.log`. Files open for reading (disc image, key
  schedule) are reopened at the same offset, so replays and the original run don't share file offsets.
* A replay's plusargs go ahead of the run's own; `$value$plusargs` takes the first match. The settings read once at
  start are read again in the replay (block `reargs` in `tb_sys.sv`): `RAMHCHK`, `HITCHK`, `WWLO`/`WWHI`, `RINGPC`,
  `TRACE`, `FRAMES`, `CYCLES`, `MAXUS`, `BUSLOG`. A switch the original run had on can't be turned off. Add a new
  setting to `reargs` when a replay must be able to change it.
* A checker that shadows memory from the start (`HITCHK`, `RAMHCHK`) only knows the words written after the replay
  starts when the original run had it off. It compares those words and skips the rest.
* The server lives in memory only, and it is tied to its binary. A new probe in `tb_sys.sv` means a new build and a
  new run to the checkpoint. A probe that a plusarg in `reargs` controls works from any checkpoint of its build, so
  keep new probes behind plusargs.
* Replays are processes like any run: each one costs the same CPU (`THREADS`).
