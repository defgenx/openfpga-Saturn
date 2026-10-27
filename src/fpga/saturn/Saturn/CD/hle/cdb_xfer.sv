// Transfer engine of the HLE CD block: moves words between CD block DRAM and the host data-port FIFO,
// or DRAM to DRAM, or zero-fills. The CPU queues segments {a, b, count}; one segment runs, one waits.
//   mode 1 read  : DRAM[a..] -> FIFO -> host (data port read)
//   mode 2 write : host -> FIFO -> DRAM[a..]
//   mode 3 copy  : DRAM[a..] -> DRAM[b..]
//   mode 4 fill  : DRAM[a..] <- 0
module cdb_xfer (
	input  wire        clk,
	input  wire        rst_n,

	input  wire        mode_we,
	input  wire [2:0]  mode_d,
	input  wire        a_we,
	input  wire        b_we,
	input  wire        cnt_we,
	input  wire [17:0] wd,
	input  wire [11:0] cnt_d,
	output wire        seg1_free,
	output wire        idle,
	output reg  [2:0]  mode = 3'd0,
	output wire [31:0] hostcnt,           // 18 bits are counted: a transfer is at most 200 sectors of 1176 words (235,200 < 2^18)

	// host side FIFO
	output wire [15:0] f_q,
	output wire        f_empty,
	output wire        f_full,
	input  wire        f_pop,
	input  wire        f_push,
	input  wire [15:0] f_wd,

	// DRAM client
	output reg         rq = 1'b0,
	output reg         rq_we = 1'b0,
	output reg  [17:0] rq_a = 18'd0,
	output wire [15:0] rq_d,
	input  wire        dn,
	input  wire [15:0] dq
);

reg [2:0]  wp = 3'd0, rp = 3'd0;
reg [3:0]  n = 4'd0;
assign f_empty = (n == 4'd0);
assign f_full  = (n == 4'd8);

reg [17:0] hc = 18'd0;
assign hostcnt = {14'd0, hc};
// b is only used by copy segments, which the firmware starts on an idle engine (xf_wait_idle): it is written straight
// into sb, there is no staging or queue copy
reg [17:0] sa = 18'd0, sb = 18'd0, a1 = 18'd0;
reg [11:0] c0 = 12'd0, c1 = 12'd0;
reg [17:0] a_t = 18'd0;
reg        v1 = 1'b0;
reg [15:0] hold = 16'd0;
reg [1:0]  ph = 2'd0;

assign seg1_free = !v1;
assign idle = (c0 == 12'd0) && !v1 && !rq;
assign rq_d = (mode == 3'd2) ? hold : (mode == 3'd3) ? hold : 16'd0;

wire push_eng = rq && dn && !rq_we && mode == 3'd1;
wire pop_eng  = (mode == 3'd2) && ph == 2'd0 && c0 != 12'd0 && !rq && !f_empty;
wire do_push  = push_eng || f_push;
wire do_pop   = pop_eng || f_pop;

// an entry is read only after n counts it; M10K with the read address (rp, a register) taken on the falling edge
CDB_FERAM #(3,16) fifo(clk, do_push && rst_n && !mode_we, wp, push_eng ? dq : f_wd, rp, f_q);

always @(posedge clk) begin
	if (!rst_n || (mode_we)) begin
		wp <= 3'd0; rp <= 3'd0; n <= 4'd0; c0 <= 12'd0; v1 <= 1'b0; rq <= 1'b0; ph <= 2'd0; hc <= 18'd0;
		if (mode_we) mode <= mode_d; else mode <= 3'd0;
	end else begin
		if (a_we) a_t <= wd;
		if (b_we) sb <= wd[17:0];
		if (cnt_we) begin
			if (c0 == 12'd0 && !v1) begin sa <= a_t; c0 <= cnt_d; end
			else begin a1 <= a_t; c1 <= cnt_d; v1 <= 1'b1; end
		end
		if (c0 == 12'd0 && v1) begin sa <= a1; c0 <= c1; v1 <= 1'b0; end

		if (f_push || f_pop) hc <= hc + 18'd1;

		if (do_push) wp <= wp + 3'd1;
		if (do_pop)  rp <= rp + 3'd1;
		n <= n + {3'd0, do_push} - {3'd0, do_pop};

		case (mode)
		3'd1: if (!rq && c0 != 12'd0 && n < 4'd8) begin
			rq <= 1'b1; rq_we <= 1'b0; rq_a <= sa;
		end else if (rq && dn) begin
			rq <= 1'b0; sa <= sa + 18'd1; c0 <= c0 - 12'd1;
		end
		3'd2: begin
			if (pop_eng) begin hold <= f_q; rq <= 1'b1; rq_we <= 1'b1; rq_a <= sa; ph <= 2'd1; end
			if (rq && dn) begin rq <= 1'b0; sa <= sa + 18'd1; c0 <= c0 - 12'd1; ph <= 2'd0; end
		end
		3'd3: begin
			if (ph == 2'd0 && !rq && c0 != 12'd0) begin rq <= 1'b1; rq_we <= 1'b0; rq_a <= sa; end
			else if (ph == 2'd0 && rq && dn) begin hold <= dq; rq <= 1'b0; ph <= 2'd1; end
			else if (ph == 2'd1) begin rq <= 1'b1; rq_we <= 1'b1; rq_a <= sb; ph <= 2'd2; end
			else if (ph == 2'd2 && dn) begin rq <= 1'b0; sa <= sa + 18'd1; sb <= sb + 18'd1; c0 <= c0 - 12'd1; ph <= 2'd0; end
		end
		3'd4: begin
			if (!rq && c0 != 12'd0) begin rq <= 1'b1; rq_we <= 1'b1; rq_a <= sa; end
			else if (rq && dn) begin rq <= 1'b0; sa <= sa + 18'd1; c0 <= c0 - 12'd1; end
		end
		default: ;
		endcase
	end
end

endmodule

// Simple dual port RAM in M10K, read address registered on the falling edge: for a register-sourced RA the value is what
// an asynchronous MLAB read gives before the next rising edge (MLAB instances take whole LABs). RA must not come from another
// such RAM, writes are on the rising edge.
module CDB_FERAM #(
	parameter AW = 3,
	parameter DW = 16
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
