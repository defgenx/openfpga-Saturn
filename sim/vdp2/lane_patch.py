#!/usr/bin/env python3
"""Give the golden VDP2 copy the lane-by-lane VRAM write drain VDP2P has (sdram_pocket writes one 16 bit lane per
VDP2 write slot, so VDP2P issues a merged burst group one lane per slot: WrLane in VDP2P.sv). Same idea as
sim/vdp1/rowfloor_patch.pl: the golden gets the same timing change so the cycle-by-cycle comparison stays exact.
The drain itself is checked independently by the VRAM shadow in tb.cpp (every CPU write must end up in VRAM).
usage: lane_patch.py <golden VDP2.sv>"""
import sys
p = sys.argv[1]
s = open(p).read()
helper = """	function automatic [7:0] WrLane(input [7:0] we);
		WrLane = |we[7:6] ? 8'hC0 : |we[5:4] ? 8'h30 : |we[3:2] ? 8'h0C : 8'h03;
	endfunction
"""
def rep(a, b):
    global s
    assert s.count(a) == 1, a
    s = s.replace(a, b)
rep("	bit          VRAM_WRITE_PEND_CLR;\n", "	bit          VRAM_WRITE_PEND_CLR;\n" + helper)
rep("""						VRAMA_WE <= VRAM_WE & {8{~VRAM_WA[18]}};
						VRAMB_WE <= VRAM_WE & {8{ VRAM_WA[18]}};
						VRAM_WRITE_PEND_CLR = 1;""",
"""						VRAMA_WE <= WrLane(VRAM_WE) & VRAM_WE & {8{~VRAM_WA[18]}};
						VRAMB_WE <= WrLane(VRAM_WE) & VRAM_WE & {8{ VRAM_WA[18]}};
						VRAM_WE <= VRAM_WE & ~WrLane(VRAM_WE);
						VRAM_WRITE_PEND_CLR = (VRAM_WE & ~WrLane(VRAM_WE)) == 8'h00;""")
rep("""								VRAMA_WE <= VRAM_WE;
								VRAM_WRITE_PEND_CLR = 1;""",
"""								VRAMA_WE <= WrLane(VRAM_WE) & VRAM_WE;
								VRAM_WE <= VRAM_WE & ~WrLane(VRAM_WE);
								VRAM_WRITE_PEND_CLR = (VRAM_WE & ~WrLane(VRAM_WE)) == 8'h00;""")
rep("""								VRAMB_WE <= VRAM_WE;
								VRAM_WRITE_PEND_CLR = 1;""",
"""								VRAMB_WE <= WrLane(VRAM_WE) & VRAM_WE;
								VRAM_WE <= VRAM_WE & ~WrLane(VRAM_WE);
								VRAM_WRITE_PEND_CLR = (VRAM_WE & ~WrLane(VRAM_WE)) == 8'h00;""")
rep("				VRAM_WLOCK <= ~FIFO_EMPTY;\n			end", "				VRAM_WLOCK <= ~FIFO_EMPTY | VRAM_WRITE_PEND;\n			end")
open(p, 'w').write(s)
