// Timing wrapper: VDP2P with every port registered, so the reported paths are register to register.
module vdp2p_reg_wrap (
	input CLK, input RST_N,
	input  CE_R_P,
	input  CE_F_P,
	input  RES_N_P,
	input [15:0] DI_P,
	output reg [15:0] DO_P,
	input  CS_N_P,
	input  AD_N_P,
	input  DTEN_N_P,
	input  REQ_N_P,
	output reg  RDY_N_P,
	output reg  VINT_N_P,
	output reg  HINT_N_P,
	output reg  DCE_R_P,
	output reg  DCE_F_P,
	output reg  HTIM_N_P,
	output reg  VTIM_N_P,
	input [15:0] FBDI_P,
	output reg [15:0] FBDO_P,
	input  PAL_P,
	input  EXLAT_N_P,
	output reg [17:1] RA0_A_P,
	output reg [16:1] RA1_A_P,
	output reg [63:0] RA_D_P,
	output reg [7:0] RA_WE_P,
	output reg  RA_RD_P,
	input [31:0] RA0_Q_P,
	input [31:0] RA1_Q_P,
	output reg [17:1] RB0_A_P,
	output reg [16:1] RB1_A_P,
	output reg [63:0] RB_D_P,
	output reg [7:0] RB_WE_P,
	output reg  RB_RD_P,
	input [31:0] RB0_Q_P,
	input [31:0] RB1_Q_P,
	output reg [7:0] R_P,
	output reg [7:0] G_P,
	output reg [7:0] B_P,
	output reg  DCLK_P,
	output reg  HS_N_P,
	output reg  VS_N_P,
	output reg  HBL_N_P,
	output reg  VBL_N_P,
	output reg  FIELD_P,
	output reg  INTERLACE_P,
	output reg [2:0] HRES_P,
	output reg [1:0] VRES_P
);
	reg  CE_R_r; always @(posedge CLK) CE_R_r <= CE_R_P;
	reg  CE_F_r; always @(posedge CLK) CE_F_r <= CE_F_P;
	reg  RES_N_r; always @(posedge CLK) RES_N_r <= RES_N_P;
	reg [15:0] DI_r; always @(posedge CLK) DI_r <= DI_P;
	reg  CS_N_r; always @(posedge CLK) CS_N_r <= CS_N_P;
	reg  AD_N_r; always @(posedge CLK) AD_N_r <= AD_N_P;
	reg  DTEN_N_r; always @(posedge CLK) DTEN_N_r <= DTEN_N_P;
	reg  REQ_N_r; always @(posedge CLK) REQ_N_r <= REQ_N_P;
	reg [15:0] FBDI_r; always @(posedge CLK) FBDI_r <= FBDI_P;
	reg  PAL_r; always @(posedge CLK) PAL_r <= PAL_P;
	reg  EXLAT_N_r; always @(posedge CLK) EXLAT_N_r <= EXLAT_N_P;
	reg [31:0] RA0_Q_r; always @(posedge CLK) RA0_Q_r <= RA0_Q_P;
	reg [31:0] RA1_Q_r; always @(posedge CLK) RA1_Q_r <= RA1_Q_P;
	reg [31:0] RB0_Q_r; always @(posedge CLK) RB0_Q_r <= RB0_Q_P;
	reg [31:0] RB1_Q_r; always @(posedge CLK) RB1_Q_r <= RB1_Q_P;
	wire [15:0] DO_w;
	wire  RDY_N_w;
	wire  VINT_N_w;
	wire  HINT_N_w;
	wire  DCE_R_w;
	wire  DCE_F_w;
	wire  HTIM_N_w;
	wire  VTIM_N_w;
	wire [15:0] FBDO_w;
	wire [17:1] RA0_A_w;
	wire [16:1] RA1_A_w;
	wire [63:0] RA_D_w;
	wire [7:0] RA_WE_w;
	wire  RA_RD_w;
	wire [17:1] RB0_A_w;
	wire [16:1] RB1_A_w;
	wire [63:0] RB_D_w;
	wire [7:0] RB_WE_w;
	wire  RB_RD_w;
	wire [7:0] R_w;
	wire [7:0] G_w;
	wire [7:0] B_w;
	wire  DCLK_w;
	wire  HS_N_w;
	wire  VS_N_w;
	wire  HBL_N_w;
	wire  VBL_N_w;
	wire  FIELD_w;
	wire  INTERLACE_w;
	wire [2:0] HRES_w;
	wire [1:0] VRES_w;
	VDP2P u (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R_r), .CE_F(CE_F_r), .RES_N(RES_N_r), .DI(DI_r), .DO(DO_w), .CS_N(CS_N_r), .AD_N(AD_N_r), .DTEN_N(DTEN_N_r), .REQ_N(REQ_N_r), .RDY_N(RDY_N_w), .VINT_N(VINT_N_w), .HINT_N(HINT_N_w), .DCE_R(DCE_R_w), .DCE_F(DCE_F_w), .HTIM_N(HTIM_N_w), .VTIM_N(VTIM_N_w), .FBDI(FBDI_r), .FBDO(FBDO_w), .PAL(PAL_r), .EXLAT_N(EXLAT_N_r), .RA0_A(RA0_A_w), .RA1_A(RA1_A_w), .RA_D(RA_D_w), .RA_WE(RA_WE_w), .RA_RD(RA_RD_w), .RA0_Q(RA0_Q_r), .RA1_Q(RA1_Q_r), .RB0_A(RB0_A_w), .RB1_A(RB1_A_w), .RB_D(RB_D_w), .RB_WE(RB_WE_w), .RB_RD(RB_RD_w), .RB0_Q(RB0_Q_r), .RB1_Q(RB1_Q_r), .R(R_w), .G(G_w), .B(B_w), .DCLK(DCLK_w), .HS_N(HS_N_w), .VS_N(VS_N_w), .HBL_N(HBL_N_w), .VBL_N(VBL_N_w), .FIELD(FIELD_w), .INTERLACE(INTERLACE_w), .HRES(HRES_w), .VRES(VRES_w), .SCRN_EN(8'hFF), .DBG_EXT(8'h00));
	always @(posedge CLK) DO_P <= DO_w;
	always @(posedge CLK) RDY_N_P <= RDY_N_w;
	always @(posedge CLK) VINT_N_P <= VINT_N_w;
	always @(posedge CLK) HINT_N_P <= HINT_N_w;
	always @(posedge CLK) DCE_R_P <= DCE_R_w;
	always @(posedge CLK) DCE_F_P <= DCE_F_w;
	always @(posedge CLK) HTIM_N_P <= HTIM_N_w;
	always @(posedge CLK) VTIM_N_P <= VTIM_N_w;
	always @(posedge CLK) FBDO_P <= FBDO_w;
	always @(posedge CLK) RA0_A_P <= RA0_A_w;
	always @(posedge CLK) RA1_A_P <= RA1_A_w;
	always @(posedge CLK) RA_D_P <= RA_D_w;
	always @(posedge CLK) RA_WE_P <= RA_WE_w;
	always @(posedge CLK) RA_RD_P <= RA_RD_w;
	always @(posedge CLK) RB0_A_P <= RB0_A_w;
	always @(posedge CLK) RB1_A_P <= RB1_A_w;
	always @(posedge CLK) RB_D_P <= RB_D_w;
	always @(posedge CLK) RB_WE_P <= RB_WE_w;
	always @(posedge CLK) RB_RD_P <= RB_RD_w;
	always @(posedge CLK) R_P <= R_w;
	always @(posedge CLK) G_P <= G_w;
	always @(posedge CLK) B_P <= B_w;
	always @(posedge CLK) DCLK_P <= DCLK_w;
	always @(posedge CLK) HS_N_P <= HS_N_w;
	always @(posedge CLK) VS_N_P <= VS_N_w;
	always @(posedge CLK) HBL_N_P <= HBL_N_w;
	always @(posedge CLK) VBL_N_P <= VBL_N_w;
	always @(posedge CLK) FIELD_P <= FIELD_w;
	always @(posedge CLK) INTERLACE_P <= INTERLACE_w;
	always @(posedge CLK) HRES_P <= HRES_w;
	always @(posedge CLK) VRES_P <= VRES_w;
endmodule
