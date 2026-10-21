// Golden (REF_VDP2) and rewritten (VDP2) side by side, same inputs.
module tb_top (
	input         CLK,
	input         RST_N,
	input         CE_R,
	input         CE_F,
	input         RES_N,
	input  [15:0] DI,
	input         CS_N,
	input         AD_N,
	input         DTEN_N,
	input         REQ_N,
	input  [15:0] FBDI,
	input         PAL,
	input         EXLAT_N,
	input  [ 7:0] SCRN_EN,
	input  [ 7:0] DBG_EXT,

	input  [31:0] r_RA0_Q, r_RA1_Q, r_RB0_Q, r_RB1_Q,
	input  [31:0] d_RA0_Q, d_RA1_Q, d_RB0_Q, d_RB1_Q,

	// packed output buses: {DO,RDY_N,VINT_N,HINT_N,DCE_R,DCE_F,HTIM_N,VTIM_N,FBDO,R,G,B,DCLK,HS_N,VS_N,HBL_N,VBL_N,FIELD,INTERLACE,HRES,VRES}
	output [16+1+1+1+1+1+1+1+16+8+8+8+1+1+1+1+1+1+1+3+2-1:0] r_misc, d_misc,
	output [17:1] r_RA0_A, d_RA0_A,
	output [16:1] r_RA1_A, d_RA1_A,
	output [63:0] r_RA_D, d_RA_D,
	output [ 7:0] r_RA_WE, d_RA_WE,
	output        r_RA_RD, d_RA_RD,
	output [17:1] r_RB0_A, d_RB0_A,
	output [16:1] r_RB1_A, d_RB1_A,
	output [63:0] r_RB_D, d_RB_D,
	output [ 7:0] r_RB_WE, d_RB_WE,
	output        r_RB_RD, d_RB_RD
);
	wire [15:0] r_DO, d_DO, r_FBDO, d_FBDO;
	wire r_RDY_N, r_VINT_N, r_HINT_N, r_DCE_R, r_DCE_F, r_HTIM_N, r_VTIM_N;
	wire d_RDY_N, d_VINT_N, d_HINT_N, d_DCE_R, d_DCE_F, d_HTIM_N, d_VTIM_N;
	wire [7:0] r_R, r_G, r_B, d_R, d_G, d_B;
	wire r_DCLK, r_HS_N, r_VS_N, r_HBL_N, r_VBL_N, r_FIELD, r_INTERLACE;
	wire d_DCLK, d_HS_N, d_VS_N, d_HBL_N, d_VBL_N, d_FIELD, d_INTERLACE;
	wire [2:0] r_HRES, d_HRES;
	wire [1:0] r_VRES, d_VRES;

	REF_VDP2 u_ref (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .RES_N(RES_N),
		.DI(DI), .DO(r_DO), .CS_N(CS_N), .AD_N(AD_N), .DTEN_N(DTEN_N), .REQ_N(REQ_N), .RDY_N(r_RDY_N),
		.VINT_N(r_VINT_N), .HINT_N(r_HINT_N), .DCE_R(r_DCE_R), .DCE_F(r_DCE_F),
		.HTIM_N(r_HTIM_N), .VTIM_N(r_VTIM_N), .FBDI(FBDI), .FBDO(r_FBDO), .PAL(PAL), .EXLAT_N(EXLAT_N),
		.RA0_A(r_RA0_A), .RA1_A(r_RA1_A), .RA_D(r_RA_D), .RA_WE(r_RA_WE), .RA_RD(r_RA_RD),
		.RA0_Q(r_RA0_Q), .RA1_Q(r_RA1_Q),
		.RB0_A(r_RB0_A), .RB1_A(r_RB1_A), .RB_D(r_RB_D), .RB_WE(r_RB_WE), .RB_RD(r_RB_RD),
		.RB0_Q(r_RB0_Q), .RB1_Q(r_RB1_Q),
		.R(r_R), .G(r_G), .B(r_B), .DCLK(r_DCLK), .HS_N(r_HS_N), .VS_N(r_VS_N),
		.HBL_N(r_HBL_N), .VBL_N(r_VBL_N), .FIELD(r_FIELD), .INTERLACE(r_INTERLACE),
		.HRES(r_HRES), .VRES(r_VRES), .SCRN_EN(SCRN_EN), .DBG_EXT(DBG_EXT));

	VDP2 u_dut (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .RES_N(RES_N),
		.DI(DI), .DO(d_DO), .CS_N(CS_N), .AD_N(AD_N), .DTEN_N(DTEN_N), .REQ_N(REQ_N), .RDY_N(d_RDY_N),
		.VINT_N(d_VINT_N), .HINT_N(d_HINT_N), .DCE_R(d_DCE_R), .DCE_F(d_DCE_F),
		.HTIM_N(d_HTIM_N), .VTIM_N(d_VTIM_N), .FBDI(FBDI), .FBDO(d_FBDO), .PAL(PAL), .EXLAT_N(EXLAT_N),
		.RA0_A(d_RA0_A), .RA1_A(d_RA1_A), .RA_D(d_RA_D), .RA_WE(d_RA_WE), .RA_RD(d_RA_RD),
		.RA0_Q(d_RA0_Q), .RA1_Q(d_RA1_Q),
		.RB0_A(d_RB0_A), .RB1_A(d_RB1_A), .RB_D(d_RB_D), .RB_WE(d_RB_WE), .RB_RD(d_RB_RD),
		.RB0_Q(d_RB0_Q), .RB1_Q(d_RB1_Q),
		.R(d_R), .G(d_G), .B(d_B), .DCLK(d_DCLK), .HS_N(d_HS_N), .VS_N(d_VS_N),
		.HBL_N(d_HBL_N), .VBL_N(d_VBL_N), .FIELD(d_FIELD), .INTERLACE(d_INTERLACE),
		.HRES(d_HRES), .VRES(d_VRES), .SCRN_EN(SCRN_EN), .DBG_EXT(DBG_EXT));

	assign r_misc = {r_DO,r_RDY_N,r_VINT_N,r_HINT_N,r_DCE_R,r_DCE_F,r_HTIM_N,r_VTIM_N,r_FBDO,r_R,r_G,r_B,r_DCLK,r_HS_N,r_VS_N,r_HBL_N,r_VBL_N,r_FIELD,r_INTERLACE,r_HRES,r_VRES};
	assign d_misc = {d_DO,d_RDY_N,d_VINT_N,d_HINT_N,d_DCE_R,d_DCE_F,d_HTIM_N,d_VTIM_N,d_FBDO,d_R,d_G,d_B,d_DCLK,d_HS_N,d_VS_N,d_HBL_N,d_VBL_N,d_FIELD,d_INTERLACE,d_HRES,d_VRES};
endmodule
