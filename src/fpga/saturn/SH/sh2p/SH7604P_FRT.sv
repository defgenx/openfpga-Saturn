module SH7604P_FRT (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             CE_F,
	input             EN,
	
	input             RES_N,
	input             SBY,
	
	output reg        FTOA,
	output reg        FTOB,
	input             FTCI,
	input             FTI,
	
	input             CLK4_CE,
	input             CLK8_CE,
	input             CLK32_CE,
	input             CLK128_CE,
	
	input      [31:0] IBUS_A,
	input      [31:0] IBUS_DI,
	output     [31:0] IBUS_DO,
	input       [3:0] IBUS_BA,
	input             IBUS_WE,
	input             IBUS_REQ,
	output            IBUS_BUSY,
	output            IBUS_ACT,
	
	output            ICI_IRQ,
	output            OCIA_IRQ,
	output            OCIB_IRQ,
	output            OVI_IRQ
);

	// Stored bits only: TIER[7:1], FTCSR = {ICF,OCFA,OCFB,OVF,CCLRA}, TCR = {IEDG,CKS}, TOCR[4:0].
	reg  [15:0] FRC, OCRA, OCRB, FICR;
	reg  [7:1]  TIER;
	reg         ICF, OCFA, OCFB, OVF, CCLRA;
	reg         IEDG;
	reg  [1:0]  CKS;
	reg  [4:0]  TOCR;
	wire        OCRS = TOCR[4];
	
	//Clock selector
	reg         FTCI_OLD;
	always @(posedge CLK) FTCI_OLD <= FTCI;
	
	reg         FRC_CE;
	always_comb begin
		case (CKS)
			2'b00: FRC_CE = CLK8_CE;
			2'b01: FRC_CE = CLK32_CE;
			2'b10: FRC_CE = CLK128_CE;
			2'b11: FRC_CE = FTCI & ~FTCI_OLD;
		endcase
	end
	
	// FFFFFE10-19
	wire HIT     = IBUS_A[31:4] == 28'hFFFFFE1;
	wire REG_SEL = HIT && (!IBUS_A[3] || (!IBUS_A[2] && !IBUS_A[1]));
	wire A_ODD   = IBUS_A[0];
	wire WR      = REG_SEL && IBUS_WE && IBUS_REQ;
	wire RD      = REG_SEL && !IBUS_WE && IBUS_REQ;
	wire FTCSR_WRITE = WR && IBUS_A[3:0] == 4'h1;
	wire FTCSR_READ  = RD && IBUS_A[3:0] == 4'h1;
	wire ICR_READ    = RD && IBUS_A[3:0] == 4'h9;
	wire CLR         = !RES_N || SBY;
	
	wire EQA = FRC == OCRA;
	wire EQB = FRC == OCRB;
	wire [16:0] FRC_INC = {1'b0,FRC} + 17'd1;
	
	reg OCFA_SET, OCFB_SET, OVF_SET, ICF_SET;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			OCFA <= 0; OCFB <= 0; OVF <= 0;
		end
		else if (CE_F) begin
			if (!RES_N) begin
				{OCFA_SET,OCFB_SET,OVF_SET} <= '0;
			end else if (EN) begin
				if (FTCSR_READ) begin
					if (OCFA) OCFA_SET <= 1;
					if (OCFB) OCFB_SET <= 1;
					if (OVF) OVF_SET <= 1;
				end
			end
		end
		else if (CE_R) begin
			if (CLR) begin
				OCFA <= 0; OCFB <= 0; OVF <= 0;
			end else if (EN) begin
				if (FRC_CE) begin
					if (EQA) begin FTOA <= TOCR[1]; OCFA <= 1; end
					if (EQB) begin FTOB <= TOCR[0]; OCFB <= 1; end
					if (FRC_INC[16]) OVF <= 1;
				end
				
				if (FTCSR_WRITE) begin
					if (!IBUS_DI[19] && OCFA_SET && OCFA) begin OCFA <= 0; OCFA_SET <= 0; end
					if (!IBUS_DI[18] && OCFB_SET && OCFB) begin OCFB <= 0; OCFB_SET <= 0; end
					if (!IBUS_DI[17] && OVF_SET  && OVF ) begin OVF <= 0;  OVF_SET <= 0; end
				end
			end
		end
	end
	
	reg CAPT, FTI_OLD, ICR_READ_OLD;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			FICR <= 16'h0000;
			ICF <= 0;
			CAPT <= 0;
			FTI_OLD <= 0;
			ICR_READ_OLD <= 0;
		end
		else if (CE_F) begin
			if (!RES_N) begin
				ICF_SET <= 0;
			end else if (EN) begin
				if (FTCSR_READ) begin
					if (ICF) ICF_SET <= 1;
				end
			end
		end
		else if (CE_R) begin
			if (CLR) begin
				FICR <= 16'h0000;
				ICF <= 0;
				CAPT <= 0;
				FTI_OLD <= 0;
				ICR_READ_OLD <= 0;
			end else if (EN) begin
				FTI_OLD <= FTI;
				CAPT <= ~(FTI ^ IEDG) & (FTI_OLD ^ IEDG);
				
				ICR_READ_OLD <= ICR_READ;
				if (ICR_READ && !ICR_READ_OLD && CAPT) begin
					CAPT <= 1;
				end
				else if (CAPT) begin
					FICR <= FRC;
					ICF <= 1;
				end
				
				if (FTCSR_WRITE) begin
					if (!IBUS_DI[23] && ICF_SET && ICF) begin ICF <= 0; ICF_SET <= 0; end
				end
			end
		end
	end

	
	assign ICI_IRQ = ICF & TIER[7];
	assign OCIA_IRQ = OCFA & TIER[3];
	assign OCIB_IRQ = OCFB & TIER[2];
	assign OVI_IRQ = OVF & TIER[1];
	
	//Registers
	reg [ 7: 0] TEMP;
	reg [ 7: 0] REG_DO;
	reg         BUSY;
	wire [15:0] OCR = !OCRS ? OCRA : OCRB;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			TIER <= '0;
			FRC  <= 16'h0000;
			OCRA <= 16'hFFFF;
			OCRB <= 16'hFFFF;
			IEDG <= 0; CKS <= 0;
			TOCR <= '0;
			CCLRA <= 0;
			REG_DO <= '0;
			BUSY <= 0;
			TEMP <= 8'h00;
		end
		else if (CE_R) begin
			if (FRC_CE) begin
				FRC <= FRC_INC[15:0];
			end
			
			if (CLR) begin
				TIER <= '0;
				FRC  <= 16'h0000;
				OCRA <= 16'hFFFF;
				OCRB <= 16'hFFFF;
				IEDG <= 0; CKS <= 0;
				TOCR <= '0;
				CCLRA <= 0;
			end
			else if (WR) begin
				case (IBUS_A[3:0])
					4'h0: TIER <= IBUS_DI[31:25];
					4'h1: CCLRA <= IBUS_DI[16];
					4'h2: TEMP <= IBUS_DI[15:8];
					4'h3: FRC <= {TEMP,IBUS_DI[7:0]};
					4'h4: TEMP <= IBUS_DI[31:24];
					4'h5: if (!OCRS) OCRA <= {TEMP,IBUS_DI[23:16]}; 
					      else OCRB <= {TEMP,IBUS_DI[23:16]};
					4'h6: begin IEDG <= IBUS_DI[15]; CKS <= IBUS_DI[9:8]; end
					4'h7: TOCR <= IBUS_DI[4:0];
					default:;
				endcase
			end
			
			if (EQA && CCLRA && FRC_CE) begin
				FRC <= 16'h0000;
			end
		end
		else if (CE_F) begin
			if (RD) begin
				case (IBUS_A[3:0])
					4'h0:       REG_DO <= {TIER,1'b1};
					4'h1:       REG_DO <= {ICF,3'b000,OCFA,OCFB,OVF,CCLRA}; 
					4'h2: begin {REG_DO,TEMP} <= FRC; BUSY <= 1; end
					4'h3:       REG_DO <= TEMP; 
					4'h4:       REG_DO <= OCR[15:8];
					4'h5:       REG_DO <= OCR[7:0];
					4'h6:       REG_DO <= {IEDG,5'b00000,CKS};
					4'h7:       REG_DO <= {3'b111,TOCR};
					4'h8:       {REG_DO,TEMP} <= FICR;
					4'h9:       REG_DO <= TEMP; 
					default:;
				endcase
			end
			
			if (CLK4_CE && BUSY) BUSY <= 0;
		end
	end
	
	assign IBUS_DO = REG_SEL ? {4{REG_DO}} : '0;
	assign IBUS_BUSY = BUSY;
	assign IBUS_ACT = REG_SEL;
	
endmodule
