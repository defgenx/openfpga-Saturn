Standalone sizing of the Saturn sound 68K on 5CEBA4F23C8 (Quartus 21.1, docs/m68k.md).
Flow (area profile of sizing/area_profile.qsf, NUM_PARALLEL_PROCESSORS 1, raetro/quartus:21.1, one container per run):
  ./mkproj.sh <rev> <define,define|-> <sources...>     snapshot the sources into snap_<rev>/ and write m68k_<rev>.qpf/.qsf
                                                       (TOP=<module> replaces the m68k_wrap wrapper as top)
  ./run_map.sh <rev> [fit]                             quartus_map (and quartus_fit); result line goes to stdout
  ./rep.sh <rev>                                       per-entity table of a finished map
  ./sta.sh <rev> <core sdc>                            setup timing at 57.27 MHz with the core's multicycle constraints
  ./fetch_cores.sh <dir>                               clones the third-party cores that were measured
Revisions used for the numbers in docs/m68k.md:
  fx68k  golden FX68K                               rf     m68kp, MLAB register file, original PLA (M68KP_PLA_LOGIC)
  rom2   m68kp as shipped (MLAB regs, ROM decode)   m10k   rom2 with M68KP_REGS_M10K
  sysfx / sysmp   SCSP + FX68K / m68kp as wired in Saturn.sv (scsp68_wrap.sv)
  j68raw tg68raw ao68   raw third-party cores
microrom.mem / nanorom.mem are symlinks (FX68K's $readmemb files are project-relative).
tg68raw / ao68: after fetch_cores.sh, e.g.
  TOP=tg68_raw ./mkproj.sh tg68raw - <tg68k dir>/TG68K_Pack.vhd <tg68k dir>/TG68K_ALU.vhd <tg68k dir>/TG68KdotC_Kernel.vhd tg68_raw.vhd
  TOP=ao68000 ./mkproj.sh ao68 - <ao68000 dir>/rtl/ao68000.v        (ao68000_microcode.mif next to it, in the project directory)
