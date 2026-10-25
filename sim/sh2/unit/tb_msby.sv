// Block-level differential test of MSBY: golden REF_SH7604_MSBY vs the DUT, compares every output every clock.
module tb_msby;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg         EN = 1, RES_N = 1;
	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WE = 0, REQ = 0, SLEEP = 0, WDT_OVF = 0;

	wire [31:0] do_d, do_r;
	wire busy_d, busy_r, act_d, act_r, sby_d, sby_r;

	`DUT_MOD dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_d), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_d), .IBUS_ACT(act_d),
		.SLEEP(SLEEP), .WDT_OVF(WDT_OVF), .SBY(sby_d));
	REF_SH7604_MSBY ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_r), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_r), .IBUS_ACT(act_r),
		.SLEEP(SLEEP), .WDT_OVF(WDT_OVF), .SBY(sby_r));

	integer seed, cyc, ncyc, nwr = 0, nrd = 0, nsb1 = 0, nsb0 = 0, nrdnz = 0, nrst = 0;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction

	reg sby_prev = 0;
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || busy_d !== busy_r || act_d !== act_r || sby_d !== sby_r) begin
			$display("MISMATCH msby at clk %0d: do %08h/%08h busy %b/%b act %b/%b sby %b/%b (A=%08h WE=%b REQ=%b)", cyc, do_d, do_r, busy_d, busy_r, act_d, act_r, sby_d, sby_r, A, WE, REQ);
			$display("FAIL msby"); $finish;
		end
		sby_prev <= sby_r;
		if (sby_r && !sby_prev) nsb1 <= nsb1 + 1;
		if (!sby_r && sby_prev) nsb0 <= nsb0 + 1;
		if (CE_R && EN && REQ && WE && A == 32'hFFFFFE91) nwr <= nwr + 1;
		if (CE_F && REQ && !WE && A == 32'hFFFFFE91) begin nrd <= nrd + 1; if (ref0.SBYCR != 0) nrdnz <= nrdnz + 1; end
		// bus requests (the block never stalls)
		if (CE_F) begin
			if (REQ) REQ <= 0;
			else if (rnd32(0) % 3 != 0) begin
				REQ <= 1;
				WE <= (rnd32(0) % 2) != 0;
				BA <= (rnd32(0) % 4 == 0) ? rnd32(0) : 4'hF;
				DI <= rnd32(0);
				case (rnd32(0) % 8)
					0: A <= 32'hFFFFFE90;
					1: A <= 32'hFFFFFE92;
					2: A <= 32'hFFFFFE91 ^ (32'h1 << (rnd32(0) % 32));
					3: A <= rnd32(0);
					default: A <= 32'hFFFFFE91;
				endcase
			end
		end
		if (rnd32(0) % 4 == 0) SLEEP <= ~SLEEP;
		WDT_OVF <= (rnd32(0) % 24) == 0;
		EN <= (rnd32(0) % 16) != 0;
	end
	always @(posedge CLK) if (RST_N && CE_R) RES_N <= (rnd32(0) % 3000) != 0;
	// rare asynchronous reset pulses
	initial begin
		if (!$value$plusargs("seed=%d", seed)) seed = 1;
		xs = 32'h9E3779B9 ^ (seed * 32'h85EBCA6B);
		if (!$value$plusargs("cycles=%d", ncyc)) ncyc = 400000;
		cyc = 0;
		#37 RST_N = 1;
		forever begin
			#((rnd32(0) % 30000 + 5000) * 10 + 3);
			RST_N = 0; nrst = nrst + 1;
			#(rnd32(0) % 25 + 1);
			RST_N = 1;
		end
	end
	always @(posedge CLK) if (RST_N && cyc >= ncyc) begin
		$display("PASS msby seed=%0d: %0d clk, %0d writes, %0d reads (%0d nonzero), SBY rise %0d fall %0d, %0d async resets", seed, cyc, nwr, nrd, nrdnz, nsb1, nsb0, nrst);
		$finish;
	end
endmodule
