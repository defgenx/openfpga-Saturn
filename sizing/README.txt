Sizing project for the Saturn core on 5CEBA4F23C8 (quartus_map only). Run from Saturn_MiSTer/sizing/ with
  rtl -> ../rtl, microrom.mem/nanorom.mem symlinked into the project dir (fx68k $readmemb and smpc/cdb mif paths are project-relative):
  docker run --rm --platform linux/amd64 -v <Saturn_MiSTer>:/build -w /build/sizing raetro/quartus:21.1 quartus_map saturn_full   (or saturn_min)
Source paths in the qip/qsf are ../rtl/... relative to that directory.
