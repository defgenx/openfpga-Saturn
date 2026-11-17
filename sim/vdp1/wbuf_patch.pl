#!/usr/bin/perl
# Gives the golden copy VDP1P's write-buffer empty flags (stdin -> stdout): VRAM_FIFO_EMPTY / FB_FIFO_EMPTY are not set
# on the clock a new write beat is taken, so READY waits until that beat has been issued (docs/vdp1.md, section 3,
# item 7). Only RDY_N changes, and only when a beat arrives on the clock the previous one is issued.
undef $/; $_ = <STDIN>;
s/(if \(CPU_VRAM_WRDY && !CPU_VRAM_WPEND && !VRAM_FIFO_EMPTY)\)/$1 && !(CPU_VRAM_REQ && !WE_N && !DTEN_N))/ or die "no VRAM_FIFO_EMPTY";
s/(if \(CPU_FB_WRDY && !CPU_FB_WPEND && !FB_FIFO_EMPTY)\)/$1 && !(CPU_FB_REQ && !WE_N && !DTEN_N))/ or die "no FB_FIFO_EMPTY";
print;
