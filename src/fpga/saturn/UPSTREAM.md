# Upstream

This directory is the RTL of [MiSTer-devel/Saturn_MiSTer](https://github.com/MiSTer-devel/Saturn_MiSTer)
at `9aa9449`, imported unmodified, then changed in place for the Pocket. `git log -- src/fpga/saturn`
shows every change; `ref/Saturn_MiSTer` is the same commit as a submodule, the golden model the
simulation diffs run against.

Not imported: ST-V (`Saturn/STV`, `ADSP_21xx`), MiSTer-only glue (`hps_ext.v`, `hps2pad.sv`, PS/2,
light gun, `cofi.sv`, PLL), the spreadsheets, and the firmware images (`cdb10x.mif`,
`Saturn/CD/sh7034.mif`, `Saturn/SMPC/smpc.mif`). A build that still uses the low-level CD block or
SMPC takes them from `ref/Saturn_MiSTer`.
