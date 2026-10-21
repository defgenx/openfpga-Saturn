#!/usr/bin/env python3
"""Generates gen/diff_top.sv: golden VDP1 (REF_, suffix _r) and the shrunk VDP1 (suffix _n) side by side."""
import os
ports, insts = [], []
for s, mod in (("r", "REF_VDP1"), ("n", "VDP1")):
    ports.append(f"""	input [15:0] VRAM_Q_{s}, input VRAM_RDY_{s}, input [15:0] FB0_Q_{s}, input [15:0] FB1_Q_{s}, input FB_RDY_{s},
	output [15:0] DO_{s}, output RDY_N_{s}, output IRQ_N_{s}, output [15:0] VOUTO_{s},
	output [18:1] VRAM_A_{s}, output [15:0] VRAM_D_{s}, output [1:0] VRAM_WE_{s}, output VRAM_RD_{s}, output [8:0] VRAM_BLEN_{s},
	output [17:1] FB0_A_{s}, output [15:0] FB0_D_{s}, output [1:0] FB0_WE_{s}, output FB0_RD_{s},
	output [17:1] FB1_A_{s}, output [15:0] FB1_D_{s}, output [1:0] FB1_WE_{s}, output FB1_RD_{s}, output FB_MODE3_{s}""")
    insts.append(f"""	{mod} u_{s} (.CLK(CLK),.RST_N(RST_N),.CE_R(CE_R),.CE_F(CE_F),.EN(EN),.RES_N(RES_N),.DI(DI),.DO(DO_{s}),.CS_N(CS_N),.AD_N(AD_N),
		.DTEN_N(DTEN_N),.REQ_N(REQ_N),.RDY_N(RDY_N_{s}),.IRQ_N(IRQ_N_{s}),.DCE_R(DCE_R),.DCE_F(DCE_F),.HTIM_N(HTIM_N),.VTIM_N(VTIM_N),
		.VOUTI(VOUTI),.VOUTO(VOUTO_{s}),.VRAM_A(VRAM_A_{s}),.VRAM_D(VRAM_D_{s}),.VRAM_WE(VRAM_WE_{s}),.VRAM_RD(VRAM_RD_{s}),
		.VRAM_BLEN(VRAM_BLEN_{s}),.VRAM_Q(VRAM_Q_{s}),.VRAM_RDY(VRAM_RDY_{s}),
		.FB0_A(FB0_A_{s}),.FB0_D(FB0_D_{s}),.FB0_Q(FB0_Q_{s}),.FB0_WE(FB0_WE_{s}),.FB0_RD(FB0_RD_{s}),
		.FB1_A(FB1_A_{s}),.FB1_D(FB1_D_{s}),.FB1_Q(FB1_Q_{s}),.FB1_WE(FB1_WE_{s}),.FB1_RD(FB1_RD_{s}),
		.FB_RDY(FB_RDY_{s}),.FB_MODE3(FB_MODE3_{s}),.FAST(FAST),.BLUR_MESH(BLUR_MESH),.DBG_EXT(DBG_EXT));""")
t = open("diff_top.sv.in").read().replace("\t@PORTS@", ",\n".join(ports)).replace("@INSTS@", "\n".join(insts))
os.makedirs("gen", exist_ok=True)
open("gen/diff_top.sv", "w").write(t)
