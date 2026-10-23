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
	
	reg [31:0] DVSR, H, L, H2, L2;       // DVDNTH = H, DVDNTL = L; H2/L2 mirrors (scratch while operating)
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
	wire OVF_DEC = ZF || (DIV64 && !(F3 == SXD && F4 == SXD));
	wire opLS = OVF_DEC && ((F_EN && s4) || (R_EN && s4) || (F_EN && s5));
	wire LSBIT = (R_EN && s4) ? F4 : (F_EN && s4) ? F3 : F5;
	
	wire YEN = !opSH;
	wire [31:0] YSRC = (opZD || isSide || isRest) ? DVSR : (opCL || opFL) ? L2 : H2;
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
			DVSR <= '0; H <= '0; L <= '0; H2 <= '0; L2 <= '0;
			OVFIE <= 0; OVFF <= 0; VCRDIV <= '0;
			SND <= 0; DVSR_CLR <= 0; GCLR <= 0;
		end
		else begin
			// datapath, both phases
			if (opZD) begin
				ZF <= COUT; SX <= H[31]; SD <= DVSR[31]; TF <= ~(H[31] ^ DVSR[31]);
				L2 <= L; H2 <= H;
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
			if (EN && CE_R && s23) L2 <= L;
			if (opFL) begin L <= SUM; H2 <= H; end
			if (opFH) H <= SUM;
			
			if (CE_F && SND) H2 <= H;
			
			if (CE_R) begin
				SND <= 0;
				if (!RES_N) begin
					OVFIE <= 0; OVFF <= 0; VCRDIV <= '0;
					if (STEP == 6'h3F || STEP == 6'd0 || STEP == 6'd1) DVSR <= '0;
					else DVSR_CLR <= 1;
					if (STEP == 6'h3F || STEP == 6'd0) begin H <= '0; L <= '0; end
					if (STEP == 6'd1 || STEP == 6'd2) GCLR <= 1;
					if (!OPERATE && !SND) begin H2 <= '0; L2 <= '0; end
				end
				else if (WR && !OPERATE) begin
					case (RA)
						3'd0: DVSR <= IBUS_DI;
						3'd1: begin H <= {32{IBUS_DI[31]}}; L <= IBUS_DI; end
						3'd2: if (|IBUS_BA[1:0]) {OVFIE, OVFF} <= IBUS_DI[1:0];
						3'd3: if (|IBUS_BA[1:0]) VCRDIV <= IBUS_DI[15:0];
						3'd4: H <= IBUS_DI;
						3'd5: L <= IBUS_DI;
						3'd6: if (!SND) H2 <= IBUS_DI;
						3'd7: L2 <= IBUS_DI;
					endcase
				end
				if (SND) L2 <= L;
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
					if (DVSR_CLR || !RES_N) DVSR <= '0;
					DVSR_CLR <= 0;
				end
			end
		end
	end
	
	assign IRQ = OVFF & OVFIE;
	assign VEC = VCRDIV[7:0];
	
	reg [31:0] REG_DO;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) REG_DO <= '0;
		else if (CE_F && RD) begin
			case (RA)
				3'd0: REG_DO <= DVSR;
				3'd1,3'd5: REG_DO <= L;
				3'd2: REG_DO <= {30'h0, OVFIE, OVFF};
				3'd3: REG_DO <= {16'h0, VCRDIV};
				3'd4: REG_DO <= H;
				3'd6: REG_DO <= H2;
				3'd7: REG_DO <= L2;
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
