module VDP2P_PAL_RAM (
	input         CLK,
	
	input  [ 9:0] ADDR_A,
	input  [15:0] DATA_A,
	input  [ 1:0] WREN_A,
	output [15:0] Q_A,
	
	input  [ 9:0] ADDR_B,
	input  [15:0] DATA_B,
	input  [ 1:0] WREN_B,
	output [15:0] Q_B
);

	wire [15:0] sub_wire0;
	wire [15:0] sub_wire1;

	altsyncram	altsyncram_component (
				.clock0 (CLK),
				.wren_a (|WREN_A),
				.address_b (ADDR_B),
				.data_b (DATA_B),
				.wren_b (|WREN_B),
				.address_a (ADDR_A),
				.data_a (DATA_A),
				.q_a (sub_wire0),
				.q_b (sub_wire1),
				.aclr0 (1'b0),
				.aclr1 (1'b0),
				.addressstall_a (1'b0),
				.addressstall_b (1'b0),
				.byteena_a (WREN_A),
				.byteena_b (WREN_B),
				.clock1 (1'b1),
				.clocken0 (1'b1),
				.clocken1 (1'b1),
				.clocken2 (1'b1),
				.clocken3 (1'b1),
				.eccstatus (),
				.rden_a (1'b1),
				.rden_b (1'b1));
	defparam
		altsyncram_component.address_reg_b = "CLOCK0",
		altsyncram_component.byteena_reg_b = "CLOCK0",
		altsyncram_component.byte_size = 8,
		altsyncram_component.clock_enable_input_a = "BYPASS",
		altsyncram_component.clock_enable_input_b = "BYPASS",
		altsyncram_component.clock_enable_output_a = "BYPASS",
		altsyncram_component.clock_enable_output_b = "BYPASS",
		altsyncram_component.indata_reg_b = "CLOCK0",
		altsyncram_component.intended_device_family = "Cyclone V",
		altsyncram_component.lpm_type = "altsyncram",
		altsyncram_component.numwords_a = 1024,
		altsyncram_component.numwords_b = 1024,
		altsyncram_component.operation_mode = "BIDIR_DUAL_PORT",
		altsyncram_component.outdata_aclr_a = "NONE",
		altsyncram_component.outdata_aclr_b = "NONE",
		altsyncram_component.outdata_reg_a = "UNREGISTERED",
		altsyncram_component.outdata_reg_b = "UNREGISTERED",
		altsyncram_component.power_up_uninitialized = "FALSE",
		altsyncram_component.read_during_write_mode_mixed_ports = "DONT_CARE",
		altsyncram_component.read_during_write_mode_port_a = "NEW_DATA_NO_NBE_READ",
		altsyncram_component.read_during_write_mode_port_b = "NEW_DATA_NO_NBE_READ",
		altsyncram_component.widthad_a = 10,
		altsyncram_component.widthad_b = 10,
		altsyncram_component.width_a = 16,
		altsyncram_component.width_b = 16,
		altsyncram_component.width_byteena_a = 2,
		altsyncram_component.width_byteena_b = 2,
		altsyncram_component.wrcontrol_wraddress_reg_b = "CLOCK0";
		
	assign Q_A = sub_wire0;
	assign Q_B = sub_wire1;

endmodule

module VDP2P_WRITE_FIFO (
	input	        CLK,
	input         RST_N,
	
	input	 [35:0] DATA,
	input	        WRREQ,
	input	        RDREQ,
	output [35:0] Q,
	output	     EMPTY,
	output	     FULL,
	output	     LAST
);

	wire [35: 0] sub_wire0;
	bit  [ 2: 0] RADDR;
	bit  [ 2: 0] WADDR;
	bit  [ 3: 0] AMOUNT;
	
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			AMOUNT <= '0;
			RADDR <= '0;
			WADDR <= '0;
		end
		else begin
			if (WRREQ && !AMOUNT[3]) begin
				WADDR <= WADDR + 3'd1;
			end
			if (RDREQ && AMOUNT) begin
				RADDR <= RADDR + 3'd1;
			end
			
			if (WRREQ && !RDREQ && !AMOUNT[3]) begin
				AMOUNT <= AMOUNT + 4'd1;
			end else if (!WRREQ && RDREQ && AMOUNT) begin
				AMOUNT <= AMOUNT - 4'd1;
			end
		end
	end
	assign EMPTY = ~|AMOUNT;
	assign FULL = AMOUNT[3];
	assign LAST = (AMOUNT == 4'd1);
	
	VDP2P_FERAM #(3,36) ram(CLK, WRREQ, WADDR, DATA, RADDR, sub_wire0);
	
	assign Q = sub_wire0;

endmodule

// Small RAM building blocks. ML=1 builds an MLAB with asynchronous read (cycle-identical to a register
// array); ML=0 builds an M10K with a registered read, which the callers use only where the read address
// is stable for at least two clocks before the value is consumed; ML=2 builds an M10K read on the falling edge.

// Simple dual port RAM in M10K whose read address is registered on the falling edge: for a register-sourced read
// address the value is the one an asynchronous MLAB read gives before the next rising edge (ML=2 below).
module VDP2P_FERAM #(
	parameter AW = 4,
	parameter DW = 32
) (
	input           CLK,
	input           WE,
	input  [AW-1:0] WA,
	input  [DW-1:0] WD,
	input  [AW-1:0] RA,
	output [DW-1:0] Q
);
`ifdef ALTERA_RESERVED_QIS
	altsyncram #(
		.address_aclr_b("NONE"), .address_reg_b("CLOCK1"), .clock_enable_input_a("BYPASS"), .clock_enable_input_b("BYPASS"),
		.clock_enable_output_b("BYPASS"), .intended_device_family("Cyclone V"), .lpm_type("altsyncram"),
		.numwords_a(2**AW), .numwords_b(2**AW), .operation_mode("DUAL_PORT"), .outdata_aclr_b("NONE"),
		.outdata_reg_b("UNREGISTERED"), .power_up_uninitialized("FALSE"), .ram_block_type("M10K"),
		.widthad_a(AW), .widthad_b(AW), .width_a(DW), .width_b(DW), .width_byteena_a(1)
	) ram (
		.address_a(WA), .address_b(RA), .clock0(CLK), .clock1(~CLK), .data_a(WD), .wren_a(WE), .q_b(Q),
		.aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0), .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
		.clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1), .clocken3(1'b1), .data_b({DW{1'b1}}), .eccstatus(),
		.q_a(), .rden_a(1'b1), .rden_b(1'b1), .wren_b(1'b0));
`else
	reg [DW-1:0] mem [0:(1<<AW)-1];
	reg [DW-1:0] q = '0;
	always @(posedge CLK) if (WE) mem[WA] <= WD;
	always @(negedge CLK) q <= mem[RA];
	assign Q = q;
`ifdef POCKET_FE_CHECK
	reg [AW-1:0] ra_neg;
	reg          ra_ok = 0;
	always @(negedge CLK) begin ra_neg <= RA; ra_ok <= 1; end
	always @(posedge CLK) if (ra_ok && ra_neg !== RA) $display("FE_ADDR_LATE %m RA %0h -> %0h", ra_neg, RA);
`endif
`endif
endmodule

// K-clock-enable delay of D (K >= 2): Q equals the output of a K-stage shift register that shifts when EN is
// high and takes D as stage 0 input. 2**AW must exceed K. The M10K read address is the post-edge write
// pointer, so the registered output never reads the word written on the same edge.
module VDP2P_DTAP #(
	parameter W  = 8,
	parameter K  = 2,
	parameter AW = 3,
	parameter ML = 1
) (
	input          CLK,
	input          EN,
	input  [W-1:0] D,
	output [W-1:0] Q
);
	localparam [AW-1:0] KK = K;
	reg  [AW-1:0] wp = '0;
	wire [AW-1:0] wpn = EN ? wp + 1'd1 : wp;
	always @(posedge CLK) if (EN) wp <= wpn;
	generate if (ML) begin : g_ml
		(* ramstyle = "MLAB, no_rw_check" *) reg [W-1:0] mem [0:(1<<AW)-1];
		always @(posedge CLK) if (EN) mem[wp] <= D;
		assign Q = mem[wp - KK];
	end else begin : g_m10k
		(* ramstyle = "M10K, no_rw_check" *) reg [W-1:0] mem [0:(1<<AW)-1];
		reg [W-1:0] q = '0;
		always @(posedge CLK) begin
			if (EN) mem[wp] <= D;
			q <= mem[wpn - KK];
		end
		assign Q = q;
	end endgenerate
endmodule

// One read copy of a layer's cell data buffer: three banks of 8 bytes. The visible window of 16 logical bytes is
// bank P (bytes 0-7) and bank P+1 (bytes 8-15); WE fills the hidden bank P+2 one event before the caller advances P.
module VDP2P_NDCRD #(
	parameter ML = 1
) (
	input         CLK,
	input         WE,
	input  [ 1:0] PTR,
	input  [63:0] D,
	input  [ 3:0] IDX,
	output [ 7:0] Q
);
	wire [ 1:0] p1 = PTR == 2'd2 ? 2'd0 : PTR + 2'd1;
	wire [ 1:0] p2 = PTR == 2'd0 ? 2'd2 : PTR - 2'd1;
	wire [ 1:0] ra = IDX[3] ? p1 : PTR;
	wire [63:0] w;
	generate if (ML) begin : g_ml
		(* ramstyle = "MLAB, no_rw_check" *) reg [63:0] mem [0:3];
		always @(posedge CLK) if (WE) mem[p2] <= D;
		assign w = mem[ra];
	end else begin : g_m10k
		(* ramstyle = "M10K, no_rw_check" *) reg [63:0] mem [0:3];
		reg [63:0] q = '0;
		always @(posedge CLK) begin
			if (WE) mem[p2] <= D;
			q <= mem[ra];
		end
		assign w = q;
	end endgenerate
	assign Q = w[{IDX[2:0],3'b000} +: 8];
endmodule

// Character parameter ring: 16 words (bank, pair), one write port, one asynchronous read port.
module VDP2P_CDPRING (
	input         CLK,
	input         WE,
	input  [ 1:0] WB,
	input  [ 1:0] WP,
	input  [17:0] WD,
	input  [ 1:0] RB,
	input  [ 1:0] RP,
	output [17:0] Q
);
	VDP2P_FERAM #(4,18) ram(CLK, WE, {WB,WP}, WD, {RB,RP}, Q);
endmodule

// 2**AW x DW simple dual port RAM, one write port, one read port.
module VDP2P_SDP #(
	parameter AW = 1,
	parameter DW = 32,
	parameter ML = 2
) (
	input           CLK,
	input           WE,
	input  [AW-1:0] WA,
	input  [DW-1:0] WD,
	input  [AW-1:0] RA,
	output [DW-1:0] Q
);
	generate if (ML == 2) begin : g_fe
		VDP2P_FERAM #(AW,DW) ram(CLK, WE, WA, WD, RA, Q);
	end else if (ML == 1) begin : g_ml
		(* ramstyle = "MLAB, no_rw_check" *) reg [DW-1:0] mem [0:(1<<AW)-1];
		always @(posedge CLK) if (WE) mem[WA] <= WD;
		assign Q = mem[RA];
	end else begin : g_m10k
		(* ramstyle = "M10K, no_rw_check" *) reg [DW-1:0] mem [0:(1<<AW)-1];
		reg [DW-1:0] q = '0;
		always @(posedge CLK) begin
			if (WE) mem[WA] <= WD;
			q <= mem[RA];
		end
		assign Q = q;
	end endgenerate
endmodule

// Register words held in RAM: 2**AW words of DW bits written by the CPU register decode. The registers
// clear on reset, so each word carries a valid flag (flip-flops) that masks stale RAM contents.
// ML=0 and ML=2 sample the read address on the falling edge so the word appears within the clock.
module VDP2P_REGRAM #(
	parameter AW = 1,
	parameter DW = 16,
	parameter ML = 2
) (
	input           CLK,
	input           RST_N,
	input           RES_N,
	input           WE,
	input  [AW-1:0] WA,
	input  [DW-1:0] WD,
	input  [AW-1:0] RA,
	output [DW-1:0] Q
);
	reg [(1<<AW)-1:0] vld = '0;
	wire [DW-1:0] w;
	generate if (ML == 2) begin : g_fe
		VDP2P_FERAM #(AW,DW) ram(CLK, WE, WA, WD, RA, w);
	end else if (ML == 1) begin : g_ml
		(* ramstyle = "MLAB, no_rw_check" *) reg [DW-1:0] mem [0:(1<<AW)-1];
		always @(posedge CLK) if (WE) mem[WA] <= WD;
		assign w = mem[RA];
	end else begin : g_m10k
		(* ramstyle = "M10K, no_rw_check" *) reg [DW-1:0] mem [0:(1<<AW)-1];
		reg [DW-1:0] q = '0;
		always @(posedge CLK) if (WE) mem[WA] <= WD;
		always @(negedge CLK) q <= mem[RA];
		assign w = q;
	end endgenerate
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) vld <= '0;
		else if (!RES_N) vld <= '0;
		else if (WE) vld[WA] <= 1'b1;
	end
	assign Q = vld[RA] ? w : '0;
endmodule

// Two 8x6 products and their sum (colour calculation of one channel); the synthesis maps this to a DSP block.
module VDP2P_RATIO (
	input  [ 7:0] A,
	input  [ 7:0] B,
	input  [ 5:0] RA,
	input  [ 5:0] RB,
	output [13:0] S
);
	assign S = (A * RA) + (B * RB);
endmodule

// 19-bit adder in a DSP block: A*1 + B*1 with the 1 coming from a register that synthesis cannot fold (ONE).
module VDP2P_DADD #(
	parameter W = 19
) (
	input          ONE,
	input  [W-1:0] A,
	input  [W-1:0] B,
	output [W-1:0] S
);
`ifdef ALTERA_RESERVED_QIS
	wire [W+2:0] r;
	altmult_add #(
		.number_of_multipliers(2), .width_a(W), .width_b(2), .width_result(W+3),
		.representation_a("SIGNED"), .representation_b("SIGNED"),
		.multiplier1_direction("ADD"),
		.input_register_a0("UNREGISTERED"), .input_register_b0("UNREGISTERED"),
		.input_register_a1("UNREGISTERED"), .input_register_b1("UNREGISTERED"),
		.multiplier_register0("UNREGISTERED"), .multiplier_register1("UNREGISTERED"),
		.output_register("UNREGISTERED"),
		.dedicated_multiplier_circuitry("YES"), .extra_latency(0),
		.intended_device_family("Cyclone V"), .lpm_type("altmult_add")
	) mac (.dataa({B,A}), .datab({1'b0,ONE,1'b0,ONE}), .result(r));
	assign S = r[W-1:0];
`else
	assign S = A + B;
`endif
endmodule
