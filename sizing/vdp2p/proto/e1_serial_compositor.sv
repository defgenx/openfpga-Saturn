	//Priority: serial compositor. One layer per clock after each dot event: 0 sprite, 1 RBG0, 2 NBG0, 3 NBG1, 4 NBG2, 5 NBG3.
	//The three highest priorities are kept sorted (a later layer wins only with a strictly higher priority).
	wire TW0_HIT = HRES[1] ? WHIT33_Q[0] : WHIT34[0];
	wire TW1_HIT = HRES[1] ? WHIT33_Q[1] : WHIT34[1];
	wire CCW_EN    =   WinTest(TW0_HIT ^ REGS.WCTLD.CCW0A,TW1_HIT ^ REGS.WCTLD.CCW1A,SDOT.WN ^ REGS.WCTLD.CCSWA,REGS.WCTLD.CCW0E,REGS.WCTLD.CCW1E,REGS.WCTLD.CCSWE & REGS.SPCTL.SPWINEN,REGS.WCTLD.CCLOG);
	wire CEVT = DOT_CE_R || (DOT_CE_F & HRES[1]);
	bit  [ 2: 0] CS;
	always @(posedge CLK) CS <= CEVT ? 3'd0 : (CS == 3'd7 ? 3'd7 : CS + 3'd1);
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
	//layer-selected dot
	bit [31:0] CDC;
	CellParam_t CCDP;
	bit [ 2:0] CCHCN;
	bit        CTPON;
	always_comb begin
		case (CS)
			3'd1:    begin CDC = R0DOTDC; CCDP = R0DOTCDP; CCHCN = RSxREG[0].CHCN; CTPON = RSxREG[0].TPON; end
			3'd2:    begin CDC = N0DOTDC; CCDP = N0DOTCDP; CCHCN = NSxREG[0].CHCN; CTPON = NSxREG[0].TPON; end
			3'd3:    begin CDC = N1DOTDC; CCDP = N1DOTCDP; CCHCN = NSxREG[1].CHCN; CTPON = NSxREG[1].TPON; end
			3'd4:    begin CDC = N2DOTDC; CCDP = N2DOTCDP; CCHCN = NSxREG[2].CHCN; CTPON = NSxREG[2].TPON; end
			default: begin CDC = N3DOTDC; CCDP = N3DOTCDP; CCHCN = NSxREG[3].CHCN; CTPON = NSxREG[3].TPON; end
		endcase
	end
	wire N0_REDUCE = (NSxREG[0].CHCN[0] && NSxREG[0].ZMHF) || NSxREG[0].ZMQT;
	wire N1_REDUCE = (NSxREG[1].CHCN[0] && NSxREG[1].ZMHF) || NSxREG[1].ZMQT;
	DotData_t CDOT;
	assign CDOT = MakeDotData(CDC, CCDP, CCHCN, CTPON);
	
	ScreenDot_t DOT_FST, DOT_SEC, DOT_THD, DOT_FTH;
	ScreenDot_t ACC[3];
	bit   [2:0] APRI[3];
	bit   [2:0] SPRIN_R;
	always @(posedge CLK or negedge RST_N) begin
		LCfg_t      L;
		DotData_t   D;
		bit         ON, SFC, WEN, CCEN, CCM3, SDEN, BOKEN;
		bit   [2:0] PRIN, SPRIN;
		bit   [4:0] CCRT;
		ScreenDot_t CAND, FST, SEC, THD, BACKD;
		bit         BKSDEN;
		
		if (!RST_N) begin
			// synopsys translate_off
			DOT_FST <= SD_NULL;
			DOT_SEC <= SD_NULL;
			DOT_THD <= SD_NULL;
			DOT_FTH <= SD_NULL;
			// synopsys translate_on
			APRI <= '{3{3'd0}};
		end
		else if (CEVT) begin
			BKSDEN = REGS.SDCTL.BKSDEN & (SDOT.SD & EN_SHADOW) & SCRN_EN[7];
			BACKD = {3'b000,1'b0,1'b0,REGS.CCRLB.BKCCRT,REGS.CLOFEN.BKCOEN,REGS.CLOFSL.BKCOSL,BKSDEN,1'b0,1'b0,1'b0,BACK_DC};
			FST = BACKD;
			SEC = BACKD;
			THD = BACKD;
			if (DISP) begin
				if (APRI[0] != 3'd0) FST = ACC[0];
				if (APRI[1] != 3'd0) SEC = ACC[1];
				if (APRI[2] != 3'd0) THD = ACC[2];
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
			APRI <= '{3{3'd0}};
		end
		else if (CS < 3'd6) begin
			L = LC[CS];
			WEN = WinTest(TW0_HIT ^ L.W0A, TW1_HIT ^ L.W1A, SDOT.WN ^ L.SWA, L.W0E, L.W1E, L.SWE & REGS.SPCTL.SPWINEN, L.WLOG);
			if (CS == 3'd0) begin
				D = {1'b0,1'b0,SDOT.P,SDOT.TP,SDOT.DC};
				SFC = 1'b0;
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
				PRIN = SPRIN;
				SPRIN_R <= SPRIN;
				ON = ~SDOT.TP & SCRN_EN[5];
				CCEN = REGS.CCCTL.SPCCEN & ~(CCW_EN & SCRN_EN[6]) & ((REGS.SPCTL.SPCCCS == 2'b00 & SPRIN <= REGS.SPCTL.SPCCN) | 
				                                                    (REGS.SPCTL.SPCCCS == 2'b01 & SPRIN == REGS.SPCTL.SPCCN) |
				                                                    (REGS.SPCTL.SPCCCS == 2'b10 & SPRIN >= REGS.SPCTL.SPCCN) |
				                                                    (REGS.SPCTL.SPCCCS == 2'b11));
				CCM3 = REGS.SPCTL.SPCCCS == 2'b11;
				case (SDOT.CC)
					3'h0: CCRT = REGS.CCRSA.S0CCRT;
					3'h1: CCRT = REGS.CCRSA.S1CCRT;
					3'h2: CCRT = REGS.CCRSB.S2CCRT;
					3'h3: CCRT = REGS.CCRSB.S3CCRT;
					3'h4: CCRT = REGS.CCRSC.S4CCRT;
					3'h5: CCRT = REGS.CCRSC.S5CCRT;
					3'h6: CCRT = REGS.CCRSD.S6CCRT;
					3'h7: CCRT = REGS.CCRSD.S7CCRT;
				endcase
				SDEN = (SDOT.SD & EN_SHADOW) & SCRN_EN[7];
			end else begin
				D = CDOT;
				SFC = SFCMatch(L.SFCS, REGS.SFCODE, D.DC[3:0]);
				PRIN = L.SPRM == 2'b01 ? {L.PRIN[2:1],D.PR} : L.SPRM == 2'b10 ? {L.PRIN[2:1],D.PR & SFC} : L.PRIN;
				case (CS)
					3'd1:    ON = RSxREG[0].ON;
					3'd2:    ON = NSxREG[0].ON | RSxREG[1].ON;
					3'd3:    ON = NSxREG[1].ON & ~NSxREG[0].CHCN[2];
					3'd4:    ON = NSxREG[2].ON & ~NSxREG[0].CHCN[2] & ~NSxREG[0].CHCN[1] & ~N0_REDUCE;
					default: ON = NSxREG[3].ON & ~NSxREG[0].CHCN[2] & ~NSxREG[1].CHCN[1] & ~N1_REDUCE;
				endcase
				ON = ON & ~D.TP & SCRN_EN[CS == 3'd1 ? 3'd4 : CS - 3'd2];
				CCEN = (L.SCCM == 2'b01 ? D.CC : L.SCCM == 2'b10 ? SFC & D.CC : 1'b1) & L.CCEN & ~(CCW_EN & SCRN_EN[6]);
				CCM3 = L.SCCM == 2'b11;
				CCRT = L.CCRT;
				SDEN = L.SDENR & (SDOT.SD & EN_SHADOW) & SPRIN_R >= PRIN & SCRN_EN[7];
			end
			ON = ON & ~(WEN & SCRN_EN[6]);
			BOKEN = (REGS.CCCTL.BOKN == L.BOKN) & REGS.CCCTL.BOKEN & ~|REGS.RAMCTL.CRMD;
			CAND = {L.CAOS,CCEN,CCM3,CCRT,L.COEN,L.COSL,SDEN,BOKEN,L.LCEN,D.P,D.DC};
			if (ON && |PRIN) begin
				if (PRIN > APRI[0]) begin
					ACC[2] <= ACC[1]; APRI[2] <= APRI[1];
					ACC[1] <= ACC[0]; APRI[1] <= APRI[0];
					ACC[0] <= CAND;   APRI[0] <= PRIN;
				end else if (PRIN > APRI[1]) begin
					ACC[2] <= ACC[1]; APRI[2] <= APRI[1];
					ACC[1] <= CAND;   APRI[1] <= PRIN;
				end else if (PRIN > APRI[2]) begin
					ACC[2] <= CAND;   APRI[2] <= PRIN;
				end
			end
		end
	end
	
