// SH-2 general registers R0-R15 and PR (index 16).
// Two write slots per SH-2 cycle: W1 on the CE_R edge (execute results), W2 on the following clock (load data).
// R1-R15 live in two MLAB copies (two read ports); R0 and PR are flip-flops.
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

	bit  [31:0] RAMA_Q, RAMB_Q;
	wire        RAM_WE = W_E & ~W_ADDR[4] & |W_ADDR[3:0];
	SH2P_regram regramA(.clock(CLK), .wraddress(W_ADDR[3:0]), .data(W_D), .wren(RAM_WE), .rdaddress(RA_ADDR[3:0]), .q(RAMA_Q));
	SH2P_regram regramB(.clock(CLK), .wraddress(W_ADDR[3:0]), .data(W_D), .wren(RAM_WE), .rdaddress(RB_ADDR[3:0]), .q(RAMB_Q));

	bit  [31:0] GR0, PR;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			GR0 <= '0;
			PR <= '0;
		end
		else if (W_E) begin
			if (W_ADDR == 5'd0)  GR0 <= W_D;
			if (W_ADDR == 5'd16) PR <= W_D;
		end
	end

	assign RA_Q = RA_ADDR[4] ? PR : (RA_ADDR[3:0] == 4'd0) ? GR0 : RAMA_Q;
	assign RB_Q = RB_ADDR[4] ? PR : (RB_ADDR[3:0] == 4'd0) ? GR0 : RAMB_Q;
	assign R0_Q = GR0;
endmodule
