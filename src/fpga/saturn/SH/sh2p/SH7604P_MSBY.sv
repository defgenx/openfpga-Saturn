module SH7604P_MSBY (
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
	
	input             SLEEP,
	input             WDT_OVF,
	output reg        SBY
);

	// SBYCR (FFFFFE91): SBY[7] HIZ[6] MSTP[4:0]; bit 5 reads 0.
	wire REG_SEL = (IBUS_A == 32'hFFFFFE91);
	reg [6:0] SBYCR;
	reg       SLEEP_OLD;
	reg [6:0] REG_DO;
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			SBYCR <= 7'h00;
			SBY <= 0;
		end
		else if (EN && CE_R) begin
			if (REG_SEL && IBUS_WE && IBUS_REQ) SBYCR <= {IBUS_DI[23:22],IBUS_DI[20:16]};
			SLEEP_OLD <= SLEEP;
			if (WDT_OVF && SBY) SBY <= 0;
			else if (SLEEP && !SLEEP_OLD && SBYCR[6]) SBY <= 1;
		end
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) REG_DO <= 7'h00;
		else if (CE_F && REG_SEL && !IBUS_WE && IBUS_REQ) REG_DO <= SBYCR;
	end
	
	wire [6:0] DO = REG_SEL ? REG_DO : 7'h00;
	wire [7:0] DO8 = {DO[6:5],1'b0,DO[4:0]};
	assign IBUS_DO = {4{DO8}};
	assign IBUS_BUSY = 0;
	assign IBUS_ACT = REG_SEL;
	
endmodule
