module SH2P_regfile (
	input             CLK,
	input             RST_N,
	input             CE,
	input             EN,
	
	input       [4:0] WA_ADDR,
	input      [31:0] WA_D,
	input             WAE,
	input       [4:0] WB_ADDR,
	input      [31:0] WB_D,
	input             WBE,
	
	input       [4:0] RA_ADDR,
	output     [31:0] RA_Q,
	input       [4:0] RB_ADDR,
	output     [31:0] RB_Q,
	output     [31:0] R0_Q

);
	
	// synopsys translate_off
	`define SIM
	// synopsys translate_on
	
`ifdef SIM

	reg [31:0]  GR[16+1];
	
	bit  [4:0] WB_ADDR_LATCH;
	bit [31:0] WB_D_LATCH;
	bit        WBE_LATCH;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			WB_ADDR_LATCH <= '0;
			WB_D_LATCH <= '0;
			WBE_LATCH <= 0;
		end
		else begin
			WBE_LATCH <= 0;
			if (CE) begin
				WB_ADDR_LATCH <= WB_ADDR;
				WB_D_LATCH <= WB_D;
				WBE_LATCH <= WBE;
			end
		end
	end
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			GR <= '{'h01234567,'h11111111,'h89ABCDEF,'h11111111,'0,'0,'0,'0,'0,'0,'0,'0,'0,'0,'0,'0,'0};
		end
		else if (EN) begin
			if (WAE && CE) begin
				GR[WA_ADDR] <= WA_D;
			end
			if (WBE_LATCH) begin
				GR[WB_ADDR_LATCH] <= WB_D_LATCH;
			end
		end
	end

	assign RA_Q = GR[RA_ADDR];
	assign RB_Q = GR[RB_ADDR];
	
	reg [31:0] GR0;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			GR0 <= '0;
		end
		else if (EN) begin
			if (WAE && (WA_ADDR == 5'd0) && CE) begin
				GR0 <= WA_D;
			end
			if (WBE_LATCH && (WB_ADDR_LATCH == 5'd0)) begin
				GR0 <= WB_D_LATCH;
			end
		end
	end
	
	assign R0_Q = GR0;
	
`else
	
	bit  [4:0] WB_ADDR_LATCH;
	bit [31:0] WB_D_LATCH;
	bit        WBE_LATCH;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			WB_ADDR_LATCH <= '0;
			WB_D_LATCH <= '0;
			WBE_LATCH <= 0;
		end
		else begin
			WBE_LATCH <= 0;
			if (CE) begin
				WB_ADDR_LATCH <= WB_ADDR;
				WB_D_LATCH <= WB_D;
				WBE_LATCH <= WBE;
			end
		end
	end
	
	wire  [4:0] W_ADDR = CE ? WA_ADDR : WB_ADDR_LATCH;
	wire [31:0] REG_D = CE ? WA_D : WB_D_LATCH;
	wire        REG_WE = (WAE & ~WA_ADDR[4] & CE) | (WBE_LATCH & ~WB_ADDR_LATCH[4]);
	bit  [31:0] RAMA_Q, RAMB_Q;
	SH2P_regram regramA(.clock(CLK), .wraddress(W_ADDR[3:0]), .data(REG_D), .wren(REG_WE & EN), .rdaddress(RA_ADDR[3:0]), .q(RAMA_Q));
	SH2P_regram regramB(.clock(CLK), .wraddress(W_ADDR[3:0]), .data(REG_D), .wren(REG_WE & EN), .rdaddress(RB_ADDR[3:0]), .q(RAMB_Q));
	
	bit  [31:0] PR;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			PR <= '0;
		end
		else if (EN) begin
			if (WAE && WA_ADDR[4] && CE) begin
				PR <= WA_D;
			end
			if (WBE_LATCH && WB_ADDR_LATCH[4]) begin
				PR <= WB_D_LATCH;
			end
		end
	end
	assign RA_Q = RA_ADDR[4] ? PR : RAMA_Q;
	assign RB_Q = RB_ADDR[4] ? PR : RAMB_Q;
	
	bit  [31:0] GR0;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			GR0 <= '0;
		end
		else if (EN) begin
			if (WAE && (WA_ADDR == 5'd0) && CE) begin
				GR0 <= WA_D;
			end
			if (WBE_LATCH && (WB_ADDR_LATCH == 5'd0)) begin
				GR0 <= WB_D_LATCH;
			end
		end
	end
	assign R0_Q = GR0;
`endif

	
endmodule
