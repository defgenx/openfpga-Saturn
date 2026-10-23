// SH7604 divider, area-first rewrite. Same ports and timing as SH7604_DIVU (39 CE_R steps, early finish of overflow
// cases, BUSY on CE_F, mirror copy one CE_R after the last step); the datapath is one 32-bit add/sub unit used serially
// on both clock-enable phases. docs/sh2-rewrite.md section 4.3 describes the schedule.
// Register contents read while a division is in flight are not preserved (the bus is stalled by BUSY then).
module SH7604P_DIVU (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	
	input      [31:0] IBUS_A,
	input      [31:0] IBUS_DI,
	output     [31:0] IBUS_DO,
	input       [3:0] IBUS_BA,
	input             IBUS_WE,
	input             IBUS_REQ,
	output            IBUS_BUSY,
	output            IBUS_ACT,
	
	output            IRQ,
	output      [7:0] VEC
);

	wire REG_SEL = (IBUS_A[31:8] == 24'hFFFFFF) && !IBUS_A[7] && !IBUS_A[6];
	wire WR = REG_SEL && IBUS_WE && IBUS_REQ;
	wire RD = REG_SEL && !IBUS_WE && IBUS_REQ;
	wire [2:0] RA = IBUS_A[4:2];
	wire START32 = WR && IBUS_A[4:0] == 5'h04;
	wire START64 = WR && IBUS_A[4:0] == 5'h14;
	
	reg [31:0] H, L;                     // DVDNTH, DVDNTL
	(* ramstyle = "MLAB, no_rw_check" *) reg [31:0] mem [0:3];                // 0 DVSR, 2 DVDNTH2, 3 DVDNTL2 (2 and 3 are scratch while operating)
	reg        vD, vH2, vL2, PW;         // word holds its value (else reads 0); pending DVSR write
	reg        OVFIE, OVFF;              // DVCR
	reg [15:0] VCRDIV;
	reg  [5:0] STEP;
	reg        DIV64, OVF, ZF, SX, SD, TF, F3, F4, F5, CC, SND, BUSY, DVSR_CLR, GCLR;
	
	wire OPERATE = (STEP != 6'h3F);
	wire R_EN = EN && CE_R;
	wire F_EN = EN && CE_F;
	
	wire s2 = (STEP == 6'd2), s3 = (STEP == 6'd3), s4 = (STEP == 6'd4), s5 = (STEP == 6'd5), s6 = (STEP == 6'd6);
	wire s7 = (STEP == 6'd7), s23 = (STEP == 6'd23), s24 = (STEP == 6'd24);
	wire opZD = F_EN && s2;
	wire opS1 = R_EN && s2;
	wire opS2 = F_EN && s3;
	wire opS3 = R_EN && s3;
	wire opSH = F_EN && s4;
	wire opCL = F_EN && s6;
	wire opCH = R_EN && s6;
	wire opJ0 = F_EN && s7;
	wire opRS = (EN && (CE_R || CE_F)) && STEP >= 6'd7 && STEP <= 6'd22 && !opJ0;   // j = 1..22
	wire opRL = F_EN && s23;                                                          // j = 32
	wire opFL = F_EN && s24;
	wire opFH = R_EN && s24;
	wire isSide = opS1 || opS2 || opS3;
	wire isRest = opJ0 || opRS || opRL;
	wire shiftA = opS2 || opS3 || opSH || opRS || opRL;      // adder operand is the shifted H
	wire useXA  = isSide || opSH || isRest;
	wire TAP = opS3 ? L[30] : opSH ? L[29] : L[31];
	wire [31:0] XA = shiftA ? {H[30:0], TAP} : H;
	wire SXD = SX ^ SD;
	wire BUSW = CE_R && RES_N && WR && !OPERATE;
	wire WB0 = BUSW && RA == 3'd0 && !SND, WB2 = BUSW && RA == 3'd6 && !SND, WB3 = BUSW && RA == 3'd7 && !SND;
	wire WS3 = opZD || (R_EN && s23) || (CE_R && SND);                // DVDNTL copies
	wire WS2 = opS1 || opFL || (CE_F && SND);                          // DVDNTH copies
	wire WPW = CE_F && PW;
	wire WE_RAM = WB0 || WB2 || WB3 || WS3 || WS2 || WPW;
	wire [1:0] WA = (WB0 || WPW) ? 2'd0 : (WB3 || WS3) ? 2'd3 : 2'd2;
	wire [31:0] WD = (WB0 || WB2 || WB3 || WPW) ? IBUS_DI : WA[0] ? L : H;
	wire OVF_DEC = ZF || (DIV64 && !(F3 == SXD && F4 == SXD));
	wire opLS = OVF_DEC && ((F_EN && s4) || (R_EN && s4) || (F_EN && s5));
	wire LSBIT = (R_EN && s4) ? F4 : (F_EN && s4) ? F3 : F5;
	
	wire YEN = !opSH;
	// Y operand: RAM word; with the divider idle the same read serves the register read mux
	wire YDV = OPERATE ? (opZD || isSide || isRest) : (RA == 3'd0);
	wire YL2 = OPERATE ? (opCL || opFL) : (RA == 3'd7);
	wire [1:0] RAD = YDV ? 2'd0 : YL2 ? 2'd3 : 2'd2;
	wire GV = YDV ? vD : OPERATE ? 1'b1 : YL2 ? vL2 : vH2;
	wire [31:0] YSRC = mem[RAD] & {32{GV}};
	wire YINV = opZD || (isSide && TF) || (isRest && !SD) || ((opCL || opCH || opFH) && SX) || (opFL && SXD);
	wire CIN  = opZD || (isSide && TF) || (isRest && !SD) || (opCL && SX) || (opCH && CC) || (opFH && SX) || (opFL && SXD);
	wire [32:0] ADD = {1'b0, useXA ? XA : 32'h0} + {1'b0, YEN ? (YSRC ^ {32{YINV}}) : 32'h0} + {32'h0, CIN};
	wire [31:0] SUM = ADD[31:0];
	wire        COUT = ADD[32];
	wire        TBIT = ~(SUM[31] ^ SD);
	
	wire [31:0] SAT = {SXD, {31{~SXD}}};
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			STEP <= 6'h3F;
			OVF <= 0;
		end
		else if (R_EN) begin
			if (OPERATE) STEP <= STEP + 6'd1;
			if (!OPERATE && (START32 || START64)) begin
				STEP <= 6'd0;
				DIV64 <= START64;
				OVF <= 0;
			end
			if (STEP == 6'd5 && OVF_DEC) begin
				OVF <= 1;
				STEP <= 6'd38;
			end
			if (STEP == 6'd38) STEP <= 6'h3F;
		end
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			H <= '0; L <= '0;
			OVFIE <= 0; OVFF <= 0; VCRDIV <= '0;
			SND <= 0; DVSR_CLR <= 0; GCLR <= 0; vD <= 0; vH2 <= 0; vL2 <= 0; PW <= 0;
		end
		else begin
			// datapath, both phases
			if (opZD) begin
				ZF <= COUT; SX <= H[31]; SD <= YSRC[31]; TF <= ~(H[31] ^ YSRC[31]);
			end
			if (isSide) begin
				TF <= TBIT;
				if (opS1) F3 <= TBIT;
				if (opS2) F4 <= TBIT;
				if (opS3) F5 <= TBIT;
			end
			if (isSide || opSH) H <= SUM;
			if (isRest && COUT) H <= SUM;
			else if (isRest && !opJ0) H <= XA;
			if (opRS || opRL) L <= {L[30:0], COUT};
			if (opLS) L <= {L[30:0], LSBIT};
			if (opCL) begin L <= SUM; CC <= COUT; end
			if (opCH) H <= SUM;
			if (opFL) L <= SUM;
			if (opFH) H <= SUM;
			
			if (CE_F) begin
				if (SND) vH2 <= 1;
				if (PW) begin PW <= 0; vD <= 1; end
			end
			if (CE_R) begin
				SND <= 0;
				if (!RES_N) begin
					OVFIE <= 0; OVFF <= 0; VCRDIV <= '0;
					if (STEP == 6'h3F || STEP == 6'd0 || STEP == 6'd1) vD <= 0;
					else DVSR_CLR <= 1;
					if (STEP == 6'h3F || STEP == 6'd0) begin H <= '0; L <= '0; end
					if (STEP == 6'd1 || STEP == 6'd2) GCLR <= 1;
					if (!OPERATE && !SND) begin vH2 <= 0; vL2 <= 0; end
				end
				else if (WR && !OPERATE) begin
					case (RA)
						3'd0: if (SND) PW <= 1; else vD <= 1;
						3'd1: begin H <= {32{IBUS_DI[31]}}; L <= IBUS_DI; end
						3'd2: if (|IBUS_BA[1:0]) {OVFIE, OVFF} <= IBUS_DI[1:0];
						3'd3: if (|IBUS_BA[1:0]) VCRDIV <= IBUS_DI[15:0];
						3'd4: H <= IBUS_DI;
						3'd5: L <= IBUS_DI;
						3'd6: if (!SND) vH2 <= 1;
						3'd7: if (!SND) vL2 <= 1;
					endcase
				end
				if (SND) vL2 <= 1;
				if (STEP == 6'd38) begin
					SND <= 1;
					GCLR <= 0;
					if (OVF && !DIV64 && GCLR) begin H <= '0; L <= L & 32'h7; end
					if (OVF) begin
						if (!OVFIE) L <= SAT;
						OVFF <= 1;
					end
					if (!RES_N) begin
						if (!(OVF && DIV64)) H <= '0;
						if (OVF && OVFIE && !DIV64) L <= '0;
					end
					if (DVSR_CLR || !RES_N) vD <= 0;
					DVSR_CLR <= 0;
				end
			end
		end
	end
	
	always @(posedge CLK) begin
		if (WE_RAM) mem[WA] <= WD;
	end
	assign IRQ = OVFF & OVFIE;
	assign VEC = VCRDIV[7:0];
	
	reg [31:0] REG_DO;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) REG_DO <= '0;
		else if (CE_F && RD) begin
			case (RA)
				3'd0,3'd6,3'd7: REG_DO <= YSRC;
				3'd1,3'd5: REG_DO <= L;
				3'd2: REG_DO <= {30'h0, OVFIE, OVFF};
				3'd3: REG_DO <= {16'h0, VCRDIV};
				3'd4: REG_DO <= H;
			endcase
		end
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) BUSY <= 0;
		else if (F_EN) begin
			if (REG_SEL && IBUS_REQ && OPERATE && !BUSY) BUSY <= 1;
			else if (!OPERATE && BUSY) BUSY <= 0;
		end
	end
	
	assign IBUS_DO = REG_SEL ? (IBUS_BA != 4'b1111 ? {2{REG_DO[15:0]}} : REG_DO) : 32'h0;
	assign IBUS_BUSY = BUSY;
	assign IBUS_ACT = REG_SEL;

endmodule
