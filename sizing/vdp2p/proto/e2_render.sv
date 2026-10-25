	//Line renderer (area experiment). Cell words arrive from the VRAM bank buffers (up to four per event, one layer per
	//clock), queue in a FIFO and are decoded one dot per clock into a three-slot priority line buffer; scan-out reads the
	//buffer at the dot rate and ranks it against the sprite dot.
	wire CEVT = DOT_CE_R || (DOT_CE_F & HRES[1]);
	
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
		bit         W0A, W1A, SWA, W0E, W1E, SWE, WLOG;
	} LCfg_t;
	LCfg_t LC[6];
	always_comb begin
		LC[0] = {REGS.CRAOFB.SPCAOS, 3'd0, 2'd0, 1'b0, 1'b0, 2'd0, 5'd0, REGS.CLOFEN.SPCOEN, REGS.CLOFSL.SPCOSL, 1'b0, 3'd0, REGS.LNCLEN.SPLCEN,
		         REGS.WCTLC.SPW0A, REGS.WCTLC.SPW1A, REGS.WCTLC.SPSWA, REGS.WCTLC.SPW0E, REGS.WCTLC.SPW1E, REGS.WCTLC.SPSWE, REGS.WCTLC.SPLOG};
		LC[1] = {REGS.CRAOFB.R0CAOS, RSxREG[0].PRIN, RSxREG[0].SPRM, REGS.SFSEL.R0SFCS, RSxREG[0].CCEN, RSxREG[0].SCCM, RSxREG[0].CCRT, RSxREG[0].COEN, RSxREG[0].COSL, REGS.SDCTL.R0SDEN, 3'd1, REGS.LNCLEN.R0LCEN,
		         REGS.WCTLC.R0W0A, REGS.WCTLC.R0W1A, REGS.WCTLC.R0SWA, REGS.WCTLC.R0W0E, REGS.WCTLC.R0W1E, REGS.WCTLC.R0SWE, REGS.WCTLC.R0LOG};
		LC[2] = {NSxREG[0].CAOS, NSxREG[0].PRIN, NSxREG[0].SPRM, REGS.SFSEL.N0SFCS, NSxREG[0].CCEN, NSxREG[0].SCCM, NSxREG[0].CCRT, NSxREG[0].COEN, NSxREG[0].COSL, REGS.SDCTL.N0SDEN, 3'd2, REGS.LNCLEN.N0LCEN,
		         REGS.WCTLA.N0W0A, REGS.WCTLA.N0W1A, REGS.WCTLA.N0SWA, REGS.WCTLA.N0W0E, REGS.WCTLA.N0W1E, REGS.WCTLA.N0SWE, REGS.WCTLA.N0LOG};
		LC[3] = {NSxREG[1].CAOS, NSxREG[1].PRIN, NSxREG[1].SPRM, REGS.SFSEL.N1SFCS, NSxREG[1].CCEN, NSxREG[1].SCCM, NSxREG[1].CCRT, NSxREG[1].COEN, NSxREG[1].COSL, REGS.SDCTL.N1SDEN, 3'd4, REGS.LNCLEN.N1LCEN,
		         REGS.WCTLA.N1W0A, REGS.WCTLA.N1W1A, REGS.WCTLA.N1SWA, REGS.WCTLA.N1W0E, REGS.WCTLA.N1W1E, REGS.WCTLA.N1SWE, REGS.WCTLA.N1LOG};
		LC[4] = {NSxREG[2].CAOS, NSxREG[2].PRIN, NSxREG[2].SPRM, REGS.SFSEL.N2SFCS, NSxREG[2].CCEN, NSxREG[2].SCCM, NSxREG[2].CCRT, NSxREG[2].COEN, NSxREG[2].COSL, REGS.SDCTL.N2SDEN, 3'd5, REGS.LNCLEN.N2LCEN,
		         REGS.WCTLB.N2W0A, REGS.WCTLB.N2W1A, REGS.WCTLB.N2SWA, REGS.WCTLB.N2W0E, REGS.WCTLB.N2W1E, REGS.WCTLB.N2SWE, REGS.WCTLB.N2LOG};
		LC[5] = {NSxREG[3].CAOS, NSxREG[3].PRIN, NSxREG[3].SPRM, REGS.SFSEL.N3SFCS, NSxREG[3].CCEN, NSxREG[3].SCCM, NSxREG[3].CCRT, NSxREG[3].COEN, NSxREG[3].COSL, REGS.SDCTL.N3SDEN, 3'd6, REGS.LNCLEN.N3LCEN,
		         REGS.WCTLB.N3W0A, REGS.WCTLB.N3W1A, REGS.WCTLB.N3SWA, REGS.WCTLB.N3W0E, REGS.WCTLB.N3W1E, REGS.WCTLB.N3SWE, REGS.WCTLB.N3LOG};
	end
	wire N0_REDUCE = (NSxREG[0].CHCN[0] && NSxREG[0].ZMHF) || NSxREG[0].ZMQT;
	wire N1_REDUCE = (NSxREG[1].CHCN[0] && NSxREG[1].ZMHF) || NSxREG[1].ZMQT;
	//layer allowed by the colour depth of NBG0/NBG1 (lane sharing) and the screen enable bits
	bit  [ 5: 1] LAYER_OK;
	always_comb begin
		LAYER_OK[1] = RSxREG[0].ON & SCRN_EN[4];
		LAYER_OK[2] = (NSxREG[0].ON | RSxREG[1].ON) & SCRN_EN[0];
		LAYER_OK[3] = NSxREG[1].ON & ~NSxREG[0].CHCN[2] & SCRN_EN[1];
		LAYER_OK[4] = NSxREG[2].ON & ~NSxREG[0].CHCN[2] & ~NSxREG[0].CHCN[1] & ~N0_REDUCE & SCRN_EN[2];
		LAYER_OK[5] = NSxREG[3].ON & ~NSxREG[0].CHCN[2] & ~NSxREG[1].CHCN[1] & ~N1_REDUCE & SCRN_EN[3];
	end

	//arrival of cell words
	bit  [ 2: 0] ASEQ;
	always @(posedge CLK) ASEQ <= DOT_CE_R ? 3'd1 : (ASEQ == 3'd0 ? 3'd0 : (ASEQ == 3'd4 ? 3'd0 : ASEQ + 3'd1));
	wire [ 1: 0] AL   = ASEQ[1:0] - 2'd1;
	wire         AV   = ASEQ != 3'd0 && BG2.NxCH[AL] && BG2.NxCH_EN[AL] && LAYER_OK[AL + 3'd2];
	wire [ 1: 0] ABK  = BG2.NxCHS[AL];
	wire [31: 0] AWD  = ABK == 2'd0 ? RA0_BUF : ABK == 2'd1 ? RA1_BUF : ABK == 2'd2 ? RB0_BUF : RB1_BUF;
	wire [ 9: 0] AATT = {PN4E[AL].PALN, PN4E[AL].HF, PN4E[AL].PR, PN4E[AL].CC};
	wire [54: 0] RFIFO_D = {AL, BG2.NxCHC[AL], AWD, AATT, VA4.NxX[AL][10:3]};
	bit  [ 2: 0] FWP, FRP;
	bit  [ 3: 0] FCNT;
	wire         FPOP;
	wire [54: 0] RFIFO_Q;
	VDP2P2_SDP #(3,55) rfifo(CLK, AV, FWP, RFIFO_D, FRP, RFIFO_Q);
	always @(posedge CLK) begin
		if (AV) FWP <= FWP + 3'd1;
		if (FPOP) FRP <= FRP + 3'd1;
		FCNT <= FCNT + {3'b000,AV} - {3'b000,FPOP};
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
	wire         WPAST = WSD[10:3] > WCELL || (WSD[10:3] == WCELL && {1'b0,WSD[2:0]} >= WJE);
	assign       WDONE = WBUSY && (WPAST || WK == 10'd703);
	bit          P0V;
	bit  [ 9: 0] P0X;
	bit  [31: 0] P0DC;
	CellParam_t  P0CDP;
	bit  [ 2: 0] P0LID;
	bit          P1V;
	bit          P0MOVE, P0FREE;
	bit          R0PEND, R1PEND;
	bit  [ 9: 0] RBX;
	wire         WEM = WBUSY && !WDONE && WINR;
	assign       FPOP = !WBUSY && !FEMPTY && WINIT == 3'd0;
	wire [18: 0] WZ    = WL[1] ? 19'h00100 : {8'h00,LZMX[WL[0]]};
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
			end
		end
		if (NBG_FETCH_START_EN && DOT_CE_R) WINIT <= 3'd4;
		else if (WINIT != 3'd0) WINIT <= WINIT - 3'd1;
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
	bit  [32: 0] P1E, P2E;
	bit          P2V;
	bit          SO_RD, SO_RD_D;
	bit  [ 9: 0] SXD;
	wire [ 9: 0] LBRA = SO_RD ? SXD : P1X;
	wire         P1GO = P1V && !SO_RD && !(P2V && P2X == P1X);
	assign       P0MOVE = P0V && (!P1V || P1GO);
	assign       P0FREE = !P0V || P0MOVE;
	bit  [ 2: 0] P0NL;
	wire [ 2: 0] P0CHCN = P0LID == 3'd1 ? RSxREG[0].CHCN : P0LID == 3'd2 ? (R1SEL ? RSxREG[1].CHCN : NSxREG[0].CHCN) : NSxREG[P0LID - 3'd2].CHCN;
	wire         P0TPON = P0LID == 3'd1 ? RSxREG[0].TPON : NSxREG[P0LID - 3'd2].TPON;
	bit          R1SEL;
	DotData_t    P0D;
	assign       P0D = MakeDotData(P0DC, P0CDP, P0CHCN, P0TPON);
	LCfg_t       P0L;
	assign       P0L = LC[P0LID];
	wire         P0SFC = SFCMatch(P0L.SFCS, REGS.SFCODE, P0D.DC[3:0]);
	wire [ 2: 0] P0PRI = P0L.SPRM == 2'b01 ? {P0L.PRIN[2:1],P0D.PR} : P0L.SPRM == 2'b10 ? {P0L.PRIN[2:1],P0D.PR & P0SFC} : P0L.PRIN;
	wire         P0CCP = (P0L.SCCM == 2'b01 ? P0D.CC : P0L.SCCM == 2'b10 ? P0SFC & P0D.CC : 1'b1) & P0L.CCEN;
	bit          LPI, LPD;
	always @(posedge CLK) begin
		if (NBG_FETCH_START_EN && DOT_CE_R) LPI <= ~LPI;
		if (DOT_CE_R && H_CNT == 9'd0) LPD <= LPI;
		if (CEVT) begin R0PEND <= LAYER_OK[1]; R1PEND <= RSxREG[1].ON; RBX <= {SCRNX,SCRNX0&HRES[1]}; end
		if (P0FREE) begin
			P0V <= 1'b0;
			if (R0PEND) begin
				P0V <= 1'b1; P0X <= RBX; P0DC <= R0DOTDC; P0CDP <= R0DOTCDP; P0LID <= 3'd1; R1SEL <= 1'b0; R0PEND <= 1'b0;
			end else if (R1PEND) begin
				P0V <= 1'b1; P0X <= RBX; P0DC <= RxDC[1]; P0CDP <= RxCDP[1]; P0LID <= 3'd2; R1SEL <= 1'b1; R1PEND <= 1'b0;
			end else if (WEM) begin
				P0V <= 1'b1; P0X <= WK; P0DC <= WDC; P0CDP <= {WATT[1],WATT[0],WATT[9:3],1'b0}; P0LID <= {1'b0,WL} + 3'd2; R1SEL <= 1'b0;
			end
		end
		if (P0MOVE) begin
			P1V <= !P0D.TP && |P0PRI;
			P1X <= P0X;
			P1E <= {LPI,P0LID,P0D.P,P0CCP,P0PRI,P0D.DC};
		end else if (P1GO) P1V <= 1'b0;
		P2V <= P1GO;
		if (P1GO) begin P2X <= P1X; P2E <= P1E; end
		SO_RD <= CEVT;
		SXD <= {SCRNX,SCRNX0&HRES[1]};
		SO_RD_D <= SO_RD;
	end
	
	//line buffer: three slots of {lp,lid,P,CC,PRI,DC}
	wire [32: 0] LBQ[3];
	bit  [32: 0] LBW[3];
	bit          LBWE[3];
	VDP2P2_SDP #(10,33,0) lb0(CLK, LBWE[0], P2X, LBW[0], LBRA, LBQ[0]);
	VDP2P2_SDP #(10,33,0) lb1(CLK, LBWE[1], P2X, LBW[1], LBRA, LBQ[1]);
	VDP2P2_SDP #(10,33,0) lb2(CLK, LBWE[2], P2X, LBW[2], LBRA, LBQ[2]);
	wire [ 2: 0] NPRI = P2E[27:25], NLID = P2E[31:29];
	wire         V0 = LBQ[0][32] == LPI, V1 = LBQ[1][32] == LPI, V2 = LBQ[2][32] == LPI;
	wire         B0 = !V0 || NPRI > LBQ[0][27:25] || (NPRI == LBQ[0][27:25] && NLID < LBQ[0][31:29]);
	wire         B1 = !V1 || NPRI > LBQ[1][27:25] || (NPRI == LBQ[1][27:25] && NLID < LBQ[1][31:29]);
	wire         B2 = !V2 || NPRI > LBQ[2][27:25] || (NPRI == LBQ[2][27:25] && NLID < LBQ[2][31:29]);
	always_comb begin
		LBW[0] = P2E; LBW[1] = LBQ[0]; LBW[2] = LBQ[1];
		LBWE[0] = 0; LBWE[1] = 0; LBWE[2] = 0;
		if (P2V) begin
			if (B0)      begin LBWE[0] = 1; LBWE[1] = 1; LBWE[2] = 1; end
			else if (B1) begin LBWE[1] = 1; LBWE[2] = 1; LBW[1] = P2E; LBW[2] = LBQ[1]; end
			else if (B2) begin LBWE[2] = 1; LBW[2] = P2E; end
		end
	end
	
	//scan-out
	bit  [32: 0] SE[3];
	always @(posedge CLK) if (SO_RD_D) begin SE[0] <= LBQ[0]; SE[1] <= LBQ[1]; SE[2] <= LBQ[2]; end
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
	//background entries: window masked and compacted
	ScreenDot_t  EP[3];
	bit          EON[3];
	bit  [ 2: 0] EPRI[3];
	always_comb begin
		for (int i = 0; i < 3; i++) begin
			LCfg_t L;
			bit    WEN;
			L = LC[SE[i][31:29]];
			WEN = WinTest(TW0_HIT ^ L.W0A, TW1_HIT ^ L.W1A, SDOT.WN ^ L.SWA, L.W0E, L.W1E, L.SWE & REGS.SPCTL.SPWINEN, L.WLOG);
			EPRI[i] = SE[i][27:25];
			EON[i] = SE[i][32] == LPD && |EPRI[i] && LAYER_OK[SE[i][31:29]] && !(WEN & SCRN_EN[6]);
			EP[i] = {L.CAOS, SE[i][26] & ~(CCW_EN & SCRN_EN[6]), L.SCCM == 2'b11, L.CCRT, L.COEN, L.COSL,
			         L.SDENR & (SDOT.SD & EN_SHADOW) & SPRIN >= EPRI[i] & SCRN_EN[7],
			         (REGS.CCCTL.BOKN == L.BOKN) & REGS.CCCTL.BOKEN & ~|REGS.RAMCTL.CRMD, L.LCEN, SE[i][24], SE[i][23:0]};
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
	
