// SH-2 registers R0-R15, PR (index 16), GBR (17) and VBR (18).
// Two write slots per SH-2 cycle: W1 on the CE_R edge (execute results), W2 on the following clock (load data).
// R1-R15, PR, GBR and VBR live in two RAM copies (two read ports); R0 is flip-flops (third read port).
// The reset values of GBR/VBR are valid bits in SH2P_core; PR is cleared by a write after RST_N.
module SH2P_regfile (
	input             CLK,
	input             RST_N,
	input             CE_R,
	input             EN,

	input       [4:0] W1_ADDR,
	input      [31:0] W1_D,
	input             W1_E,
	input       [4:0] W2_ADDR,
	input      [31:0] W2_D,
	input             W2_E,

	input       [4:0] RA_ADDR,
	output     [31:0] RA_Q,
	input       [4:0] RB_ADDR,
	output     [31:0] RB_Q,
	output     [31:0] R0_Q
);
	wire        SLOT_R = CE_R;
	wire  [4:0] W_ADDR = SLOT_R ? W1_ADDR : W2_ADDR;
	wire [31:0] W_D    = SLOT_R ? W1_D    : W2_D;
	wire        W_E    = EN & (SLOT_R ? W1_E : W2_E);

	// PR is cleared by RST_N like a flip-flop: the first clock after RST_N writes 0 to word 16 (no W1/W2 write can
	// happen then, the core is still in RES_N reset).
	bit         PR_CLR;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) PR_CLR <= 1;
		else        PR_CLR <= 0;
	end

	bit  [31:0] RAMA_Q, RAMB_Q;
	wire        RAM_WE = PR_CLR | (W_E & |W_ADDR);
	wire  [4:0] RAM_WA = PR_CLR ? 5'd16 : W_ADDR;
	wire [31:0] RAM_WD = W_D & {32{~PR_CLR}};
	SH2P_regram regramA(.clock(CLK), .wraddress(RAM_WA), .data(RAM_WD), .wren(RAM_WE), .rdaddress(RA_ADDR), .q(RAMA_Q));
	SH2P_regram regramB(.clock(CLK), .wraddress(RAM_WA), .data(RAM_WD), .wren(RAM_WE), .rdaddress(RB_ADDR), .q(RAMB_Q));

	bit  [31:0] GR0;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			GR0 <= '0;
		end
		else if (W_E) begin
			if (W_ADDR == 5'd0)  GR0 <= W_D;
		end
	end

	assign RA_Q = RA_ADDR == 5'd0 ? GR0 : RAMA_Q;
	assign RB_Q = RB_ADDR == 5'd0 ? GR0 : RAMB_Q;
	assign R0_Q = GR0;
endmodule
