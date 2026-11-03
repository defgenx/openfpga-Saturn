#!/usr/bin/env python3
"""Give the golden VDP2 copy the register write timing of VDP2P: a CPU register write is taken at the CE_R edge after
the request (one clk_sys after the golden's CE_F edge), so the register file only changes at CE_R edges
(docs/fit-status.md, VDP2P multicycle). Same idea as lane_patch.py: the golden gets the same timing change so the
cycle-by-cycle comparison stays exact. usage: regwr_patch.py <golden VDP2.sv>"""
import sys
p = sys.argv[1]
s = open(p).read()
strobe = "if (REG_SEL && !WE_N && !DTEN_N && !REQ_N) begin\n\t\t\t\tcase ({A[8:1],1'b0})"
assert s.count(strobe) == 2, s.count(strobe)
s = s.replace(strobe, "if (RW_E) begin\n\t\t\t\tcase ({RW_A,1'b0})")
a = s.index("9'h000: REGS.TVMD <= DI & TVMD_MASK;")
b = s.index("endcase", a)
s = s[:a] + s[a:b].replace("<= DI &", "<= RW_D &") + s[b:]
sel = "\twire REG_SEL = (A[20:18] == 3'b110) & ~CS_N & ~AD_N;\n"
assert s.count(sel) == 1
s = s.replace(sel, sel + """	bit         RW_P;
	bit [ 8: 1] RW_A;
	bit [15: 0] RW_D;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) RW_P <= 0;
		else if (!RES_N) RW_P <= 0;
		else if (REG_SEL && !WE_N && !DTEN_N && !REQ_N) begin RW_P <= 1; RW_A <= A[8:1]; RW_D <= DI; end
		else if (CE_R) RW_P <= 0;
	end
	wire        RW_E = RW_P & CE_R;
""")
open(p, 'w').write(s)
