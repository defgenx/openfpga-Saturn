// Block-level differential test of the DIVU: golden REF_SH7604_DIVU vs the DUT. Compares every output every clock,
// with the same request/busy handshake the cache uses on the internal bus. Stimulus: structured division programs
// (operands around quotient/remainder/sign boundaries, 32 and 64 bit, all start orders, result reads, DVCR traffic),
// plus random register traffic, plus RES_N pulses aimed at every step of an operation.
//
// IBUS_DO is not compared after a read that was captured while the golden BUSY was set: the bus holds that request and
// the data is re-captured at the first CE_F with BUSY low (the only capture that is consumed).
module tb_divu;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;                         // clock-enable phase
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg         RES_N = 1;
	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WE = 0, REQ = 0;

	wire [31:0] do_d, do_r;
	wire busy_d, busy_r, act_d, act_r, irq_d, irq_r;
	wire [7:0] vec_d, vec_r;

	`DUT_MOD dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(RES_N),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_d), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_d), .IBUS_ACT(act_d), .IRQ(irq_d), .VEC(vec_d));
	REF_SH7604_DIVU ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(RES_N),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_r), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_r), .IBUS_ACT(act_r), .IRQ(irq_r), .VEC(vec_r));

	integer seed, cyc, nreq;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction
	function integer rn(input integer n);   // 0..n-1
		reg [31:0] t;
		begin t = rnd32(0); rn = t % n; end
	endfunction

	function [31:0] interesting(input [31:0] x);
		reg [3:0] k;
		begin
			k = x[3:0];
			case (k)
				0: interesting = 0;
				1: interesting = 1;
				2: interesting = 32'hFFFFFFFF;
				3: interesting = 32'h80000000;
				4: interesting = 32'h7FFFFFFF;
				5: interesting = x >> (x[8:4] % 32);
				6: interesting = ~(x >> (x[8:4] % 32));
				7: interesting = {16'h0, x[31:16]};
				8: interesting = {x[31:16], 16'h0};
				default: interesting = x;
			endcase
		end
	endfunction

	// ---- structured operands
	function [31:0] cls_div(input integer dummy);
		reg [31:0] p, s;
		integer k;
		begin
			k = rn(32);
			p = 32'h1 << k;
			s = rnd32(0) >> rn(32);
			case (rn(26))
				0: cls_div = 0;
				1: cls_div = 1;
				2: cls_div = 32'hFFFFFFFF;
				3: cls_div = 2;
				4: cls_div = 32'hFFFFFFFE;
				5: cls_div = 3;
				6: cls_div = 32'h7FFFFFFF;
				7: cls_div = 32'h80000000;
				8: cls_div = 32'h80000001;
				9: cls_div = 32'h7FFFFFFE;
				10: cls_div = p;
				11: cls_div = -p;
				12: cls_div = p + 1;
				13: cls_div = p - 1;
				14: cls_div = -p - 1;
				15: cls_div = -p + 1;
				16: cls_div = s;
				17: cls_div = -s;
				18: cls_div = rnd32(0);
				19: cls_div = 32'h0000FFFF;
				20: cls_div = 32'h00010000;
				21: cls_div = 32'hFFFF0000;
				22: cls_div = 32'hFFFF0001;
				23: cls_div = 32'h80000000 | s;
				24: cls_div = s | 1;
				default: cls_div = -(s | 1);
			endcase
		end
	endfunction

	function [65:0] cls_q(input integer dummy);   // quotient magnitude
		reg [65:0] one, k;
		integer e;
		begin
			one = 66'd1;
			e = rn(41);
			case (rn(24))
				0: cls_q = 0;
				1: cls_q = 1;
				2: cls_q = 2;
				3: cls_q = (one << 31) - 1;
				4: cls_q = one << 31;
				5: cls_q = (one << 31) + 1;
				6: cls_q = (one << 32) - 1;
				7: cls_q = one << 32;
				8: cls_q = (one << 32) + 1;
				9: cls_q = (one << 33) - 1;
				10: cls_q = one << 33;
				11: cls_q = (one << 33) + 1;
				12: cls_q = (one << 30) - 1;
				13: cls_q = one << 30;
				14: cls_q = (one << 30) + 1;
				15: cls_q = one << e;
				16: cls_q = (one << e) - 1;
				17: cls_q = (one << e) + 1;
				18: cls_q = {34'h0, rnd32(0)} >> rn(33);
				19: cls_q = ({2'h0, rnd32(0), rnd32(0)}) >> (rn(50) + 14);
				20: cls_q = (one << 32) - rn(8);
				21: cls_q = (one << 31) + rn(8);
				22: cls_q = (one << 31) - rn(8);
				default: cls_q = (one << 33) - 1 - rn(4);
			endcase
		end
	endfunction

	reg [63:0] gen_x;
	reg [31:0] gen_d;
	reg        gen_64;
	task gen_operands;
		reg [127:0] qq, dd, rr, xx;
		reg [31:0] lo;
		begin
			gen_d = cls_div(0);
			gen_64 = (rn(5) != 0);
			if (!gen_64) begin
				case (rn(4))
					0: lo = cls_div(0);
					1: lo = interesting(rnd32(0));
					2: lo = gen_d * rn(4) + rn(3) - 1;
					default: lo = rnd32(0);
				endcase
				gen_x = {{32{lo[31]}}, lo};
			end else if (rn(8) == 0) begin
				gen_x = {interesting(rnd32(0)), interesting(rnd32(0))};
			end else begin
				dd = gen_d[31] ? (128'h1_0000_0000 - {96'h0, gen_d}) : {96'h0, gen_d};
				qq = {62'h0, cls_q(0)};
				case (rn(4))
					0: rr = 0;
					1: rr = (dd == 0) ? 128'h0 : (dd - 1);
					2: rr = (dd == 0) ? 128'h0 : (rnd32(0) % dd);
					default: rr = (dd > 1) ? 128'h1 : 128'h0;
				endcase
				xx = qq * dd + rr;
				case (rn(8))
					0: xx = xx + 1;
					1: xx = xx - 1;
					default: ;
				endcase
				if (rn(2) == 0) xx = -xx;
				gen_x = xx[63:0];
			end
		end
	endtask

	// ---- request queue (macro sequences)
	reg [31:0] qa [0:63];
	reg [31:0] qd [0:63];
	reg        qw [0:63];
	reg  [3:0] qb [0:63];
	integer qh = 0, qt = 0;
	task push(input [31:0] a, input [31:0] d, input w, input [3:0] b);
		begin
			qa[qt % 64] = a; qd[qt % 64] = d; qw[qt % 64] = w; qb[qt % 64] = b;
			qt = qt + 1;
		end
	endtask
	task push_div;
		reg [3:0] ba;
		integer i, n;
		begin
			gen_operands;
			ba = 4'hF;
			if (rn(2) == 0) push(32'hFFFFFF00, gen_d, 1, 4'hF);             // DVSR first
			if (gen_64) begin
				push(32'hFFFFFF10, gen_x[63:32], 1, 4'hF);
				if (rn(3) == 0) push(32'hFFFFFF00 + 32'h20 * rn(2) + 32'h10, gen_x[63:32], 1, 4'hF);
				if (rn(2) != 0) push(32'hFFFFFF20 + 32'h14, gen_x[31:0], 1, 4'hF);  // alias of 14
				else push(32'hFFFFFF14, gen_x[31:0], 1, 4'hF);
			end else begin
				if (rn(3) == 0) push(32'hFFFFFF10, rnd32(0), 1, 4'hF);
				push(32'hFFFFFF04, gen_x[31:0], 1, 4'hF);
			end
			// DVSR written after the start is ignored while operating; written late it is the next division's
			if (rn(2) != 0) push(32'hFFFFFF00, gen_d, 1, 4'hF);
			n = rn(5);
			for (i = 0; i < n; i = i + 1) begin
				case (rn(10))
					0: push(32'hFFFFFF14, 0, 0, 4'hF);
					1: push(32'hFFFFFF10, 0, 0, 4'hF);
					2: push(32'hFFFFFF04, 0, 0, 4'hF);
					3: push(32'hFFFFFF08, 0, 0, 4'hF);
					4: push(32'hFFFFFF18, 0, 0, 4'hF);
					5: push(32'hFFFFFF1C, 0, 0, 4'hF);
					6: push(32'hFFFFFF00, 0, 0, 4'hF);
					7: push(32'hFFFFFF18 + 4 * rn(2), rnd32(0), 1, 4'hF);
					8: push(32'hFFFFFF08, rnd32(0), 1, 4'hF);
					default: push(32'hFFFFFF0C, rnd32(0), 1, rn(4) == 0 ? 4'h0 : 4'hF);
				endcase
			end
			// results
			push(32'hFFFFFF14, 0, 0, 4'hF);
			push(32'hFFFFFF10, 0, 0, 4'hF);
			if (rn(2) == 0) push(32'hFFFFFF1C, 0, 0, 4'hF);
			if (rn(2) == 0) push(32'hFFFFFF18, 0, 0, 4'hF);
			if (rn(3) == 0) push(32'hFFFFFF08, 0, 0, 4'hF);
			if (rn(3) == 0) push(32'hFFFFFF08, rn(4), 1, 4'hF);                  // DVCR: OVFIE/OVF
		end
	endtask

	// ---- coverage (golden internals)
	integer nstart = 0, nov = 0, nov64 = 0, nzero = 0, n64 = 0, nsign [0:3];
	integer nlarge = 0, nres_mid = 0, novie = 0;
	reg [5:0] st_prev = 6'h3F;
	reg       d64_c;
	initial begin nsign[0] = 0; nsign[1] = 0; nsign[2] = 0; nsign[3] = 0; end
	always @(posedge CLK) begin
		if (ref0.STEP == 6'd0 && st_prev != 6'd0) begin nstart <= nstart + 1; if (ref0.DIV64) n64 <= n64 + 1; if (ref0.DVSR == 0) nzero <= nzero + 1; end
		if (ref0.STEP == 6'd3 && st_prev != 6'd3) nsign[{ref0.R_SIGN, ref0.D_SIGN}] <= nsign[{ref0.R_SIGN, ref0.D_SIGN}] + 1;
		if (ref0.STEP == 6'd38 && st_prev != 6'd38) begin
			if (ref0.OVF) begin nov <= nov + 1; if (ref0.DIV64) nov64 <= nov64 + 1; if (ref0.DVCR[1]) novie <= novie + 1; end
			else if (ref0.DIV64 && (ref0.DVDNTH != 0 || ref0.R[63:31] != 0)) nlarge <= nlarge + 1;
		end
		st_prev <= ref0.STEP;
	end

	// ---- do-not-compare tracking for IBUS_DO
	wire reg_sel_t = (A[31:6] == 26'h3FFFFFC);
	reg dc = 0;
	always @(posedge CLK) if (CE_F && reg_sel_t && !WE && REQ) dc <= busy_r;

	// ---- RES_N pulses aimed at a random clock of an operation, plus rare random ones
	integer res_dly = -1, res_hold = 0;
	always @(posedge CLK) if (RST_N) begin
		if (ref0.STEP == 6'd0 && st_prev == 6'h3F && res_dly < 0 && res_hold == 0 && rn(3) == 0) res_dly <= rn(90);
		else if (res_dly == 0) begin RES_N <= 0; res_dly <= -1; res_hold <= 1 + ((rn(4) == 0) ? rn(3) : 0); end
		else if (res_dly > 0) res_dly <= res_dly - 1;
		else if (CE_R) begin
			if (res_hold > 0) begin
				res_hold <= res_hold - 1;
				if (res_hold == 1) RES_N <= 1;
			end else if (rn(20000) == 0) begin RES_N <= 0; res_hold <= 1; end
		end
		if (res_dly == 0 && ref0.STEP == 6'd0 && st_prev == 6'h3F) begin end
	end

	// ---- compare and stimulus
	reg [31:0] addr_t, r;
	integer mode;
	integer last_res = 0; reg [5:0] last_res_step = 0;
	always @(posedge CLK) if (CE_R && !RES_N) begin last_res <= cyc; last_res_step <= ref0.STEP; end
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if ((!dc && do_d !== do_r) || busy_d !== busy_r || act_d !== act_r || irq_d !== irq_r || vec_d !== vec_r) begin
			$display("MISMATCH divu at clk %0d: do %08h/%08h busy %b/%b act %b/%b irq %b/%b vec %02h/%02h  (A=%08h WE=%b REQ=%b)", cyc, do_d, do_r, busy_d, busy_r, act_d, act_r, irq_d, irq_r, vec_d, vec_r, A, WE, REQ);
			$display("  last RES_N at clk %0d (ref STEP %0d), ref STEP=%0d", last_res, last_res_step, ref0.STEP);
			$display("FAIL divu"); $finish;
		end
		// stimulus: present requests at CE_F (like the cache), hold until the DIVU is not busy at a CE_F edge
		if (CE_F) begin
			if (REQ && !busy_r) begin
				REQ <= 0;
				nreq <= nreq + 1;
			end else if (!REQ) begin
				if (qh != qt) begin
					if (rn(6) != 0) begin
						REQ <= 1; A <= qa[qh % 64]; DI <= qd[qh % 64]; WE <= qw[qh % 64]; BA <= qb[qh % 64];
						qh = qh + 1;
					end
				end else if (rn(4) != 0) begin
					r = rnd32(0);
					mode = rn(16);
					if (mode < 5) push_div;
					else begin
						REQ <= 1;
						BA <= 4'hF;
						if (mode < 13) begin
							WE <= (rn(3)) != 0;
							case (rn(12))
								0: addr_t = 32'hFFFFFF00;       // DVSR
								1,2: addr_t = 32'hFFFFFF04;     // DVDNT (starts 32-bit)
								3: addr_t = 32'hFFFFFF08;       // DVCR
								4: addr_t = 32'hFFFFFF0C;       // VCRDIV
								5: addr_t = 32'hFFFFFF10;       // DVDNTH
								6,7: addr_t = 32'hFFFFFF14;     // DVDNTL (starts 64-bit)
								8: addr_t = 32'hFFFFFF18;
								9: addr_t = 32'hFFFFFF1C;
								10: addr_t = 32'hFFFFFF20 + rn(8) * 4 + (rn(8) == 0 ? rn(4) : 0);
								default: addr_t = 32'hFFFFFF00 + rn(8) * 4;
							endcase
							A <= addr_t;
							DI <= interesting(rnd32(0));
							if (rn(8) == 0) BA <= 4'b0011 << (2 * rn(2));
							if (rn(16) == 0) BA <= 4'b1100;
						end else begin
							WE <= 0;
							A <= 32'hFFFFFE00 + rn(64) * 4;   // other on-chip registers: DIVU idle
							DI <= rnd32(0);
						end
					end
				end
			end
		end
	end

	integer ncyc;
	initial begin
		if (!$value$plusargs("seed=%d", seed)) seed = 1;
		xs = 32'h9E3779B9 ^ (seed * 32'h85EBCA6B);
		if (!$value$plusargs("cycles=%d", ncyc)) ncyc = 400000;
		cyc = 0; nreq = 0;
		#37 RST_N = 1;
	end
	always @(posedge CLK) if (RST_N && cyc >= ncyc) begin
		$display("PASS divu seed=%0d: %0d clk, %0d requests, %0d divisions (%0d 64-bit, %0d by zero, signs R/D 00=%0d 01=%0d 10=%0d 11=%0d), %0d overflows (%0d 64-bit, %0d with OVFIE), %0d unflagged 64-bit with high quotient bits",
			seed, cyc, nreq, nstart, n64, nzero, nsign[0], nsign[1], nsign[2], nsign[3], nov, nov64, novie, nlarge);
		$finish;
	end
endmodule
