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
	output        r_RB_RD, d_RB_RD,
	output [15:0] cov
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

	`DUT_MOD u_dut (
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


`ifdef DBGDOT
	reg dd_seen = 0;
	reg [31:0] h_ref[0:7], h_dut[0:7]; reg [3:0] h_idx[0:7]; reg [7:0] h_q[0:7]; reg [7:0] h_nc[0:7]; reg [7:0] h_cx[0:7]; reg [7:0] h_nd[0:7];
	integer hi;
	always @(posedge CLK) if (u_dut.DOT_CE_R || (u_dut.DOT_CE_F && u_dut.HRES[1])) begin
		for (hi = 7; hi > 0; hi = hi - 1) begin h_ref[hi] <= h_ref[hi-1]; h_dut[hi] <= h_dut[hi-1]; h_idx[hi] <= h_idx[hi-1]; h_q[hi] <= h_q[hi-1]; h_cx[hi] <= h_cx[hi-1]; h_nd[hi] <= h_nd[hi-1]; end
		h_ref[0] <= u_ref.N0DOTDC; h_dut[0] <= u_dut.N0DOTDC; h_nd[0] <= u_dut.NSxREG[0].CHCN; h_idx[0] <= u_dut.NDI1; h_q[0] <= u_dut.ND1; h_cx[0] <= u_dut.CELLX;
	end
	always @(posedge CLK) if (!dd_seen && (u_ref.N0DOT !== u_dut.N0DOT)) begin
		dd_seen <= 1;
		for (hi = 0; hi < 6; hi = hi + 1) $display("hist %0d ref %h dut %h idx %h q %h cellx %h chcn0 %h", hi, h_ref[hi], h_dut[hi], h_idx[hi], h_q[hi], h_cx[hi], h_nd[hi]);
		$display("now ref %h dut %h ndc ref %p dut ND1 q %h idx %h P %0d CELLX %h HRES %h", u_ref.N0DOTDC, u_dut.N0DOTDC, u_ref.NDC1, u_dut.ND1, u_dut.NDI1, u_dut.NDC_P, u_dut.CELLX, u_dut.HRES);
	end
`endif

	// coverage probes on the golden copy
	wire hires = u_ref.HRES[1];
	assign cov[0] = u_ref.REGS.CCCTL.EXCCEN & u_ref.DOT_SEC.CCEN & u_ref.DOT_FST.LCEN & u_ref.DOT_THD.CCEN & ~hires;
	assign cov[1] = u_ref.REGS.CCCTL.EXCCEN & u_ref.DOT_SEC.CCEN & ~hires;
	assign cov[2] = u_ref.DOT_FST.CCEN & u_ref.DOT_SEC.P;
	assign cov[3] = u_ref.DOT_FST.SDEN;
	assign cov[4] = u_ref.SDOT.P | ~u_ref.SDOT.TP;
	assign cov[5] = u_ref.W0_HIT & u_ref.W1_HIT;
	assign cov[6] = u_ref.RBG_CALC & u_ref.REGS.BGON.R0ON;
	assign cov[7] = u_ref.NSxREG[0].LSCX | u_ref.NSxREG[0].LSCY;
	assign cov[8] = u_ref.NSxREG[0].MZE & u_ref.NSxREG[0].ON;
	assign cov[9] = u_ref.REGS.RAMCTL.CRMD[1] & u_ref.REGS.RAMCTL.CRMD[0];
	assign cov[10] = u_ref.NSxREG[0].BMEN & u_ref.NSxREG[0].ON;
	assign cov[11] = u_ref.REGS.CCCTL.BOKEN;
	assign cov[12] = hires;
	assign cov[13] = u_ref.REGS.TVMD.LSMD[1];
	assign cov[14] = u_ref.N0DOT.TP ^ u_ref.N1DOT.TP;
	assign cov[15] = u_ref.REGS.CCCTL.EXCCEN & ~u_ref.REGS.CCCTL.BOKEN & u_ref.DOT_SEC.CCEN & u_ref.DOT_THD.CCEN & ~u_ref.DOT_FST.LCEN & u_ref.CCENFST & ~hires & ~((|u_ref.REGS.RAMCTL.CRMD) & u_ref.DOT_THD.P);

	assign r_misc = {r_DO,r_RDY_N,r_VINT_N,r_HINT_N,r_DCE_R,r_DCE_F,r_HTIM_N,r_VTIM_N,r_FBDO,r_R,r_G,r_B,r_DCLK,r_HS_N,r_VS_N,r_HBL_N,r_VBL_N,r_FIELD,r_INTERLACE,r_HRES,r_VRES};
	assign d_misc = {d_DO,d_RDY_N,d_VINT_N,d_HINT_N,d_DCE_R,d_DCE_F,d_HTIM_N,d_VTIM_N,d_FBDO,d_R,d_G,d_B,d_DCLK,d_HS_N,d_VS_N,d_HBL_N,d_VBL_N,d_FIELD,d_INTERLACE,d_HRES,d_VRES};
endmodule
