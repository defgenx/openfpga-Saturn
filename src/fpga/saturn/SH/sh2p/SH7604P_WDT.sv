module SH7604P_WDT
#(parameter bit DISABLE=0)
(
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	
	input             SBY,
	input             NMI,
	
	output reg        WDTOVF_N,
	
	input             CLK2_CE,
	input             CLK64_CE,
	input             CLK128_CE,
	input             CLK256_CE,
	input             CLK512_CE,
	input             CLK1024_CE,
	input             CLK4096_CE,
	input             CLK8192_CE,
	
	input      [31:0] IBUS_A,
	input      [31:0] IBUS_DI,
	output     [31:0] IBUS_DO,
	input       [3:0] IBUS_BA,
	input             IBUS_WE,
	input             IBUS_REQ,
	output            IBUS_BUSY,
	output            IBUS_ACT,
	
	output            ITI_IRQ,
	output            OVF,
	output            PRES,
	output            MRES
);

	// WTCSR bits 4:3 and RSTCSR bits 4:0 always read as 1 and are not stored.
	reg  [7:0] WTCNT;
	reg        S_OVF, S_WTIT, S_TME;
	reg  [2:0] S_CKS;
	reg        S_WOVF, S_RSTE, S_RSTS;
	reg        WRES;
	
	wire RUN = EN & CE_R & ~DISABLE;
	wire CNT_FF = &WTCNT;
	
	reg WT_CE;
	always_comb begin
		case (S_CKS)
			3'b000: WT_CE = CLK2_CE;
			3'b001: WT_CE = CLK64_CE;
			3'b010: WT_CE = CLK128_CE;
			3'b011: WT_CE = CLK256_CE;
			3'b100: WT_CE = CLK512_CE;
			3'b101: WT_CE = CLK1024_CE;
			3'b110: WT_CE = CLK4096_CE;
			default: WT_CE = CLK8192_CE;
		endcase
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			WDTOVF_N <= 1;
			WRES <= 0;
		end
		else if (!RES_N) begin
			WDTOVF_N <= 1;
			WRES <= 0;
		end
		else if (RUN) begin
			if (WT_CE && CNT_FF && S_WTIT) begin
				WDTOVF_N <= 0;
				WRES <= S_RSTE;
			end
			if (!WDTOVF_N && CLK128_CE) WDTOVF_N <= 1;
			if (WRES && CLK512_CE) WRES <= 0;
		end
	end
	
	assign PRES = WRES & ~S_RSTS;
	assign MRES = WRES &  S_RSTS;
	
	reg SBY_TME, NMI_OLD;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			SBY_TME <= 0;
		end
		else if (!RES_N) begin
			SBY_TME <= 0;
		end
		else if (RUN) begin
			if (NMI && !NMI_OLD && SBY) SBY_TME <= 1;
			if (OVF) SBY_TME <= 0;
		end
	end
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) NMI_OLD <= 0;
		else if (RUN && RES_N) NMI_OLD <= NMI;
	end
	
	//Registers
	wire REG_SEL = (IBUS_A[31:4] == 28'hFFFFFE8);
	reg  [7:0] OPEN_BUS;
	reg        IBUS_REQ_OLD;
	reg  [7:0] REG_DO;
	reg  [1:0] BUSY;
	wire WR_DONE = REG_SEL && IBUS_WE && !IBUS_REQ && IBUS_REQ_OLD;
	wire RD_DONE = REG_SEL && !IBUS_WE && !IBUS_REQ && IBUS_REQ_OLD;
	wire HALF    = IBUS_BA == 4'b1100 || IBUS_BA == 4'b0011;
	
	always @(posedge CLK or negedge RST_N) begin
		reg TM_EN, OVF_SET;
		
		if (!RST_N) begin
			WTCNT <= 8'h00;
			S_OVF <= 0; S_WTIT <= 0; S_TME <= 0; S_CKS <= 3'b000;
			S_WOVF <= 0; S_RSTE <= 0; S_RSTS <= 0;
			OVF <= 0;
			TM_EN <= 0;
			OVF_SET <= 0;
		end
		else if (!RES_N) begin
			WTCNT <= 8'h00;
			S_OVF <= 0; S_WTIT <= 0; S_TME <= 0; S_CKS <= 3'b000;
			S_WOVF <= 0; S_RSTE <= 0; S_RSTS <= 0;
			OVF <= 0;
			TM_EN <= 0;
			OVF_SET <= 0;
		end
		else if (RUN) begin
			if (CLK2_CE) TM_EN <= S_TME | SBY_TME;
			
			OVF <= 0;
			if (!TM_EN) begin
				WTCNT <= 8'h00;
				S_OVF <= 0;
			end else if (WT_CE) begin
				WTCNT <= WTCNT + 8'd1;
				if (CNT_FF) begin
					if (SBY_TME) OVF <= 1;
					else if (!S_WTIT) S_OVF <= 1;
					else begin
						S_WOVF <= 1;
						S_OVF <= 0; S_WTIT <= 0; S_TME <= 0; S_CKS <= 3'b000;
					end
				end
			end
			
			if (WR_DONE && HALF) begin
				if (IBUS_A[2:0] == 3'h0) begin
					if (IBUS_DI[15:8] == 8'h5A) WTCNT <= IBUS_DI[7:0];
					else if (IBUS_DI[15:8] == 8'hA5) begin
						S_WTIT <= IBUS_DI[6]; S_TME <= IBUS_DI[5]; S_CKS <= IBUS_DI[2:0];
						if (!IBUS_DI[7] && OVF_SET) begin S_OVF <= 0; OVF_SET <= 0; end
					end
				end
				if (IBUS_A[2:0] == 3'h2) begin
					if (IBUS_DI[15:8] == 8'h5A) begin S_RSTE <= IBUS_DI[6]; S_RSTS <= IBUS_DI[5]; end
					else if (IBUS_DI[15:8] == 8'hA5 && !IBUS_DI[7]) S_WOVF <= 0;
				end
			end
			if (WR_DONE) OPEN_BUS <= IBUS_A[2:0] == 3'h4 ? IBUS_DI[15:8] : IBUS_DI[7:0];
			if (RD_DONE) begin
				if (IBUS_A[2:0] != 3'h4) OPEN_BUS <= REG_DO;
				if (IBUS_A[2:0] == 3'h0 && S_OVF) OVF_SET <= 1;
			end
		end
	end
	
	assign ITI_IRQ = S_OVF;
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			REG_DO <= '0;
			BUSY <= '0;
		end
		else if (!RES_N) begin
			REG_DO <= '0;
			BUSY <= '0;
		end
		else if (CE_F && !DISABLE) begin
			if (REG_SEL && !IBUS_WE && IBUS_REQ && !BUSY[0]) begin
				case (IBUS_A[2:0])
					3'h0: REG_DO <= {S_OVF,S_WTIT,S_TME,2'b11,S_CKS};
					3'h1: REG_DO <= WTCNT;
					3'h3: REG_DO <= {S_WOVF,S_RSTE,S_RSTS,5'h1F};
					3'h4: REG_DO <= OPEN_BUS;
					default: REG_DO <= 8'hFF;
				endcase
			end
		end else if (CE_R && !DISABLE) begin
			IBUS_REQ_OLD <= IBUS_REQ;
			BUSY[0] <= REG_SEL && !IBUS_WE && IBUS_REQ && !IBUS_REQ_OLD;
			BUSY[1] <= BUSY[0];
		end
	end
	
	assign IBUS_DO = REG_SEL ? {4{REG_DO}} : '0;
	assign IBUS_BUSY = |BUSY;
	assign IBUS_ACT = REG_SEL;
	
endmodule
