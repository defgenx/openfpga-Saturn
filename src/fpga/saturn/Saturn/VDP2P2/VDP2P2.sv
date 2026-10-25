// altera message_off 10027

//the package is imported in the module header: VDP2.sv imports its own package at file scope
module VDP2P2 import VDP2P2_PKG::*; (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	
	input             RES_N,

	input      [15:0] DI,
	output     [15:0] DO,
	input             CS_N,
	input             AD_N,
	input             DTEN_N,
	input             REQ_N,
	output            RDY_N,
	
	output            VINT_N,
	output            HINT_N,
	
	output            DCE_R,
	output            DCE_F,
	output            HTIM_N,
	output            VTIM_N,
	input      [15:0] FBDI,
	output     [15:0] FBDO,
	
	input             PAL,
	
	input             EXLAT_N,
	
	output     [17:1] RA0_A,
	output     [16:1] RA1_A,
	output     [63:0] RA_D,
	output      [7:0] RA_WE,
	output            RA_RD,
	input      [31:0] RA0_Q,
	input      [31:0] RA1_Q,
	
	output     [17:1] RB0_A,
	output     [16:1] RB1_A,
	output     [63:0] RB_D,
	output      [7:0] RB_WE,
	output            RB_RD,
	input      [31:0] RB0_Q,
	input      [31:0] RB1_Q,
	
	output      [7:0] R,
	output      [7:0] G,
	output      [7:0] B,
	output reg        DCLK,
	output reg        HS_N,
	output reg        VS_N,
	output reg        HBL_N,
	output reg        VBL_N,
	
	output            FIELD,
	output            INTERLACE,
	output reg  [2:0] HRES,
	output reg  [1:0] VRES,
	
	input       [7:0] SCRN_EN,
	
	input       [7:0] DBG_EXT
`ifdef DEBUG
                     ,
	output VRAMAccessState_t VA_PIPE0,
	output NVRAMAccess_t NBG_A0VA_DBG,
//	output [18: 1] NxVS_ADDR0,
	output CellDotsColor_t NBG_CDC0_DBG,
	output CellDotsColor_t NBG_CDC1_DBG,
	output CellDotsColor_t NBG_CDC2_DBG,
	output CellDotsColor_t NBG_CDC3_DBG,
	output CellParam_t NBG_CDP0_DBG,
	output           [7:0] RBG0_CDC0_DBG,
	output           [7:0] RBG0_CDC1_DBG,
	output           [7:0] RBG0_CDC2_DBG,
	output           [7:0] RBG0_CDC3_DBG,
	output CellParam_t      RBG0_CDP_DBG,
	output           [7:0] RBG1_CDC0_DBG,
	output           [7:0] RBG1_CDC1_DBG,
	output           [7:0] RBG1_CDC2_DBG,
	output           [7:0] RBG1_CDC3_DBG,
	output CellParam_t      RBG1_CDP_DBG,
//	output RxCHD_t CH_PIPE0,
//	output RxCHD_t CH_PIPE1,
//	output RxCHD_t CH_PIPE2,
//	output [4:0] N0DOTN_DBG,
	output DotData_t R0DOT_DBG,
	output DotData_t N0DOT_DBG,
	output DotData_t N1DOT_DBG,
	output DotData_t N2DOT_DBG,
	output DotData_t N3DOT_DBG,
//	output ScreenDot_t DOT_FST_DBG,
//	output ScreenDot_t DOT_SEC_DBG,
//	output ScreenDot_t DOT_THD_DBG,
	output [2:0] FST_PRI0_DBG, SEC_PRI0_DBG, THD_PRI0_DBG,
	output [2:0] FST_PRI1_DBG, SEC_PRI1_DBG, THD_PRI1_DBG,
	output [2:0] FST_PRI2_DBG, SEC_PRI2_DBG, THD_PRI2_DBG,
	output [2:0] FST_PRI3_DBG, SEC_PRI3_DBG, THD_PRI3_DBG,
	output [2:0] FST_PRI4_DBG, SEC_PRI4_DBG, THD_PRI4_DBG,
	output [2:0] FST_PRI5_DBG, SEC_PRI5_DBG, THD_PRI5_DBG,
//	output [18:0] N0SCX,
//	output [18:0] N0SCY,
	output [18:0] NxOFFX0_DBG,
	output [18:0] NxOFFX1_DBG,
	output [18:0] NxOFFX2_DBG,
	output [18:0] NxOFFX3_DBG,
	output [18:0] NxOFFY0_DBG,
	output [18:0] NxOFFY1_DBG,
	output [18:0] NxOFFY2_DBG,
	output [18:0] NxOFFY3_DBG,
	output [31:0] Xsp_DBG[2],Ysp_DBG[2],
	output [31:0] Xp_DBG[2],Yp_DBG[2],
	output [31:0] dX_DBG[2],dY_DBG[2],
	output [31:0] Xst_DBG[2],Yst_DBG[2],
	output [19:1] R0NP_ADDR_DBG,
//	output RotTbl_t ROTA_TBL,
	output [15:0] VRAM_WRITE_PEND_CNT,
	output RotCoord_t   RPK_DBG,
	output [34:0] KAx0_DBG,
	output [ 3:0] RA_D_ERR,
	output [ 3:0] RB_D_ERR
`endif
);
	
	//H 427/455
	//V 263/313
	parameter HRES_320          = 9'd427;
	parameter HRES_352          = 9'd455;
	parameter HS_START_320      = 9'd350;
	parameter HS_START_352      = 9'd380;
	parameter HS_MID_320        = 9'd137;
	parameter HS_MID_352        = 9'd153;
	parameter HBL_START_320     = 9'd312;
	parameter HBL_START_352     = 9'd344;
	parameter VRES_NTSC         = 10'd263;
	parameter VRES_PAL          = 10'd313;
	parameter VS_START_NTSC_224 = 10'h0ED;
	parameter VS_START_NTSC_240 = 10'h0F5;
	parameter VS_START_PAL_224  = 10'h103;
	parameter VS_START_PAL_240  = 10'h10B;
	parameter VS_START_PAL_256  = 10'h113;
	parameter VS_END_NTSC_224   = /*VS_START_NTSC_224*/10'h1E6 + 10'd3;
	parameter VS_END_NTSC_240   = /*VS_START_NTSC_240*/10'h1EE + 10'd3;
	parameter VS_END_PAL_224    = /*VS_START_PAL_224*/10'h1CA + 10'd3;
	parameter VS_END_PAL_240    = /*VS_START_PAL_240*/10'h1D2 + 10'd3;
	parameter VS_END_PAL_256    = /*VS_START_PAL_256*/10'h1DA + 10'd3;
	parameter VBL_START_224     = 10'h0E0;
	parameter VBL_START_240     = 10'h0F0;
	parameter VBL_START_256     = 10'h100;
	
	VDP2Regs_t REGS;
	
	
	bit [18:1] VRAM_WA;
	bit [18:1] VRAM_RA;
	bit [63:0] VRAM_D;
	bit  [7:0] VRAM_WE;
	bit        VRAM_WRITE_PEND;
	bit        VRAM_READ_PEND;
	
	bit  [17: 1] VRAMA0_A, VRAMB0_A;
	bit  [16: 1] VRAMA1_A, VRAMB1_A;
	bit  [63: 0] VRAMA_D;   //write data of both banks (the bus is only used with a write enable)
	bit  [ 7: 0] VRAMA_WE, VRAMB_WE;
	bit          VRAMA0_RD, VRAMA1_RD, VRAMB0_RD, VRAMB1_RD;
	bit  [15: 0] VRAMA0_Q, VRAMA1_Q, VRAMB0_Q, VRAMB1_Q;
	bit          VRAM_READ_PIPE[2];
	wire VRAMA0_READ = (VRAM_RA[18:17] == 2'b00);
	wire VRAMA1_READ = (VRAM_RA[18:17] == 2'b01);
	wire VRAMB0_READ = (VRAM_RA[18:17] == 2'b10);
	wire VRAMB1_READ = (VRAM_RA[18:17] == 2'b11);
	
	
	bit          DOT_CE_R,DOT_CE_F;
	bit  [ 8: 0] H_CNT, HCT;
	bit  [ 8: 0] V_CNT, VCT;
	bit          HCT9;
	bit          VCT0;
	bit  [ 8: 0] SCRNX, SCRNY;
	bit          SCRNX0;
	bit  [ 3: 0] MOSAIC_HCNT,MOSAIC_VCNT;
	bit          DISP;
	bit  [ 1: 0] LSMD;
	VRAMAccessPipeline_t VA_PIPE;
	NBGPipeline_t BG_PIPE;
	VATap2_t        VA2;
	VATap3_t        VA3;
	VATap4_t        VA4;
	BGTap2_t        BG2;
	BGTap3_t        BG3;
	RBGTap2_t       RB2;
	RBGTap3_t       RB3;
	PN_t            PN3E;
	PNTap4_t [7:0]  PN4E;
	PNTap4_t [1:0]  RPN4E;
	bit      [1:0]  RTP4;
	Tap2_t          TAP2_D, TAP2_Q;
	Tap3_t          TAP3_D, TAP3_Q;
	Tap4_t          TAP4_D, TAP4_Q;
	NBGState_t      BG0;
	RBGPipeline_t RBG_PIPE;
	ScrollData_t NxOFFX[4];
	ScrollData_t NxOFFY[4];
	ScrollData_t VS[2];
	CT_t         CTD[2];			//Coeficient table data A/B
	RotCoord_t   RxX[2],RxY[2];
	RotCoord_t   KAst[2];
	RotAddr_t    RxKA[2];
	bit          RxCTTP[2];
	bit  [ 6: 0] RPxLCSD[2];
	bit          R0RPMSB;
	
	bit  [15: 0] PAL0_Q, PAL1_Q;
	bit  [15: 0] PAL0_DO, PAL1_DO;
	
	
	bit  [ 1: 0] DOTCLK_DIV;
	always @(posedge CLK) begin
		if (!RES_N) begin
			DOTCLK_DIV <= '0;
		end else if (CE_R) begin
			DOTCLK_DIV <= DOTCLK_DIV + 2'd1;
		end
	end
	assign DOT_CE_R = (DOTCLK_DIV == 3) & CE_R;
	assign DOT_CE_F = (DOTCLK_DIV == 1) & CE_R;
	
	assign DCLK = DOT_CE_R | (DOT_CE_F & HRES[1]);
	assign DCE_R = DOT_CE_R;
	assign DCE_F = DOT_CE_F;
	
	wire LAST_DOT = HCT == (HRES[2] ? 9'h1FE : 9'h1FF);
	wire [8:0] HBLANK_START = !HRES[2] ? (!HRES[0] ? 9'h144 : 9'h164) : (!HRES[0] ? 9'h148 : 9'h168);
	wire [8:0] HS_START = (!HRES[0] ? HS_START_320 : HS_START_352) - (!PAL ? 9'd0 : 9'd4);
	wire [8:0] HS_MID = (!HRES[0] ? HS_MID_320 : HS_MID_352) - (!PAL ? 9'd0 : 9'd4);
	wire [8:0] HS_END =  HS_START + 9'd32; 
	wire [8:0] HBL_START = (!HRES[0] ? 9'h143 : 9'h163) - (!HRES[1] || HRES[2] ? 9'd0 : 9'd1);
	wire [8:0] HBL_END = !HRES[1] || HRES[2] ? 9'd2 : 9'd1;
	wire [8:0] BREAK_DOT  = !HRES[2] ? (!HRES[0] ? 9'h15B - 9'd1 : 9'h177 - 9'd1) : (!HRES[0] ? 9'h15A - 9'd2 : 9'h178 - 9'd2);
	wire [8:0] VINC_DOT0  = !HRES[2] ? (!HRES[0] ? 9'h085 - 9'd1 : 9'h093 - 9'd1) : (!HRES[0] ? 9'h15A - 9'd2 : 9'h16C - 9'd2);
	wire [8:0] VINC_DOT1  = !HRES[2] ? (!HRES[0] ? 9'h15B - 9'd1 : 9'h177 - 9'd1) : (!HRES[0] ? 9'h15A - 9'd2 : 9'h16C - 9'd2);
	wire [9:0] VBL_START = HRES[2] ? 10'h1E0 : (!VRES[1] || !PAL ? (!VRES[0] ? VBL_START_224 : VBL_START_240) : VBL_START_256) << 1;
	wire [9:0] VS_NTSC_START  = (!VRES[1] ? (!VRES[0] ? VS_START_NTSC_224 : VS_START_NTSC_240) : VS_START_NTSC_240);
	wire [9:0] VS_PAL_START  = (!VRES[1] ? (!VRES[0] ? VS_START_PAL_224 : VS_START_PAL_240) : VS_START_PAL_256);
	wire [9:0] VS_NTSC_END    = !VRES[1] ? (!VRES[0] ? VS_END_NTSC_224 : VS_END_NTSC_240) : VS_END_NTSC_240;
	wire [9:0] VS_PAL_END    = !VRES[1] ? (!VRES[0] ? VS_END_PAL_224 : VS_END_PAL_240) : VS_END_PAL_256;
	wire [9:0] VS_START  = (PAL ? VS_PAL_START : VS_NTSC_START) - (!NNI        ? 10'd1 : 10'd0);
	wire [9:0] VS_END    = (PAL ? VS_PAL_END   : VS_NTSC_END  ) - (!NNI && ODD ? 10'd1 : 10'd0);
	wire [9:0] VSYNC_HSTART = REGS.TVMD.LSMD[1] && ODD ? HS_MID : HS_START;
//	wire [8:0] VBORD_START  = !VRES[1] ? (!VRES[0] ? 9'd263-9'd12 : 9'd263-9'd4) : 9'd313-9'd0;
//	wire [8:0] VBORD_END  = !VRES[1] ? (!VRES[0] ? 9'd224+9'd12 : 9'd240+9'd4) : 9'd256+9'd0;
	wire [9:0] INC_LINE  = HRES[2] ? 10'h001 : 10'h002;
	wire [9:0] BREAK_LINE  = HRES[2] ? (!HRES[0] ? 10'h1EA : 10'h1F7) - 10'd1                         : (((!PAL ? (!VRES[0] ? 10'h0ED : 10'h0F5) : (!VRES[1] ? (!VRES[0] ? 10'h103 : 10'h10B) : 10'h113)) - (!NNI        ? 10'd1 : 10'd0) - 10'd1) << 1)|10'h001;
	wire [9:0] JUMP_LINE   = HRES[2] ? (!HRES[0] ? 10'h3DD : 10'h3C5) - (!NNI && ODD ? 10'd2 : 10'd0) : (((!PAL ? (!VRES[0] ? 10'h1E6 : 10'h1EE) : (!VRES[1] ? (!VRES[0] ? 10'h1CA : 10'h1D2) : 10'h1DA)) - (!NNI && ODD ? 10'd1 : 10'd0)        ) << 1);
	wire [9:0] NEXT_TO_LAST_LINE  = 10'h3FD;
	wire [9:0] LAST_LINE  = 10'h3FF;
	
	bit          VB_INT,VBLANK;
	bit          HB_INT,HBLANK;
	bit          DISP_INT,DISP_INT2;
	bit          INTERLACE_INT;
	bit          ODD;
	bit          VSYNC;
	bit          HSYNC;
	always @(posedge CLK or negedge RST_N) begin
		bit  [ 1: 0] VRES_LATCH0,VRES_LATCH1;
		bit          F;
		
		if (!RST_N) begin
			{HCT9,HCT} <= '0;
			{VCT,VCT0} <= '0;
			HB_INT <= 0;
			VB_INT <= 0;
			H_CNT <= '0;
			V_CNT <= '0;
			HBLANK <= 0;
			VBLANK <= 0;
			ODD <= 0;
			HSYNC <= 0;
			VSYNC <= 0;
			F <= 0;
		end else if (!RES_N) begin
			{HCT9,HCT} <= 10'h3B0;
			{VCT,VCT0} <= {9'h1E6,1'b0};
			HB_INT <= 0;
			VB_INT <= 0;
			H_CNT <= '0;
			V_CNT <= 9'h1E6;
			HBLANK <= 1;
			VBLANK <= 1;
			ODD <= 1;
			HSYNC <= 0;
			VSYNC <= 1;
			F <= 0;
		end else begin
		if (DOT_CE_R) begin
			{HCT9,HCT} <= ({HCT9,HCT} + (HRES[2] ? 10'd2 : 10'd1)) & {9'b111111111,~HRES[2]};
			if ({HCT9,HCT} == {1'b0,BREAK_DOT}) begin
				{HCT9,HCT} <= HRES[2] && HRES[0] ? 10'h3D0 : 10'h3B0;
			end
			if ({HCT9,HCT} == {1'b0,VINC_DOT0} || {HCT9,HCT} == {1'b0,VINC_DOT1}) begin
				{VCT,VCT0} <= {VCT,VCT0} + 10'd1;
				if ({VCT,VCT0} == BREAK_LINE) begin
					{VCT,VCT0} <= JUMP_LINE;
					ODD <= ~ODD;
				end else if ({VCT,VCT0} == LAST_LINE) begin
					{VCT,VCT0} <= '0;
				end
				
				if ({VCT,VCT0} == (VBL_START - 10'd1)) begin
					VBLANK <= 1;
				end else if ({VCT,VCT0} == LAST_LINE) begin
					VBLANK <= 0;
				end
			end
			
			H_CNT <= (H_CNT + (HRES[2] ? 9'd2 : 9'd1)) & {8'b11111111,~HRES[2]};
			if (LAST_DOT) begin
				H_CNT <= '0;
				V_CNT <= VCT;
			end
			
			if (HCT == HBLANK_START - (HRES[2] ? 9'd2 : 9'd1)) begin
				HBLANK <= 1;
			end else if (HCT == (HRES[2] ? 9'd8 - 9'd2 : 9'd4 - 9'd1)) begin
				HBLANK <= 0;
			end
			
			if (H_CNT == HS_START - 1) begin
				HSYNC <= 1;
			end else if (H_CNT == HS_END - 1) begin
				HSYNC <= 0;
			end

			if (H_CNT == VSYNC_HSTART - 1) begin
				if (VCT == VS_START - 10'd1) begin
					VSYNC <= 1;
				end else if (VCT == VS_END - 10'd1) begin
					VSYNC <= 0;
				end
			end
			
			if (H_CNT == HBL_START - 1) begin
				HB_INT <= 1;
			end else if (H_CNT == HBL_END) begin
				HB_INT <= 0;
			end
			
			if (LAST_DOT && V_CNT == (VBL_START - 10'd1)>>1) begin
				VB_INT <= 1;
			end else if (LAST_DOT && V_CNT == NEXT_TO_LAST_LINE>>1) begin
				VB_INT <= 0;
			end
			
			if (!REGS.TVMD.DISP &&            DISP_INT) DISP_INT <= 0;
			if ( REGS.TVMD.DISP && VBLANK && !DISP_INT) DISP_INT <= 1;
			
			if ({HCT9,HCT} == {1'b0,VINC_DOT1}) begin
//				if ({VCT,VCT0} == LAST_LINE) begin
//					DISP_INT2 <= REGS.TVMD.DISP;
//				end
				if ({VCT,VCT0} == NEXT_TO_LAST_LINE) begin
					LSMD <= REGS.TVMD.LSMD;//?
					if (REGS.TVMD.LSMD == 2'b00) ODD <= 1;
					if (F) INTERLACE_INT <= REGS.TVMD.LSMD[1];
					F <= ~F;
//					HRES2 <= REGS.TVMD.HRESO;
				end
			end
			HRES <= REGS.TVMD.HRESO[2:0];
			VRES_LATCH0 <= REGS.TVMD.VRESO[1:0] & {PAL,1'b1}; VRES_LATCH1 <= VRES_LATCH0;	VRES <= VRES_LATCH1;
			DISP <= REGS.TVMD.DISP;
		end else if (DOT_CE_F) begin
			if (ODD && H_CNT == VSYNC_HSTART - 1) begin
				if (VCT == VS_START - 10'd1) begin
					VSYNC <= 1;
				end else if (VCT == VS_END - 10'd1) begin
					VSYNC <= 0;
				end
			end
		end
		end
	end
	wire NNI = (LSMD == 2'b00);						//Non interlace
	wire DDI = (LSMD == 2'b11);						//Double-density interlace
	
	wire [ 9: 0] HINT_START = !HRES[2] ? (!HRES[0] ? 10'h138 : 10'h158) : (!HRES[0] ? 10'h122 : 10'h142);
	bit          HINT,VINT;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			HINT <= 0;
			VINT <= 0;
		end else if (!RES_N) begin
			HINT <= 0;
			VINT <= 1;
		end else begin
			if ({VCT,VCT0} == VBL_START) begin
				VINT <= 1;
			end
			if ({VCT,VCT0} == 10'h3FE) begin
				VINT <= 0;
			end
			
			if ({HCT9,HCT} == HINT_START) begin
				HINT <= 1;
			end
			if ({HCT9,HCT} == 10'h000) begin
				HINT <= 0;
			end
		end
	end
	assign VINT_N = ~VINT;
	assign HINT_N = ~HINT;
	
	wire [ 9: 0] HTIM_START = !HRES[0] ? 10'h3E0 - 9'h001 : 10'h3E1 - 9'h001;
	wire [ 9: 0] HTIM_END = 10'h3F8;
	bit          HTIM,VTIM;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			HTIM <= 0;
			VTIM <= 0;
		end else if (!RES_N) begin
			HTIM <= 0;
			VTIM <= 0;
		end else if (DOT_CE_R) begin
			if ({HCT9,HCT} == HTIM_START) begin
				HTIM <= 1;
			end else if ({HCT9,HCT} == HTIM_END) begin
				HTIM <= 0;
			end
			
			if ({HCT9,HCT} == HTIM_START) begin
				if (VCT == (VBL_START>>1) + 9'h001) begin
					VTIM <= 1;
				end else if (VCT == 9'h000) begin
					VTIM <= 0;
				end
			end
		end
	end
	assign VTIM_N = ~VTIM;
	assign HTIM_N = ~HTIM;
	
	wire [ 8: 0] NBG_CELLX_START = !HRES[0] ? 9'h18D : 9'h1A9;
	wire [ 8: 0] NBG_FETCH_START = (!HRES[0] ? 9'h195 : 9'h1B1) + (HRES[1] ? 4'd8 : 4'd0);
	wire [ 8: 0] NBG_FETCH_END = (!HRES[0] ? 9'h131 : 9'h151) + (HRES[1] ? 4'd8 : 4'd0);
	wire [ 8: 0] RBG_FETCH_START = !HRES[0] ? 9'h195 + 9'h010 : 9'h1B1 + 9'h010;
	wire [ 8: 0] RBG_FETCH_END = !HRES[0] ? 9'h131 + 9'h010 : 9'h151 + 9'h010;
	wire [ 8: 0] RPA_FETCH_START = !HRES[0] ? 9'h169 : 9'h185;
	wire [ 8: 0] RPB_FETCH_START = !HRES[0] ? 9'h151 : 9'h16D;
	wire [ 8: 0] RCTA_FETCH_START = !HRES[0] ? 9'h18B : 9'h1A7;
	wire [ 8: 0] RCTB_FETCH_START = !HRES[0] ? 9'h18C : 9'h1A8;
	wire [ 8: 0] LS_FETCH_START = !HRES[0] ? 9'h181 : 9'h19D;
	wire [ 8: 0] LW_FETCH_START = !HRES[0] ? 9'h187 : 9'h1A3;
	wire [ 8: 0] LN_FETCH_START = !HRES[0] ? 9'h189 : 9'h1A5;
	wire [ 8: 0] BS_FETCH_START = !HRES[0] ? 9'h18A : 9'h1A6;
	wire [ 8: 0] NOACCESS_START = !HRES[0] ? 9'h136 : 9'h156;
	wire [ 8: 0] NOACCESS_END = !HRES[0] ? 9'h13D : 9'h15D;
	wire [ 8: 0] NOACCESS2_START = !HRES[0] ? 9'h142 : 9'h162;
	wire [ 8: 0] NOACCESS2_END = !HRES[0] ? 9'h145 : 9'h165;
	wire [ 8: 0] NOACCESS3_START = !HRES[0] ? 9'h18D : 9'h1A9;
	wire [ 8: 0] NOACCESS3_END = !HRES[0] ? 9'h18F : 9'h1AB;
	wire [ 8: 0] REFRESH_START = !HRES[0] ? 9'h190 : 9'h1AC;
	wire [ 8: 0] REFRESH_END = !HRES[0] ? 9'h194 : 9'h1B0;
	wire [ 8: 0] NBG_SCREEN_START = !HRES[0] ? 9'h19D : 9'h1B9;
	wire         IS_PRELAST_LINE = (V_CNT == NEXT_TO_LAST_LINE>>1);
	wire         IS_LAST_LINE = (V_CNT == LAST_LINE>>1);
	wire         IS_RENDER_LINES = (V_CNT < (VBL_START - INC_LINE)>>1) || IS_LAST_LINE;
	wire         IS_VISIBLE_LINES = (V_CNT < VBL_START>>1);
	wire         NBG_FETCH_START_EN = (H_CNT == NBG_FETCH_START - 1);
	wire         NBG_FETCH_END_EN = (H_CNT == NBG_FETCH_END);
	
	bit  [ 2: 0] CELLX;
	bit          NPN_FETCH;		//Normal screen pattern data fetch time
	bit          NCH_FETCH;		//Normal screen char data fetch time
	bit          NVCS_FETCH;	//Vertical cell scroll data fetch time
	bit          RBG_CALC;
	bit          RBG_FETCH;		//Rotation screen pattern data fetch time
	bit          RCH_FETCH;		//Rotation screen char data fetch time
	bit          LS_FETCH;		//Line scroll table fetch time
	bit          LW_FETCH;		//Line window table fetch time
	bit          RPA_FETCH;		//Rotation parameter A fetch time
	bit          RPB_FETCH;		//Rotation parameter B fetch time
	bit          RCTA_FETCH;	//Rotation coeficient table line A fetch time
	bit          RCTB_FETCH;	//Rotation coeficient table line B fetch time
	bit          CT_FETCH;		//Coefficient table fetch time
	bit          LN_FETCH;		//Line screen table fetch time
	bit          BACK_FETCH;	//Back screen table fetch time
	bit          REFRESH;		//VRAM refresh time
	bit          NOACCESS;		//VRAM no access time
	bit          DOT_FETCH;
	bit  [ 4: 0] NFETCH_PIPE;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			CELLX <= '0;
			NPN_FETCH <= 0;
			NCH_FETCH <= 0;
			NVCS_FETCH <= 0;
			RBG_FETCH <= 0;
			RBG_CALC <= 0;
			RCTA_FETCH <= 0;
			RCTB_FETCH <= 0;
			LS_FETCH <= 0;
			LW_FETCH <= 0;
			RPA_FETCH <= 0;
			RPB_FETCH <= 0;
			BACK_FETCH <= 0;
			REFRESH <= 0;
			DOT_FETCH <= 0;
		end else if (!RES_N) begin
			CELLX <= '0;
			NPN_FETCH <= 0;
			NCH_FETCH <= 0;
			NVCS_FETCH <= 0;
			RBG_FETCH <= 0;
			RBG_CALC <= 0;
			RCTA_FETCH <= 0;
			RCTB_FETCH <= 0;
			LS_FETCH <= 0;
			LW_FETCH <= 0;
			RPA_FETCH <= 0;
			RPB_FETCH <= 0;
			BACK_FETCH <= 0;
			REFRESH <= 0;
			DOT_FETCH <= 0;
		end else if (DOT_CE_R) begin
			CELLX <= CELLX + 1'd1;
			if (H_CNT == NBG_CELLX_START - 1 && IS_RENDER_LINES) begin
				CELLX <= '0;
			end
			
			if (NBG_FETCH_START_EN && IS_RENDER_LINES && DISP_INT) begin
				NPN_FETCH <= 1;
			end else if (H_CNT == NBG_FETCH_END) begin
				NPN_FETCH <= 0;
			end
			if (H_CNT == NBG_FETCH_START + 4 - 1 && IS_RENDER_LINES && DISP_INT) begin
				NCH_FETCH <= 1;
			end else if (H_CNT == NBG_FETCH_END + 4) begin
				NCH_FETCH <= 0;
			end
			if (H_CNT == NBG_FETCH_START - 1 - 8 && IS_RENDER_LINES && DISP_INT) begin
				NVCS_FETCH <= 1;
			end else if (H_CNT == NBG_FETCH_END) begin
				NVCS_FETCH <= 0;
			end
			
			if (H_CNT == RBG_FETCH_START - 1 - 4 && IS_RENDER_LINES && DISP_INT) begin
				CT_FETCH <= 1;
			end else if (H_CNT == RBG_FETCH_END - 4) begin
				CT_FETCH <= 0;
			end
			if (H_CNT == RBG_FETCH_START - 1 - 1 && IS_RENDER_LINES) begin
				RBG_CALC <= 1;
			end else if (H_CNT == RBG_FETCH_END - 1) begin
				RBG_CALC <= 0;
			end
			if (H_CNT == RBG_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				RBG_FETCH <= 1;
			end else if (H_CNT == RBG_FETCH_END) begin
				RBG_FETCH <= 0;
			end
			if (H_CNT == RBG_FETCH_START + 4 - 1 && IS_RENDER_LINES && DISP_INT) begin
				RCH_FETCH <= 1;
			end else if (H_CNT == RBG_FETCH_END /*+ 4*/) begin
				RCH_FETCH <= 0;
			end
			
			if (H_CNT == RPA_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				RPA_FETCH <= 1;
			end else if (H_CNT == RPA_FETCH_START + 24 - 1) begin
				RPA_FETCH <= 0;
			end
			if (H_CNT == RPB_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				RPB_FETCH <= 1;
			end else if (H_CNT == RPB_FETCH_START + 24 - 1) begin
				RPB_FETCH <= 0;
			end
			
			if (H_CNT == RCTA_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				RCTA_FETCH <= 1;
			end else if (H_CNT == RCTA_FETCH_START) begin
				RCTA_FETCH <= 0;
			end
			if (H_CNT == RCTB_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				RCTB_FETCH <= 1;
			end else if (H_CNT == RCTB_FETCH_START) begin
				RCTB_FETCH <= 0;
			end
			
			if (H_CNT == LS_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				LS_FETCH <= 1;
			end else if (H_CNT == LS_FETCH_START + 6 - 1) begin
				LS_FETCH <= 0;
			end
			
			if (H_CNT == LW_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				LW_FETCH <= 1;
			end else if (H_CNT == LW_FETCH_START + 2 - 1) begin
				LW_FETCH <= 0;
			end
			
			if (H_CNT == LN_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				LN_FETCH <= 1;
			end else begin
				LN_FETCH <= 0;
			end
			
			if (H_CNT == BS_FETCH_START - 1 && IS_RENDER_LINES && DISP_INT) begin
				BACK_FETCH <= 1;
			end else begin
				BACK_FETCH <= 0;
			end
			
			if (H_CNT == 9'd2 - 1 && IS_VISIBLE_LINES) begin
				DOT_FETCH <= 1;
			end else if (H_CNT == 9'd2 + 9'd352 - 1) begin
				DOT_FETCH <= 0;
			end
			
			if (H_CNT == REFRESH_START - 1 || H_CNT == NOACCESS2_START - 1) begin
				REFRESH <= 1;
			end else if (H_CNT == REFRESH_END || H_CNT == NOACCESS2_END) begin
				REFRESH <= 0;
			end
			
			if (/*H_CNT == NOACCESS_START - 1 ||*/ H_CNT == NOACCESS2_START - 1 || H_CNT == NOACCESS3_START - 1) begin
				NOACCESS <= 1;
			end else if (/*H_CNT == NOACCESS_END ||*/ H_CNT == NOACCESS2_END || H_CNT == NOACCESS3_END) begin
				NOACCESS <= 0;
			end
		end
	end
			
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			SCRNX0 <= 0;
		end
		else if (DOT_CE_F) begin
			SCRNX0 <= 1;
		end
		else if (DOT_CE_R) begin
			SCRNX0 <= 0;
			SCRNX <= SCRNX + 1'd1;
			if (H_CNT == NBG_SCREEN_START - 1 && (IS_VISIBLE_LINES || IS_LAST_LINE)) begin
				SCRNX <= '0;
			end
			
			if (H_CNT == LS_FETCH_START - 1 && (IS_VISIBLE_LINES || IS_LAST_LINE)) begin
				SCRNY <= SCRNY + 1'd1;
				if (IS_LAST_LINE) begin
					SCRNY <= '0;
				end
			end
		end
	end
	wire [8:0] WSCRNY = !DDI ? SCRNY : {SCRNY[7:0],~ODD};
	
	VDP2NSxRegs_t NSxREG;
	VDP2RSxRegs_t RSxREG;
	VDP2RPxRegs_t RPxREG;
	
	assign NSxREG = NSxRegs(REGS);
	assign RSxREG = RSxRegs(REGS);
	assign RPxREG = RPxRegs(REGS);
	
		//Cycle pattern registers: block RAM, one 2-word table per bank (words: T0-T3, T4-T7)
	wire [ 2: 0] CYT = CELLX[2:0] & {~HRES[1],2'b11};
	wire         CY_WR = REG_SEL && !WE_N && !DTEN_N && !REQ_N;
	wire [ 8: 0] CY_A = {A[8:1],1'b0};
	wire [15: 0] CYA0, CYA1, CYB0, CYB1;
	VDP2P2_REGRAM #(1,16) cy_a0(CLK, RST_N, RES_N, CY_WR && (CY_A == 9'h010 || CY_A == 9'h012), A[1], DI, CYT[2], CYA0);
	VDP2P2_REGRAM #(1,16) cy_a1(CLK, RST_N, RES_N, CY_WR && (CY_A == 9'h014 || CY_A == 9'h016), A[1], DI, CYT[2], CYA1);
	VDP2P2_REGRAM #(1,16) cy_b0(CLK, RST_N, RES_N, CY_WR && (CY_A == 9'h018 || CY_A == 9'h01A), A[1], DI, CYT[2], CYB0);
	VDP2P2_REGRAM #(1,16) cy_b1(CLK, RST_N, RES_N, CY_WR && (CY_A == 9'h01C || CY_A == 9'h01E), A[1], DI, CYT[2], CYB1);
	function bit [3:0] CyNib(input bit [15:0] W, input bit [2:0] T);
		case (T[1:0])
			2'd0: return W[15:12];
			2'd1: return W[11: 8];
			2'd2: return W[ 7: 4];
			default: return W[ 3: 0];
		endcase
	endfunction
	bit [3:0] VCPA0; 
		bit [3:0] VCPA1; 
		bit [3:0] VCPB0; 
		bit [3:0] VCPB1;
	bit [3:0] NBG_NIB[4];
	bit       NBG_GT[4], NBG_PNV[4], NBG_CHV[4], NBG_VSV[4];
	bit [1:0] RDBSA0; 
	bit [1:0] RDBSA1; 
	bit [1:0] RDBSB0; 
	bit [1:0] RDBSB1;
	always_comb begin
		
		VCPA0 = CyNib(CYA0, CYT);
		VCPA1 = REGS.RAMCTL.VRAMD ? CyNib(CYA1, CYT) : CyNib(CYA0, CYT);
		VCPB0 = CyNib(CYB0, CYT);
		VCPB1 = REGS.RAMCTL.VRBMD ? CyNib(CYB1, CYT) : CyNib(CYB0, CYT);
		
		RDBSA0 = REGS.RAMCTL.RDBSA0;
		RDBSA1 = REGS.RAMCTL.VRAMD ? REGS.RAMCTL.RDBSA1 : REGS.RAMCTL.RDBSA0;
		RDBSB0 = REGS.RAMCTL.RDBSB0;
		RDBSB1 = REGS.RAMCTL.VRBMD ? REGS.RAMCTL.RDBSB1 : REGS.RAMCTL.RDBSB0;
		
		//NBG accesses of each bank: the cycle pattern nibble gives type (PN 0-3, CH 4-7, VS C-D) and layer in its low bits
		NBG_NIB = '{VCPA0, VCPA1, VCPB0, VCPB1};
		NBG_GT  = '{(RDBSA0 == 2'b00 | !RSxREG[0].ON),
		            (RDBSA1 == 2'b00 | !RSxREG[0].ON),
		            (RDBSB0 == 2'b00 | !RSxREG[0].ON) & !RSxREG[1].ON,
		            (RDBSB1 == 2'b00 | !RSxREG[0].ON) & !RSxREG[1].ON};
		for (int bk = 0; bk < 4; bk++) begin
			NBG_PNV[bk] = NBG_NIB[bk][3:2] == 2'b00 & NPN_FETCH & NSxREG[NBG_NIB[bk][1:0]].ON & NBG_GT[bk];
			NBG_CHV[bk] = NBG_NIB[bk][3:2] == 2'b01 & NCH_FETCH & NSxREG[NBG_NIB[bk][1:0]].ON & NBG_GT[bk];
			NBG_VSV[bk] = NBG_NIB[bk][3:1] == 3'b110 & NSxREG[NBG_NIB[bk][0]].VCSC & NVCS_FETCH & NSxREG[NBG_NIB[bk][0]].ON & NBG_GT[bk] & !REFRESH;
		end
		for (int l = 0; l < 4; l++) begin
			VA_PIPE[0].NxA0PN[l] = NBG_PNV[0] & NBG_NIB[0][1:0] == l;
			VA_PIPE[0].NxA1PN[l] = NBG_PNV[1] & NBG_NIB[1][1:0] == l;
			VA_PIPE[0].NxB0PN[l] = NBG_PNV[2] & NBG_NIB[2][1:0] == l;
			VA_PIPE[0].NxB1PN[l] = NBG_PNV[3] & NBG_NIB[3][1:0] == l;
			VA_PIPE[0].NxA0CH[l] = NBG_CHV[0] & NBG_NIB[0][1:0] == l;
			VA_PIPE[0].NxA1CH[l] = NBG_CHV[1] & NBG_NIB[1][1:0] == l;
			VA_PIPE[0].NxB0CH[l] = NBG_CHV[2] & NBG_NIB[2][1:0] == l;
			VA_PIPE[0].NxB1CH[l] = NBG_CHV[3] & NBG_NIB[3][1:0] == l;
		end
		for (int l = 0; l < 2; l++) begin
			VA_PIPE[0].NxA0VS[l] = NBG_VSV[0] & NBG_NIB[0][0] == l;
			VA_PIPE[0].NxA1VS[l] = NBG_VSV[1] & NBG_NIB[1][0] == l;
			VA_PIPE[0].NxB0VS[l] = NBG_VSV[2] & NBG_NIB[2][0] == l;
			VA_PIPE[0].NxB1VS[l] = NBG_VSV[3] & NBG_NIB[3][0] == l;
		end
				
		VA_PIPE[0].NxPN_FETCH[0] = NBG_PN_FETCH[0];
		VA_PIPE[0].NxPN_FETCH[1] = NBG_PN_FETCH[1];
		VA_PIPE[0].NxPN_FETCH[2] = NBG_PN_FETCH[2];
		VA_PIPE[0].NxPN_FETCH[3] = NBG_PN_FETCH[3];
		
		VA_PIPE[0].RxA0PN[0] = RDBSA0 == 2'b10 & RBG_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxA1PN[0] = RDBSA1 == 2'b10 & RBG_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxB0PN[0] = RDBSB0 == 2'b10 & RBG_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxB1PN[0] = RDBSB1 == 2'b10 & RBG_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxA0PN[1] = 0;
		VA_PIPE[0].RxA1PN[1] = 0;
		VA_PIPE[0].RxB0PN[1] = 0;
		VA_PIPE[0].RxB1PN[1] =                   RBG_FETCH & RSxREG[1].ON;
		
		VA_PIPE[0].RxA0CH[0] = RDBSA0 == 2'b11 & RCH_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxA1CH[0] = RDBSA1 == 2'b11 & RCH_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxB0CH[0] = RDBSB0 == 2'b11 & RCH_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxB1CH[0] = RDBSB1 == 2'b11 & RCH_FETCH & RSxREG[0].ON;
		VA_PIPE[0].RxA0CH[1] = 0;
		VA_PIPE[0].RxA1CH[1] = 0;
		VA_PIPE[0].RxB0CH[1] =                   RCH_FETCH & RSxREG[1].ON;
		VA_PIPE[0].RxB1CH[1] = 0;
		
		VA_PIPE[0].RxA0CT[0] = RDBSA0 == 2'b01 & CT_FETCH  & RSxREG[0].ON & EN_COEF;
		VA_PIPE[0].RxA1CT[0] = RDBSA1 == 2'b01 & CT_FETCH  & RSxREG[0].ON & EN_COEF;
		VA_PIPE[0].RxB0CT[0] = RDBSB0 == 2'b01 & CT_FETCH  & RSxREG[0].ON & EN_COEF;
		VA_PIPE[0].RxB1CT[0] = RDBSB1 == 2'b01 & CT_FETCH  & RSxREG[0].ON & EN_COEF;
		VA_PIPE[0].RxA0CT[1] = 0;
		VA_PIPE[0].RxA1CT[1] = 0;
		VA_PIPE[0].RxB0CT[1] = 0;
		VA_PIPE[0].RxB1CT[1] = 0;
		
		VA_PIPE[0].RxCRCT[0] = REGS.RAMCTL.CRKTE & CT_FETCH & RSxREG[0].ON & EN_COEF;
		VA_PIPE[0].RxCRCT[1] = 0;
		
		VA_PIPE[0].RxCTTP[0] = RxCTTP[0];
		VA_PIPE[0].RxCTTP[1] = RxCTTP[1];
		
		VA_PIPE[0].AxNA = ((VCPA0 == VCP_NA | VCPA1 == VCP_NA) & REGS.RAMCTL.VRAMD) || NOACCESS;
		VA_PIPE[0].BxNA = ((VCPB0 == VCP_NA | VCPB1 == VCP_NA) & REGS.RAMCTL.VRBMD) || NOACCESS;
		
		VA_PIPE[0].LS = LS_FETCH;
		VA_PIPE[0].LS_POS = LS_POS;
		VA_PIPE[0].LW = LW_FETCH;
		VA_PIPE[0].LW_POS = LW_POS;
		VA_PIPE[0].RPA = RPA_FETCH;
		VA_PIPE[0].RPB = RPB_FETCH;
		VA_PIPE[0].RCTA = RCTA_FETCH;
		VA_PIPE[0].RCTB = RCTB_FETCH;
		VA_PIPE[0].R0RP = REGS.RPMD.RPMD == 2'b10 ? R0RPMSB : R0RP_PIPE[3];
		VA_PIPE[0].RP_POS = RP_POS;
		VA_PIPE[0].BS = BACK_FETCH;
		VA_PIPE[0].LN = LN_FETCH;
//		VA_PIPE[0].RBG = RBG_PREFETCH;
		
		VA_PIPE[0].NxX[0] = NxOFFX[0].INT;
		VA_PIPE[0].NxX[1] = NxOFFX[1].INT;
		VA_PIPE[0].NxX[2] = NxOFFX[2].INT;
		VA_PIPE[0].NxX[3] = NxOFFX[3].INT;
		VA_PIPE[0].NxY[0] = NxOFFY[0].INT;
		VA_PIPE[0].NxY[1] = NxOFFY[1].INT;
		VA_PIPE[0].NxY[2] = NxOFFY[2].INT;
		VA_PIPE[0].NxY[3] = NxOFFY[3].INT;
		VA_PIPE[0].RxX[0] = RxX[0].INT;
		VA_PIPE[0].RxX[1] = RxX[1].INT;
		VA_PIPE[0].RxY[0] = RxY[0].INT;
		VA_PIPE[0].RxY[1] = RxY[1].INT;
	end
	
	bit  [ 7 : 0] NxPN_CYC_BY_T[4];
	bit           NxPN_CYC[4];
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			// synopsys translate_off
			VA_PIPE <= '{4{'0}};
			// synopsys translate_on
		end
		else if (DOT_CE_R) begin
			VA_PIPE[1].AxNA <= VA_PIPE[0].AxNA;
			VA_PIPE[1].BxNA <= VA_PIPE[0].BxNA;
			
			NxPN_CYC_BY_T[0][CELLX[2:0] & {~HRES[1],2'b11}] <= (VCPA0 == VCP_N0PN || VCPA1 == VCP_N0PN || VCPB0 == VCP_N0PN || VCPB1 == VCP_N0PN);
			NxPN_CYC_BY_T[1][CELLX[2:0] & {~HRES[1],2'b11}] <= (VCPA0 == VCP_N1PN || VCPA1 == VCP_N1PN || VCPB0 == VCP_N1PN || VCPB1 == VCP_N1PN);
			NxPN_CYC_BY_T[2][CELLX[2:0] & {~HRES[1],2'b11}] <= (VCPA0 == VCP_N2PN || VCPA1 == VCP_N2PN || VCPB0 == VCP_N2PN || VCPB1 == VCP_N2PN);
			NxPN_CYC_BY_T[3][CELLX[2:0] & {~HRES[1],2'b11}] <= (VCPA0 == VCP_N3PN || VCPA1 == VCP_N3PN || VCPB0 == VCP_N3PN || VCPB1 == VCP_N3PN);
			
//			NxPN_CYC[0] <=  (REGS.CYCA0L[15:12] == VCP_N0PN || REGS.CYCA0L[11:8] == VCP_N0PN || REGS.CYCA0L[7:4] == VCP_N0PN || REGS.CYCA0L[3:0] == VCP_N0PN || REGS.CYCA0U[15:12] == VCP_N0PN || REGS.CYCA0U[11:8] == VCP_N0PN || REGS.CYCA0U[7:4] == VCP_N0PN || REGS.CYCA0U[3:0] == VCP_N0PN) || 
//							   ((REGS.CYCA1L[15:12] == VCP_N0PN || REGS.CYCA1L[11:8] == VCP_N0PN || REGS.CYCA1L[7:4] == VCP_N0PN || REGS.CYCA1L[3:0] == VCP_N0PN || REGS.CYCA1U[15:12] == VCP_N0PN || REGS.CYCA1U[11:8] == VCP_N0PN || REGS.CYCA1U[7:4] == VCP_N0PN || REGS.CYCA1U[3:0] == VCP_N0PN) && REGS.RAMCTL.VRAMD) || 
//							 	 (REGS.CYCB0L[15:12] == VCP_N0PN || REGS.CYCB0L[11:8] == VCP_N0PN || REGS.CYCB0L[7:4] == VCP_N0PN || REGS.CYCB0L[3:0] == VCP_N0PN || REGS.CYCB0U[15:12] == VCP_N0PN || REGS.CYCB0U[11:8] == VCP_N0PN || REGS.CYCB0U[7:4] == VCP_N0PN || REGS.CYCB0U[3:0] == VCP_N0PN) || 
//							   ((REGS.CYCB1L[15:12] == VCP_N0PN || REGS.CYCB1L[11:8] == VCP_N0PN || REGS.CYCB1L[7:4] == VCP_N0PN || REGS.CYCB1L[3:0] == VCP_N0PN || REGS.CYCB1U[15:12] == VCP_N0PN || REGS.CYCB1U[11:8] == VCP_N0PN || REGS.CYCB1U[7:4] == VCP_N0PN || REGS.CYCB1U[3:0] == VCP_N0PN) && REGS.RAMCTL.VRBMD);
//			NxPN_CYC[1] <=  (REGS.CYCA0L[15:12] == VCP_N1PN || REGS.CYCA0L[11:8] == VCP_N1PN || REGS.CYCA0L[7:4] == VCP_N1PN || REGS.CYCA0L[3:0] == VCP_N1PN || REGS.CYCA0U[15:12] == VCP_N1PN || REGS.CYCA0U[11:8] == VCP_N1PN || REGS.CYCA0U[7:4] == VCP_N1PN || REGS.CYCA0U[3:0] == VCP_N1PN) ||
//							   ((REGS.CYCA1L[15:12] == VCP_N1PN || REGS.CYCA1L[11:8] == VCP_N1PN || REGS.CYCA1L[7:4] == VCP_N1PN || REGS.CYCA1L[3:0] == VCP_N1PN || REGS.CYCA1U[15:12] == VCP_N1PN || REGS.CYCA1U[11:8] == VCP_N1PN || REGS.CYCA1U[7:4] == VCP_N1PN || REGS.CYCA1U[3:0] == VCP_N1PN) && REGS.RAMCTL.VRAMD) || 
//								 (REGS.CYCB0L[15:12] == VCP_N1PN || REGS.CYCB0L[11:8] == VCP_N1PN || REGS.CYCB0L[7:4] == VCP_N1PN || REGS.CYCB0L[3:0] == VCP_N1PN || REGS.CYCB0U[15:12] == VCP_N1PN || REGS.CYCB0U[11:8] == VCP_N1PN || REGS.CYCB0U[7:4] == VCP_N1PN || REGS.CYCB0U[3:0] == VCP_N1PN) ||
//							   ((REGS.CYCB1L[15:12] == VCP_N1PN || REGS.CYCB1L[11:8] == VCP_N1PN || REGS.CYCB1L[7:4] == VCP_N1PN || REGS.CYCB1L[3:0] == VCP_N1PN || REGS.CYCB1U[15:12] == VCP_N1PN || REGS.CYCB1U[11:8] == VCP_N1PN || REGS.CYCB1U[7:4] == VCP_N1PN || REGS.CYCB1U[3:0] == VCP_N1PN) && REGS.RAMCTL.VRBMD);
//			NxPN_CYC[2] <=  (REGS.CYCA0L[15:12] == VCP_N2PN || REGS.CYCA0L[11:8] == VCP_N2PN || REGS.CYCA0L[7:4] == VCP_N2PN || REGS.CYCA0L[3:0] == VCP_N2PN || REGS.CYCA0U[15:12] == VCP_N2PN || REGS.CYCA0U[11:8] == VCP_N2PN || REGS.CYCA0U[7:4] == VCP_N2PN || REGS.CYCA0U[3:0] == VCP_N2PN) ||
//							   ((REGS.CYCA1L[15:12] == VCP_N2PN || REGS.CYCA1L[11:8] == VCP_N2PN || REGS.CYCA1L[7:4] == VCP_N2PN || REGS.CYCA1L[3:0] == VCP_N2PN || REGS.CYCA1U[15:12] == VCP_N2PN || REGS.CYCA1U[11:8] == VCP_N2PN || REGS.CYCA1U[7:4] == VCP_N2PN || REGS.CYCA1U[3:0] == VCP_N2PN) && REGS.RAMCTL.VRAMD) ||
//								 (REGS.CYCB0L[15:12] == VCP_N2PN || REGS.CYCB0L[11:8] == VCP_N2PN || REGS.CYCB0L[7:4] == VCP_N2PN || REGS.CYCB0L[3:0] == VCP_N2PN || REGS.CYCB0U[15:12] == VCP_N2PN || REGS.CYCB0U[11:8] == VCP_N2PN || REGS.CYCB0U[7:4] == VCP_N2PN || REGS.CYCB0U[3:0] == VCP_N2PN) ||
//							   ((REGS.CYCB1L[15:12] == VCP_N2PN || REGS.CYCB1L[11:8] == VCP_N2PN || REGS.CYCB1L[7:4] == VCP_N2PN || REGS.CYCB1L[3:0] == VCP_N2PN || REGS.CYCB1U[15:12] == VCP_N2PN || REGS.CYCB1U[11:8] == VCP_N2PN || REGS.CYCB1U[7:4] == VCP_N2PN || REGS.CYCB1U[3:0] == VCP_N2PN) && REGS.RAMCTL.VRBMD);
//			NxPN_CYC[3] <=  (REGS.CYCA0L[15:12] == VCP_N3PN || REGS.CYCA0L[11:8] == VCP_N3PN || REGS.CYCA0L[7:4] == VCP_N3PN || REGS.CYCA0L[3:0] == VCP_N3PN || REGS.CYCA0U[15:12] == VCP_N3PN || REGS.CYCA0U[11:8] == VCP_N3PN || REGS.CYCA0U[7:4] == VCP_N3PN || REGS.CYCA0U[3:0] == VCP_N3PN) ||
//							   ((REGS.CYCA1L[15:12] == VCP_N3PN || REGS.CYCA1L[11:8] == VCP_N3PN || REGS.CYCA1L[7:4] == VCP_N3PN || REGS.CYCA1L[3:0] == VCP_N3PN || REGS.CYCA1U[15:12] == VCP_N3PN || REGS.CYCA1U[11:8] == VCP_N3PN || REGS.CYCA1U[7:4] == VCP_N3PN || REGS.CYCA1U[3:0] == VCP_N3PN) && REGS.RAMCTL.VRAMD) ||
//								 (REGS.CYCB0L[15:12] == VCP_N3PN || REGS.CYCB0L[11:8] == VCP_N3PN || REGS.CYCB0L[7:4] == VCP_N3PN || REGS.CYCB0L[3:0] == VCP_N3PN || REGS.CYCB0U[15:12] == VCP_N3PN || REGS.CYCB0U[11:8] == VCP_N3PN || REGS.CYCB0U[7:4] == VCP_N3PN || REGS.CYCB0U[3:0] == VCP_N3PN) ||
//							   ((REGS.CYCB1L[15:12] == VCP_N3PN || REGS.CYCB1L[11:8] == VCP_N3PN || REGS.CYCB1L[7:4] == VCP_N3PN || REGS.CYCB1L[3:0] == VCP_N3PN || REGS.CYCB1U[15:12] == VCP_N3PN || REGS.CYCB1U[11:8] == VCP_N3PN || REGS.CYCB1U[7:4] == VCP_N3PN || REGS.CYCB1U[3:0] == VCP_N3PN) && REGS.RAMCTL.VRBMD);
		end
	end
	assign NxPN_CYC[0] = |NxPN_CYC_BY_T[0];
	assign NxPN_CYC[1] = |NxPN_CYC_BY_T[1];
	assign NxPN_CYC[2] = |NxPN_CYC_BY_T[2];
	assign NxPN_CYC[3] = |NxPN_CYC_BY_T[3];

	
	
	NVRAMAccess_t NBG_A0VA;
	NVRAMAccess_t NBG_A1VA;
	NVRAMAccess_t NBG_B0VA;
	NVRAMAccess_t NBG_B1VA;
	RVRAMAccess_t RBG_A0VA;
	RVRAMAccess_t RBG_A1VA;
	RVRAMAccess_t RBG_B0VA;
	RVRAMAccess_t RBG_B1VA;
	always_comb begin
		NBG_A0VA.PN = NBG_PNV[0];
		NBG_A0VA.CH = NBG_CHV[0];
		NBG_A0VA.VS = NBG_VSV[0];
		NBG_A0VA.Nx = (NBG_PNV[0] | NBG_CHV[0] | NBG_VSV[0]) ? NBG_NIB[0][1:0] : 2'd0;
		
		NBG_A1VA.PN = NBG_PNV[1];
		NBG_A1VA.CH = NBG_CHV[1];
		NBG_A1VA.VS = NBG_VSV[1];
		NBG_A1VA.Nx = (NBG_PNV[1] | NBG_CHV[1] | NBG_VSV[1]) ? NBG_NIB[1][1:0] : 2'd0;
		
		NBG_B0VA.PN = NBG_PNV[2];
		NBG_B0VA.CH = NBG_CHV[2];
		NBG_B0VA.VS = NBG_VSV[2];
		NBG_B0VA.Nx = (NBG_PNV[2] | NBG_CHV[2] | NBG_VSV[2]) ? NBG_NIB[2][1:0] : 2'd0;
		
		
		NBG_B1VA.PN = NBG_PNV[3];
		NBG_B1VA.CH = NBG_CHV[3];
		NBG_B1VA.VS = NBG_VSV[3];
		NBG_B1VA.Nx = (NBG_PNV[3] | NBG_CHV[3] | NBG_VSV[3]) ? NBG_NIB[3][1:0] : 2'd0;
				
		RBG_A0VA.PN = |VA_PIPE[0].RxA0PN;
		RBG_A0VA.CH = |VA_PIPE[0].RxA0CH;
		RBG_A0VA.CT = |VA_PIPE[0].RxA0CT;
		RBG_A0VA.Rx = VA_PIPE[0].RxA0PN[1] | VA_PIPE[0].RxA0CH[1] | VA_PIPE[0].RxA0CT[1];
		
		RBG_A1VA.PN = |VA_PIPE[0].RxA1PN;
		RBG_A1VA.CH = |VA_PIPE[0].RxA1CH;
		RBG_A1VA.CT = |VA_PIPE[0].RxA1CT;
		RBG_A1VA.Rx = VA_PIPE[0].RxA1PN[1] | VA_PIPE[0].RxA1CH[1] | VA_PIPE[0].RxA1CT[1];
		
		RBG_B0VA.PN = |VA_PIPE[0].RxB0PN;
		RBG_B0VA.CH = |VA_PIPE[0].RxB0CH;
		RBG_B0VA.CT = |VA_PIPE[0].RxB0CT;
		RBG_B0VA.Rx = VA_PIPE[0].RxB0PN[1] | VA_PIPE[0].RxB0CH[1] | VA_PIPE[0].RxB0CT[1];
		
		RBG_B1VA.PN = |VA_PIPE[0].RxB1PN;
		RBG_B1VA.CH = |VA_PIPE[0].RxB1CH;
		RBG_B1VA.CT = |VA_PIPE[0].RxB1CT;
		RBG_B1VA.Rx = VA_PIPE[0].RxB1PN[1] | VA_PIPE[0].RxB1CH[1] | VA_PIPE[0].RxB1CT[1];
	end
	
	always_comb begin
		NxOFFX[0] = XS[0];
		NxOFFX[1] = XS[1];
		NxOFFX[2] = XS[2];
		NxOFFX[3] = XS[3];
		NxOFFY[0] = NYOFS[0];
		NxOFFY[1] = NYOFS[1];
		NxOFFY[2] = NMOSY[2];
		NxOFFY[3] = NMOSY[3];
	end
`ifdef DEBUG
	assign NxOFFX0_DBG = NxOFFX[0];
	assign NxOFFX1_DBG = NxOFFX[1];
	assign NxOFFX2_DBG = NxOFFX[2];
	assign NxOFFX3_DBG = NxOFFX[3];
	assign NxOFFY0_DBG = NxOFFY[0];
	assign NxOFFY1_DBG = NxOFFY[1];
	assign NxOFFY2_DBG = NxOFFY[2];
	assign NxOFFY3_DBG = NxOFFY[3];
`endif
	
	
	PN_t            NBG2_PN_PIPE[2];
	PN_t            NBG3_PN_PIPE[2];
	
	bit          RxSCRN_OVER[2];
	//VRAM access unit: the layer fetch address of a bank is computed once per clock for one bank (USEL: banks 0-2
	//in turn, bank 3 at the DOT_CE_F/DOT_CE_R clocks) and held per bank (HA/HM). The inputs only change at DOT_CE_R.
	wire         MP_WR = REG_SEL && !WE_N && !DTEN_N && !REQ_N;
	NVRAMAccess_t NBV[4];
	RVRAMAccess_t RBV[4];
	always_comb begin
		NBV[0] = NBG_A0VA; NBV[1] = NBG_A1VA; NBV[2] = NBG_B0VA; NBV[3] = NBG_B1VA;
		RBV[0] = RBG_A0VA; RBV[1] = RBG_A1VA; RBV[2] = RBG_B0VA; RBV[3] = RBG_B1VA;
	end
	bit  [ 1: 0] USL;
	always @(posedge CLK) USL <= DOT_CE_R ? 2'd0 : (USL == 2'd2 ? 2'd0 : USL + 2'd1);
	wire [ 1: 0] USEL = (DOT_CE_R || DOT_CE_F) ? 2'd3 : USL;
	NVRAMAccess_t UN;
	RVRAMAccess_t UR;
	assign UN = NBV[USEL];
	assign UR = RBV[USEL];
	wire [ 1: 0] UL  = UN.Nx;
	wire         UR1 = UR.Rx;
	//pattern name addresses (NBG, RBG)
	wire [ 1: 0] N_PCNT = UL[1] ? 2'b00 : NBG_PN_CNT[UL[0]];
	wire [10: 0] N_X = VA_PIPE[0].NxX[UL];
	wire [10: 0] N_Y = VA_PIPE[0].NxY[UL];
	wire [ 1: 0] N_MPI = NxPNMapIdx(N_PCNT, N_X, N_Y, NSxREG[UL].PLSZ, NSxREG[UL].ZMHF, NSxREG[UL].ZMQT);
	wire [15: 0] N_MPW;
	VDP2P2_REGRAM #(3,16) nmp(CLK, RST_N, RES_N, MP_WR && A[8:4] == 5'b00100, A[3:1], DI & 16'h3F3F, {UL, N_MPI[1]}, N_MPW);
	wire [ 5: 0] N_MPE = N_MPI[0] ? N_MPW[13:8] : N_MPW[5:0];
	wire [19: 1] N_PNA = NxPNAddr2(N_PCNT, N_X, N_Y, NSxREG[UL].MP, N_MPE, NSxREG[UL].PLSZ, NSxREG[UL].CHSZ, NSxREG[UL].PNC.NxPNB, NSxREG[UL].ZMHF, NSxREG[UL].ZMQT);
	wire         R_PSET = UR1 ? 1'b1 : VA_PIPE[0].R0RP;
	wire [11: 0] R_PX = VA_PIPE[0].RxX[R_PSET][11:0];
	wire [11: 0] R_PY = VA_PIPE[0].RxY[R_PSET][11:0];
	wire [ 3: 0] R_MPI = RxPNMapIdx(R_PX, R_PY, RPxREG[R_PSET].PLSZ);
	wire [15: 0] R_MPW;
	VDP2P2_REGRAM #(4,16) rmp(CLK, RST_N, RES_N, MP_WR && (A[8:4] == 5'b00101 || A[8:4] == 5'b00110), {A[5],A[3:1]}, DI & 16'h3F3F, {R_PSET,R_MPI[3:1]}, R_MPW);
	wire [ 5: 0] R_MPE = R_MPI[0] ? R_MPW[13:8] : R_MPW[5:0];
	wire [19: 1] R_PNA = RxPNAddr2(R_PX, R_PY, RPxREG[R_PSET].MP, R_MPE, RPxREG[R_PSET].PLSZ, RSxREG[UR1].CHSZ, RSxREG[UR1].PNC.NxPNB);
	//character addresses
	PN_t         NC_PN[4];
	always_comb begin
		NC_PN[0] = PN_PIPE[1][0 + UL[0]];
		NC_PN[1] = PN_PIPE[1][4 + UL[0]];
		NC_PN[2] = PN_PIPE[1][2 + UL[0]];
		NC_PN[3] = PN_PIPE[1][6 + UL[0]];
	end
	wire [10: 0] NC_X = VA4.NxX[{UL[1],UL[0]}];
	wire [10: 0] NC_Y = VA4.NxY[{UL[1],UL[0]}];
	wire [19: 1] N_CH01 = !NSxREG[{1'b0,UL[0]}].BMEN ? NxCHAddr(NC_PN, NBG_CH_CNT[{1'b0,UL[0]}], NC_X, NC_Y, NSxREG[{1'b0,UL[0]}].CHCN, NSxREG[{1'b0,UL[0]}].CHSZ, NSxREG[{1'b0,UL[0]}].ZMHF, NSxREG[{1'b0,UL[0]}].ZMQT) :
	                                                            NxBMAddr(NSxREG[{1'b0,UL[0]}].MP, NBG_CH_CNT[{1'b0,UL[0]}], NBG_BM_CNT[{1'b0,UL[0]}], NC_X, NC_Y, NSxREG[{1'b0,UL[0]}].CHCN, NSxREG[{1'b0,UL[0]}].BMSZ, NSxREG[{1'b0,UL[0]}].ZMHF, NSxREG[{1'b0,UL[0]}].ZMQT);
	PN_t         NC_PN23[2];
	always_comb begin
		NC_PN23[0] = UL[0] ? NBG3_PN_PIPE[0] : NBG2_PN_PIPE[0];
		NC_PN23[1] = UL[0] ? NBG3_PN_PIPE[1] : NBG2_PN_PIPE[1];
	end
	wire [19: 1] N_CH23 = NxCHAddr2(NC_PN23, NBG_CH_CNT[{1'b1,UL[0]}], NC_X, NC_Y, NSxREG[{1'b1,UL[0]}].CHCN, NSxREG[{1'b1,UL[0]}].CHSZ, 1'b0, 1'b0);
	wire         R_CSET = UR1 ? 1'b1 : VA4.R0RP;
	wire [11: 0] R_CX = VA4.RxX[R_CSET][11:0];
	wire [11: 0] R_CY = VA4.RxY[R_CSET][11:0];
	wire [19: 1] R_CHA = (!UR1 && RSxREG[0].BMEN) ? RxBMAddr(RPxREG[R_CSET].MP, R_CX, R_CY, RSxREG[0].CHCN, RSxREG[0].BMSZ) :
	                                                RxCHAddr(RBG_PN_PIPE[1][UR1], R_CX, R_CY, RSxREG[UR1].CHCN, RSxREG[UR1].CHSZ);
	//Character access record: the pattern name attributes, display-order word count and cell the address was built from.
	//It follows the access to the word arrival (two dot events) in a small tap.
	wire [ 1: 0] RC_ZM    = {NSxREG[{1'b0,UL[0]}].ZMQT, NSxREG[{1'b0,UL[0]}].ZMQT | NSxREG[{1'b0,UL[0]}].ZMHF};
	wire [ 2: 0] RC_CNT01 = NBG_CH_CNT[{1'b0,UL[0]}];
	wire         RC_BM    = !UL[1] && NSxREG[{1'b0,UL[0]}].BMEN;
	bit  [ 1: 0] RC_OFS;
	always_comb begin
		case (NSxREG[{1'b0,UL[0]}].CHCN)
			3'b000:  RC_OFS = RC_CNT01[1:0] & RC_ZM;
			3'b001:  RC_OFS = {1'b0, RC_CNT01[1] & RC_ZM[0]};
			default: RC_OFS = 2'd0;
		endcase
	end
	PN_t         RC_PN;
	always_comb begin
		if (UL[1]) RC_PN = NSxREG[{1'b1,UL[0]}].CHCN == 3'b001 ? NC_PN23[NBG_CH_CNT[{1'b1,UL[0]}][0]] : NC_PN23[0];
		else       RC_PN = NC_PN[RC_OFS];
	end
	wire [ 9: 0] RC_ATT   = RC_BM ? {NSxREG[{1'b0,UL[0]}].BMP,4'b0000,1'b0,NSxREG[{1'b0,UL[0]}].BMPR,NSxREG[{1'b0,UL[0]}].BMCC} : {RC_PN.PALN,RC_PN.HF,RC_PN.PR,RC_PN.CC};
	wire [ 2: 0] RC_CNT   = UL[1] ? NBG_CH_CNT[{1'b1,UL[0]}] : (RC_BM ? NBG_BM_CNT[{1'b0,UL[0]}] : RC_CNT01);
	wire [10: 0] RC_X     = NC_X + {(UL[1] || RC_BM) ? 2'd0 : RC_OFS, 3'b000};
	wire [22: 0] REC      = {UL, RC_CNT, RC_ATT, RC_X[10:3]};
	bit  [22: 0] RH[4];
	always @(posedge CLK) begin
		if (USEL == 2'd0) RH[0] <= REC;
		if (USEL == 2'd1) RH[1] <= REC;
		if (USEL == 2'd2) RH[2] <= REC;
		if (DOT_CE_F)     RH[3] <= REC;
	end
	wire [91: 0] RECQ;
	VDP2P2_DTAP #(.W(92),.K(2),.AW(3),.ML(1)) rec_tap(CLK, DOT_CE_R, {RH[3],RH[2],RH[1],RH[0]}, RECQ);
	bit  [19: 1] UO;
	always_comb begin
		UO = '0;
		if (UN.PN) UO = N_PNA;
		if (UN.CH) UO = UL[1] ? N_CH23 : N_CH01;
		if (UN.VS) UO = NxVS_ADDR;
		if (UR.PN) UO = R_PNA;
		if (UR.CH) UO = R_CHA;
		if (UR.CT) UO = RxCT_ADDR[UR1];
	end
	wire         UMATCH = UO[18:17] == USEL;
	bit  [16: 1] HA[3];
	bit          HM[3];
	always @(posedge CLK) begin
		if (USEL == 2'd0) begin HA[0] <= UO[16:1]; HM[0] <= UMATCH; end
		if (USEL == 2'd1) begin HA[1] <= UO[16:1]; HM[1] <= UMATCH; end
		if (USEL == 2'd2) begin HA[2] <= UO[16:1]; HM[2] <= UMATCH; end
	end
	wire [ 3: 0][16:1] AD = {UO[16:1], HA[2], HA[1], HA[0]};
	wire [ 3: 0]       MT = {UMATCH, HM[2], HM[1], HM[0]};
	
	bit  [19: 1] NxVS_ADDR;
	bit  [19: 1] NxLS_ADDR[2];
	bit  [19: 1] RxRP_ADDR;
	bit  [19: 1] RxCT_ADDR[2];
	bit  [19: 1] RxCTA_ADDR;
	bit  [19: 1] RxCTB_ADDR;
	bit  [19: 1] LW_ADDR[2];
	bit  [19: 1] BS_ADDR;
	bit  [19: 1] LN_ADDR;
	always_comb begin
		bit PN_RP,CH_RP,CT_RP;
		
		PN_RP = VA_PIPE[0].R0RP;
		CH_RP = VA4.R0RP;
		CT_RP = R0_RP;
		
		RxSCRN_OVER[0] = RxScreenOver(RPxREG[PN_RP].OVR, VA_PIPE[0].RxX[PN_RP][15:0], VA_PIPE[0].RxY[PN_RP][15:0], RPxREG[PN_RP].PLSZ, RSxREG[0].BMSZ, RSxREG[0].BMEN);
		RxSCRN_OVER[1] = RxScreenOver(RPxREG[    1].OVR, VA_PIPE[0].RxX[    1][15:0], VA_PIPE[0].RxY[    1][15:0], RPxREG[    1].PLSZ, RSxREG[1].BMSZ, RSxREG[1].BMEN);
		
		NxVS_ADDR    = {REGS.VCSTAU.VCSTA,REGS.VCSTAL.VCSTA,1'b0} + {11'h000,VS_OFFS,1'b0};
		
		NxLS_ADDR[0] = NxLSAddr(NSxREG[0].LSTA, LS_TBL_OFFS[0], LS_VAL_OFFS[0]);
		NxLS_ADDR[1] = NxLSAddr(NSxREG[1].LSTA, LS_TBL_OFFS[1], LS_VAL_OFFS[1]);
		
		RxRP_ADDR    = RxRPAddr({REGS.RPTAU.RPTA,REGS.RPTAL.RPTA},{~RP_POS[7],RP_POS[6:2]});
		RxCT_ADDR[1] = RxCTAddr(KAst[    1], RxKA[    1], RPxREG[    1].KTAOS, RPxREG[    1].KDBS);
		RxCTA_ADDR   = RxCTAddr(KAst[    0], RxKA[    0], RPxREG[    0].KTAOS, RPxREG[    0].KDBS);
		RxCTB_ADDR   = RxCTAddr(KAst[    1], RxKA[    1], RPxREG[    1].KTAOS, RPxREG[    1].KDBS);
		RxCT_ADDR[0] = CT_RP ? RxCTB_ADDR : RxCTA_ADDR;
	end
		
	
	//Table fetches (line scroll, line window, rotation parameters, coefficient tables, back and line screen): same address to all banks
	reg          TBL_ACT;
	reg  [19: 1] TBL_ADDR;
	always_comb begin
		TBL_ACT = 1;
		TBL_ADDR = '0;
		if (LS_FETCH && (((NSxREG[0].LSCX ||  NSxREG[0].LSCY || NSxREG[0].LZMX) && !LS_POS[2] && REGS.BGON.N0ON) || ((NSxREG[1].LSCX ||NSxREG[1].LSCY || NSxREG[1].LZMX) && LS_POS[2] && REGS.BGON.N1ON))) begin
			TBL_ADDR = NxLS_ADDR[LS_POS[2]];
		end else if (LW_FETCH && (LWE[0] || LWE[1])) begin
			TBL_ADDR = LW_ADDR[LW_POS];
		end else if ((RPA_FETCH && REGS.BGON.R0ON && (REGS.RPMD.RPMD[1] || !REGS.RPMD.RPMD[0])) || 
				             (RPB_FETCH && REGS.BGON.R0ON && (REGS.RPMD.RPMD[1] ||  REGS.RPMD.RPMD[0])) || 
								 ((RPA_FETCH || RPB_FETCH) && REGS.BGON.R1ON)) begin
			TBL_ADDR = RxRP_ADDR;
		end else if ((RCTA_FETCH && REGS.BGON.R0ON) || (RCTA_FETCH && REGS.BGON.R1ON)) begin
			TBL_ADDR = RxCTA_ADDR;
		end else if ((RCTB_FETCH && REGS.BGON.R0ON) || (RCTB_FETCH && REGS.BGON.R1ON)) begin
			TBL_ADDR = RxCTB_ADDR;
		end else if (BACK_FETCH) begin
			TBL_ADDR = BS_ADDR;
		end else if (LN_FETCH) begin
			TBL_ADDR = LN_ADDR;
		end else begin
			TBL_ACT = 0;
		end
	end

	//Bank hits: the access scheduled on the bank at this slot addresses that bank (checked on the held unit result)
	wire [ 3: 0] HPN, HCH, HVS, HRP, HRC, HCTB, HIT;
	genvar gb;
	generate for (gb = 0; gb < 4; gb++) begin : g_hit
		assign HPN[gb] = NBV[gb].PN && MT[gb];
		assign HCH[gb] = NBV[gb].CH && MT[gb] && ((VA2.NxPN_FETCH[NBV[gb].Nx] && NxPN_CYC[NBV[gb].Nx]) || NSxREG[NBV[gb].Nx].BMEN);
		assign HVS[gb] = NBV[gb].VS && MT[gb];
		assign HRP[gb] = RBV[gb].PN && MT[gb];
		assign HRC[gb] = RBV[gb].CH && MT[gb];
		assign HCTB[gb] = RBV[gb].CT && MT[gb];
		assign HIT[gb] = HPN[gb] | HCH[gb] | HVS[gb] | HRP[gb] | HRC[gb] | HCTB[gb];
	end endgenerate
	//Per-layer results of the hits (the same increment from several banks counts once). The per-layer one-hot
	//access flags of VA_PIPE[0] give the layer directly.
	wire [ 3: 0] BKPN[4], BKCH[4];   // [bank][layer]
	wire [ 1: 0] BKVS[4];
	assign BKPN[0] = VA_PIPE[0].NxA0PN; assign BKPN[1] = VA_PIPE[0].NxA1PN; assign BKPN[2] = VA_PIPE[0].NxB0PN; assign BKPN[3] = VA_PIPE[0].NxB1PN;
	assign BKCH[0] = VA_PIPE[0].NxA0CH; assign BKCH[1] = VA_PIPE[0].NxA1CH; assign BKCH[2] = VA_PIPE[0].NxB0CH; assign BKCH[3] = VA_PIPE[0].NxB1CH;
	reg  [ 3: 0] E_PNEN, E_CHEN, E_BMINC, E_PNINC;
	reg          E_VSINC;
	reg  [ 1: 0] E_CTEN;
	always_comb begin
		E_PNEN = '0; E_CHEN = '0; E_BMINC = '0; E_PNINC = '0; E_VSINC = 0; E_CTEN = '0;
		for (int l = 0; l < 4; l++) begin
			for (int b = 0; b < 4; b++) begin
				if (BKPN[b][l] && MT[b]) E_PNEN[l] = 1;
				if (BKPN[b][l]) E_PNINC[l] = 1;
				if (BKCH[b][l] && MT[b] && ((VA2.NxPN_FETCH[l] && NxPN_CYC[l]) || NSxREG[l].BMEN)) E_CHEN[l] = 1;
				if (BKCH[b][l] && NSxREG[l].BMEN) E_BMINC[l] = 1;
			end
		end
		for (int b = 0; b < 4; b++) begin
			if (HVS[b]) E_VSINC = 1;
			if (HCTB[b]) E_CTEN[RBV[b].Rx] = 1;
		end
	end

	NxPNCNT_t    NBG_PN_CNT;
	bit          NBG_PN_EN[4];
	bit          NBG_PN_FETCH[4];
	NxCHCNT_t    NBG_CH_CNT;
	NxCHCNT_t    NBG_BM_CNT;
	bit          NBG_CH_EN[4];
	bit          RBG_CT_EN[2];
	bit  [ 2: 0] LS_POS;
	bit  [ 3: 2] LS_VAL_OFFS[2];
	bit  [12: 2] LS_TBL_OFFS[2];
	bit          LW_POS;
	bit  [ 6: 0] VS_OFFS;
	bit  [ 7: 2] RP_POS;
	bit  [ 1: 0] VRAM_BANK;
	bit          VRAM_WRITE_PEND_CLR;
	bit          VRAM_RRDY;
	bit          VRAM_WRDY;
	bit          VRAM_WLOCK;
	always @(posedge CLK or negedge RST_N) begin
		bit DTEN_N_OLD,CS_N_OLD;
		bit VRAMA_ALLOW,VRAMB_ALLOW;
		
		if (!RST_N) begin
			VRAMA0_A <= '0;
			VRAMA1_A <= '0;
			VRAMB0_A <= '0;
			VRAMB1_A <= '0;
			VRAMA_WE <= '0;
			VRAMB_WE <= '0;
			VRAMA0_RD <= 0;
			VRAMA1_RD <= 0;
			VRAMB0_RD <= 0;
			VRAMB1_RD <= 0;
			VRAMA_ALLOW <= 0;
			VRAMB_ALLOW <= 0;
			NBG_PN_CNT <= '{2{'0}};
			NBG_CH_CNT <= '{4{'0}};
			NBG_CH_EN <= '{4{0}};
			RP_POS <= '0;
			LS_POS <= '0;
			
			VRAM_WRITE_PEND <= 0;
			VRAM_READ_PEND <= 0;
			VRAM_RRDY <= 1;
			VRAM_WRDY <= 1;
			VRAM_WLOCK <= 0;
		end else begin
			VRAM_WRITE_PEND_CLR = 0;
			if (DOT_CE_F) begin
				VRAMA_WE <= '0;
				VRAMB_WE <= '0;
				VRAMA0_RD <= 0;
				VRAMA1_RD <= 0;
				VRAMB0_RD <= 0;
				VRAMB1_RD <= 0;
				VRAM_READ_PIPE[0] <= 0;
				if (TBL_ACT) begin
					VRAMA0_A <= {1'b0,TBL_ADDR[16:1]};
					VRAMA1_A <= {     TBL_ADDR[16:1]};
					VRAMB0_A <= {1'b0,TBL_ADDR[16:1]};
					VRAMB1_A <= {     TBL_ADDR[16:1]};
					VRAMA0_RD <= ~TBL_ADDR[18];
					VRAMA1_RD <= ~TBL_ADDR[18];
					VRAMB0_RD <=  TBL_ADDR[18];
					VRAMB1_RD <=  TBL_ADDR[18];
				end else if (REFRESH) begin
					//
				end else if (!DISP_INT || VB_INT || (!REGS.BGON.N0ON && !REGS.BGON.N1ON && !REGS.BGON.N2ON && !REGS.BGON.N3ON && !REGS.BGON.R0ON && !REGS.BGON.R1ON) ||
				             !(NPN_FETCH || NCH_FETCH || NVCS_FETCH || RBG_FETCH || RCH_FETCH || CT_FETCH)) begin
					if (VRAM_WRITE_PEND) begin
						VRAMA0_A <= {VRAM_WA[17:2],1'b0};
						VRAMA1_A <= {VRAM_WA[16:2],1'b0};
						VRAMB0_A <= {VRAM_WA[17:2],1'b0};
						VRAMB1_A <= {VRAM_WA[16:2],1'b0};
						VRAMA_D <= VRAM_D;
						VRAMA_WE <= VRAM_WE & {8{~VRAM_WA[18]}};
						VRAMB_WE <= VRAM_WE & {8{ VRAM_WA[18]}};
						VRAM_WRITE_PEND_CLR = 1;
					end else if (VRAM_READ_PEND) begin 
						VRAMA0_A <= {1'b0,VRAM_RA[16:1]};
						VRAMA1_A <= {     VRAM_RA[16:1]};
						VRAMB0_A <= {1'b0,VRAM_RA[16:1]};
						VRAMB1_A <= {     VRAM_RA[16:1]};
						VRAMA0_RD <= VRAMA0_READ;
						VRAMA1_RD <= VRAMA1_READ;
						VRAMB0_RD <= VRAMB0_READ;
						VRAMB1_RD <= VRAMB1_READ;
						VRAM_READ_PEND <= 0;
						VRAM_READ_PIPE[0] <= 1;
					end
				end else begin		
					for (int l = 0; l < 4; l++) begin
						if (E_PNEN[l]) NBG_PN_FETCH[l] <= 1;
					end
					if (HIT[0]) begin
						VRAMA0_A <= {1'b0,AD[0]};
						VRAMA0_RD <= 1;
					end
					if (HIT[1]) begin
						VRAMA1_A <= AD[1];
						VRAMA1_RD <= 1;
					end
					
					VRAMA_ALLOW <= 0;
					if (!NBG_A0VA.PN && !RBG_A0VA.PN && !NBG_A0VA.CH && !RBG_A0VA.CH && !RBG_A0VA.CT && !NBG_A0VA.VS &&
						 !NBG_A1VA.PN && !RBG_A1VA.PN && !NBG_A1VA.CH && !RBG_A1VA.CH && !RBG_A1VA.CT && !NBG_A1VA.VS && !VA_PIPE[0].AxNA) begin
						if (((VRAM_READ_PEND && (VRAMA0_READ || VRAMA1_READ)) || (VRAM_WRITE_PEND && !VRAM_WA[18])) && (VRAMA_ALLOW || !REGS.RAMCTL.VRAMD || VA_PIPE[1].AxNA)) begin
							if (VRAM_WRITE_PEND) begin
								VRAMA0_A <= {VRAM_WA[17:2],1'b0};
								VRAMA_D <= VRAM_D;
								VRAMA_WE <= VRAM_WE;
								VRAM_WRITE_PEND_CLR = 1;
							end else if (VRAM_READ_PEND) begin
								VRAMA0_A <= {1'b0,VRAM_RA[16:1]};
								VRAMA1_A <= {     VRAM_RA[16:1]};
								VRAMA0_RD <= VRAMA0_READ;
								VRAMA1_RD <= VRAMA1_READ;
								VRAM_READ_PIPE[0] <= 1;
								VRAM_READ_PEND <= 0;
							end
						end
						VRAMA_ALLOW <= 1;
					end
					
					if (HIT[2]) begin
						VRAMB0_A <= {1'b0,AD[2]};
						VRAMB0_RD <= 1;
					end
					if (HIT[3]) begin
						VRAMB1_A <= AD[3];
						VRAMB1_RD <= 1;
					end
					
					VRAMB_ALLOW <= 0;
					if (!NBG_B0VA.PN && !RBG_B0VA.PN && !NBG_B0VA.CH && !RBG_B0VA.CH && !RBG_B0VA.CT && !NBG_B0VA.VS &&
						 !NBG_B1VA.PN && !RBG_B1VA.PN && !NBG_B1VA.CH && !RBG_B1VA.CH && !RBG_B1VA.CT && !NBG_B1VA.VS && !VA_PIPE[0].BxNA) begin
						if (((VRAM_READ_PEND && (VRAMB0_READ || VRAMB1_READ)) || (VRAM_WRITE_PEND && VRAM_WA[18])) && (VRAMB_ALLOW || !REGS.RAMCTL.VRBMD || VA_PIPE[1].BxNA)) begin
							if (VRAM_WRITE_PEND) begin
								VRAMB0_A <= {VRAM_WA[17:2],1'b0};
								VRAMA_D <= VRAM_D;//////////////////////
								VRAMB_WE <= VRAM_WE;
								VRAM_WRITE_PEND_CLR = 1;
							end else if (VRAM_READ_PEND) begin
								VRAMB0_A <= {1'b0,VRAM_RA[16:1]};
								VRAMB1_A <= {     VRAM_RA[16:1]};
								VRAMB0_RD <= VRAMB0_READ;
								VRAMB1_RD <= VRAMB1_READ;
								VRAM_READ_PIPE[0] <= 1;
								VRAM_READ_PEND <= 0;
							end
						end
						VRAMB_ALLOW <= 1;
					end
				end
				VRAM_READ_PIPE[1] <= VRAM_READ_PIPE[0];
			end
			
			if (DOT_CE_R) begin
				if (LS_FETCH) begin
					VRAM_BANK <= NxLS_ADDR[LS_POS[2]][18:17];
					
					if ((WSCRNY[2:0] & NxLSSMask(NSxREG[{1'b0,LS_POS[2]}].LSS,1'b0) & {2'b11,~DDI}) == 3'b000) begin
						case (LS_POS[1:0])
							2'd0: if (NSxREG[{1'b0,LS_POS[2]}].LSCX) LS_VAL_OFFS[LS_POS[2]] <= LS_VAL_OFFS[LS_POS[2]] + 2'd1;
							2'd1: if (NSxREG[{1'b0,LS_POS[2]}].LSCY) LS_VAL_OFFS[LS_POS[2]] <= LS_VAL_OFFS[LS_POS[2]] + 2'd1;
							2'd2:                                    LS_VAL_OFFS[LS_POS[2]] <= 2'd0;
						endcase
						if (LS_POS[1:0] == 2'd2) begin
							LS_TBL_OFFS[LS_POS[2]] <= LS_TBL_OFFS[LS_POS[2]] + NxLSTblSize(NSxREG[{1'b0,LS_POS[2]}].LSCX,NSxREG[{1'b0,LS_POS[2]}].LSCY,NSxREG[{1'b0,LS_POS[2]}].LZMX,~|NSxREG[{1'b0,LS_POS[2]}].LSS&DDI);
						end
					end
					LS_POS <= LS_POS + 3'd1;
					if (LS_POS[1:0] == 2'd2) LS_POS <= LS_POS + 3'd2;
					VS_OFFS <= '0;
				end else if (LW_FETCH) begin
					VRAM_BANK <= LW_ADDR[LW_POS][18:17];
					LW_POS <= ~LW_POS;
					LW_ADDR[LW_POS] <= LW_ADDR[LW_POS] + (DDI ? 9'd4 : 9'd2);
				end else if (RPA_FETCH || RPB_FETCH) begin
					RP_POS[6:2] <= RP_POS[6:2] + 5'd1;
					if (RP_POS[6:2] == 5'd23) RP_POS <= {~RP_POS[7],5'd0};
					VRAM_BANK <= RxRP_ADDR[18:17];
				end else if (RCTA_FETCH) begin
					VRAM_BANK <= RxCTA_ADDR[18:17];
				end else if (RCTB_FETCH) begin
					VRAM_BANK <= RxCTB_ADDR[18:17];
				end else if (BACK_FETCH) begin
					VRAM_BANK <= BS_ADDR[18:17];
					BS_ADDR <= BS_ADDR + (REGS.BKTAU.BKCLMD ? 19'd1 : 19'd0);
				end else if (LN_FETCH) begin
					VRAM_BANK <= LN_ADDR[18:17];
					LN_ADDR <= LN_ADDR + (REGS.LCTAU.LCCLMD ? 19'd1 : 19'd0);
				end else if (!DISP_INT || VB_INT || (!REGS.BGON.N0ON && !REGS.BGON.N1ON && !REGS.BGON.N2ON && !REGS.BGON.N3ON && !REGS.BGON.R0ON && !REGS.BGON.R1ON)) begin
					
				end else if (NPN_FETCH || NCH_FETCH || RBG_FETCH || RCH_FETCH || CT_FETCH || NVCS_FETCH) begin
					for (int l = 0; l < 4; l++) begin
						NBG_PN_EN[l] <= E_PNEN[l];
						NBG_CH_EN[l] <= E_CHEN[l];
						if (E_CHEN[l]) NBG_CH_CNT[l] <= NBG_CH_CNT[l] + 3'd1;
						if (E_BMINC[l]) NBG_BM_CNT[l] <= NBG_BM_CNT[l] + 3'd1;
						if (l < 2 && E_PNINC[l]) NBG_PN_CNT[l] <= NBG_PN_CNT[l] + 2'd1;
					end
					RBG_CT_EN <= '{E_CTEN[0],E_CTEN[1]};
					if (E_VSINC) VS_OFFS <= VS_OFFS + 1'd1;
				end
				
				if ((CELLX & ~{HRES[1],2'b00}) == 3'd3) begin
					NBG_CH_CNT <= '{4{'0}};
					NBG_BM_CNT <= '{4{'0}};
				end
				if ((CELLX | {HRES[1],2'b00}) == 3'd7) begin
					NBG_PN_CNT <= '{2{'0}};
				end
				if (NBG_FETCH_START_EN) begin
					NBG_PN_CNT <= '{2{'0}};
					NBG_CH_CNT <= '{4{'0}};
					NBG_BM_CNT <= '{4{'0}};
				end
				
				if (H_CNT == LS_FETCH_START - 2 && IS_LAST_LINE) begin
					LS_POS <= '0;
					LS_VAL_OFFS <= '{2{'0}};
					LS_TBL_OFFS[0] <= !NSxREG[0].LSS && DDI && !ODD ? NxLSTblSize(NSxREG[0].LSCX,NSxREG[0].LSCY,NSxREG[0].LZMX,0) : '0;
					LS_TBL_OFFS[1] <= !NSxREG[1].LSS && DDI && !ODD ? NxLSTblSize(NSxREG[1].LSCX,NSxREG[1].LSCY,NSxREG[1].LZMX,0) : '0;
				end
				
				if (LAST_DOT && IS_PRELAST_LINE) begin
					NBG_PN_FETCH <= '{4{0}};
					LW_POS <= 0;
					LW_ADDR[0] <= {REGS.LWTA0U.WxLWTA,REGS.LWTA0L.WxLWTA,1'b0} + (DDI && !ODD ? 9'd2 : 9'd0);
					LW_ADDR[1] <= {REGS.LWTA1U.WxLWTA,REGS.LWTA1L.WxLWTA,1'b0} + (DDI && !ODD ? 9'd2 : 9'd0);
					BS_ADDR <= {REGS.BKTAU.BKTA,REGS.BKTAL.BKTA};
					LN_ADDR <= {REGS.LCTAU.LCTA,REGS.LCTAL.LCTA};
					RP_POS <= '0;
				end
				
				if (VRAM_READ_PIPE[1]) begin
					VRAMA0_Q <= RA0_Q[31:16];
					VRAMA1_Q <= RA1_Q[31:16];
					VRAMB0_Q <= RB0_Q[31:16];
					VRAMB1_Q <= RB1_Q[31:16];
					VRAM_READ_PIPE[1] <= 0;
					if (!VRAM_RRDY) VRAM_RRDY <= 1;
				end
			end
			
			if (VRAM_REQ && WE_N) begin
				VRAM_RA <= A[18:1];
				VRAM_READ_PEND <= 1;
				VRAM_RRDY <= 0;
			end
			
			if (VRAM_WRITE_PEND_CLR) begin
				VRAM_WRITE_PEND <= 0;
				VRAM_WE <= '0;
				VRAM_WRDY <= 1;
			end
			
			
			//Write single
			if (VRAM_REQ && !WE_N && !DTEN_N && !BURST) begin
				case (A[2:1])
					2'b00: begin
						VRAM_WA <= A[18:1];
						VRAM_D[63:48] <= DI;
						VRAM_WE[7:6] <= ~{2{WE_N}} & ~DQM;
						VRAM_WRITE_PEND <= 1;
					end
					2'b01: begin
						VRAM_WA <= A[18:1];
						VRAM_D[47:32] <= DI;
						VRAM_WE[5:4] <= ~{2{WE_N}} & ~DQM;
						VRAM_WRITE_PEND <= 1;
					end
					2'b10: begin
						VRAM_WA <= A[18:1];
						VRAM_D[31:16] <= DI;
						VRAM_WE[3:2] <= ~{2{WE_N}} & ~DQM;
						VRAM_WRITE_PEND <= 1;
					end
					2'b11: begin
						VRAM_WA <= A[18:1];
						VRAM_D[15:0] <= DI;
						VRAM_WE[1:0] <= ~{2{WE_N}} & ~DQM;
						VRAM_WRITE_PEND <= 1;
					end
				endcase
			end
			
			DTEN_N_OLD <= DTEN_N;
			if (DTEN_N && !DTEN_N_OLD && !BURST) begin
				if (VRAM_WE) VRAM_WRDY <= 0;
			end
			
			//Write burst
			if (!FIFO_EMPTY && !VRAM_WRITE_PEND) begin
				case (FIFO_A[2:1])
					2'b00: begin
						VRAM_WA <= FIFO_A[18:1];
						VRAM_D[63:48] <= FIFO_D;
						VRAM_WE[7:6] <= ~FIFO_DQM;
						VRAM_WRITE_PEND <= FIFO_LAST;
					end
					2'b01: begin
						VRAM_WA <= FIFO_A[18:1];
						VRAM_D[47:32] <= FIFO_D;
						VRAM_WE[5:4] <= ~FIFO_DQM;
						VRAM_WRITE_PEND <= FIFO_LAST;
					end
					2'b10: begin
						VRAM_WA <= FIFO_A[18:1];
						VRAM_D[31:16] <= FIFO_D;
						VRAM_WE[3:2] <= ~FIFO_DQM;
						VRAM_WRITE_PEND <= FIFO_LAST;
					end
					2'b11: begin
						VRAM_WA <= FIFO_A[18:1];
						VRAM_D[15:0] <= FIFO_D;
						VRAM_WE[1:0] <= ~FIFO_DQM;
						VRAM_WRITE_PEND <= 1;
					end
				endcase
			end
			
			CS_N_OLD <= CS_N;
			if (CS_N && !CS_N_OLD) begin
				VRAM_WLOCK <= ~FIFO_EMPTY;
			end
			if (FIFO_EMPTY && VRAM_WRITE_PEND_CLR && VRAM_WLOCK) begin
				VRAM_WLOCK <= 0;
			end
			
			if (!RES_N) begin
				VRAM_WE <= '0;
				VRAM_WRITE_PEND <= 0;
				VRAM_READ_PEND <= 0;
				VRAM_RRDY <= 1;
				VRAM_WRDY <= 1;
				VRAM_WLOCK <= 0;
			end
			//debug
`ifdef DEBUG
			if (VRAM_WRITE_PEND) VRAM_WRITE_PEND_CNT <= VRAM_WRITE_PEND_CNT + 1'd1;
			else VRAM_WRITE_PEND_CNT <= '0;
`endif
		end
	end
	
	bit         FIFO_WRREQ;
	bit         FIFO_RDREQ;
	bit [35: 0] FIFO_Q;
	bit         FIFO_EMPTY;
	bit         FIFO_FULL;
	bit         FIFO_LAST;
	VDP2P2_WRITE_FIFO fifo(CLK, RES_N, {A[18:1],DQM,DI}, FIFO_WRREQ, FIFO_RDREQ, FIFO_Q, FIFO_EMPTY, FIFO_FULL, FIFO_LAST);
	assign FIFO_WRREQ = VRAM_REQ & ~WE_N & ~DTEN_N & BURST;
	assign FIFO_RDREQ = ~FIFO_EMPTY & ~VRAM_WRITE_PEND;
	wire [18: 1] FIFO_A = FIFO_Q[35:18];
	wire [ 1: 0] FIFO_DQM = FIFO_Q[17:16];
	wire [15: 0] FIFO_D = FIFO_Q[15:0];
	
	assign RA0_A = VRAMA0_A;
	assign RA1_A = VRAMA1_A;
	assign RA_D = VRAMA_D;
	assign RA_WE = VRAMA_WE;
	assign RA_RD = VRAMA0_RD | VRAMA1_RD;
	
	assign RB0_A = VRAMB0_A;
	assign RB1_A = VRAMB1_A;
	assign RB_D = VRAMA_D;
	assign RB_WE = VRAMB_WE;
	assign RB_RD = VRAMB0_RD | VRAMB1_RD;

	wire [15:0] VRAM_DO = VRAMA0_READ ? VRAMA0_Q :
	                      VRAMA1_READ ? VRAMA1_Q :
							    VRAMB0_READ ? VRAMB0_Q :
								 VRAMB1_Q;
								 
	
	bit  [31: 0] RA0_BUF,RA1_BUF,RB0_BUF,RB1_BUF;
	bit  [ 1: 0] VRAM_BANK_2;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			// synopsys translate_off
			RA0_BUF <= '0;
			RA1_BUF <= '0;
			RB0_BUF <= '0;
			RB1_BUF <= '0;
			VRAM_BANK_2 <= '0;
			// synopsys translate_on
		end
		else begin
			if (DOT_CE_R) begin
				RA0_BUF <= RA0_Q;
				RA1_BUF <= RA1_Q;
				RB0_BUF <= RB0_Q;
				RB1_BUF <= RB1_Q;
				VRAM_BANK_2 <= VRAM_BANK;
			end
		end
	end
	
	//Scroll data  
	ScrollData_t XS[4];   //NX + NSX: kept as one sum
	ScrollData_t NSX[4];
	ScrollData_t NY[4];
	ScrollData_t NSY[4];
	ScrollData_t NVCSY[2];
	ScrollData_t NMOSY[4];
	CoordInc_t   LZMX[2];
	ScrollData_t CX[4];
	ScrollData_t NCX[4];
	//19-bit adders of the scroll counters in DSP blocks (ONE is a registered 1 so the constant operand is kept)
	bit          ONE;
	always @(posedge CLK or negedge RST_N) if (!RST_N) ONE <= 1'b0; else ONE <= 1'b1;
	ScrollData_t CXN[2], XSN[2], NCXN[2], NMOSYN[2];
	wire         NLS2 = VA2.LS_POS[2];
	VDP2P2_DADD d_cx0(ONE, CX[0],  {8'h00,LZMX[0]}, CXN[0]);
	VDP2P2_DADD d_cx1(ONE, CX[1],  {8'h00,LZMX[1]}, CXN[1]);
	VDP2P2_DADD d_xs0(ONE, XS[0],  CXN[0], XSN[0]);
	VDP2P2_DADD d_xs1(ONE, XS[1],  CXN[1], XSN[1]);
	VDP2P2_DADD d_nx0(ONE, NCX[0], {8'h00,LZMX[0]}, NCXN[0]);
	VDP2P2_DADD d_nx1(ONE, NCX[1], {8'h00,LZMX[1]}, NCXN[1]);
	VDP2P2_DADD d_ms0(ONE, NY[{1'b0,NLS2}], NSY[{1'b0,NLS2}], NMOSYN[0]);
	VDP2P2_DADD d_ms1(ONE, NY[{1'b1,NLS2}], NSY[{1'b1,NLS2}], NMOSYN[1]);
	ScrollData_t NYOFS[2];
	VDP2P2_DADD d_ny0(ONE, NMOSY[0], NVCSY[0], NYOFS[0]);
	VDP2P2_DADD d_ny1(ONE, NMOSY[1], NVCSY[1], NYOFS[1]);
	always @(posedge CLK or negedge RST_N) begin
		bit  [31: 0] LS_WD;
		bit          LS_RD;
		bit          N2;
		bit          SCYN_UPD[4];
		
		if (!RST_N) begin
			// synopsys translate_off
			XS <= '{4{'0}};
			NSX <= '{4{'0}};
			NY <= '{4{'0}};
			NSY <= '{4{'0}};
			LZMX <= '{2{'0}};
			MOSAIC_VCNT <= '0;
			// synopsys translate_on
		end
		else begin
			if (DOT_CE_R || (DOT_CE_F & HRES[1])) begin
				if (NPN_FETCH) begin
					CX[0] <= CXN[0];
					CX[1] <= CXN[1];
					CX[2] <= CX[2] + 19'h00100;
					CX[3] <= CX[3] + 19'h00100;
				end
			end
			
			if (DOT_CE_R) begin
				if (NPN_FETCH && (CELLX | {HRES[1],2'b00}) == 3'd7) begin
					XS[0] <= XSN[0];
					CX[0] <= '0;
					XS[1] <= XSN[1];
					CX[1] <= '0;
					XS[2] <= XS[2] + CX[2] + 19'h00100;
					CX[2] <= '0;
					XS[3] <= XS[3] + CX[3] + 19'h00100;
					CX[3] <= '0;
				end
				if (NBG_FETCH_START_EN || CELLX == 3'h7) begin
					NVCSY[0] <= VS[0] & {19{NSxREG[0].VCSC&~NSxREG[0].MZE}};
					NVCSY[1] <= VS[1] & {19{NSxREG[1].VCSC&~NSxREG[1].MZE}};
				end
				
				N2 = VA2.LS_POS[2];
				if (VA2.LS) begin
					if (VA2.LS_POS == 3'b000) begin
						MOSAIC_VCNT <= MOSAIC_VCNT + 4'd1;
						if (MOSAIC_VCNT == REGS.MZCTL.MZSZV || IS_LAST_LINE) begin
							MOSAIC_VCNT <= '0;
						end
					end
					
					case (VRAM_BANK_2)
						2'b00: LS_WD = RA0_BUF;
						2'b01: LS_WD = RA1_BUF;
						2'b10: LS_WD = RB0_BUF;
						2'b11: LS_WD = RB1_BUF;
					endcase
					
					LS_RD = ((WSCRNY[2:0] & NxLSSMask(NSxREG[{1'b0,N2}].LSS,1'b0) & {2'b11,~DDI}) == 3'b000);
					case (VA2.LS_POS[1:0])
						2'b00: begin
							                                                XS[{1'b0,N2}] <= NSX[{1'b0,N2}];
							if (!NSxREG[{1'b0,N2}].LSCX)              begin NSX[{1'b0,N2}] <= NSxREG[{1'b0,N2}].SCX; XS[{1'b0,N2}] <= NSxREG[{1'b0,N2}].SCX; end
							else if (LS_RD)                           begin NSX[{1'b0,N2}] <= NSxREG[{1'b0,N2}].SCX + LS_WD[26:8]; XS[{1'b0,N2}] <= NSxREG[{1'b0,N2}].SCX + LS_WD[26:8]; end
							
							                                                XS[{1'b1,N2}] <= NSxREG[{1'b1,N2}].SCX;
					                                                      NSX[{1'b1,N2}] <= NSxREG[{1'b1,N2}].SCX;
						end
						2'b01: begin
							if (NSxREG[{1'b0,N2}].LSCY && LS_RD)      begin NSY[{1'b0,N2}] <= NSxREG[{1'b0,N2}].SCY + LS_WD[26:8]; 
							                                                NY[{1'b0,N2}]  <= '0; end
							else 
							if (IS_LAST_LINE || SCYN_UPD[{1'b0,N2}])  begin NSY[{1'b0,N2}] <= NSxREG[{1'b0,N2}].SCY;
							                                                NY[{1'b0,N2}]  <= (!DDI || ODD ? '0 : NSxREG[{1'b0,N2}].ZMY); end
							else                                      begin NY[{1'b0,N2}]  <= NY[{1'b0,N2}] + (!DDI ? NSxREG[{1'b0,N2}].ZMY : NSxREG[{1'b0,N2}].ZMY<<1); end
							SCYN_UPD[{1'b0,N2}] <= 0;
							
							if (IS_LAST_LINE || SCYN_UPD[{1'b1,N2}])  begin NSY[{1'b1,N2}] <= NSxREG[{1'b1,N2}].SCY;
							                                                NY[{1'b1,N2}]  <= (!DDI || ODD ? '0 : 19'h00100); end
					      else                                      begin NY[{1'b1,N2}]  <= NY[{1'b1,N2}] + (!DDI ? 19'h00100 : 19'h00200); end
							SCYN_UPD[{1'b1,N2}] <= 0;
						end
						2'b10: begin
							if (!NSxREG[{1'b0,N2}].LZMX)              begin LZMX[{1'b0,N2}] <= NSxREG[{1'b0,N2}].ZMX; end
							else if (LS_RD)                           begin LZMX[{1'b0,N2}] <= LS_WD[18:8]; end
							
							if (!MOSAIC_VCNT || !NSxREG[{1'b0,N2}].MZE || IS_LAST_LINE) begin
								NMOSY[{1'b0,N2}] <= NMOSYN[0];
							end
							if (!MOSAIC_VCNT || !NSxREG[{1'b1,N2}].MZE || IS_LAST_LINE) begin
								NMOSY[{1'b1,N2}] <= NMOSYN[1];
							end
						end
					endcase
				end
			end
			
			if (REG_SEL && !WE_N && !DTEN_N && !REQ_N) begin
				case ({A[8:1],1'b0})
//					9'h074: SCYN_UPD[0] <= 1;
//					9'h076: SCYN_UPD[0] <= 1;
//					9'h084: SCYN_UPD[1] <= 1;
//					9'h086: SCYN_UPD[1] <= 1;
					9'h092: SCYN_UPD[2] <= 1;
					9'h096: SCYN_UPD[3] <= 1;
					default:;
				endcase
			end
		end
	end
	
	//Rotation parameters
	//Rotation parameter table words live in block RAM: one word per table entry, written as they are fetched,
	//read back through one port per consumer (the address follows the microcode step).
	wire [ 4: 0] RPP = VA2.RP_POS[6:2];
	wire         RPN = ~VA2.RP_POS[7];
	wire [31: 0] RPW_WD = VRAM_BANK_2 == 2'b00 ? RA0_BUF : VRAM_BANK_2 == 2'b01 ? RA1_BUF : VRAM_BANK_2 == 2'b10 ? RB0_BUF : RB1_BUF;
	wire         RPW_WE = DOT_CE_R && (VA2.RPA || VA2.RPB) && RPP <= 5'd23;
	wire [ 4: 0] RPW_WA = RPP == 5'd19 ? {4'b1100,RPN} : RPP == 5'd20 ? {4'b1101,RPN} : RPP == 5'd23 ? {4'b1110,RPN} : RPP;
	bit  [ 4: 0] RPA_A, RPB_A, RPM_A, RPN_A, RPK_A, RPFR_A, RPFF_A;
	bit  [ 6: 0] HPOS_PIPE;
	wire [31: 0] PA_Q, PB_Q, PM_Q, PN_Q, PK_Q, DK0_Q, DK1_Q, PFR_Q, PFF_Q;
	always_comb begin
		case (RPP)
			5'd04:   RPA_A = 5'd3;
			5'd05:   RPA_A = 5'd4;
			5'd12:   RPA_A = 5'd5;
			5'd13:   RPA_A = 5'd6;
			5'd16:   RPA_A = 5'd2;
			5'd17:   RPA_A = 5'd13;
			5'd18:   RPA_A = 5'd13;
			5'd19:   RPA_A = 5'd14;
			5'd23:   RPA_A = 5'd22;
			default: RPA_A = 5'd0;
		endcase
		case (RPP)
			5'd04:   RPB_A = 5'd0;
			5'd05:   RPB_A = 5'd1;
			5'd14:   RPB_A = 5'd13;
			5'd15:   RPB_A = 5'd13;
			5'd16:   RPB_A = 5'd14;
			5'd17:   RPB_A = 5'd15;
			5'd18:   RPB_A = 5'd15;
			5'd19:   RPB_A = 5'd16;
			5'd23:   RPB_A = 5'd21;
			default: RPB_A = 5'd0;
		endcase
		case (RPP)
			5'd12,5'd14,5'd17: RPM_A = 5'd7;
			5'd13,5'd15,5'd18: RPM_A = 5'd8;
			5'd16,5'd19:       RPM_A = 5'd9;
			5'd20:             RPM_A = 5'd17;
			default:           RPM_A = 5'd0;
		endcase
		case (RPP)
			5'd12,5'd14,5'd17: RPN_A = 5'd10;
			5'd13,5'd15,5'd18: RPN_A = 5'd11;
			5'd16,5'd19:       RPN_A = 5'd12;
			5'd20:             RPN_A = 5'd18;
			default:           RPN_A = 5'd0;
		endcase
		case (DOTCLK_DIV)
			2'd0: RPK_A = 5'd24;
			2'd1: RPK_A = 5'd26;
			2'd2: RPK_A = 5'd25;
			2'd3: RPK_A = 5'd27;
		endcase
		if      (HPOS_PIPE[0]) RPFR_A = 5'd0;
		else if (HPOS_PIPE[1]) RPFR_A = 5'd1;
		else if (HPOS_PIPE[2]) RPFR_A = 5'd3;
		else if (HPOS_PIPE[3]) RPFR_A = 5'd4;
		else if (HPOS_PIPE[4]) RPFR_A = 5'd5;
		else                   RPFR_A = 5'd6;
		if      (HPOS_PIPE[1]) RPFF_A = 5'd0;
		else if (HPOS_PIPE[2]) RPFF_A = 5'd1;
		else if (HPOS_PIPE[3]) RPFF_A = 5'd3;
		else if (HPOS_PIPE[4]) RPFF_A = 5'd4;
		else if (HPOS_PIPE[5]) RPFF_A = 5'd5;
		else                   RPFF_A = 5'd6;
	end
	VDP2P2_SDP #(5,32) rp_a (CLK, RPW_WE, RPW_WA, RPW_WD, RPA_A,  PA_Q);
	VDP2P2_SDP #(5,32) rp_b (CLK, RPW_WE, RPW_WA, RPW_WD, RPB_A,  PB_Q);
	VDP2P2_SDP #(5,32) rp_m (CLK, RPW_WE, RPW_WA, RPW_WD, RPM_A,  PM_Q);
	VDP2P2_SDP #(5,32) rp_n (CLK, RPW_WE, RPW_WA, RPW_WD, RPN_A,  PN_Q);
	VDP2P2_SDP #(5,32) rp_k (CLK, RPW_WE, RPW_WA, RPW_WD, RPK_A,  PK_Q);
	VDP2P2_SDP #(5,32) rp_d0(CLK, RPW_WE, RPW_WA, RPW_WD, 5'd28,  DK0_Q);
	VDP2P2_SDP #(5,32) rp_d1(CLK, RPW_WE, RPW_WA, RPW_WD, 5'd29,  DK1_Q);
	VDP2P2_SDP #(5,32) rp_fr(CLK, RPW_WE, RPW_WA, RPW_WD, RPFR_A, PFR_Q);
	VDP2P2_SDP #(5,32) rp_ff(CLK, RPW_WE, RPW_WA, RPW_WD, RPFF_A, PFF_Q);
	RotAddr_t    KAx[2],KAy[2];   //KAx holds the sum of the line base (KAy) and the per-dot accumulation
	RotCoord_t   SUBXA,SUBXB;
	RotCoord_t   SUBYA,SUBYB;
	RotCoord_t   MULXA;
	RotCoord_t   MULYA;
	RotCoord_t   ACCX,ACCY;
	RotCoord_t   SUMX, SUMY;
	//One multiplier and adder for both lanes: the operands only change at DOT_CE_R, so X is evaluated in the slot
	//DOTCLK_DIV==1 and Y in the slot 2; the sums are read at the next DOT_CE_R (slot 3).
	wire         SUMSY = DOTCLK_DIV[1];
	RotCoord_t   SUMC;
	assign SUMC = $signed(SUMSY ? ACCY : ACCX) + $signed(MultRC(SUMSY ? MULYA : MULXA, ($signed(SUMSY ? SUBYA : SUBXA) - $signed(SUMSY ? SUBYB : SUBXB))));
	always @(posedge CLK) if (CE_R && DOTCLK_DIV == 2'd1) SUMX <= SUMC;
	always @(posedge CLK) if (CE_R && DOTCLK_DIV == 2'd2) SUMY <= SUMC;
	//Per-table rotation state in block RAM (word = table A/B). Xsp/Ysp accumulate one entry per DOTCLK_DIV slot.
	wire [31:0]  XYST_Q, XP_Q, YP_Q, DX_Q, DY_Q, SPX_Q, SPY_Q;
	reg          XST_WE, YST_WE, DX_WE, XP_WE, SPX_WE, SPY_WE;
	reg  [31:0]  XYST_WD, SPX_WD, SPY_WD;
	wire [31:0]  XST_Q = XYST_Q, YST_Q = XYST_Q;
	reg          SPX_WA, SPY_WA;
	wire         ACC_X = CE_R && RBG_CALC && !DOTCLK_DIV[0];
	wire         ACC_Y = CE_R && RBG_CALC &&  DOTCLK_DIV[0];
	wire         RPST_W = DOT_CE_R && (VA2.RPA || VA2.RPB);
	always_comb begin
		XST_WE = 0; YST_WE = 0; DX_WE = 0; XP_WE = 0; SPX_WE = 0; SPY_WE = 0;
		XYST_WD = '0; SPX_WD = '0; SPY_WD = '0;
		SPX_WA = RPN; SPY_WA = RPN;
		if (RPST_W) begin
			case (RPP)
				5'd04: begin
					XST_WE = 1;
					XYST_WD = IS_LAST_LINE ? ScrnStartToRC(PB_Q) : $signed(XYST_Q) + $signed(ScrnIncToRC(PA_Q));
				end
				5'd05: begin
					YST_WE = 1;
					XYST_WD = IS_LAST_LINE ? ScrnStartToRC(PB_Q) : $signed(XYST_Q) + $signed(ScrnIncToRC(PA_Q));
				end
				5'd14: DX_WE = 1;
				5'd17: begin SPX_WE = 1; SPX_WD = SUMX; SPY_WE = 1; SPY_WD = SUMY; end
				5'd21: XP_WE = 1;
				default:;
			endcase
		end
		if (ACC_X) begin
			SPX_WE = 1; SPX_WA = DOTCLK_DIV[1]; SPX_WD = $signed(SPX_Q) + $signed(DX_Q);
		end
		if (ACC_Y) begin
			SPY_WE = 1; SPY_WA = DOTCLK_DIV[1]; SPY_WD = $signed(SPY_Q) + $signed(DY_Q);
		end
	end
	//start coordinates: word {Y,table}; the microcode reads X at even steps (4, 14) and Y at odd steps (5, 15)
	VDP2P2_SDP #(2,32,0) r_xyst(CLK, XST_WE | YST_WE, {YST_WE,RPN}, XYST_WD, {RPP[0],RPN}, XYST_Q);
	VDP2P2_SDP #(1,32,0) r_dx (CLK, RPST_W && RPP == 5'd14, RPN, SUMX, DOTCLK_DIV[1], DX_Q);
	VDP2P2_SDP #(1,32,0) r_dy (CLK, RPST_W && RPP == 5'd14, RPN, SUMY, DOTCLK_DIV[1], DY_Q);
	VDP2P2_SDP #(1,32,0) r_xp (CLK, RPST_W && RPP == 5'd21, RPN, SUMX, DOTCLK_DIV[1], XP_Q);
	VDP2P2_SDP #(1,32,0) r_yp (CLK, RPST_W && RPP == 5'd21, RPN, SUMY, DOTCLK_DIV[1], YP_Q);
	VDP2P2_SDP #(1,32,0) r_spx(CLK, SPX_WE, SPX_WA, SPX_WD, DOTCLK_DIV[1], SPX_Q);
	VDP2P2_SDP #(1,32,0) r_spy(CLK, SPY_WE, SPY_WA, SPY_WD, DOTCLK_DIV[1], SPY_Q);
	always @(posedge CLK or negedge RST_N) begin
		bit  [31: 0] RP_WD,RCT_WD;
		bit          CT_RP, CT_USE, CT_SEL;
		CT_t         CT_D;
		RotCoord_t   ADD1;
		RotCoord_t   MULT1,MULT2;
		RotCoord_t   RES;
		RotCoord_t   RES_LATCH[4];
		bit          N;
		
		if (!RST_N) begin
			// synopsys translate_off
			// synopsys translate_on
		end
		else begin
			if (DOT_CE_R) begin
				N = ~VA2.RP_POS[7];
				case (VRAM_BANK_2)
					2'b00: RP_WD = RA0_BUF;
					2'b01: RP_WD = RA1_BUF;
					2'b10: RP_WD = RB0_BUF;
					2'b11: RP_WD = RB1_BUF;
				endcase
				
				//Coefficient table data: one decoder shared by the table fetch words (RCTA/RCTB, never in the same dot)
				//and the per-dot coefficient reads (RAM or color RAM)
				CT_USE = RB2.RxCT[0] || RB2.RxCRCT[0];
				CT_RP = R0RP_PIPE[2];
				if (RB2.RxCT[0]) 
					if (RBG_PIPE[1].RxCT_EN[0]) 
						case (RB2.RxCTS[0])
							2'd0: RCT_WD = RA0_BUF;
							2'd1: RCT_WD = RA1_BUF;
							2'd2: RCT_WD = RB0_BUF;
							2'd3: RCT_WD = RB1_BUF;
						endcase
					else
						RCT_WD = '0;
				else
					RCT_WD = CT_CRAM_Q;
				CT_SEL = CT_USE ? CT_RP : VA2.RCTB;
				CT_D = CTData(RPxREG[CT_SEL].KMD, RPxREG[CT_SEL].KDBS, CT_USE ? RCT_WD : RP_WD);
				if (CT_USE) begin
					CTD[0] <= CT_D;
					if (CT_RP) CTD[1] <= CT_D;
				end else begin
					if (VA2.RCTA) CTD[0] <= CT_D;
					if (VA2.RCTB) CTD[1] <= CT_D;
				end
				
				ACCX <= SUMX;
				ACCY <= SUMY;
				if (VA2.RPA || VA2.RPB) begin
					case (VA2.RP_POS[6:2])
						5'd04: begin end
						5'd05: begin end
						
						5'd12: begin 																				//sumx = 0 + (A * (РћвЂќX - 0)), sumy = 0 + (D * (РћвЂќX - 0))
							SUBXA <= ScrnIncToRC(PA_Q); SUBXB <= RC_NULL; 								//sub = РћвЂќX - 0
							SUBYA <= ScrnIncToRC(PA_Q); SUBYB <= RC_NULL; 								//sub = РћвЂќX - 0
							MULXA <= MatrParamToRC(PM_Q);														//multx = A * sub
							MULYA <= MatrParamToRC(PN_Q);														//multy = D * sub
							ACCX <= '0; 																		//accx = 0
							ACCY <= '0; 																		//accy = 0
						end
						5'd13: begin 																				//sumx = accx + (B * (РћвЂќY - 0)), sumy = 0 + (E * (РћвЂќY - 0))
							SUBXA <= ScrnIncToRC(PA_Q); SUBXB <= RC_NULL; 								//sub = РћвЂќY - 0
							SUBYA <= ScrnIncToRC(PA_Q); SUBYB <= RC_NULL; 								//sub = РћвЂќY - 0
							MULXA <= MatrParamToRC(PM_Q);														//multx = B * sub
							MULYA <= MatrParamToRC(PN_Q); 													//multy = E * sub
						end
						5'd14: begin 
							SUBXA <= XST_Q; SUBXB <= ScrnCoordToRC(PB_Q[31:16]);								//sub = Xst - Px
							SUBYA <= XST_Q; SUBYB <= ScrnCoordToRC(PB_Q[31:16]);								//sub = Xst - Px
							MULXA <= MatrParamToRC(PM_Q);														//multx = A * sub
							MULYA <= MatrParamToRC(PN_Q); 													//multy = D * sub
							ACCX <= RC_NULL; 																		//accx = 0
							ACCY <= RC_NULL; 																		//accy = 0
						end
						5'd15: begin 
							SUBXA <= YST_Q; SUBXB <= ScrnCoordToRC(PB_Q[15:0]);								//sub = Yst - Py
							SUBYA <= YST_Q; SUBYB <= ScrnCoordToRC(PB_Q[15:0]);								//sub = Yst - Py
							MULXA <= MatrParamToRC(PM_Q);														//multx = B * sub
							MULYA <= MatrParamToRC(PN_Q); 													//multy = E * sub
						end
						5'd16: begin 
							SUBXA <= ScrnStartToRC(PA_Q); SUBXB <= ScrnCoordToRC(PB_Q[31:16]);			//sub = Zst - Pz
							SUBYA <= ScrnStartToRC(PA_Q); SUBYB <= ScrnCoordToRC(PB_Q[31:16]);			//sub = Zst - Pz
							MULXA <= MatrParamToRC(PM_Q);														//multx = C * sub
							MULYA <= MatrParamToRC(PN_Q); 													//multy = F * sub
						end
						5'd17: begin 
							SUBXA <= ScrnCoordToRC(PA_Q[31:16]); SUBXB <= ScrnCoordToRC(PB_Q[31:16]);			//sub = Px - Cx
							SUBYA <= ScrnCoordToRC(PA_Q[31:16]); SUBYB <= ScrnCoordToRC(PB_Q[31:16]);			//sub = Px - Cx
							MULXA <= MatrParamToRC(PM_Q); 													//multx = A * sub
							MULYA <= MatrParamToRC(PN_Q);														//multy = D * sub
							ACCX <= ScrnCoordToRC(PB_Q[31:16]); 													//accx = Cx
							ACCY <= ScrnCoordToRC(PB_Q[15:0]); 													//accy = Cy
						end
						5'd18: begin 
							SUBXA <= ScrnCoordToRC(PA_Q[15:0]); SUBXB <= ScrnCoordToRC(PB_Q[15:0]);			//sub = Py - Cy
							SUBYA <= ScrnCoordToRC(PA_Q[15:0]); SUBYB <= ScrnCoordToRC(PB_Q[15:0]);			//sub = Py - Cy
							MULXA <= MatrParamToRC(PM_Q);														//multx = B * sub
							MULYA <= MatrParamToRC(PN_Q);												 		//multy = E * sub
						end
						5'd19: begin 
							SUBXA <= ScrnCoordToRC(PA_Q[31:16]); SUBXB <= ScrnCoordToRC(PB_Q[31:16]);			//sub = Py - Cy
							SUBYA <= ScrnCoordToRC(PA_Q[31:16]); SUBYB <= ScrnCoordToRC(PB_Q[31:16]);			//sub = Py - Cy
							MULXA <= MatrParamToRC(PM_Q);														//multx = C * sub
							MULYA <= MatrParamToRC(PN_Q);														//multy = F * sub
						end
						5'd20: begin 
							SUBXA <= RC_ONE; SUBXB <= RC_NULL;												//sub = 1 - 0
							SUBYA <= RC_ONE; SUBYB <= RC_NULL;												//sub = 1 - 0
							MULXA <= ShiftToRC(PM_Q);															//multx = Mx * 1
							MULYA <= ShiftToRC(PN_Q);															//multy = My * 1
						end
						5'd21: begin 
							SUBXA <= RC_NULL; SUBXB <= RC_NULL;												//
							SUBYA <= RC_NULL; SUBYB <= RC_NULL;												//
							MULXA <= RC_NULL; 																	//
							MULYA <= RC_NULL; 					 												//
							ACCX <= RC_NULL; 																		//accx = 0
							ACCY <= RC_NULL; 																		//accy = 0
						end
						5'd22: begin 
						end
						5'd23: begin
							KAst[N] <= TblAddrToRC(PB_Q);
							KAy[N] <= $signed(KAy[N]) + $signed(AddrIncToRA(PA_Q));
							KAx[N] <= $signed(KAy[N]) + $signed(AddrIncToRA(PA_Q));
							if (IS_LAST_LINE) begin
								KAy[N] <= '0;
								KAx[N] <= '0;
							end
						end
					endcase
				end
				
				if (VA_PIPE[0].RxA0CT[0] || VA_PIPE[0].RxA1CT[0] || VA_PIPE[0].RxB0CT[0] || VA_PIPE[0].RxB1CT[0] || VA_PIPE[0].RxCRCT[0]) begin
					KAx[0] <= $signed(KAx[0]) + $signed(AddrIncToRA(DK0_Q));
					KAx[1] <= $signed(KAx[1]) + $signed(AddrIncToRA(DK1_Q));
				end
				
			end
				
			case (DOTCLK_DIV)
				2'd0: begin
					ADD1 = XP_Q;
					if (RPxREG[0].KTE && !RPxREG[0].KMD[1])
						MULT1 = {CTD[0].INT,CTD[0].FRAC};
					else
						MULT1 = ScallingToRC(PK_Q);
					MULT2 = SPX_Q;
				end
				2'd1: begin
					ADD1 = YP_Q;
					if (RPxREG[0].KTE && !RPxREG[0].KMD[0])
						MULT1 = {CTD[0].INT,CTD[0].FRAC};
					else
						MULT1 = ScallingToRC(PK_Q);
					MULT2 = SPY_Q;
				end
				2'd2: begin
					ADD1 = XP_Q;
					if (RPxREG[1].KTE && !RPxREG[1].KMD[1])
						MULT1 = {CTD[1].INT,CTD[1].FRAC};
					else
						MULT1 = ScallingToRC(PK_Q);
					MULT2 = SPX_Q;
				end
				2'd3: begin
					ADD1 = YP_Q;
					if (RPxREG[1].KTE && !RPxREG[1].KMD[0])
						MULT1 = {CTD[1].INT,CTD[1].FRAC};
					else
						MULT1 = ScallingToRC(PK_Q);
					MULT2 = SPY_Q;
				end
			endcase
			RES = $signed(ADD1) + $signed(MultRC(MULT1,MULT2));
			
			if (CE_R) begin
				RES_LATCH[DOTCLK_DIV] <= RES;
			end
			
			if (DOT_CE_R) begin
				if (RBG_CALC) begin
					RxX[0] <= RES_LATCH[0];
					RxY[0] <= RES_LATCH[1];
					RxX[1] <= RES_LATCH[2];
					RxY[1] <= RES;
					RPxLCSD[0] <= CTD[0].LCSD;
					RPxLCSD[1] <= CTD[1].LCSD;
				end
				RxCTTP[0] <= REGS.RPMD.RPMD == 2'b10 && CTD[0].TP ? CTD[1].TP & RPxREG[1].KTE : CTD[R0RP_PIPE[3]].TP & RPxREG[R0RP_PIPE[3]].KTE;
				RxCTTP[1] <=                                                                    CTD[           1].TP & RPxREG[           1].KTE;
				R0RPMSB <= CTD[0].TP;
			end
`ifdef DEBUG
			RPK_DBG = MULT1;
`endif
		end
	end
	assign RxKA[0] = KAx[0];
	assign RxKA[1] = KAx[1];
				
	//Rotattion parameter window
	wire RPW0_HIT = WHIT8_Q[0];
	wire RPW1_HIT = WHIT8_Q[1];
	wire RPW_EN = WinTest(RPW0_HIT ^ REGS.WCTLD.RPW0A, RPW1_HIT ^ REGS.WCTLD.RPW1A, 0, REGS.WCTLD.RPW0E, REGS.WCTLD.RPW1E, 0, REGS.WCTLD.RPLOG);
	
	//Rotattion parameter select
	wire R0_RP = !REGS.RPMD.RPMD[1] ? REGS.RPMD.RPMD[0] : 
	             !REGS.RPMD.RPMD[0] ? 1'b0 : RPW_EN;
					 
	bit          R0RP_PIPE[4];
	wire [ 6: 0] RPxLCSD_P8;
	wire         RPxKLCE_P8;
	VDP2P2_DTAP #(.W(8),.K(8),.AW(4)) lcsd_tap(CLK, DOT_CE_R, {RPxREG[R0_RP].KLCE,RPxLCSD[R0_RP]}, {RPxKLCE_P8,RPxLCSD_P8});
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			// synopsys translate_off
			R0RP_PIPE <= '{4{0}};
			RPxLCSD_PIPE <= '{9{'0}};
			RPxKLCE_PIPE <= '{9{0}};
			// synopsys translate_on
		end
		else begin
			if (DOT_CE_R) begin
				R0RP_PIPE[0] <= R0_RP;
				for (int i=0; i<3; i++) begin
					R0RP_PIPE[i+1] <= R0RP_PIPE[i];
				end
				
			end
		end
	end
	
	wire [8:0] FBD_HSTART = !HRES[0] ? 9'h18B : 9'h1A8;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			HPOS_PIPE <= '0;
			FBDO <= '0;
		end
		else begin
			if (DOT_CE_R) begin
				HPOS_PIPE <= {HPOS_PIPE[5:0],1'b0};
				if (H_CNT == FBD_HSTART - 1 - 1) HPOS_PIPE[0] <= 1;
				
				if (HPOS_PIPE[0])
					FBDO <= PFR_Q[31:16];
				else if (HPOS_PIPE[1])
					FBDO <= PFR_Q[31:16];
				else if (HPOS_PIPE[2])
					FBDO <= PFR_Q[31:16];
				else if (HPOS_PIPE[3])
					FBDO <= PFR_Q[31:16];
				else if (HPOS_PIPE[4])
					FBDO <= PFR_Q[31:16];
				else if (HPOS_PIPE[5])
					FBDO <= PFR_Q[31:16];
			end
			
			if (DOT_CE_F) begin
				if (HPOS_PIPE[1])
					FBDO <= PFF_Q[15:0];
				else if (HPOS_PIPE[2])
					FBDO <= PFF_Q[15:0];
				else if (HPOS_PIPE[3])
					FBDO <= PFF_Q[15:0];
				else if (HPOS_PIPE[4])
					FBDO <= PFF_Q[15:0];
				else if (HPOS_PIPE[5])
					FBDO <= PFF_Q[15:0];
				else if (HPOS_PIPE[6])
					FBDO <= PFF_Q[15:0];
			end
		end
	end
	
	//Windows
	wire [ 9: 0] WPSX[2] = '{REGS.WPSX0.WxSX,REGS.WPSX1.WxSX};
	wire [ 9: 0] WPEX[2] = '{REGS.WPEX0.WxEX,REGS.WPEX1.WxEX};
	wire         LWE[2] = '{REGS.LWTA0U.WxLWE,REGS.LWTA1U.WxLWE};
	bit  [ 9: 0] WxSX[2];
	bit  [ 9: 0] WxEX[2];
	always @(posedge CLK or negedge RST_N) begin
		bit          N;
		bit  [31: 0] LW_WD;
		
		if (!RST_N) begin
			// synopsys translate_off
			WxSX <= '{2{'0}};
			WxEX <= '{2{'0}};
			// synopsys translate_on
		end
		else begin
			if (DOT_CE_R) begin
				if (VA2.LW) begin
					N = VA2.LW_POS;
					case (VRAM_BANK_2)
						2'b00: LW_WD = RA0_BUF;
						2'b01: LW_WD = RA1_BUF;
						2'b10: LW_WD = RB0_BUF;
						2'b11: LW_WD = RB1_BUF;
					endcase
					
					if (LWE[N]) begin
						WxSX[N] <= LW_WD[25:16];
						WxEX[N] <= LW_WD[9:0];
					end else begin
						WxSX[N] <= WPSX[N];
						WxEX[N] <= WPEX[N];
					end 
				end
			end
		end
	end
	wire [ 8: 0] WxSY[2] = '{REGS.WPSY0.WxSY,REGS.WPSY1.WxSY};
	wire [ 8: 0] WxEY[2] = '{REGS.WPEY0.WxEY,REGS.WPEY1.WxEY};
	
	wire W0_HIT = ({SCRNX,SCRNX0&HRES[1]} >= {WxSX[0][9:1],WxSX[0][0]&HRES[1]} || WxSX[0][9:0] >= 10'h360) && {SCRNX,SCRNX0&HRES[1]} <= {WxEX[0][9:1],WxEX[0][0]&HRES[1]} && {WxEX[0][9:1],WxEX[0][0]&HRES[1]} < 10'h360 && {WxEX[0][9:1],WxEX[0][0]&HRES[1]} != 10'h2EC &&
	             (((WSCRNY                >=  WxSY[0][8:0]                                               ) && WSCRNY                 <=  WxEY[0][8:0]                     && WxSY[0][8:0] != 9'h1FE && WxEY[0][8:0] < 9'h1FE) || (WxEY[0][8:0] >= (VRES == 2'b00 ? 9'h0F0 : 9'h100) && WxEY[0][8:0] <= 9'h1ED && !DDI));
	wire W1_HIT = ({SCRNX,SCRNX0&HRES[1]} >= {WxSX[1][9:1],WxSX[1][0]&HRES[1]} || WxSX[1][9:0] >= 10'h360) && {SCRNX,SCRNX0&HRES[1]} <= {WxEX[1][9:1],WxEX[1][0]&HRES[1]} && {WxEX[1][9:1],WxEX[1][0]&HRES[1]} < 10'h360 && {WxEX[1][9:1],WxEX[1][0]&HRES[1]} != 10'h2EC &&
	             (((WSCRNY                >=  WxSY[1][8:0]                                               ) && WSCRNY                 <=  WxEY[1][8:0]                     && WxSY[1][8:0] != 9'h1FE && WxEY[1][8:0] < 9'h1FE) || (WxEY[1][8:0] >= (VRES == 2'b00 ? 9'h0F0 : 9'h100) && WxEY[1][8:0] <= 9'h1ED && !DDI));
					  
	wire [1:0] WHIT8_Q, WHIT33_Q;
	bit  [1:0] WHIT34;
	wire       WHIT_EN = DOT_CE_R | DOT_CE_F;
	VDP2P2_DTAP #(.W(2),.K(8), .AW(6)) whit8 (CLK, WHIT_EN, {W1_HIT,W0_HIT}, WHIT8_Q);
	VDP2P2_DTAP #(.W(2),.K(33),.AW(6)) whit33(CLK, WHIT_EN, {W1_HIT,W0_HIT}, WHIT33_Q);
	always @(posedge CLK) if (WHIT_EN) WHIT34 <= WHIT33_Q;
	
	//Back & line screen  
	bit  [23: 0] BACK_DC;
	bit  [10: 0] LINE_PAL;
	always @(posedge CLK or negedge RST_N) begin
		bit  [15: 0] WD;
		
		if (!RST_N) begin
			BACK_DC <= '0;
			LINE_PAL <= '0;
		end
		else begin
			if (DOT_CE_R) begin
				case (VRAM_BANK_2)
					2'b00: WD = RA0_BUF[31:16];
					2'b01: WD = RA1_BUF[31:16];
					2'b10: WD = RB0_BUF[31:16];
					2'b11: WD = RB1_BUF[31:16];
				endcase
				
				if (VA2.BS) begin
					BACK_DC <= Color555To888(WD[14:0]);
				end
				if (!DISP_INT && !REGS.TVMD.BDCLMD) begin
					BACK_DC <= DC_NULL;
				end
				
				if (VA2.LN) begin
					LINE_PAL <= WD[10:0];
				end
				
				if (DOT_FETCH) begin
					if (RPxKLCE_P8) LINE_PAL[6:0] <= RPxLCSD_P8;
				end
			end
		end
	end
					
	//BG data
	
	PNPipe_t        PN_PIPE;
	CellDotsColor_t NBG_CDC[4];
	RPNPipe_t       RBG_PN_PIPE;
	bit             RBG_TP_PIPE[2];
	bit  [ 7: 0]    RBG_DC[2][4];
	CellParam_t     RBG_CDP[2];
	bit [31: 0]     NBG_CH[4];
	always @(posedge CLK or negedge RST_N) begin
		bit [31: 0] PN_WD[2];
		PN_t        PNW;
		int         x;
		bit [31: 0] VS_WD[2];
		bit [31: 0] LS_WD[2];
		bit [ 1: 0] PN_CNT[4];
		bit [ 2: 0] RCNT[2];
		bit         RHF[2];
		bit         RPR[4];
		bit         RCC[4];
		bit [ 6: 0] RPALN[2];
		bit [31: 0] RCH[2];
		bit         RTP[2];
		bit [ 2: 0] RCELLX[2];
		bit [31: 0] RPN_WD[2];
		bit [31: 0] RCT_WD[2];
		bit [31: 0] RBG_CH[2];
		bit         PN_RP;
		bit         CH_RP;
//		bit         CT_RP;
		
		
		if (!RST_N) begin
			// synopsys translate_off
			NBG_CDL[0] <= '{8{'0}};
			NBG_CDL[1] <= '{8{'0}};
			NBG_CDL[2] <= '{8{'0}};
			NBG_CDL[3] <= '{8{'0}};
			RBG_CDL[0] <= '{8{'0}};
			RBG_CDL[1] <= '{8{'0}};
			// synopsys translate_on
		end
		else begin
			if (CE_R) begin
				//layers 0/1 write at DOT_CE_R (DOTCLK_DIV==3), layers 2/3 at DOT_CE_F (DOTCLK_DIV==1): one converter per pair
				for (int j=0; j<2; j++) begin
					x = (DOTCLK_DIV == 2'd1) ? j + 2 : j;
					if (BG2.NxPN[x] && BG_PIPE[1].NxPN_EN[x]) begin
						case (BG2.NxPNS[x])
							2'd0: PN_WD[j] = RA0_BUF;
							2'd1: PN_WD[j] = RA1_BUF;
							2'd2: PN_WD[j] = RB0_BUF;
							2'd3: PN_WD[j] = RB1_BUF;
						endcase
						PNW = !NSxREG[x].PNC.NxPNB ? PN_WD[j] : PNData(NSxREG[x].PNC, NSxREG[x].CHSZ, NSxREG[x].CHCN, PN_WD[j][31:16]);
						if (DOTCLK_DIV == 2'd3) begin
							PN_CNT[j] = BG2.NxPN_CNT[j];
							PN_PIPE[0][{(NSxREG[j].ZMQT|NSxREG[j].ZMHF)&PN_CNT[j][0],NSxREG[j].ZMQT&PN_CNT[j][1],1'b0}|j] <= PNW;
						end else if (DOTCLK_DIV == 2'd1) begin
							PN_PIPE[0][x] <= PNW;
						end
					end
				end
			end
//			
			if (DOT_CE_R) begin
				for (int i=0; i<2; i++) begin
					if (BG2.NxVS[i]) begin
						case (BG2.NxVSS[i])
							2'd0: VS_WD[i] = RA0_BUF;
							2'd1: VS_WD[i] = RA1_BUF;
							2'd2: VS_WD[i] = RB0_BUF;
							2'd3: VS_WD[i] = RB1_BUF;
						endcase
						VS[i].INT  <= VS_WD[i][26:16];
						VS[i].FRAC <= VS_WD[i][15: 8];
					end
				end
				
//				if (NBG_FETCH_START_EN) begin
//					NBG_CDC[0] <= '{8{'0}}; NBG_CDP[0] <= CDP_NULL; NBG_CDP[4] <= CDP_NULL; NBG_CDP[6] <= CDP_NULL;
//					NBG_CDC[1] <= '{8{'0}}; NBG_CDP[1] <= CDP_NULL; NBG_CDP[5] <= CDP_NULL; NBG_CDP[7] <= CDP_NULL;
//					NBG_CDC[2] <= '{8{'0}}; NBG_CDP[2] <= CDP_NULL; 
//					NBG_CDC[3] <= '{8{'0}}; NBG_CDP[3] <= CDP_NULL; 
//				end
					
				BG_PIPE[1].NxPN_EN <= BG0.NxPN_EN;
				
				PN_PIPE[1] <= PN_PIPE[0];
				
				if (BG3.NxPN[0] && NSxREG[0].CHCN[2:1]) begin
					NBG2_PN_PIPE[0] <= PN_PIPE[1][0];
				end else begin
					NBG2_PN_PIPE[0] <= PN_PIPE[0][2];
				end
				NBG2_PN_PIPE[1] <= NBG2_PN_PIPE[0];
				
				if (BG3.NxPN[0] && NSxREG[0].CHCN[2]) begin
					NBG3_PN_PIPE[0] <= PN3E;
				end else if (BG3.NxPN[1] && NSxREG[1].CHCN[1]) begin
					NBG3_PN_PIPE[0] <= PN_PIPE[1][1];
				end else begin
					NBG3_PN_PIPE[0] <= PN_PIPE[0][3];
				end
				NBG3_PN_PIPE[1] <= NBG3_PN_PIPE[0];
			end
			
			//RBG0,RBG1
			if (DOT_CE_R) begin
			for (int i=0; i<2; i++) begin
				PN_RP = (i == 0 ? VA2.R0RP : 1'b1);
				CH_RP = (i == 0 ? VA4.R0RP : 1'b1);
				
				RBG_PIPE[0].RxCT[i] = VA_PIPE[0].RxA0CT[i] | VA_PIPE[0].RxA1CT[i] | VA_PIPE[0].RxB0CT[i] | VA_PIPE[0].RxB1CT[i];
				RBG_PIPE[0].RxCTS[i] = VA_PIPE[0].RxA0CT[i] && MT[0] ? 2'd0 : 
									        VA_PIPE[0].RxA1CT[i] && MT[1] ? 2'd1 : 
									        VA_PIPE[0].RxB0CT[i] && MT[2] ? 2'd2 : 
									        2'd3;
				RBG_PIPE[0].RxCRCT[i] = VA_PIPE[0].RxCRCT[i];
				RBG_PIPE[0].RxPN[i] = VA_PIPE[0].RxA0PN[i] | VA_PIPE[0].RxA1PN[i] | VA_PIPE[0].RxB0PN[i] | VA_PIPE[0].RxB1PN[i];
				RBG_PIPE[0].RxPNS[i] = VA_PIPE[0].RxA0PN[i] && MT[0] ? 2'd0 : 
									        VA_PIPE[0].RxA1PN[i] && MT[1] ? 2'd1 : 
									        VA_PIPE[0].RxB0PN[i] && MT[2] ? 2'd2 : 
									        2'd3;
				RBG_PIPE[0].RxOVR[i] = RxSCRN_OVER[i];
				RBG_PIPE[0].RxCTTP[i] = VA_PIPE[0].RxCTTP[i];
				RBG_PIPE[0].RxCH[i] = VA_PIPE[0].RxA0CH[i] | VA_PIPE[0].RxA1CH[i] | VA_PIPE[0].RxB0CH[i] | VA_PIPE[0].RxB1CH[i];
				RBG_PIPE[0].RxCHS[i] = VA_PIPE[0].RxA0CH[i] && MT[0] ? 2'd0 : 
									        VA_PIPE[0].RxA1CH[i] && MT[1] ? 2'd1 : 
									        VA_PIPE[0].RxB0CH[i] && MT[2] ? 2'd2 : 
									        2'd3;
				RBG_PIPE[0].RxCELLX[i] = VA4.RxX[CH_RP][2:0];
				RBG_PIPE[0].RxCT_EN[i] = RBG_CT_EN[i];
				
				if (RB2.RxPN[i]) begin
					case (RB2.RxPNS[i])
						2'd0: RPN_WD[i] = RA0_BUF;
						2'd1: RPN_WD[i] = RA1_BUF;
						2'd2: RPN_WD[i] = RB0_BUF;
						2'd3: RPN_WD[i] = RB1_BUF;
					endcase
					if (RPxREG[PN_RP].OVR == 2'b01 && RB2.RxOVR[i])
						RBG_PN_PIPE[0][i] <= PNData(RSxREG[i].PNC, RSxREG[i].CHSZ, RSxREG[i].CHCN, RPxREG[PN_RP].OVPNR);
					else if (RSxREG[i].PNC.NxPNB)
						RBG_PN_PIPE[0][i] <= PNData(RSxREG[i].PNC, RSxREG[i].CHSZ, RSxREG[i].CHCN, RPN_WD[i][31:16]);
					else
						RBG_PN_PIPE[0][i] <= RPN_WD[i];
				end
				
				RBG_TP_PIPE[i] <= (RPxREG[PN_RP].OVR[1] && RB2.RxOVR[i]) || RB2.RxCTTP[i];
					
				if (RB2.RxCH[i]) begin
					case (RB2.RxCHS[i])
						2'd0: RBG_CH[i] <= RA0_BUF;
						2'd1: RBG_CH[i] <= RA1_BUF;
						2'd2: RBG_CH[i] <= RB0_BUF;
						2'd3: RBG_CH[i] <= RB1_BUF;
					endcase
				end
				
				if (RB3.RxCH[i]) begin
					RCELLX[i] = RB3.RxCELLX[i];
					RPALN[i] = !RSxREG[i].BMEN ? RPN4E[i].PALN : {RSxREG[i].BMP,4'b0000};
					RHF[i] = RPN4E[i].HF & ~RSxREG[i].BMEN;
					RPR[i] = !RSxREG[i].BMEN ? RPN4E[i].PR : RSxREG[i].BMPR;
					RCC[i] = !RSxREG[i].BMEN ? RPN4E[i].CC : RSxREG[i].BMCC;
					RCH[i] = RBG_CH[i] & {32{~RTP4[i]}};
					RTP[i] = RTP4[i];
					case (RSxREG[i].CHCN)
						3'b000: begin				//4bits/dot, 16 colors
							case (RCELLX[i] ^ {3{RHF[i]}})
							3'b000: RBG_DC[i][0] <= {4'h0,RCH[i][31:28]};
							3'b001: RBG_DC[i][0] <= {4'h0,RCH[i][27:24]};
							3'b010: RBG_DC[i][0] <= {4'h0,RCH[i][23:20]};
							3'b011: RBG_DC[i][0] <= {4'h0,RCH[i][19:16]};
							3'b100: RBG_DC[i][0] <= {4'h0,RCH[i][15:12]};
							3'b101: RBG_DC[i][0] <= {4'h0,RCH[i][11: 8]};
							3'b110: RBG_DC[i][0] <= {4'h0,RCH[i][ 7: 4]};
							3'b111: RBG_DC[i][0] <= {4'h0,RCH[i][ 3: 0]};
							endcase
							RBG_CDP[i] <= {RPR[i], RCC[i], RPALN[i], RTP[i]};
						end
						3'b001: begin				//8bits/dot, 256 colors
							case (RCELLX[i][1:0] ^ {2{RHF[i]}})
							2'b00:  RBG_DC[i][0] <= {     RCH[i][31:24]};
							2'b01:  RBG_DC[i][0] <= {     RCH[i][23:16]};
							2'b10:  RBG_DC[i][0] <= {     RCH[i][15: 8]};
							2'b11:  RBG_DC[i][0] <= {     RCH[i][ 7: 0]};
							endcase
							RBG_CDP[i] <= {RPR[i], RCC[i], RPALN[i], RTP[i]};
						end
						3'b010,3'b011: begin		//16bits/dot, 2048/32768 colors
							case (RCELLX[i][0:0] ^ {1{RHF[i]}})
							1'b0: begin
						           RBG_DC[i][2] <= {     RCH[i][31:24]};
							        RBG_DC[i][0] <= {     RCH[i][23:16]}; end
							1'b1: begin
						           RBG_DC[i][2] <= {     RCH[i][15: 8]};
							        RBG_DC[i][0] <= {     RCH[i][ 7: 0]}; end
							endcase
							RBG_CDP[i] <= {RPR[i], RCC[i], 7'h00, RTP[i]};
						end
						3'b100: begin				//32bits/dot, 16M colors
									  RBG_DC[i][3] <= {     RCH[i][31:24]}; 
									  RBG_DC[i][1] <= {     RCH[i][23:16]}; 
									  RBG_DC[i][2] <= {     RCH[i][15: 8]}; 
									  RBG_DC[i][0] <= {     RCH[i][ 7: 0]};
							RBG_CDP[i] <= {RPR[i], RCC[i], 7'h00, RTP[i]};
						end
						default:;
					endcase
				end
			end
			
			RBG_PIPE[1].RxCT_EN <= RBG_PIPE[0].RxCT_EN;
			
			RBG_PN_PIPE[1] <= RBG_PN_PIPE[0];
			end
		end
	end

	
	//Pipeline taps: stage 2, 3 and 4 of the access pipelines are read back from block RAM (see VDP2P2_DTAP)
	always_comb begin
		for (int i=0; i<4; i++) begin
		BG0.NxPN[i] = VA_PIPE[0].NxA0PN[i] | VA_PIPE[0].NxA1PN[i] | VA_PIPE[0].NxB0PN[i] | VA_PIPE[0].NxB1PN[i];
		BG0.NxPNS[i] = VA_PIPE[0].NxA0PN[i] && MT[0] ? 2'd0 :
		VA_PIPE[0].NxA1PN[i] && MT[1] ? 2'd1 :
		VA_PIPE[0].NxB0PN[i] && MT[2] ? 2'd2 :
		2'd3;
		BG0.NxCH[i] = VA_PIPE[0].NxA0CH[i] | VA_PIPE[0].NxA1CH[i] | VA_PIPE[0].NxB0CH[i] | VA_PIPE[0].NxB1CH[i];
		BG0.NxCHS[i] = VA_PIPE[0].NxA0CH[i] && MT[0] ? 2'd0 :
		VA_PIPE[0].NxA1CH[i] && MT[1] ? 2'd1 :
		VA_PIPE[0].NxB0CH[i] && MT[2] ? 2'd2 :
		2'd3;
		if (i < 2) begin
		BG0.NxVS[i] = VA_PIPE[0].NxA0VS[i] | VA_PIPE[0].NxA1VS[i] | VA_PIPE[0].NxB0VS[i] | VA_PIPE[0].NxB1VS[i];
		BG0.NxVSS[i] = VA_PIPE[0].NxA0VS[i] && MT[0] ? 2'd0 :
		VA_PIPE[0].NxA1VS[i] && MT[1] ? 2'd1 :
		VA_PIPE[0].NxB0VS[i] && MT[2] ? 2'd2 :
		2'd3;
		BG0.NxPN_CNT[i] = NBG_PN_CNT[i];
		end
		BG0.NxPN_EN[i] = NBG_PN_EN[i];
		BG0.NxCH_CNT[i] = NBG_CH_CNT[i];
		BG0.NxCH_EN[i] = NBG_CH_EN[i];
		end
	end
	RBGTap2_t RB2_D;
	RBGTap3_t RB3_D;
	always_comb begin
		bit CH_RPc;
		RB2_D = '0;
		RB3_D = '0;
		for (int i=0; i<2; i++) begin
			CH_RPc = (i == 0 ? VA4.R0RP : 1'b1);
			RB2_D.RxCT[i] = VA_PIPE[0].RxA0CT[i] | VA_PIPE[0].RxA1CT[i] | VA_PIPE[0].RxB0CT[i] | VA_PIPE[0].RxB1CT[i];
			RB2_D.RxCTS[i] = VA_PIPE[0].RxA0CT[i] && MT[0] ? 2'd0 :
			VA_PIPE[0].RxA1CT[i] && MT[1] ? 2'd1 :
			VA_PIPE[0].RxB0CT[i] && MT[2] ? 2'd2 :
			2'd3;
			RB2_D.RxCRCT[i] = VA_PIPE[0].RxCRCT[i];
			RB2_D.RxPN[i] = VA_PIPE[0].RxA0PN[i] | VA_PIPE[0].RxA1PN[i] | VA_PIPE[0].RxB0PN[i] | VA_PIPE[0].RxB1PN[i];
			RB2_D.RxPNS[i] = VA_PIPE[0].RxA0PN[i] && MT[0] ? 2'd0 :
			VA_PIPE[0].RxA1PN[i] && MT[1] ? 2'd1 :
			VA_PIPE[0].RxB0PN[i] && MT[2] ? 2'd2 :
			2'd3;
			RB2_D.RxOVR[i] = RxSCRN_OVER[i];
			RB2_D.RxCTTP[i] = VA_PIPE[0].RxCTTP[i];
			RB2_D.RxCH[i] = VA_PIPE[0].RxA0CH[i] | VA_PIPE[0].RxA1CH[i] | VA_PIPE[0].RxB0CH[i] | VA_PIPE[0].RxB1CH[i];
			RB2_D.RxCHS[i] = VA_PIPE[0].RxA0CH[i] && MT[0] ? 2'd0 :
			VA_PIPE[0].RxA1CH[i] && MT[1] ? 2'd1 :
			VA_PIPE[0].RxB0CH[i] && MT[2] ? 2'd2 :
			2'd3;
			RB3_D.RxCELLX[i] = VA4.RxX[CH_RPc][2:0];
			RB3_D.RxCH[i] = RB2_D.RxCH[i];
		end
	end
	always_comb begin
		TAP2_D.va.BS = VA_PIPE[0].BS;  TAP2_D.va.LN = VA_PIPE[0].LN;  TAP2_D.va.LS = VA_PIPE[0].LS;
		TAP2_D.va.LS_POS = VA_PIPE[0].LS_POS;  TAP2_D.va.LW = VA_PIPE[0].LW;  TAP2_D.va.LW_POS = VA_PIPE[0].LW_POS;
		for (int i=0; i<4; i++) TAP2_D.va.NxPN_FETCH[i] = VA_PIPE[0].NxPN_FETCH[i];
		TAP2_D.va.R0RP = VA_PIPE[0].R0RP;  TAP2_D.va.RCTA = VA_PIPE[0].RCTA;  TAP2_D.va.RCTB = VA_PIPE[0].RCTB;
		TAP2_D.va.RPA = VA_PIPE[0].RPA;  TAP2_D.va.RPB = VA_PIPE[0].RPB;  TAP2_D.va.RP_POS = VA_PIPE[0].RP_POS;
		TAP2_D.bg.NxPN = BG0.NxPN;  TAP2_D.bg.NxCH = BG0.NxCH;  TAP2_D.bg.NxVS = BG0.NxVS;  TAP2_D.bg.NxCH_EN = '0;
		for (int i=0; i<4; i++) begin
			TAP2_D.bg.NxPNS[i] = BG0.NxPNS[i];  TAP2_D.bg.NxCHS[i] = BG0.NxCHS[i];  TAP2_D.bg.NxCH_EN[i] = E_CHEN[i];  TAP2_D.bg.NxCHC[i] = BG0.NxCH_CNT[i];
		end
		for (int i=0; i<2; i++) begin
			TAP2_D.bg.NxPN_CNT[i] = BG0.NxPN_CNT[i];  TAP2_D.bg.NxVSS[i] = BG0.NxVSS[i];
		end
		TAP2_D.rb = RB2_D;
		TAP3_D.va.LS = VA_PIPE[0].LS;
		TAP3_D.bg.NxPN = BG0.NxPN;  TAP3_D.bg.NxCH = BG0.NxCH;
		for (int i=0; i<4; i++) TAP3_D.bg.NxCH_CNT[i] = BG0.NxCH_CNT[i];
		TAP3_D.rb = RB3_D;
		TAP3_D.pn.VF = PN_PIPE[0][0].VF;  TAP3_D.pn.HF = PN_PIPE[0][0].HF;  TAP3_D.pn.CHRN = PN_PIPE[0][0].CHRN;
		for (int i=0; i<4; i++) begin
			TAP4_D.va.NxX[i] = VA_PIPE[0].NxX[i];  TAP4_D.va.NxY[i] = VA_PIPE[0].NxY[i];
		end
		for (int i=0; i<2; i++) begin
			TAP4_D.va.RxX[i] = VA_PIPE[0].RxX[i][11:0];  TAP4_D.va.RxY[i] = VA_PIPE[0].RxY[i][11:0];
			TAP4_D.rpn[i].PALN = RBG_PN_PIPE[0][i].PALN;  TAP4_D.rpn[i].HF = RBG_PN_PIPE[0][i].HF;
			TAP4_D.rpn[i].PR = RBG_PN_PIPE[0][i].PR;  TAP4_D.rpn[i].CC = RBG_PN_PIPE[0][i].CC;
			TAP4_D.rtp[i] = RBG_TP_PIPE[i];
		end
		TAP4_D.va.R0RP = VA_PIPE[0].R0RP;
		for (int i=0; i<8; i++) begin
			TAP4_D.pn[i].PALN = PN_PIPE[0][i].PALN;  TAP4_D.pn[i].HF = PN_PIPE[0][i].HF;
			TAP4_D.pn[i].PR = PN_PIPE[0][i].PR;  TAP4_D.pn[i].CC = PN_PIPE[0][i].CC;
		end
	end
	VDP2P2_DTAP #(.W($bits(Tap2_t)),.K(2),.AW(3),.ML(0)) tap2(CLK, DOT_CE_R, TAP2_D, TAP2_Q);
	VDP2P2_DTAP #(.W($bits(Tap3_t)),.K(3),.AW(3),.ML(0)) tap3(CLK, DOT_CE_R, TAP3_D, TAP3_Q);
	VDP2P2_DTAP #(.W($bits(Tap4_t)),.K(4),.AW(3),.ML(0)) tap4(CLK, DOT_CE_R, TAP4_D, TAP4_Q);
	assign VA2 = TAP2_Q.va;  assign BG2 = TAP2_Q.bg;  assign RB2 = TAP2_Q.rb;
	assign VA3 = TAP3_Q.va;  assign BG3 = TAP3_Q.bg;  assign RB3 = TAP3_Q.rb;
	always_comb begin
		PN3E = '0;
		PN3E.VF = TAP3_Q.pn.VF;  PN3E.HF = TAP3_Q.pn.HF;  PN3E.CHRN = TAP3_Q.pn.CHRN;
	end
	assign VA4 = TAP4_Q.va;  assign PN4E = TAP4_Q.pn;  assign RPN4E = TAP4_Q.rpn;  assign RTP4 = TAP4_Q.rtp;
	
	//Dots data: RBG dot registers (the NBG cells are decoded when they arrive)
	bit [31:0] RxDC[2];
	CellParam_t RxCDP[2];
	assign RxDC[0] = {RBG_DC[0][3],RBG_DC[0][1],RBG_DC[0][2],RBG_DC[0][0]};
	assign RxCDP[0] = RBG_CDP[0];
	assign RxDC[1] = {RBG_DC[1][3],RBG_DC[1][1],RBG_DC[1][2],RBG_DC[1][0]};
	assign RxCDP[1] = RBG_CDP[1];
							 
	//Sprite data
	SpriteDotData_t SDOT;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			// synopsys translate_off
			SDOT <= SDD_NULL;
			// synopsys translate_on
		end
		else if (DOT_CE_R || (DOT_CE_F & HRES[1])) begin
			SDOT <= SpriteData(REGS.SPCTL, FBDI, REGS.SDCTL.TPSDSL);
		end
	end
	
	//Line renderer. Character words are decoded when they leave the VRAM bank buffers: they queue in a FIFO, a walker
	//turns each word into screen dots (source position accumulator per layer, so zoom and reduction use the same path)
	//and inserts them into a three-slot priority line buffer. RBG dots insert through the same pipeline. Scan-out reads
	//the buffer at the dot rate and ranks the slots against the sprite dot.
	wire CEVT = DOT_CE_R || (DOT_CE_F & HRES[1]);
	parameter [9:0] XOFF = 10'd16;
	
	//per-layer register bundles: 0 sprite, 1 RBG0, 2 NBG0 (and RBG1), 3 NBG1, 4 NBG2, 5 NBG3
	typedef struct packed {
		bit [ 2: 0] CAOS;
		bit [ 2: 0] PRIN;
		bit [ 1: 0] SPRM;
		bit         SFCS;
		bit         CCEN;
		bit [ 1: 0] SCCM;
		bit [ 4: 0] CCRT;
		bit         COEN;
		bit         COSL;
		bit         SDENR;
		bit [ 2: 0] BOKN;
		bit         LCEN;
		bit         MZE;
		bit         W0A, W1A, SWA, W0E, W1E, SWE, WLOG;
	} LCfg_t;
	LCfg_t LC[6];
	always_comb begin
		LC[0] = {REGS.CRAOFB.SPCAOS, 3'd0, 2'd0, 1'b0, 1'b0, 2'd0, 5'd0, REGS.CLOFEN.SPCOEN, REGS.CLOFSL.SPCOSL, 1'b0, 3'd0, REGS.LNCLEN.SPLCEN, 1'b0,
		         REGS.WCTLC.SPW0A, REGS.WCTLC.SPW1A, REGS.WCTLC.SPSWA, REGS.WCTLC.SPW0E, REGS.WCTLC.SPW1E, REGS.WCTLC.SPSWE, REGS.WCTLC.SPLOG};
		LC[1] = {REGS.CRAOFB.R0CAOS, RSxREG[0].PRIN, RSxREG[0].SPRM, REGS.SFSEL.R0SFCS, RSxREG[0].CCEN, RSxREG[0].SCCM, RSxREG[0].CCRT, RSxREG[0].COEN, RSxREG[0].COSL, REGS.SDCTL.R0SDEN, 3'd1, REGS.LNCLEN.R0LCEN, RSxREG[0].MZE,
		         REGS.WCTLC.R0W0A, REGS.WCTLC.R0W1A, REGS.WCTLC.R0SWA, REGS.WCTLC.R0W0E, REGS.WCTLC.R0W1E, REGS.WCTLC.R0SWE, REGS.WCTLC.R0LOG};
		LC[2] = {NSxREG[0].CAOS, NSxREG[0].PRIN, NSxREG[0].SPRM, REGS.SFSEL.N0SFCS, NSxREG[0].CCEN, NSxREG[0].SCCM, NSxREG[0].CCRT, NSxREG[0].COEN, NSxREG[0].COSL, REGS.SDCTL.N0SDEN, 3'd2, REGS.LNCLEN.N0LCEN, NSxREG[0].MZE,
		         REGS.WCTLA.N0W0A, REGS.WCTLA.N0W1A, REGS.WCTLA.N0SWA, REGS.WCTLA.N0W0E, REGS.WCTLA.N0W1E, REGS.WCTLA.N0SWE, REGS.WCTLA.N0LOG};
		LC[3] = {NSxREG[1].CAOS, NSxREG[1].PRIN, NSxREG[1].SPRM, REGS.SFSEL.N1SFCS, NSxREG[1].CCEN, NSxREG[1].SCCM, NSxREG[1].CCRT, NSxREG[1].COEN, NSxREG[1].COSL, REGS.SDCTL.N1SDEN, 3'd4, REGS.LNCLEN.N1LCEN, NSxREG[1].MZE,
		         REGS.WCTLA.N1W0A, REGS.WCTLA.N1W1A, REGS.WCTLA.N1SWA, REGS.WCTLA.N1W0E, REGS.WCTLA.N1W1E, REGS.WCTLA.N1SWE, REGS.WCTLA.N1LOG};
		LC[4] = {NSxREG[2].CAOS, NSxREG[2].PRIN, NSxREG[2].SPRM, REGS.SFSEL.N2SFCS, NSxREG[2].CCEN, NSxREG[2].SCCM, NSxREG[2].CCRT, NSxREG[2].COEN, NSxREG[2].COSL, REGS.SDCTL.N2SDEN, 3'd5, REGS.LNCLEN.N2LCEN, NSxREG[2].MZE,
		         REGS.WCTLB.N2W0A, REGS.WCTLB.N2W1A, REGS.WCTLB.N2SWA, REGS.WCTLB.N2W0E, REGS.WCTLB.N2W1E, REGS.WCTLB.N2SWE, REGS.WCTLB.N2LOG};
		LC[5] = {NSxREG[3].CAOS, NSxREG[3].PRIN, NSxREG[3].SPRM, REGS.SFSEL.N3SFCS, NSxREG[3].CCEN, NSxREG[3].SCCM, NSxREG[3].CCRT, NSxREG[3].COEN, NSxREG[3].COSL, REGS.SDCTL.N3SDEN, 3'd6, REGS.LNCLEN.N3LCEN, NSxREG[3].MZE,
		         REGS.WCTLB.N3W0A, REGS.WCTLB.N3W1A, REGS.WCTLB.N3SWA, REGS.WCTLB.N3W0E, REGS.WCTLB.N3W1E, REGS.WCTLB.N3SWE, REGS.WCTLB.N3LOG};
	end
	wire N0_REDUCE = (NSxREG[0].CHCN[0] && NSxREG[0].ZMHF) || NSxREG[0].ZMQT;
	wire N1_REDUCE = (NSxREG[1].CHCN[0] && NSxREG[1].ZMHF) || NSxREG[1].ZMQT;
	//layer enabled (colour depth lane sharing of NBG0/NBG1, screen enable bits)
	bit  [ 5: 1] LAYER_OK;
	always_comb begin
		LAYER_OK[1] = RSxREG[0].ON & SCRN_EN[4];
		LAYER_OK[2] = (NSxREG[0].ON | RSxREG[1].ON) & SCRN_EN[0];
		LAYER_OK[3] = NSxREG[1].ON & ~NSxREG[0].CHCN[2] & SCRN_EN[1];
		LAYER_OK[4] = NSxREG[2].ON & ~NSxREG[0].CHCN[2] & ~NSxREG[0].CHCN[1] & ~N0_REDUCE & SCRN_EN[2];
		LAYER_OK[5] = NSxREG[3].ON & ~NSxREG[0].CHCN[2] & ~NSxREG[1].CHCN[1] & ~N1_REDUCE & SCRN_EN[3];
	end
	
	//display dot index of the window opened by the last event
	wire [ 7: 0] LOK = {2'b00, LAYER_OK, 1'b0};
	wire [ 9: 0] XP = HRES[1] ? {SCRNX,SCRNX0} : {1'b0,SCRNX};
	bit  [ 9: 0] XD;
	always @(posedge CLK) if (CEVT) XD <= XP - (HRES[1] ? XOFF + XOFF : XOFF);
	wire         LSTART = NBG_FETCH_START_EN && DOT_CE_R;

	//arrival of character words
	bit  [ 2: 0] ASEQ;
	always @(posedge CLK) ASEQ <= DOT_CE_R ? 3'd1 : (ASEQ == 3'd0 ? 3'd0 : (ASEQ == 3'd4 ? 3'd0 : ASEQ + 3'd1));
	wire [ 1: 0] AL   = ASEQ[1:0] - 2'd1;
	wire [ 1: 0] ABK  = BG2.NxCHS[AL];
	wire [22: 0] AREC = RECQ[23*ABK +: 23];
	wire         AV   = ASEQ != 3'd0 && BG2.NxCH[AL] && BG2.NxCH_EN[AL] && LAYER_OK[AL + 3'd2] && !(AL == 2'd0 && RSxREG[1].ON);
	wire [31: 0] AWD  = ABK == 2'd0 ? RA0_BUF : ABK == 2'd1 ? RA1_BUF : ABK == 2'd2 ? RB0_BUF : RB1_BUF;
	wire [54: 0] RFIFO_D = {AL, AREC[22:21] == AL ? AREC[20:18] : 3'd0, AWD, AREC[17:8], AREC[7:0]};
	bit  [ 2: 0] FWP, FRP;
	bit  [ 3: 0] FCNT;
	wire         FPOP;
	wire [54: 0] RFIFO_Q;
	VDP2P2_SDP #(3,55) rfifo(CLK, AV, FWP, RFIFO_D, FRP, RFIFO_Q);
	always @(posedge CLK) begin
		if (LSTART) begin FWP <= 3'd0; FRP <= 3'd0; FCNT <= 4'd0; end
		else begin
			if (AV) FWP <= FWP + 3'd1;
			if (FPOP) FRP <= FRP + 3'd1;
			FCNT <= FCNT + {3'b000,AV} - {3'b000,FPOP};
		end
	end
	wire         FEMPTY = FCNT == 4'd0;
	
	//walker: per layer next screen pixel and its source position (kept in a small RAM between words)
	bit  [ 9: 0] WK;
	bit  [18: 0] WXK;
	bit  [ 1: 0] WL;
	bit  [ 2: 0] WCNT;
	bit  [31: 0] WWD;
	bit  [ 9: 0] WATT;
	bit  [ 7: 0] WCELL;
	bit          WBUSY;
	bit  [ 2: 0] WINIT;
	wire [28: 0] WST_Q;
	wire         WDONE;
	wire         WST_WE = WDONE || WINIT != 3'd0;
	wire [ 1: 0] WST_WA = WINIT != 3'd0 ? WINIT[1:0] - 2'd1 : WL;
	wire [28: 0] WST_WD = WINIT != 3'd0 ? {10'd0,NSX[WINIT[1:0] - 2'd1]} : {WK,WXK};
	VDP2P2_SDP #(2,29) wst(CLK, WST_WE, WST_WA, WST_WD, RFIFO_Q[54:53], WST_Q);
	wire [ 2: 0] WCHCN = NSxREG[WL].CHCN;
	wire [ 3: 0] DPW   = WCHCN == 3'b000 ? 4'd8 : WCHCN == 3'b001 ? 4'd4 : WCHCN[2] ? 4'd1 : 4'd2;
	wire [ 2: 0] WJ0   = WCHCN == 3'b000 ? 3'd0 : WCHCN == 3'b001 ? {WCNT[0],2'b00} : WCHCN[2] ? WCNT : {WCNT[1:0],1'b0};
	wire [ 3: 0] WJE   = {1'b0,WJ0} + DPW;
	wire [10: 0] WSD   = WXK[18:8];
	wire         WINR  = WSD[10:3] == WCELL && WSD[2:0] >= WJ0 && {1'b0,WSD[2:0]} < WJE;
	wire [ 7: 0] WDC8  = WSD[10:3] - WCELL;
	wire         WPAST = (WDC8 != 8'd0 && !WDC8[7]) || (WDC8 == 8'd0 && {1'b0,WSD[2:0]} >= WJE);
	assign       WDONE = WBUSY && (WPAST || WK >= 10'd704);
	bit          P0V;
	bit  [ 9: 0] P0X;
	bit  [31: 0] P0DC;
	CellParam_t  P0CDP;
	bit  [ 2: 0] P0LID;
	bit  [ 3: 0] P0PH;
	bit          P1V;
	wire         P0MOVE, P0FREE;
	bit          R0PEND, R1PEND;
	wire         WEM = WBUSY && !WDONE && WINR;
	assign       FPOP = !WBUSY && !FEMPTY && WINIT == 3'd0;
	wire [18: 0] WZ    = WL[1] ? 19'h00100 : {8'h00,LZMX[WL[0]]};
	//mosaic phase per layer: the dots of a block repeat the first one
	bit  [ 3: 0] PHN[4], PHR0;
	always @(posedge CLK) begin
		if (FPOP) begin
			{WL,WCNT,WWD,WATT,WCELL} <= RFIFO_Q;
			{WK,WXK} <= WST_Q;
			WBUSY <= 1'b1;
		end else if (WBUSY) begin
			if (WDONE) WBUSY <= 1'b0;
			else if (!WINR || (P0FREE && !R0PEND && !R1PEND)) begin
				WK <= WK + 10'd1;
				WXK <= WXK + WZ;
				if (WINR) PHN[WL] <= PHN[WL] == REGS.MZCTL.MZSZH ? 4'd0 : PHN[WL] + 4'd1;
			end
		end
		if (LSTART) begin WINIT <= 3'd4; WBUSY <= 1'b0; end
		else if (WINIT != 3'd0) WINIT <= WINIT - 3'd1;
		if (LSTART) begin PHN[0] <= 4'd0; PHN[1] <= 4'd0; PHN[2] <= 4'd0; PHN[3] <= 4'd0; PHR0 <= 4'd0; end
	end
	wire [ 2: 0] WJ  = WSD[2:0] ^ {3{WATT[2]}};
	bit  [31: 0] WDC;
	always_comb begin
		case (WCHCN)
			3'b000:  WDC = {28'h0,WWD[31 - 4*WJ -: 4]};
			3'b001:  WDC = {24'h0,WWD[31 - 8*WJ[1:0] -: 8]};
			3'b010,
			3'b011:  WDC = {16'h0,WJ[0] ? WWD[15:0] : WWD[31:16]};
			default: WDC = WWD;
		endcase
	end
	
	//insertion pipeline. P0: raw dot of RBG0, RBG1 (as NBG0) or the walker; P1: decoded candidate; P2: slot update
	bit          P1_TP;
	bit  [ 9: 0] P1X, P2X;
	bit  [31: 0] P1E, P2E;
	bit          P2V;
	bit          SO_RD, SO_RD_D;
	bit  [ 9: 0] SXD_D;
	wire [ 9: 0] LBRA = SO_RD ? XD : P1X;
	wire         P1GO = P1V && !SO_RD && !(P2V && P2X == P1X);
	assign       P0MOVE = P0V && (!P1V || P1GO);
	assign       P0FREE = !P0V || P0MOVE;
	wire [ 9: 0] RBX = XD + 10'd1;
	//mosaic hold per layer: raw dot and parameters
	wire [41: 0] MHQ;
	wire         P0NEW = !LC[P0LID].MZE || P0PH == 4'd0;
	VDP2P2_SDP #(3,42) mhold(CLK, P0MOVE && P0NEW, P0LID, {P0DC,P0CDP}, P0LID, MHQ);
	wire [31: 0] M0DC  = P0NEW ? P0DC : MHQ[41:10];
	CellParam_t  M0CDP;
	assign       M0CDP = P0NEW ? P0CDP : MHQ[9:0];
	wire [ 2: 0] P0CHCN = P0LID == 3'd1 ? RSxREG[0].CHCN : NSxREG[P0LID - 3'd2].CHCN;
	wire         P0TPON = P0LID == 3'd1 ? RSxREG[0].TPON : NSxREG[P0LID - 3'd2].TPON;
	DotData_t    P0D;
	assign       P0D = MakeDotData(M0DC, M0CDP, P0CHCN, P0TPON);
	LCfg_t       P0L;
	assign       P0L = LC[P0LID];
	wire         P0SFC = SFCMatch(P0L.SFCS, REGS.SFCODE, P0D.DC[3:0]);
	wire [ 2: 0] P0PRI = P0L.SPRM == 2'b01 ? {P0L.PRIN[2:1],P0D.PR} : P0L.SPRM == 2'b10 ? {P0L.PRIN[2:1],P0D.PR & P0SFC} : P0L.PRIN;
	wire         P0CCP = (P0L.SCCM == 2'b01 ? P0D.CC : P0L.SCCM == 2'b10 ? P0SFC & P0D.CC : 1'b1) & P0L.CCEN;
	always @(posedge CLK) begin
		if (CEVT) begin R0PEND <= LAYER_OK[1]; R1PEND <= RSxREG[1].ON & SCRN_EN[0]; end
		if (P0FREE) begin
			P0V <= 1'b0;
			if (R0PEND) begin
				P0V <= RBX < 10'd704; P0X <= RBX; P0DC <= RxDC[0]; P0CDP <= RxCDP[0]; P0LID <= 3'd1; P0PH <= PHR0; R0PEND <= 1'b0;
				if (RBX < 10'd704) PHR0 <= PHR0 == REGS.MZCTL.MZSZH ? 4'd0 : PHR0 + 4'd1;
			end else if (R1PEND) begin
				P0V <= RBX < 10'd704; P0X <= RBX; P0DC <= RxDC[1]; P0CDP <= RxCDP[1]; P0LID <= 3'd2; P0PH <= PHN[0]; R1PEND <= 1'b0;
				if (RBX < 10'd704) PHN[0] <= PHN[0] == REGS.MZCTL.MZSZH ? 4'd0 : PHN[0] + 4'd1;
			end else if (WEM) begin
				P0V <= WK < 10'd704; P0X <= WK; P0DC <= WDC; P0CDP <= {WATT[1],WATT[0],WATT[9:3],1'b0}; P0LID <= {1'b0,WL} + 3'd2; P0PH <= PHN[WL];
			end
		end
		if (P0MOVE) begin
			P1V <= !P0D.TP && |P0PRI;
			P1X <= P0X;
			P1E <= {P0LID,P0D.P,P0CCP,P0PRI,P0D.DC};
		end else if (P1GO) P1V <= 1'b0;
		P2V <= P1GO;
		if (P1GO) begin P2X <= P1X; P2E <= P1E; end
		SO_RD <= CEVT;
		SXD_D <= XD;
		SO_RD_D <= SO_RD;
	end
	
	//line buffer: three slots of {lid,P,CC,PRI,DC} and their valid bits (cleared when scan-out has read them)
	wire [31: 0] LBQ[3];
	bit  [31: 0] LBW[3];
	bit          LBWE[3];
	wire [ 2: 0] LBVQ, LBVQB;
	bit  [ 2: 0] LBVW;
	bit          LBVWE;
	VDP2P2_SDP #(10,32,0) lb0(CLK, LBWE[0], P2X, LBW[0], LBRA, LBQ[0]);
	VDP2P2_SDP #(10,32,0) lb1(CLK, LBWE[1], P2X, LBW[1], LBRA, LBQ[1]);
	VDP2P2_SDP #(10,32,0) lb2(CLK, LBWE[2], P2X, LBW[2], LBRA, LBQ[2]);
	VDP2P2_LBV lbv(CLK, LBVWE, P2X, LBVW, P1X, LBVQ, XD, LBVQB, SO_RD_D, SXD_D);
	wire [ 2: 0] NPRI = P2E[26:24], NLID = P2E[31:29];
	wire         V0 = LBVQ[0], V1 = LBVQ[1], V2 = LBVQ[2];
	wire         B0 = !V0 || NPRI > LBQ[0][26:24] || (NPRI == LBQ[0][26:24] && NLID < LBQ[0][31:29]);
	wire         B1 = !V1 || NPRI > LBQ[1][26:24] || (NPRI == LBQ[1][26:24] && NLID < LBQ[1][31:29]);
	wire         B2 = !V2 || NPRI > LBQ[2][26:24] || (NPRI == LBQ[2][26:24] && NLID < LBQ[2][31:29]);
	always_comb begin
		LBW[0] = P2E; LBW[1] = LBQ[0]; LBW[2] = LBQ[1];
		LBWE[0] = 0; LBWE[1] = 0; LBWE[2] = 0;
		LBVW = 3'b000; LBVWE = 0;
		if (P2V) begin
			LBVWE = 1;
			if (B0)      begin LBWE[0] = 1; LBWE[1] = 1; LBWE[2] = 1; LBVW = {V1,V0,1'b1}; end
			else if (B1) begin LBWE[1] = 1; LBWE[2] = 1; LBW[1] = P2E; LBW[2] = LBQ[1]; LBVW = {V1,1'b1,V0}; end
			else if (B2) begin LBWE[2] = 1; LBW[2] = P2E; LBVW = {1'b1,V1,V0}; end
			else         LBVW = {V2,V1,V0};
		end
	end
	
	//scan-out
	bit  [31: 0] SE[3];
	bit  [ 2: 0] SEV;
		//the golden's dots stay as they were while its dot window (DOT_FETCH) is off, e.g. on the line after the last visible one
	bit          DFL;
	always @(posedge CLK) begin
		if (LSTART) DFL <= 1'b0;
		else if (DOT_FETCH && DOT_CE_R) DFL <= 1'b1;
		if (SO_RD_D && DFL) begin SE[0] <= LBQ[0]; SE[1] <= LBQ[1]; SE[2] <= LBQ[2]; SEV <= LBVQB; end
	end
	wire TW0_HIT = HRES[1] ? WHIT33_Q[0] : WHIT34[0];
	wire TW1_HIT = HRES[1] ? WHIT33_Q[1] : WHIT34[1];
	wire CCW_EN    =   WinTest(TW0_HIT ^ REGS.WCTLD.CCW0A,TW1_HIT ^ REGS.WCTLD.CCW1A,SDOT.WN ^ REGS.WCTLD.CCSWA,REGS.WCTLD.CCW0E,REGS.WCTLD.CCW1E,REGS.WCTLD.CCSWE & REGS.SPCTL.SPWINEN,REGS.WCTLD.CCLOG);
	wire SW_EN     =   WinTest(TW0_HIT ^ REGS.WCTLC.SPW0A,TW1_HIT ^ REGS.WCTLC.SPW1A,SDOT.WN ^ REGS.WCTLC.SPSWA,REGS.WCTLC.SPW0E,REGS.WCTLC.SPW1E,REGS.WCTLC.SPSWE & REGS.SPCTL.SPWINEN,REGS.WCTLC.SPLOG);
	bit  [ 2: 0] SPRIN;
	always_comb begin
		case (SDOT.PR)
			3'h0: SPRIN = REGS.PRISA.S0PRIN;
			3'h1: SPRIN = REGS.PRISA.S1PRIN;
			3'h2: SPRIN = REGS.PRISB.S2PRIN;
			3'h3: SPRIN = REGS.PRISB.S3PRIN;
			3'h4: SPRIN = REGS.PRISC.S4PRIN;
			3'h5: SPRIN = REGS.PRISC.S5PRIN;
			3'h6: SPRIN = REGS.PRISD.S6PRIN;
			3'h7: SPRIN = REGS.PRISD.S7PRIN;
		endcase
	end
	wire         SON_S = ~SDOT.TP & SCRN_EN[5] & ~(SW_EN & SCRN_EN[6]) & |SPRIN;
	bit  [ 4: 0] SCCRT_S;
	always_comb begin
		case (SDOT.CC)
			3'h0: SCCRT_S = REGS.CCRSA.S0CCRT;
			3'h1: SCCRT_S = REGS.CCRSA.S1CCRT;
			3'h2: SCCRT_S = REGS.CCRSB.S2CCRT;
			3'h3: SCCRT_S = REGS.CCRSB.S3CCRT;
			3'h4: SCCRT_S = REGS.CCRSC.S4CCRT;
			3'h5: SCCRT_S = REGS.CCRSC.S5CCRT;
			3'h6: SCCRT_S = REGS.CCRSD.S6CCRT;
			3'h7: SCCRT_S = REGS.CCRSD.S7CCRT;
		endcase
	end
	wire         SCCEN_S = REGS.CCCTL.SPCCEN & ~(CCW_EN & SCRN_EN[6]) & ((REGS.SPCTL.SPCCCS == 2'b00 & SPRIN <= REGS.SPCTL.SPCCN) | 
	                                                                      (REGS.SPCTL.SPCCCS == 2'b01 & SPRIN == REGS.SPCTL.SPCCN) |
	                                                                      (REGS.SPCTL.SPCCCS == 2'b10 & SPRIN >= REGS.SPCTL.SPCCN) |
	                                                                      (REGS.SPCTL.SPCCCS == 2'b11));
	ScreenDot_t  SDOT_SD;
	assign       SDOT_SD = {LC[0].CAOS,SCCEN_S,REGS.SPCTL.SPCCCS == 2'b11,SCCRT_S,LC[0].COEN,LC[0].COSL,(SDOT.SD & EN_SHADOW) & SCRN_EN[7],(REGS.CCCTL.BOKN == 3'h0) & REGS.CCCTL.BOKEN & ~|REGS.RAMCTL.CRMD,LC[0].LCEN,SDOT.P,SDOT.DC};
	//line buffer entries: window masked and compacted
	ScreenDot_t  EP[3];
	bit          EON[3];
	bit  [ 2: 0] EPRI[3];
	always_comb begin
		for (int i = 0; i < 3; i++) begin
			LCfg_t L;
			bit    WEN;
			L = LC[SE[i][31:29]];
			WEN = WinTest(TW0_HIT ^ L.W0A, TW1_HIT ^ L.W1A, SDOT.WN ^ L.SWA, L.W0E, L.W1E, L.SWE & REGS.SPCTL.SPWINEN, L.WLOG);
			EPRI[i] = SE[i][26:24];
			EON[i] = SEV[i] && LOK[SE[i][31:29]] && !(WEN & SCRN_EN[6]);
			EP[i] = {L.CAOS, SE[i][27] & ~(CCW_EN & SCRN_EN[6]), L.SCCM == 2'b11, L.CCRT, L.COEN, L.COSL,
			         L.SDENR & (SDOT.SD & EN_SHADOW) & SPRIN >= EPRI[i] & SCRN_EN[7],
			         (REGS.CCCTL.BOKN == L.BOKN) & REGS.CCCTL.BOKEN & ~|REGS.RAMCTL.CRMD, L.LCEN, SE[i][28], SE[i][23:0]};
		end
	end
	ScreenDot_t  BQ[3];
	bit  [ 2: 0] BQP[3];
	bit          BQV[3];
	always_comb begin
		BQ[0] = EP[0]; BQP[0] = EPRI[0]; BQV[0] = 0;
		BQ[1] = EP[1]; BQP[1] = EPRI[1]; BQV[1] = 0;
		BQ[2] = EP[2]; BQP[2] = EPRI[2]; BQV[2] = 0;
		case ({EON[2],EON[1],EON[0]})
			3'b001: begin BQ[0] = EP[0]; BQP[0] = EPRI[0]; BQV[0] = 1; end
			3'b010: begin BQ[0] = EP[1]; BQP[0] = EPRI[1]; BQV[0] = 1; end
			3'b011: begin BQ[0] = EP[0]; BQP[0] = EPRI[0]; BQV[0] = 1; BQ[1] = EP[1]; BQP[1] = EPRI[1]; BQV[1] = 1; end
			3'b100: begin BQ[0] = EP[2]; BQP[0] = EPRI[2]; BQV[0] = 1; end
			3'b101: begin BQ[0] = EP[0]; BQP[0] = EPRI[0]; BQV[0] = 1; BQ[1] = EP[2]; BQP[1] = EPRI[2]; BQV[1] = 1; end
			3'b110: begin BQ[0] = EP[1]; BQP[0] = EPRI[1]; BQV[0] = 1; BQ[1] = EP[2]; BQP[1] = EPRI[2]; BQV[1] = 1; end
			3'b111: begin BQV[0] = 1; BQV[1] = 1; BQV[2] = 1; end
			default:;
		endcase
	end
	//merge the sprite dot (wins ties) and keep the first three
	ScreenDot_t  M[3];
	bit          MV[3];
	always_comb begin
		M[0] = BQ[0]; M[1] = BQ[1]; M[2] = BQ[2]; MV[0] = BQV[0]; MV[1] = BQV[1]; MV[2] = BQV[2];
		if (SON_S && (!BQV[0] || SPRIN >= BQP[0])) begin
			M[0] = SDOT_SD; M[1] = BQ[0]; M[2] = BQ[1]; MV[0] = 1; MV[1] = BQV[0]; MV[2] = BQV[1];
		end else if (SON_S && (!BQV[1] || SPRIN >= BQP[1])) begin
			M[1] = SDOT_SD; M[2] = BQ[1]; MV[1] = 1; MV[2] = BQV[1];
		end else if (SON_S && (!BQV[2] || SPRIN >= BQP[2])) begin
			M[2] = SDOT_SD; MV[2] = 1;
		end
	end
	
	ScreenDot_t DOT_FST, DOT_SEC, DOT_THD, DOT_FTH;
	always @(posedge CLK or negedge RST_N) begin
		bit         BKSDEN;
		ScreenDot_t FST, SEC, THD, BACKD;
		
		if (!RST_N) begin
			// synopsys translate_off
			DOT_FST <= SD_NULL;
			DOT_SEC <= SD_NULL;
			DOT_THD <= SD_NULL;
			DOT_FTH <= SD_NULL;
			// synopsys translate_on
		end
		else if (CEVT) begin
			BKSDEN = REGS.SDCTL.BKSDEN & (SDOT.SD & EN_SHADOW) & SCRN_EN[7];
			BACKD = {3'b000,1'b0,1'b0,REGS.CCRLB.BKCCRT,REGS.CLOFEN.BKCOEN,REGS.CLOFSL.BKCOSL,BKSDEN,1'b0,1'b0,1'b0,BACK_DC};
			FST = BACKD;
			SEC = BACKD;
			THD = BACKD;
			if (DISP) begin
				if (MV[0]) FST = M[0];
				if (MV[1]) SEC = M[1];
				if (MV[2]) THD = M[2];
			end
			
			DOT_FST <= FST;
			if (FST.BOKEN) begin
				DOT_SEC <= FST;
				DOT_THD <= FST;
				DOT_FTH <= FST;
			end else if (SEC.BOKEN) begin
				DOT_SEC <= SEC;
				DOT_THD <= SEC;
				DOT_FTH <= SEC;
			end else if (FST.LCEN) begin
				DOT_SEC <= {3'b000,REGS.CCCTL.LCCCEN & ~(CCW_EN & SCRN_EN[6]),1'b0,REGS.CCRLB.LCCCRT,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,{13'b0000000000000,LINE_PAL}};
				DOT_THD <= SEC;
				DOT_FTH <= THD;
			end else begin
				DOT_SEC <= SEC;
				DOT_THD <= THD;
				DOT_FTH <= '0;
			end
		end
	end
	
	//Dots color
	bit [10:0] PAL_N;
	always_comb begin
		bit [10: 0] PAL;
		bit [ 2: 0] CAOS;
		
		case (DOTCLK_DIV & {~HRES[1],1'b1})
			2'b00: {CAOS,PAL} = {DOT_FST.CAOS,DOT_FST.DC[10:0]};
			2'b01: {CAOS,PAL} = {DOT_SEC.CAOS,DOT_SEC.DC[10:0]};
			2'b10: {CAOS,PAL} = {DOT_THD.CAOS,DOT_THD.DC[10:0]};
			2'b11: {CAOS,PAL} = {DOT_FTH.CAOS,DOT_FTH.DC[10:0]};
		endcase
		PAL_N = {CAOS,8'b00000000} + PAL;
	end
	
	DotColor_t CFST, CSEC;
	bit  [4:0] CCRT;
	bit        CCENFST;
	bit        COEN;
	bit        COSL;
	bit        SDEN;
	bit        HB_INT2;
	always @(posedge CLK or negedge RST_N) begin
		bit [23:0] DC;
		bit        CC;
		DotColor_t DC_FST_LATCH, DC_SEC_LATCH, DC_THD_LATCH;
		bit        CC_FST;
		bit        BOKEN_PREV1,BOKEN_PREV2;
		DotColor_t CSEC_PREV1, CSEC_PREV2;
		DotColor_t CSEC_DC, CTHD_DC, CFTH_DC;
		DotColor_t CSEC_ECC;
		
		if (!RST_N) begin
			// synopsys translate_off
			DC_FST_LATCH <= DC_NULL;
			DC_SEC_LATCH <= DC_NULL;
			DC_THD_LATCH <= DC_NULL;
			CC_FST <= 0;
			CFST <= DC_NULL;
			CSEC <= DC_NULL;
			CCRT <= '0;
			CCENFST <= 0;
			SDEN <= 0;
			COEN <= 0;
			COSL <= 0;
			// synopsys translate_on
		end
		else begin
			if (CE_R) begin
				case (REGS.RAMCTL.CRMD)
					2'b00: begin DC = Color555To888(PAL0_Q);                       CC =              PAL0_Q[15]; end
					2'b01: begin DC = Color555To888(!PAL_N[10] ? PAL0_Q : PAL1_Q); CC = !PAL_N[10] ? PAL0_Q[15] : PAL1_Q[15]; end
					default: begin DC = {PAL0_Q[7:0],PAL1_Q};                      CC =              PAL0_Q[15]; end
				endcase
				case (DOTCLK_DIV & {~HRES[1],1'b1})
					2'd0: {CC_FST,DC_FST_LATCH} <= {CC,DC};
					2'd1: DC_SEC_LATCH <= DC;
					2'd2: DC_THD_LATCH <= DC;
					2'd3: ;
				endcase
			end
			
			CSEC_DC = !DOT_SEC.P ? DOT_SEC.DC : DC_SEC_LATCH;
			CTHD_DC = BOKEN_PREV1 ? CSEC_PREV1 : !DOT_THD.P ? DOT_THD.DC : DC_THD_LATCH;
			CFTH_DC = BOKEN_PREV2 ? CSEC_PREV2 : !DOT_FTH.P ? DOT_FTH.DC : DC;
			CSEC_ECC = ExtColorCalc(CSEC_DC, DOT_SEC.CCEN, CTHD_DC, DOT_THD.P, DOT_THD.CCEN, CFTH_DC, DOT_FST.LCEN, DOT_SEC.BOKEN, REGS.RAMCTL.CRMD, REGS.CCCTL.EXCCEN & ~REGS.CCCTL.BOKEN);
			if (!HRES[1] && DOT_CE_R) begin
				CFST <= !DOT_FST.P ? DOT_FST.DC : DC_FST_LATCH;
				CSEC <= CSEC_ECC;
				CCRT <= !REGS.CCCTL.CCRTMD ? DOT_FST.CCRT : DOT_SEC.CCRT;
				CCENFST <= !DOT_FST.CCM3 ? DOT_FST.CCEN : DOT_FST.CCEN & (CC_FST | ~DOT_FST.P);
				COEN <= DOT_FST.COEN; 
				COSL <= DOT_FST.COSL;
				SDEN <= DOT_FST.SDEN;
				
				CSEC_PREV2 <= CSEC_PREV1; CSEC_PREV1 <= !DOT_SEC.P ? DOT_SEC.DC : DC_SEC_LATCH;
				BOKEN_PREV2 <= BOKEN_PREV1; BOKEN_PREV1 <= DOT_SEC.BOKEN;
			end
			else if (HRES[1] && (DOT_CE_R || DOT_CE_F)) begin
				CFST <= !DOT_FST.P ? DOT_FST.DC : DC_FST_LATCH;
				CSEC <= !DOT_SEC.P ? DOT_SEC.DC : DC;
				CCRT <= !REGS.CCCTL.CCRTMD ? DOT_FST.CCRT : DOT_SEC.CCRT;
				CCENFST <= |REGS.RAMCTL.CRMD && DOT_SEC.P ? 1'b0 : !DOT_FST.CCM3 ? DOT_FST.CCEN : DOT_FST.CCEN & (CC_FST | ~DOT_FST.P);
				COEN <= DOT_FST.COEN; 
				COSL <= DOT_FST.COSL;
				SDEN <= DOT_FST.SDEN;
			end
			
			if (DOT_CE_R) begin
				HB_INT2 <= HB_INT;
			end
			if (HB_INT2 && DOT_CE_F) begin
				CFST <= DC_NULL;
				CSEC <= DC_NULL;
				CCENFST <= 0;
				SDEN <= 0;
				COEN <= 0;
				COSL <= 0;
				BOKEN_PREV1 <= 0;
				BOKEN_PREV2 <= 0; 
			end
		end
	end
	
	DotColor_t DCOL;
	bit        HB_INT3;
	//colour calculation ratios: the products go to DSP blocks
	wire [ 5: 0] CC_RA = !REGS.CCCTL.CCMD ? {1'b0,~CCRT} : 6'h20;
	wire [ 5: 0] CC_RB = !REGS.CCCTL.CCMD ? {1'b0,CCRT}+6'd1 : 6'h20;
	wire [13: 0] CC_SR, CC_SG, CC_SB;
	VDP2P2_RATIO ccr(CFST.R, CSEC.R, CC_RA, CC_RB, CC_SR);
	VDP2P2_RATIO ccg(CFST.G, CSEC.G, CC_RA, CC_RB, CC_SG);
	VDP2P2_RATIO ccb(CFST.B, CSEC.B, CC_RA, CC_RB, CC_SB);
	always @(posedge CLK or negedge RST_N) begin
		DotColor_t C;
		
		if (!RST_N) begin
			// synopsys translate_off
			DCOL <= DC_NULL;
			// synopsys translate_on
		end else begin
			C.R <= !CCENFST ? CFST.R : (CC_SR[12:5] | {8{CC_SR[13]}});
			C.G <= !CCENFST ? CFST.G : (CC_SG[12:5] | {8{CC_SG[13]}});
			C.B <= !CCENFST ? CFST.B : (CC_SB[12:5] | {8{CC_SB[13]}});
			if (DOT_CE_R || DOT_CE_F) begin
				DCOL.B <= Shadow(ColorOffset(C.B, REGS.COAB.COBL, REGS.COBB.COBL, COEN, COSL), SDEN); 
				DCOL.G <= Shadow(ColorOffset(C.G, REGS.COAG.COGR, REGS.COBG.COGR, COEN, COSL), SDEN); 
				DCOL.R <= Shadow(ColorOffset(C.R, REGS.COAR.CORD, REGS.COBR.CORD, COEN, COSL), SDEN); 
			end
			
			if (DOT_CE_R) begin
				HB_INT3 <= HB_INT2;
			end
			
			if (!DISP) begin
				DCOL <= BACK_DC;
			end else if (HB_INT3 && DOT_CE_F) begin
				DCOL <= DC_NULL;
			end
		end
	end

	assign R = DCOL.R;
	assign G = DCOL.G;
	assign B = DCOL.B;
	assign VBL_N = ~VBLANK;
	assign HBL_N = ~HB_INT3;
	assign VS_N = ~VSYNC;
	assign HS_N = ~HSYNC;
	assign FIELD = ~ODD && INTERLACE_INT;
	assign INTERLACE = INTERLACE_INT;
	
	
	//Color RAM
	wire         PAL_SEL = (A[20:19] == 2'b10) && !CS_N && !AD_N;	//100000-17FFFF
	wire         PAL_WE = PAL_SEL && !WE_N && !DTEN_N && !REQ_N;
	wire [11: 1] IO_PAL_ADDR = AD_N ? {A[11:9],DI[7:0]} : A[11:1];
	wire [10: 1] IO_PAL_A   = REGS.RAMCTL.CRMD >= 2'b10 ? IO_PAL_ADDR[11:2] : IO_PAL_ADDR[10:1];
	wire         IO_PAL0_WE = (REGS.RAMCTL.CRMD == 2'b01 ? ~A[11] : REGS.RAMCTL.CRMD >= 2'b10 ? ~A[1] : 1'b1) & PAL_WE;
	wire         IO_PAL1_WE = (REGS.RAMCTL.CRMD == 2'b01 ?  A[11] : REGS.RAMCTL.CRMD >= 2'b10 ?  A[1] : 1'b1) & PAL_WE;
	wire [10: 1] PAL_A = PAL_N[9:0];
	
	wire         IO_PAL_RD = REGS.RAMCTL.CRMD >= 2'b10 ? A[1] : A[11];
	
	VDP2P2_PAL_RAM pal1
	(
		.CLK(CLK),
		
		.ADDR_A(PAL_A),
		.DATA_A(16'h0000),
		.WREN_A(2'b00),
		.Q_A(PAL0_Q),
		
		.ADDR_B(IO_PAL_A),
		.DATA_B(DI),
		.WREN_B({2{IO_PAL0_WE}}),
		.Q_B(PAL0_DO)
	);
	
	VDP2P2_PAL_RAM pal2
	(
		.CLK(CLK),
		
		.ADDR_A(!REGS.RAMCTL.CRKTE ? PAL_A : (CT_CRAM_A + DOTCLK_DIV[0])),
		.DATA_A(16'h0000),
		.WREN_A(2'b00),
		.Q_A(PAL1_Q),
		
		.ADDR_B(IO_PAL_A),
		.DATA_B(DI),
		.WREN_B({2{IO_PAL1_WE}}),
		.Q_B(PAL1_DO)
	);
	
	bit  [10:1] CT_CRAM_A;
	bit  [31:0] CT_CRAM_Q;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			// synopsys translate_off
			CT_CRAM_A <= '0;
			CT_CRAM_Q <= '0;
			// synopsys translate_on
		end else begin
			if (RBG_PIPE[0].RxCRCT[0] && DOT_CE_R) begin
				CT_CRAM_A <= RxCT_ADDR[0][10:1];
			end
			if (RBG_PIPE[0].RxCRCT[1] && DOT_CE_R) begin
				CT_CRAM_A <= RxCT_ADDR[1][10:1];
			end
			
			if (CE_R) begin
				case (DOTCLK_DIV)
					2'd0: CT_CRAM_Q[31:16] <= PAL1_Q;
					2'd1: CT_CRAM_Q[15: 0] <= PAL1_Q;
					2'd2: ;
					2'd3: ;
				endcase
			end
		end
	end
	
	//Registers
	wire VRAM_SEL = ~A[20] & ~CS_N & ~AD_N ;	//000000-0FFFFF
	wire VRAM_REQ = VRAM_SEL & ~REQ_N;
	wire REG_SEL = (A[20:18] == 3'b110) & ~CS_N & ~AD_N;
	
	bit [20: 1] A;
	bit         WE_N;
	bit [ 1: 0] DQM;
	bit         BURST;
	bit [15: 0] REG_DO;
	bit         REG_RRDY;
	bit [ 8: 1] REG_RA;
	bit [15: 0] PAL_DO;
	always @(posedge CLK or negedge RST_N) begin
		bit         EXLAT_N_OLD;
		bit [ 3: 0] REG_RD_DELAY;
		
		if (!RST_N) begin
			// synopsys translate_off
			REGS.TVMD <= '0;
			REGS.EXTEN <= '0;
			REGS.TVSTAT <= '0;
			REGS.VRSIZE <= '0;
//			REGS.HCNT <= '0;
//			REGS.VCNT <= '0;
			REGS.RSRV0 <= '0;
			REGS.RAMCTL <= '0;
			REGS.CYCA0L <= '0;
			REGS.CYCA0U <= '0;
			REGS.CYCA1L <= '0;
			REGS.CYCA1U <= '0;
			REGS.CYCB0L <= '0;
			REGS.CYCB0U <= '0;
			REGS.CYCB1L <= '0;
			REGS.CYCB1U <= '0;
			REGS.BGON <= '0;
			REGS.MZCTL <= '0;
			REGS.SFSEL <= '0;
			REGS.SFCODE <= '0;
			REGS.CHCTLA <= '0;
			REGS.CHCTLB <= '0;
			REGS.BMPNA <= '0;
			REGS.BMPNB <= '0;
			REGS.PNCN0 <= '0;
			REGS.PNCN1 <= '0;
			REGS.PNCN2 <= '0;
			REGS.PNCN3 <= '0;
			REGS.PNCR <= '0;
			REGS.PLSZ <= '0;
			REGS.MPOFN <= '0;
			REGS.MPOFR <= '0;
			REGS.MPABN0 <= '0;
			REGS.MPCDN0 <= '0;
			REGS.MPABN1 <= '0;
			REGS.MPCDN1 <= '0;
			REGS.MPABN2 <= '0;
			REGS.MPCDN2 <= '0;
			REGS.MPABN3 <= '0;
			REGS.MPCDN3 <= '0;
			REGS.MPABRA <= '0;
			REGS.MPCDRA <= '0;
			REGS.MPEFRA <= '0;
			REGS.MPGHRA <= '0;
			REGS.MPIJRA <= '0;
			REGS.MPKLRA <= '0;
			REGS.MPMNRA <= '0;
			REGS.MPOPRA <= '0;
			REGS.MPABRB <= '0;
			REGS.MPCDRB <= '0;
			REGS.MPEFRB <= '0;
			REGS.MPGHRB <= '0;
			REGS.MPIJRB <= '0;
			REGS.MPKLRB <= '0;
			REGS.MPMNRB <= '0;
			REGS.MPOPRB <= '0;
			REGS.SCXIN0 <= '0;
			REGS.SCXDN0 <= '0;
			REGS.SCYIN0 <= '0;
			REGS.SCYDN0 <= '0;
			REGS.ZMXIN0 <= '0;
			REGS.ZMXDN0 <= '0;
			REGS.ZMYIN0 <= '0;
			REGS.ZMYDN0 <= '0;
			REGS.SCXIN1 <= '0;
			REGS.SCXDN1 <= '0;
			REGS.SCYIN1 <= '0;
			REGS.SCYDN1 <= '0;
			REGS.ZMXIN1 <= '0;
			REGS.ZMXDN1 <= '0;
			REGS.ZMYIN1 <= '0;
			REGS.ZMYDN1 <= '0;
			REGS.SCXN2 <= '0;
			REGS.SCYN2 <= '0;
			REGS.SCXN3 <= '0;
			REGS.SCYN3 <= '0;
			REGS.ZMCTL <= '0;
			REGS.SCRCTL <= '0;
			REGS.VCSTAU <= '0;
			REGS.VCSTAL <= '0;
			REGS.LSTA0U <= '0;
			REGS.LSTA0L <= '0;
			REGS.LSTA1U <= '0;
			REGS.LSTA1L <= '0;
			REGS.LCTAU <= '0;
			REGS.LCTAL <= '0;
			REGS.BKTAU <= '0;
			REGS.BKTAL <= '0;
			REGS.RPMD <= '0;
			REGS.RPRCTL <= '0;
			REGS.KTCTL <= '0;
			REGS.KTAOF <= '0;
			REGS.OVPNRA <= '0;
			REGS.OVPNRB <= '0;
			REGS.RPTAU <= '0;
			REGS.RPTAL <= '0;
			REGS.WPSX0 <= '0;
			REGS.WPSY0 <= '0;
			REGS.WPEX0 <= '0;
			REGS.WPEY0 <= '0;
			REGS.WPSX1 <= '0;
			REGS.WPSY1 <= '0;
			REGS.WPEX1 <= '0;
			REGS.WPEY1 <= '0;
			REGS.WCTLA <= '0;
			REGS.WCTLB <= '0;
			REGS.WCTLC <= '0;
			REGS.WCTLD <= '0;
			REGS.LWTA0U <= '0;
			REGS.LWTA0L <= '0;
			REGS.LWTA1U <= '0;
			REGS.LWTA1L <= '0;
			REGS.SPCTL <= '0;
			REGS.SDCTL <= '0;
			REGS.CRAOFA <= '0;
			REGS.CRAOFB <= '0;
			REGS.LNCLEN <= '0;
			REGS.SFPRMD <= '0;
			REGS.CCCTL <= '0;
			REGS.SFCCMD <= '0;
			REGS.PRISA <= '0;
			REGS.PRISB <= '0;
			REGS.PRISC <= '0;
			REGS.PRISD <= '0;
			REGS.PRINA <= '0;
			REGS.PRINB <= '0;
			REGS.PRIR <= '0;
			REGS.RSRV1 <= '0;
			REGS.CCRSA <= '0;
			REGS.CCRSB <= '0;
			REGS.CCRSC <= '0;
			REGS.CCRSD <= '0;
			REGS.CCRNA <= '0;
			REGS.CCRNB <= '0;
			REGS.CCRR <= '0;
			REGS.CCRLB <= '0;
			REGS.CLOFEN <= '0;
			REGS.CLOFSL <= '0;
			REGS.COAR <= '0;
			REGS.COAG <= '0;
			REGS.COAB <= '0;
			REGS.COBR <= '0;
			REGS.COBG <= '0;
			REGS.COBB <= '0;

			REG_DO <= '0;
			REG_RRDY <= 0;
			// synopsys translate_on
		end else if (!RES_N) begin
			REGS.TVMD <= '0;
			REGS.EXTEN <= '0;
			REGS.TVSTAT <= '0;
			REGS.VRSIZE <= '0;
//			REGS.HCNT <= '0;
//			REGS.VCNT <= '0;
			REGS.RSRV0 <= '0;
			REGS.RAMCTL <= '0;
			REGS.CYCA0L <= '0;
			REGS.CYCA0U <= '0;
			REGS.CYCA1L <= '0;
			REGS.CYCA1U <= '0;
			REGS.CYCB0L <= '0;
			REGS.CYCB0U <= '0;
			REGS.CYCB1L <= '0;
			REGS.CYCB1U <= '0;
			REGS.BGON <= '0;
			REGS.MZCTL <= '0;
			REGS.SFSEL <= '0;
			REGS.SFCODE <= '0;
			REGS.CHCTLA <= '0;
			REGS.CHCTLB <= '0;
			REGS.BMPNA <= '0;
			REGS.BMPNB <= '0;
			REGS.PNCN0 <= '0;
			REGS.PNCN1 <= '0;
			REGS.PNCN2 <= '0;
			REGS.PNCN3 <= '0;
			REGS.PNCR <= '0;
			REGS.PLSZ <= '0;
			REGS.MPOFN <= '0;
			REGS.MPOFR <= '0;
			REGS.MPABN0 <= '0;
			REGS.MPCDN0 <= '0;
			REGS.MPABN1 <= '0;
			REGS.MPCDN1 <= '0;
			REGS.MPABN2 <= '0;
			REGS.MPCDN2 <= '0;
			REGS.MPABN3 <= '0;
			REGS.MPCDN3 <= '0;
			REGS.MPABRA <= '0;
			REGS.MPCDRA <= '0;
			REGS.MPEFRA <= '0;
			REGS.MPGHRA <= '0;
			REGS.MPIJRA <= '0;
			REGS.MPKLRA <= '0;
			REGS.MPMNRA <= '0;
			REGS.MPOPRA <= '0;
			REGS.MPABRB <= '0;
			REGS.MPCDRB <= '0;
			REGS.MPEFRB <= '0;
			REGS.MPGHRB <= '0;
			REGS.MPIJRB <= '0;
			REGS.MPKLRB <= '0;
			REGS.MPMNRB <= '0;
			REGS.MPOPRB <= '0;
			REGS.SCXIN0 <= '0;
			REGS.SCXDN0 <= '0;
			REGS.SCYIN0 <= '0;
			REGS.SCYDN0 <= '0;
			REGS.ZMXIN0 <= '0;
			REGS.ZMXDN0 <= '0;
			REGS.ZMYIN0 <= '0;
			REGS.ZMYDN0 <= '0;
			REGS.SCXIN1 <= '0;
			REGS.SCXDN1 <= '0;
			REGS.SCYIN1 <= '0;
			REGS.SCYDN1 <= '0;
			REGS.ZMXIN1 <= '0;
			REGS.ZMXDN1 <= '0;
			REGS.ZMYIN1 <= '0;
			REGS.ZMYDN1 <= '0;
			REGS.SCXN2 <= '0;
			REGS.SCYN2 <= '0;
			REGS.SCXN3 <= '0;
			REGS.SCYN3 <= '0;
			REGS.ZMCTL <= '0;
			REGS.SCRCTL <= '0;
			REGS.VCSTAU <= '0;
			REGS.VCSTAL <= '0;
			REGS.LSTA0U <= '0;
			REGS.LSTA0L <= '0;
			REGS.LSTA1U <= '0;
			REGS.LSTA1L <= '0;
			REGS.LCTAU <= '0;
			REGS.LCTAL <= '0;
			REGS.BKTAU <= '0;
			REGS.BKTAL <= '0;
			REGS.RPMD <= '0;
			REGS.RPRCTL <= '0;
			REGS.KTCTL <= '0;
			REGS.KTAOF <= '0;
			REGS.OVPNRA <= '0;
			REGS.OVPNRB <= '0;
			REGS.RPTAU <= '0;
			REGS.RPTAL <= '0;
			REGS.WPSX0 <= '0;
			REGS.WPSY0 <= '0;
			REGS.WPEX0 <= '0;
			REGS.WPEY0 <= '0;
			REGS.WPSX1 <= '0;
			REGS.WPSY1 <= '0;
			REGS.WPEX1 <= '0;
			REGS.WPEY1 <= '0;
			REGS.WCTLA <= '0;
			REGS.WCTLB <= '0;
			REGS.WCTLC <= '0;
			REGS.WCTLD <= '0;
			REGS.LWTA0U <= '0;
			REGS.LWTA0L <= '0;
			REGS.LWTA1U <= '0;
			REGS.LWTA1L <= '0;
			REGS.SPCTL <= '0;
			REGS.SDCTL <= '0;
			REGS.CRAOFA <= '0;
			REGS.CRAOFB <= '0;
			REGS.LNCLEN <= '0;
			REGS.SFPRMD <= '0;
			REGS.CCCTL <= '0;
			REGS.SFCCMD <= '0;
			REGS.PRISA <= '0;
			REGS.PRISB <= '0;
			REGS.PRISC <= '0;
			REGS.PRISD <= '0;
			REGS.PRINA <= '0;
			REGS.PRINB <= '0;
			REGS.PRIR <= '0;
			REGS.RSRV1 <= '0;
			REGS.CCRSA <= '0;
			REGS.CCRSB <= '0;
			REGS.CCRSC <= '0;
			REGS.CCRSD <= '0;
			REGS.CCRNA <= '0;
			REGS.CCRNB <= '0;
			REGS.CCRR <= '0;
			REGS.CCRLB <= '0;
			REGS.CLOFEN <= '0;
			REGS.CLOFSL <= '0;
			REGS.COAR <= '0;
			REGS.COAG <= '0;
			REGS.COAB <= '0;
			REGS.COBR <= '0;
			REGS.COBG <= '0;
			REGS.COBB <= '0;
		end else begin
			if (REG_SEL && !WE_N && !DTEN_N && !REQ_N) begin
				case ({A[8:1],1'b0})
					9'h000: REGS.TVMD <= DI & TVMD_MASK;
					9'h002: REGS.EXTEN <= DI & EXTEN_MASK;
					9'h006: REGS.VRSIZE <= DI & VRSIZE_MASK;
					9'h00C: REGS.RSRV0 <= DI & RSRV_MASK;
					9'h00E: REGS.RAMCTL <= DI & RAMCTL_MASK;
					9'h010: REGS.CYCA0L <= DI & CYCx0L_MASK;
					9'h012: REGS.CYCA0U <= DI & CYCx0U_MASK;
					9'h014: REGS.CYCA1L <= DI & CYCx1L_MASK;
					9'h016: REGS.CYCA1U <= DI & CYCx1U_MASK;
					9'h018: REGS.CYCB0L <= DI & CYCx0L_MASK;
					9'h01A: REGS.CYCB0U <= DI & CYCx0U_MASK;
					9'h01C: REGS.CYCB1L <= DI & CYCx1L_MASK;
					9'h01E: REGS.CYCB1U <= DI & CYCx1U_MASK;
					9'h020: REGS.BGON <= DI & BGON_MASK;
					9'h022: REGS.MZCTL <= DI & MZCTL_MASK;
					9'h024: REGS.SFSEL <= DI & SFSEL_MASK;
					9'h026: REGS.SFCODE <= DI & SFCODE_MASK;
					9'h028: REGS.CHCTLA <= DI & CHCTLA_MASK;
					9'h02A: REGS.CHCTLB <= DI & CHCTLB_MASK;
					9'h02C: REGS.BMPNA <= DI & BMPNA_MASK;
					9'h02E: REGS.BMPNB <= DI & BMPNB_MASK;
					9'h030: REGS.PNCN0 <= DI & PNCNx_MASK;
					9'h032: REGS.PNCN1 <= DI & PNCNx_MASK;
					9'h034: REGS.PNCN2 <= DI & PNCNx_MASK;
					9'h036: REGS.PNCN3 <= DI & PNCNx_MASK;
					9'h038: REGS.PNCR <= DI & PNCR_MASK;
					9'h03A: REGS.PLSZ <= DI & PLSZ_MASK;
					9'h03C: REGS.MPOFN <= DI & MPOFN_MASK;
					9'h03E: REGS.MPOFR <= DI & MPOFR_MASK;
					9'h040: REGS.MPABN0 <= DI & MPABNx_MASK;
					9'h042: REGS.MPCDN0 <= DI & MPCDNx_MASK;
					9'h044: REGS.MPABN1 <= DI & MPABNx_MASK;
					9'h046: REGS.MPCDN1 <= DI & MPCDNx_MASK;
					9'h048: REGS.MPABN2 <= DI & MPABNx_MASK;
					9'h04A: REGS.MPCDN2 <= DI & MPCDNx_MASK;
					9'h04C: REGS.MPABN3 <= DI & MPABNx_MASK;
					9'h04E: REGS.MPCDN3 <= DI & MPCDNx_MASK;
					9'h050: REGS.MPABRA <= DI & MPABRx_MASK;
					9'h052: REGS.MPCDRA <= DI & MPCDRx_MASK;
					9'h054: REGS.MPEFRA <= DI & MPEFRx_MASK;
					9'h056: REGS.MPGHRA <= DI & MPGHRx_MASK;
					9'h058: REGS.MPIJRA <= DI & MPIJRx_MASK;
					9'h05A: REGS.MPKLRA <= DI & MPKLRx_MASK;
					9'h05C: REGS.MPMNRA <= DI & MPMNRx_MASK;
					9'h05E: REGS.MPOPRA <= DI & MPOPRx_MASK;
					9'h060: REGS.MPABRB <= DI & MPABRx_MASK;
					9'h062: REGS.MPCDRB <= DI & MPCDRx_MASK;
					9'h064: REGS.MPEFRB <= DI & MPEFRx_MASK;
					9'h066: REGS.MPGHRB <= DI & MPGHRx_MASK;
					9'h068: REGS.MPIJRB <= DI & MPIJRx_MASK;
					9'h06A: REGS.MPKLRB <= DI & MPKLRx_MASK;
					9'h06C: REGS.MPMNRB <= DI & MPMNRx_MASK;
					9'h06E: REGS.MPOPRB <= DI & MPOPRx_MASK;
					9'h070: REGS.SCXIN0 <= DI & SCXINx_MASK;
					9'h072: REGS.SCXDN0 <= DI & SCXDNx_MASK;
					9'h074: REGS.SCYIN0 <= DI & SCYINx_MASK;
					9'h076: REGS.SCYDN0 <= DI & SCYDNx_MASK;
					9'h078: REGS.ZMXIN0 <= DI & ZMXINx_MASK;
					9'h07A: REGS.ZMXDN0 <= DI & ZMXDNx_MASK;
					9'h07C: REGS.ZMYIN0 <= DI & ZMYINx_MASK;
					9'h07E: REGS.ZMYDN0 <= DI & ZMYDNx_MASK;
					9'h080: REGS.SCXIN1 <= DI & SCXINx_MASK;
					9'h082: REGS.SCXDN1 <= DI & SCXDNx_MASK;
					9'h084: REGS.SCYIN1 <= DI & SCYINx_MASK;
					9'h086: REGS.SCYDN1 <= DI & SCYDNx_MASK;
					9'h088: REGS.ZMXIN1 <= DI & ZMXINx_MASK;
					9'h08A: REGS.ZMXDN1 <= DI & ZMXDNx_MASK;
					9'h08C: REGS.ZMYIN1 <= DI & ZMYINx_MASK;
					9'h08E: REGS.ZMYDN1 <= DI & ZMYDNx_MASK;
					9'h090: REGS.SCXN2 <= DI & SCXNx_MASK;
					9'h092: REGS.SCYN2 <= DI & SCYNx_MASK;
					9'h094: REGS.SCXN3 <= DI & SCXNx_MASK;
					9'h096: REGS.SCYN3 <= DI & SCYNx_MASK;
					9'h098: REGS.ZMCTL <= DI & ZMCTL_MASK;
					9'h09A: REGS.SCRCTL <= DI & SCRCTL_MASK;
					9'h09C: REGS.VCSTAU <= DI & VCSTAU_MASK;
					9'h09E: REGS.VCSTAL <= DI & VCSTAL_MASK;
					9'h0A0: REGS.LSTA0U <= DI & LSTAxU_MASK;
					9'h0A2: REGS.LSTA0L <= DI & LSTAxL_MASK;
					9'h0A4: REGS.LSTA1U <= DI & LSTAxU_MASK;
					9'h0A6: REGS.LSTA1L <= DI & LSTAxL_MASK;
					9'h0A8: REGS.LCTAU <= DI & LCTAU_MASK;
					9'h0AA: REGS.LCTAL <= DI & LCTAL_MASK;
					9'h0AC: REGS.BKTAU <= DI & BKTAU_MASK;
					9'h0AE: REGS.BKTAL <= DI & BKTAL_MASK;
					9'h0B0: REGS.RPMD <= DI & RPMD_MASK;
					9'h0B2: REGS.RPRCTL <= DI & RPRCTL_MASK;
					9'h0B4: REGS.KTCTL <= DI & KTCTL_MASK;
					9'h0B6: REGS.KTAOF <= DI & KTAOF_MASK;
					9'h0B8: REGS.OVPNRA <= DI & OVPNRx_MASK;
					9'h0BA: REGS.OVPNRB <= DI & OVPNRx_MASK;
					9'h0BC: REGS.RPTAU <= DI & RPTAU_MASK;
					9'h0BE: REGS.RPTAL <= DI & RPTAL_MASK;
					9'h0C0: REGS.WPSX0 <= DI & WPSXx_MASK;
					9'h0C2: REGS.WPSY0 <= DI & WPSYx_MASK;
					9'h0C4: REGS.WPEX0 <= DI & WPEXx_MASK;
					9'h0C6: REGS.WPEY0 <= DI & WPEYx_MASK;
					9'h0C8: REGS.WPSX1 <= DI & WPSXx_MASK;
					9'h0CA: REGS.WPSY1 <= DI & WPSYx_MASK;
					9'h0CC: REGS.WPEX1 <= DI & WPEXx_MASK;
					9'h0CE: REGS.WPEY1 <= DI & WPEYx_MASK;
					9'h0D0: REGS.WCTLA <= DI & WCTLA_MASK;
					9'h0D2: REGS.WCTLB <= DI & WCTLB_MASK;
					9'h0D4: REGS.WCTLC <= DI & WCTLC_MASK;
					9'h0D6: REGS.WCTLD <= DI & WCTLD_MASK;
					9'h0D8: REGS.LWTA0U <= DI & LWTAxU_MASK;
					9'h0DA: REGS.LWTA0L <= DI & LWTAxL_MASK;
					9'h0DC: REGS.LWTA1U <= DI & LWTAxU_MASK;
					9'h0DE: REGS.LWTA1L <= DI & LWTAxL_MASK;
					9'h0E0: REGS.SPCTL <= DI & SPCTL_MASK;
					9'h0E2: REGS.SDCTL <= DI & SDCTL_MASK;
					9'h0E4: REGS.CRAOFA <= DI & CRAOFA_MASK;
					9'h0E6: REGS.CRAOFB <= DI & CRAOFB_MASK;
					9'h0E8: REGS.LNCLEN <= DI & LNCLEN_MASK;
					9'h0EA: REGS.SFPRMD <= DI & SFPRMD_MASK;
					9'h0EC: REGS.CCCTL <= DI & CCCTL_MASK;
					9'h0EE: REGS.SFCCMD <= DI & SFCCMD_MASK;
					9'h0F0: REGS.PRISA <= DI & PRISA_MASK;
					9'h0F2: REGS.PRISB <= DI & PRISB_MASK;
					9'h0F4: REGS.PRISC <= DI & PRISC_MASK;
					9'h0F6: REGS.PRISD <= DI & PRISD_MASK;
					9'h0F8: REGS.PRINA <= DI & PRINA_MASK;
					9'h0FA: REGS.PRINB <= DI & PRINB_MASK;
					9'h0FC: REGS.PRIR <= DI & PRIR_MASK;
					9'h0FE: REGS.RSRV1 <= DI & RSRV_MASK;
					9'h100: REGS.CCRSA <= DI & CCRSA_MASK;
					9'h102: REGS.CCRSB <= DI & CCRSB_MASK;
					9'h104: REGS.CCRSC <= DI & CCRSC_MASK;
					9'h106: REGS.CCRSD <= DI & CCRSD_MASK;
					9'h108: REGS.CCRNA <= DI & CCRNA_MASK;
					9'h10A: REGS.CCRNB <= DI & CCRNA_MASK;
					9'h10C: REGS.CCRR <= DI & CCRR_MASK;
					9'h10E: REGS.CCRLB <= DI & CCRLB_MASK;
					9'h110: REGS.CLOFEN <= DI & CLOFEN_MASK;
					9'h112: REGS.CLOFSL <= DI & CLOFSL_MASK;
					9'h114: REGS.COAR <= DI & COxR_MASK;
					9'h116: REGS.COAG <= DI & COxG_MASK;
					9'h118: REGS.COAB <= DI & COxB_MASK;
					9'h11A: REGS.COBR <= DI & COxR_MASK;
					9'h11C: REGS.COBG <= DI & COxG_MASK;
					9'h11E: REGS.COBB <= DI & COxB_MASK; 
					default:;
				endcase
			end
				
			if (CE_F) begin
				if (REG_SEL && WE_N && !REQ_N) begin
					REG_RA <= A[8:1];
					REG_RRDY <= 0;
				end
				
				if (PAL_SEL && WE_N && !REQ_N) begin
					PAL_DO <= !IO_PAL_RD ? PAL0_DO : PAL1_DO;
				end
			end
			if (CE_R) begin
				if (!CS_N && AD_N) begin
					if (!REG_RD_DELAY) begin
						REG_RD_DELAY <= 4'd2;
					end
				end
			end
			
			if (DOT_CE_F) begin
				if (REG_SEL && WE_N && REG_RD_DELAY == 4'd0 && !REG_RRDY) begin
					case ({REG_RA,1'b0})
						9'h000: REG_DO <= REGS.TVMD & TVMD_MASK;
						9'h002: REG_DO <= REGS.EXTEN & EXTEN_MASK;
						9'h004: REG_DO <= {REGS.TVSTAT[15:8], 4'h0, VBLANK|~DISP, HBLANK, ODD, PAL} & TVSTAT_MASK;
						9'h006: REG_DO <= REGS.VRSIZE & VRSIZE_MASK;
						9'h008: REG_DO <= REGS.HCNT & HCNT_MASK;
						9'h00A: REG_DO <= REGS.VCNT & VCNT_MASK;
						9'h00E: REG_DO <= REGS.RAMCTL & RAMCTL_MASK;
						default: REG_DO <= '0;
					endcase
					if ({REG_RA,1'b0} == 9'h002 && !REGS.EXTEN.EXLTEN) begin	//EXTEN
						REGS.HCNT.HCT = !REGS.TVMD.HRESO[2] ? {HCT,DOTCLK_DIV[1]&REGS.TVMD.HRESO[1]} : {HCT9,HCT};
						REGS.VCNT.VCT = REGS.TVMD.LSMD != 2'b11 && !REGS.TVMD.HRESO[2] ? {1'b0,VCT} : REGS.TVMD.LSMD == 2'b11 && ((!ODD && !NNI) || !REGS.TVMD.HRESO[2]) ? {VCT,~ODD&~NNI} : {VCT,VCT0};
						REGS.TVSTAT.EXLTFG <= 1;
					end
					if ({REG_RA,1'b0} == 9'h004) begin								//TVSTAT
						REGS.TVSTAT.EXLTFG <= 0;
						REGS.TVSTAT.EXSYFG <= 0;
					end
				end
			end
			if (DOT_CE_F || DOT_CE_R) begin
				EXLAT_N_OLD <= EXLAT_N;
				if (!EXLAT_N && EXLAT_N_OLD && REGS.EXTEN.EXLTEN) begin	//EXTEN
					REGS.HCNT.HCT = !REGS.TVMD.HRESO[2] ? {HCT,DOTCLK_DIV[1]&REGS.TVMD.HRESO[1]} : {HCT9,HCT};
					REGS.VCNT.VCT = REGS.TVMD.LSMD != 2'b11 && !REGS.TVMD.HRESO[2] ? {1'b0,VCT} : REGS.TVMD.LSMD == 2'b11 && ((!ODD && !NNI) || !REGS.TVMD.HRESO[2]) ? {VCT,~ODD&~NNI} : {VCT,VCT0};
					REGS.TVSTAT.EXLTFG <= 1;
				end
			end
			if (DOT_CE_R) begin
				if (REG_RD_DELAY) begin
					REG_RD_DELAY <= REG_RD_DELAY - 4'd1;
				end
				if (!REG_RD_DELAY && !REG_RRDY) REG_RRDY <= 1;
			end
		end
	end
	
	
	bit         REG_RD,PAL_RD;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			// synopsys translate_off
			A <= '1;
			WE_N <= 1;
			DQM <= '1;
			BURST <= 0;
			// synopsys translate_on
		end else if (!RES_N) begin
			A <= '1;
			WE_N <= 1;
			DQM <= '1;
			BURST <= 0;
			REG_RD <= 0;
			PAL_RD <= 0;
		end else begin
			if (!CS_N && DTEN_N && AD_N && CE_R) begin
				if (!DI[15]) begin
					A[20:9] <= DI[11:0];
					WE_N <= DI[14];
					BURST <= DI[13];
				end else begin
					A[8:1] <= DI[7:0];
					DQM <= DI[13:12];
				end
			end
			if ((VRAM_SEL || REG_SEL || PAL_SEL) && !REQ_N) begin
				A <= A + 20'd1;
				REG_RD <= REG_SEL;
				PAL_RD <= PAL_SEL;
			end
		end
	end
	
	
	assign RDY_N = ~REG_RRDY | ~VRAM_RRDY | ~VRAM_WRDY | VRAM_WLOCK | (FIFO_FULL & BURST);
	
	assign DO = REG_RD ? REG_DO : 
	            PAL_RD ? PAL_DO : 
					VRAM_DO;
	
	//debug
`ifdef DEBUG
	assign VA_PIPE0 = VA_PIPE[0];
	assign NBG_A0VA_DBG = NBG_A0VA;
	assign R0NP_ADDR_DBG = RxPN_ADDR[0];
//	assign N0SCX = SCX[0];
//	assign N0SCY = SCY[0];
//	assign CH_PIPE0 = RBG_CH_PIPE[0];
//	assign CH_PIPE1 = RBG_CH_PIPE[1];
//	assign CH_PIPE2 = RBG_CH_PIPE[2];
	assign NBG_CDC0_DBG = NBG_CDC[0];
	assign NBG_CDC1_DBG = NBG_CDC[1];
	assign NBG_CDC2_DBG = NBG_CDC[2];
	assign NBG_CDC3_DBG = NBG_CDC[3];
	assign RBG0_CDC0_DBG = RBG_DC[0][0];
	assign RBG0_CDC1_DBG = RBG_DC[0][1];
	assign RBG0_CDC2_DBG = RBG_DC[0][2];
	assign RBG0_CDC3_DBG = RBG_DC[0][3];
	assign RBG0_CDP_DBG = RBG_CDP[0];
	assign RBG1_CDC0_DBG = RBG_DC[1][0];
	assign RBG1_CDC1_DBG = RBG_DC[1][1];
	assign RBG1_CDC2_DBG = RBG_DC[1][2];
	assign RBG1_CDC3_DBG = RBG_DC[1][3];
	assign RBG1_CDP_DBG = RBG_CDP[1];
//	assign N0DOTN_DBG = N0DOTN;
	assign R0DOT_DBG = R0DOT;
	assign N0DOT_DBG = N0DOT;
	assign N1DOT_DBG = N1DOT;
	assign N2DOT_DBG = N2DOT;
	assign N3DOT_DBG = N3DOT;
//	assign DOT_FST_DBG = DOT_FST;
//	assign DOT_SEC_DBG = DOT_SEC;
//	assign DOT_THD_DBG = DOT_THD;
	assign KAx0_DBG = KAx[0];
	assign RA_D_ERR = {RA_D[63:48] != 16'd0,RA_D[47:32] != 16'd0,RA_D[31:16] != 16'd0,RA_D[15:0] != 16'd0};
	assign RB_D_ERR = {RB_D[47:32] != 16'd0,RB_D[47:32] != 16'd0,RB_D[31:16] != 16'd0,RB_D[15:0] != 16'd0};

`endif

endmodule
