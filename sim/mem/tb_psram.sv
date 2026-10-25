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
reg  [22:0] addr = 0;
reg   [9:0] cnt = 0;
reg         rd = 0, we = 0;
reg  [31:0] din = 0;
reg   [3:0] be = 0;
wire        rlast, idle, rvalid;
wire [15:0] rdata;

wire [21:16] cram_a;
wire [15:0]  cram_dq_out, cram_dq_in;
wire         cram_dq_oe, cram_clk, cram_adv_n, cram_cre, cram_ce0_n, cram_ce1_n, cram_oe_n, cram_we_n, cram_ub_n, cram_lb_n;

psram_sync #(.LATENCY(4), .CLK_KHZ(114546), .INIT_US(INIT_US)) dut (
	.clk(clk), .reset(reset), .init_go(1'b0), .busy(busy), .addr(addr), .cnt(cnt), .rd(rd), .we(we), .din(din), .be(be),
	.rdata(rdata), .rvalid(rvalid), .rlast(rlast), .idle(idle),
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

task automatic wr_words(input [22:0] a0, input integer n, input [31:0] d, input [3:0] b);
	integer t0;
	reg [22:0] a;
	begin
		a = (n == 2) ? {a0[22:1], 1'b0} : a0;      // two word writes are word pair aligned (they never cross a row)
		@(posedge clk);
		addr <= a; cnt <= n; din <= d; be <= b; we <= 1'b1;
		t0 = cyc;
		forever begin
			@(posedge clk);
			if (!busy) begin we <= 1'b0; break; end
		end
		if (b[3]) begin shadow[a][15:8] = d[31:24]; shvalid[a][1] = 1'b1; end
		if (b[2]) begin shadow[a][7:0]  = d[23:16]; shvalid[a][0] = 1'b1; end
		if (n == 2 && b[1]) begin shadow[a + 1][15:8] = d[15:8]; shvalid[a + 1][1] = 1'b1; end
		if (n == 2 && b[0]) begin shadow[a + 1][7:0]  = d[7:0];  shvalid[a + 1][0] = 1'b1; end
		// wait until the controller is idle again
		@(posedge clk);
		while (!idle) @(posedge clk);
		if (cyc - t0 > w_cyc_max) w_cyc_max = cyc - t0;
		if (cyc - t0 < w_cyc_min) w_cyc_min = cyc - t0;
		nw = nw + 1;
	end
endtask

task automatic rd_words(input [22:0] a, input integer n);
	integer got, t0;
	begin
		@(posedge clk);
		addr <= a; cnt <= n; rd <= 1'b1;
		t0 = cyc;
		forever begin
			@(posedge clk);
			if (!busy) begin rd <= 1'b0; break; end
		end
		got = 0;
		while (got < n) begin
			@(posedge clk);
			if (rvalid) begin
				if (got == 0) begin
					if (cyc - t0 < lat_first_min) lat_first_min = cyc - t0;
					if (cyc - t0 > lat_first_max) lat_first_max = cyc - t0;
				end
				if (rlast !== (got == n - 1)) begin errs = errs + 1; $display("%0t rlast %b at word %0d of %0d", $time, rlast, got, n); end
				if (rlast && busy) begin errs = errs + 1; $display("%0t busy high with rlast", $time); end
				if (shvalid[a + got][1] && rdata[15:8] !== shadow[a + got][15:8]) begin
					mism = mism + 1; if (mism < 10) $display("%0t read mismatch word %0d hi: got %h exp %h (addr %h)", $time, got, rdata[15:8], shadow[a + got][15:8], a);
				end
				if (shvalid[a + got][0] && rdata[7:0] !== shadow[a + got][7:0]) begin
					mism = mism + 1; if (mism < 10) $display("%0t read mismatch word %0d lo: got %h exp %h (addr %h)", $time, got, rdata[7:0], shadow[a + got][7:0], a);
				end
				got = got + 1;
				nrb = nrb + 1;
			end
		end
		if (n == 16) begin
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
reg [22:0] ra;
reg [31:0] rdat;
reg  [3:0] rbe;
integer region;
reg [22:0] base;

function automatic [22:0] pick_addr(input integer sel);
	begin
		case (sel % 4)
			0: pick_addr = {$urandom} % 1024;                       // die 0 start
			1: pick_addr = 23'h3FFF00 + ({$urandom} % 512);         // around the die boundary
			2: pick_addr = 23'h7FFE00 + ({$urandom} % 256);         // end of die 1
			default: pick_addr = 23'h400000 + ({$urandom} % 16384); // die 1 start
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

	// full words first so that every later read has data
	for (i = 0; i < 4; i = i + 1) begin
		base = pick_addr(i);
		for (r = 0; r < 256; r = r + 2) wr_words(base + r, 2, $urandom, 4'hF);
	end
	for (i = 0; i < n_ops; i = i + 1) begin
		region = $urandom % 4;
		ra = pick_addr(region);
		case ($urandom % 6)
			0: wr_words(ra, 2, $urandom, 4'hF);
			1: begin rbe = 4'b0; rbe[3:2] = ($urandom % 3) + 1; wr_words(ra, 1, $urandom, rbe); end   // one word, random byte mask
			2: wr_words(ra, 2, $urandom, 4'b1100 >> (2 * ($urandom % 2)));  // one word enabled of two
			3: rd_words(ra, 1);
			4: rd_words(ra, 16);                                           // 32 byte line, as ddram_pocket
			default: rd_words(ra, 1 + ($urandom % 150));                   // long, crosses rows
		endcase
	end
	repeat (200) @(posedge clk);
	$display("tb_psram: %0d writes, %0d read bursts (%0d words), model: %0d bursts, %0d words read, %0d words written",
	         nw, nr, nrb, m_bursts, m_rd, m_wr);
	$display("tb_psram: first word latency %0d..%0d clk cycles (%0d..%0d ns), 32 byte line %0d..%0d cycles (%0d..%0d ns)",
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
