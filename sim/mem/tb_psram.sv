// tb_psram: psram_sync against the CellularRAM pin model.
//
// A master with the ddram.sv backend semantics (request taken when busy is low, read beats flagged
// by dout_ready, busy low in that cycle) writes and reads random beats and bursts on both dies,
// including partial byte masks, non-contiguous lanes, bursts that cross the 128 halfword row and
// both die boundaries, and compares against a byte-accurate shadow. Reports latency and throughput.
//
//   +N=count   number of random operations (default 3000)

`timescale 1ps/1ps

module tb_psram;

localparam integer T_RAM = 8730;               // 114.55 MHz
localparam integer TCO   = 3500;
localparam integer TIN   = 1000;
localparam integer INIT_US = 20;

reg clk = 0;
always #(T_RAM/2) clk = ~clk;

reg         reset = 1;
wire        busy;
reg  [20:0] addr = 0;
reg   [7:0] burstcnt = 0;
reg         rd = 0, we = 0;
reg  [63:0] din = 0;
reg   [7:0] be = 0;
wire [63:0] dout;
wire        dout_ready, idle, rvalid;
wire [15:0] rdata;
wire  [1:0] rword;
// beats are assembled from the word stream: valid in the dout_ready cycle
reg  [47:0] asm = 48'd0;
always @(posedge clk) if (rvalid) asm <= {asm[31:0], rdata};
assign dout = {asm, rdata};

wire [21:16] cram_a;
wire [15:0]  cram_dq_out, cram_dq_in;
wire         cram_dq_oe, cram_clk, cram_adv_n, cram_cre, cram_ce0_n, cram_ce1_n, cram_oe_n, cram_we_n, cram_ub_n, cram_lb_n;

psram_sync #(.LATENCY(4), .CLK_KHZ(114546), .INIT_US(INIT_US)) dut (
	.clk(clk), .reset(reset), .init_go(1'b0), .busy(busy), .addr(addr), .burstcnt(burstcnt), .rd(rd), .we(we), .din(din), .be(be),
	.rdata(rdata), .rvalid(rvalid), .rword(rword), .dout_ready(dout_ready), .idle(idle),
	.cram_a(cram_a), .cram_dq_out(cram_dq_out), .cram_dq_oe(cram_dq_oe), .cram_dq_in(cram_dq_in), .cram_clk(cram_clk),
	.cram_adv_n(cram_adv_n), .cram_cre(cram_cre), .cram_ce0_n(cram_ce0_n), .cram_ce1_n(cram_ce1_n),
	.cram_oe_n(cram_oe_n), .cram_we_n(cram_we_n), .cram_ub_n(cram_ub_n), .cram_lb_n(cram_lb_n)
);

// transport delays on the pins
reg [21:16] a_d; reg [15:0] o_d; reg oe_d, clk_d, adv_d, cre_d, ce0_d, ce1_d, oen_d, wen_d, ub_d, lb_d;
always @(cram_a)       a_d   <= #(TCO) cram_a;
always @(cram_dq_out)  o_d   <= #(TCO) cram_dq_out;
always @(cram_dq_oe)   oe_d  <= #(TCO) cram_dq_oe;
always @(cram_clk)     clk_d <= #(TCO) cram_clk;
always @(cram_adv_n)   adv_d <= #(TCO) cram_adv_n;
always @(cram_cre)     cre_d <= #(TCO) cram_cre;
always @(cram_ce0_n)   ce0_d <= #(TCO) cram_ce0_n;
always @(cram_ce1_n)   ce1_d <= #(TCO) cram_ce1_n;
always @(cram_oe_n)    oen_d <= #(TCO) cram_oe_n;
always @(cram_we_n)    wen_d <= #(TCO) cram_we_n;
always @(cram_ub_n)    ub_d  <= #(TCO) cram_ub_n;
always @(cram_lb_n)    lb_d  <= #(TCO) cram_lb_n;
initial begin a_d = 0; o_d = 0; oe_d = 0; clk_d = 0; adv_d = 1; cre_d = 0; ce0_d = 1; ce1_d = 1; oen_d = 1; wen_d = 1; ub_d = 1; lb_d = 1; end

wire [15:0] dq;
assign dq = oe_d ? o_d : 16'hzzzz;
reg [15:0] dq_in_r;
always @(dq) dq_in_r <= #(TIN) dq;
assign cram_dq_in = dq_in_r;

wire [31:0] m_err, m_rd, m_wr, m_bursts, m_cel, m_xrow;
psram_model #(.T_POWER(INIT_US * 1000000)) model (
	.clk(clk_d), .host_oe(oe_d), .a(a_d), .dq(dq), .ce0_n(ce0_d), .ce1_n(ce1_d), .adv_n(adv_d), .oe_n(oen_d),
	.we_n(wen_d), .ub_n(ub_d), .lb_n(lb_d), .cre(cre_d),
	.errors(m_err), .n_rd(m_rd), .n_wr(m_wr), .n_bursts(m_bursts), .max_ce_low(m_cel), .n_xrow(m_xrow)
);

// ---------------------------------------------------------------- shadow
reg [15:0] shadow [0:(1<<23)-1];
reg  [1:0] shvalid [0:(1<<23)-1];      // per byte {hi, lo}
integer si;
initial for (si = 0; si < (1<<23); si = si + 1) shvalid[si] = 2'b00;

integer errs = 0, nops = 0, nw = 0, nr = 0, nrb = 0, mism = 0;
integer t_acc, t_first, t_last, cyc;
always @(posedge clk) cyc <= cyc + 1;
initial cyc = 0;

integer lat_first_min = 99999, lat_first_max = 0, w_cyc_max = 0, w_cyc_min = 99999;
integer line_cyc_min = 99999, line_cyc_max = 0;

// 23 bit halfword address of lane l of beat addr
function automatic [22:0] hw(input [20:0] a, input integer l);
	hw = {a, 2'b00} + l;
endfunction

task automatic wr_beat(input [20:0] a, input [63:0] d, input [7:0] b);
	integer l, t0;
	begin
		@(posedge clk);
		addr <= a; din <= d; be <= b; we <= 1'b1;
		t0 = cyc;
		forever begin
			@(posedge clk);
			if (!busy) begin we <= 1'b0; break; end
		end
		for (l = 0; l < 4; l = l + 1) begin
			if (b[7 - 2*l]) begin shadow[hw(a, l)][15:8] = d[63 - 16*l -: 8]; shvalid[hw(a, l)][1] = 1'b1; end
			if (b[6 - 2*l]) begin shadow[hw(a, l)][7:0]  = d[55 - 16*l -: 8]; shvalid[hw(a, l)][0] = 1'b1; end
		end
		// wait until the controller is idle again
		@(posedge clk);
		while (!idle) @(posedge clk);
		if (cyc - t0 > w_cyc_max) w_cyc_max = cyc - t0;
		if (cyc - t0 < w_cyc_min) w_cyc_min = cyc - t0;
		nw = nw + 1;
	end
endtask

task automatic rd_burst(input [20:0] a, input [7:0] n);
	integer got, l, t0;
	reg [63:0] exp;
	begin
		@(posedge clk);
		addr <= a; burstcnt <= n; rd <= 1'b1;
		t0 = cyc;
		forever begin
			@(posedge clk);
			if (!busy) begin rd <= 1'b0; break; end
		end
		got = 0;
		while (got < n) begin
			@(posedge clk);
			if (dout_ready) begin
				if (!busy) begin end else begin errs = errs + 1; $display("%0t busy high with dout_ready", $time); end
				if (got == 0) begin
					if (cyc - t0 < lat_first_min) lat_first_min = cyc - t0;
					if (cyc - t0 > lat_first_max) lat_first_max = cyc - t0;
				end
				for (l = 0; l < 4; l = l + 1) begin
					if (shvalid[hw(a + got, l)][1] && dout[63 - 16*l -: 8] !== shadow[hw(a + got, l)][15:8]) begin
						mism = mism + 1; if (mism < 10) $display("%0t read mismatch beat %0d lane %0d hi: got %h exp %h (addr %h)", $time, got, l, dout[63 - 16*l -: 8], shadow[hw(a + got, l)][15:8], a);
					end
					if (shvalid[hw(a + got, l)][0] && dout[55 - 16*l -: 8] !== shadow[hw(a + got, l)][7:0]) begin
						mism = mism + 1; if (mism < 10) $display("%0t read mismatch beat %0d lane %0d lo: got %h exp %h (addr %h)", $time, got, l, dout[55 - 16*l -: 8], shadow[hw(a + got, l)][7:0], a);
					end
				end
				got = got + 1;
				nrb = nrb + 1;
			end
		end
		if (n == 8'd4) begin
			if (cyc - t0 < line_cyc_min) line_cyc_min = cyc - t0;
			if (cyc - t0 > line_cyc_max) line_cyc_max = cyc - t0;
		end
		@(posedge clk);
		while (!idle) @(posedge clk);
		nr = nr + 1;
	end
endtask

// ---------------------------------------------------------------- stimulus
integer n_ops = 3000, i, r;
reg [20:0] ra;
reg [63:0] rdat;
reg  [7:0] rbe;
integer region;
reg [20:0] base;

function automatic [20:0] pick_addr(input integer sel);
	begin
		case (sel % 4)
			0: pick_addr = {$urandom} % 256;                       // die 0 start
			1: pick_addr = 21'h0FFF00 + ({$urandom} % 256);       // around the die boundary (halfword 0x3FFFFC..)
			2: pick_addr = 21'h1FFF00 + ({$urandom} % 256);       // end of die 1
			default: pick_addr = 21'h100000 + ({$urandom} % 4096);  // die 1 start
		endcase
	end
endfunction

initial begin
	if (!$value$plusargs("N=%d", n_ops)) n_ops = 3000;
	repeat (8) @(posedge clk);
	reset <= 1'b0;
	// power-up wait + register writes
	repeat (INIT_US * 115 + 2000) @(posedge clk);
	while (!idle) @(posedge clk);

	// full beats first so that every later read has data
	for (i = 0; i < 4; i = i + 1) begin
		base = pick_addr(i);
		for (r = 0; r < 128; r = r + 1) wr_beat(base + r, {$urandom, $urandom}, 8'hFF);
	end
	for (i = 0; i < n_ops; i = i + 1) begin
		region = $urandom % 4;
		ra = pick_addr(region);
		case ($urandom % 6)
			0: wr_beat(ra, {$urandom, $urandom}, 8'hFF);
			1: begin   // one word, random byte mask
				rbe = 8'h00; rbe[(($urandom % 4) * 2) +: 2] = ($urandom % 3) + 1;
				wr_beat(ra, {$urandom, $urandom}, rbe);
			end
			2: begin   // two lanes with a gap
				rbe = 8'b11001100 >> (2 * ($urandom % 2));
				wr_beat(ra, {$urandom, $urandom}, rbe);
			end
			3: rd_burst(ra, 8'd1);
			4: rd_burst(ra, 8'd4);                                // 32 byte line, as ddram.sv
			default: rd_burst(ra, 1 + ($urandom % 40));           // long, crosses rows
		endcase
	end
	repeat (200) @(posedge clk);
	$display("tb_psram: %0d writes, %0d read bursts (%0d beats), model: %0d bursts, %0d words read, %0d words written",
	         nw, nr, nrb, m_bursts, m_rd, m_wr);
	$display("tb_psram: first beat latency %0d..%0d clk cycles (%0d..%0d ns), 32 byte line %0d..%0d cycles (%0d..%0d ns)",
	         lat_first_min, lat_first_max, lat_first_min * 8730 / 1000, lat_first_max * 8730 / 1000,
	         line_cyc_min, line_cyc_max, line_cyc_min * 8730 / 1000, line_cyc_max * 8730 / 1000);
	$display("tb_psram: write cycles %0d..%0d, longest CE# low %0d ns", w_cyc_min, w_cyc_max, m_cel / 1000);
	$display("tb_psram: BCR die0 %h die1 %h", model.bcr[0], model.bcr[1]);
	$display("tb_psram: data mismatches %0d, handshake errors %0d, model errors %0d", mism, errs, m_err);
	if (mism == 0 && errs == 0 && m_err == 0 && nr > 0 && model.bcr[0][15] == 1'b0 && model.bcr[1][15] == 1'b0) $display("tb_psram: PASS");
	else $display("tb_psram: FAIL");
	$finish;
end

endmodule
