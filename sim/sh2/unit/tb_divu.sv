// Block-level differential test of the DIVU: golden REF_SH7604_DIVU vs the DUT, random register traffic with the
// same request/busy handshake the cache uses on the internal bus. Compares every output every clock.
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

	SH7604_DIVU dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(RES_N),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_d), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_d), .IBUS_ACT(act_d), .IRQ(irq_d), .VEC(vec_d));
	REF_SH7604_DIVU ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(RES_N),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_r), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_r), .IBUS_ACT(act_r), .IRQ(irq_r), .VEC(vec_r));

	integer seed, n, cyc, nreq, ndiv, novf;
	reg [31:0] r;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
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

	integer nstart = 0, novf2 = 0; reg [5:0] st_prev = 6'h3F; reg ovf_prev = 0;
	always @(posedge CLK) begin
		if (ref0.STEP == 6'd0 && st_prev != 6'd0) nstart <= nstart + 1;
		if (ref0.OVF && !ovf_prev) novf2 <= novf2 + 1;
		st_prev <= ref0.STEP; ovf_prev <= ref0.OVF;
	end
	reg [4:0] regsel;
	reg [31:0] addr_t;
	integer mode;
	reg pending;
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || busy_d !== busy_r || act_d !== act_r || irq_d !== irq_r || vec_d !== vec_r) begin
			$display("MISMATCH divu at clk %0d: do %08h/%08h busy %b/%b act %b/%b irq %b/%b vec %02h/%02h  (A=%08h WE=%b REQ=%b)", cyc, do_d, do_r, busy_d, busy_r, act_d, act_r, irq_d, irq_r, vec_d, vec_r, A, WE, REQ);
			$display("FAIL divu"); $finish;
		end
		// stimulus: present requests at CE_F (like the cache), hold until the DIVU is not busy at a CE_F edge
		if (CE_F) begin
			if (REQ && !busy_r) begin
				REQ <= 0;
				nreq <= nreq + 1;
			end else if (!REQ) begin
				if (rnd32(0) % 4 != 0) begin
					r = rnd32(0);
					mode = rnd32(0) % 16;
					REQ <= 1;
					BA <= 4'hF;
					if (mode < 12) begin
						WE <= (rnd32(0) % 3) != 0;
						case (rnd32(0) % 12)
							0: addr_t = 32'hFFFFFF00;       // DVSR
							1,2: addr_t = 32'hFFFFFF04;     // DVDNT (starts 32-bit)
							3: addr_t = 32'hFFFFFF08;       // DVCR
							4: addr_t = 32'hFFFFFF0C;       // VCRDIV
							5: addr_t = 32'hFFFFFF10;       // DVDNTH
							6,7: addr_t = 32'hFFFFFF14;     // DVDNTL (starts 64-bit)
							8: addr_t = 32'hFFFFFF18;
							9: addr_t = 32'hFFFFFF1C;
							10: addr_t = 32'hFFFFFF20 + (rnd32(0) % 8) * 4;
							default: addr_t = 32'hFFFFFF00 + (rnd32(0) % 8) * 4;
						endcase
						A <= addr_t;
						DI <= interesting(rnd32(0));
						if (rnd32(0) % 8 == 0) BA <= 4'b0011 << (2 * (rnd32(0) % 2));
						if (rnd32(0) % 16 == 0) BA <= 4'b1100;
					end else begin
						WE <= 0;
						A <= 32'hFFFFFE00 + (rnd32(0) % 64) * 4;   // other on-chip registers: DIVU idle
						DI <= rnd32(0);
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
		cyc = 0; nreq = 0; ndiv = 0; novf = 0; pending = 0;
		#37 RST_N = 1;
	end
	// occasional module reset pulse (RES_N) to cover the reset path
	always @(posedge CLK) if (RST_N && CE_R) RES_N <= (rnd32(0) % 4000) != 0;
	always @(posedge CLK) if (RST_N && cyc >= ncyc) begin
		$display("PASS divu seed=%0d: %0d clk, %0d requests, %0d divisions started, %0d overflows", seed, cyc, nreq, nstart, novf2);
		$finish;
	end
endmodule
