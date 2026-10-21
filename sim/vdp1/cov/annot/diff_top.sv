//      // verilator_coverage annotation
        // Differential wrapper: golden VDP1 (REF_ prefix) and the shrunk VDP1 side by side.
        // Inputs are separate per side so the testbench can run an independent memory model on each.
        module diff_top (
~15286165 	input CLK, input RST_N, input CE_R, input CE_F, input EN, input RES_N,
~000027 	input FAST, input BLUR_MESH, input [7:0] DBG_EXT,
 3823234 	input DCE_R, input DCE_F, input HTIM_N, input VTIM_N, input [15:0] VOUTI,
 058392 	input [15:0] DI, input CS_N, input AD_N, input DTEN_N, input REQ_N,
 1182747 	input [15:0] VRAM_Q_r, input VRAM_RDY_r, input [15:0] FB0_Q_r, input [15:0] FB1_Q_r, input FB_RDY_r,
 354241 	output [15:0] DO_r, output RDY_N_r, output IRQ_N_r, output [15:0] VOUTO_r,
~1162398 	output [18:1] VRAM_A_r, output [15:0] VRAM_D_r, output [1:0] VRAM_WE_r, output VRAM_RD_r, output [8:0] VRAM_BLEN_r,
 911732 	output [17:1] FB0_A_r, output [15:0] FB0_D_r, output [1:0] FB0_WE_r, output FB0_RD_r,
 890961 	output [17:1] FB1_A_r, output [15:0] FB1_D_r, output [1:0] FB1_WE_r, output FB1_RD_r, output FB_MODE3_r,
 1182747 	input [15:0] VRAM_Q_n, input VRAM_RDY_n, input [15:0] FB0_Q_n, input [15:0] FB1_Q_n, input FB_RDY_n,
 354241 	output [15:0] DO_n, output RDY_N_n, output IRQ_N_n, output [15:0] VOUTO_n,
~1162398 	output [18:1] VRAM_A_n, output [15:0] VRAM_D_n, output [1:0] VRAM_WE_n, output VRAM_RD_n, output [8:0] VRAM_BLEN_n,
 911732 	output [17:1] FB0_A_n, output [15:0] FB0_D_n, output [1:0] FB0_WE_n, output FB0_RD_n,
 890961 	output [17:1] FB1_A_n, output [15:0] FB1_D_n, output [1:0] FB1_WE_n, output FB1_RD_n, output FB_MODE3_n
        );
        	REF_VDP1 u_r (.CLK(CLK),.RST_N(RST_N),.CE_R(CE_R),.CE_F(CE_F),.EN(EN),.RES_N(RES_N),.DI(DI),.DO(DO_r),.CS_N(CS_N),.AD_N(AD_N),
        		.DTEN_N(DTEN_N),.REQ_N(REQ_N),.RDY_N(RDY_N_r),.IRQ_N(IRQ_N_r),.DCE_R(DCE_R),.DCE_F(DCE_F),.HTIM_N(HTIM_N),.VTIM_N(VTIM_N),
        		.VOUTI(VOUTI),.VOUTO(VOUTO_r),.VRAM_A(VRAM_A_r),.VRAM_D(VRAM_D_r),.VRAM_WE(VRAM_WE_r),.VRAM_RD(VRAM_RD_r),
        		.VRAM_BLEN(VRAM_BLEN_r),.VRAM_Q(VRAM_Q_r),.VRAM_RDY(VRAM_RDY_r),
        		.FB0_A(FB0_A_r),.FB0_D(FB0_D_r),.FB0_Q(FB0_Q_r),.FB0_WE(FB0_WE_r),.FB0_RD(FB0_RD_r),
        		.FB1_A(FB1_A_r),.FB1_D(FB1_D_r),.FB1_Q(FB1_Q_r),.FB1_WE(FB1_WE_r),.FB1_RD(FB1_RD_r),
        		.FB_RDY(FB_RDY_r),.FB_MODE3(FB_MODE3_r),.FAST(FAST),.BLUR_MESH(BLUR_MESH),.DBG_EXT(DBG_EXT));
        	VDP1 u_n (.CLK(CLK),.RST_N(RST_N),.CE_R(CE_R),.CE_F(CE_F),.EN(EN),.RES_N(RES_N),.DI(DI),.DO(DO_n),.CS_N(CS_N),.AD_N(AD_N),
        		.DTEN_N(DTEN_N),.REQ_N(REQ_N),.RDY_N(RDY_N_n),.IRQ_N(IRQ_N_n),.DCE_R(DCE_R),.DCE_F(DCE_F),.HTIM_N(HTIM_N),.VTIM_N(VTIM_N),
        		.VOUTI(VOUTI),.VOUTO(VOUTO_n),.VRAM_A(VRAM_A_n),.VRAM_D(VRAM_D_n),.VRAM_WE(VRAM_WE_n),.VRAM_RD(VRAM_RD_n),
        		.VRAM_BLEN(VRAM_BLEN_n),.VRAM_Q(VRAM_Q_n),.VRAM_RDY(VRAM_RDY_n),
        		.FB0_A(FB0_A_n),.FB0_D(FB0_D_n),.FB0_Q(FB0_Q_n),.FB0_WE(FB0_WE_n),.FB0_RD(FB0_RD_n),
        		.FB1_A(FB1_A_n),.FB1_D(FB1_D_n),.FB1_Q(FB1_Q_n),.FB1_WE(FB1_WE_n),.FB1_RD(FB1_RD_n),
        		.FB_RDY(FB_RDY_n),.FB_MODE3(FB_MODE3_n),.FAST(FAST),.BLUR_MESH(BLUR_MESH),.DBG_EXT(DBG_EXT));
        endmodule
        
