// Block-level differential test of the MULT: golden REF_SH7604_MULT vs the DUT. Compares CBUS_DO and CBUS_BUSY every
// clk_sys. Stimulus: (a) MAC_* sequences exactly as SH_core drives them for MUL.L/DMULS/DMULU/MULS.W/MULU.W/MAC.W/
// MAC.L/LDS/STS/CLRMAC (WE gated by the busy output unless "fast"), with stall gaps where SEL/OP are held and WE is
// low; (b) pure random MAC_*/CBUS_* garbage; (c) rare asynchronous resets.
module tb_mult;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WR = 0, REQ = 0, EN = 1;
	reg  [1:0]  SEL = 0;
	reg  [3:0]  OP = 0;
	reg         S = 0;
	reg         want_we = 0, fast = 0;

	wire [31:0] do_d, do_r;
	wire busy_d, busy_r;
	wire MAC_WE = want_we & (fast | ~busy_r);

	`DUT_MOD dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(1'b1),
		.CBUS_A(A), .CBUS_DI(DI), .CBUS_DO(do_d), .CBUS_WR(WR), .CBUS_BA(BA), .CBUS_REQ(REQ), .CBUS_BUSY(busy_d),
		.MAC_SEL(SEL), .MAC_OP(OP), .MAC_S(S), .MAC_WE(MAC_WE));
	REF_SH7604_MULT ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(1'b1),
		.CBUS_A(A), .CBUS_DI(DI), .CBUS_DO(do_r), .CBUS_WR(WR), .CBUS_BA(BA), .CBUS_REQ(REQ), .CBUS_BUSY(busy_r),
		.MAC_SEL(SEL), .MAC_OP(OP), .MAC_S(S), .MAC_WE(MAC_WE));

	integer seed, cyc, ncyc;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction

	// operand values biased to the saturation and sign boundaries
	function [31:0] interesting(input [31:0] x);
		reg [3:0] k;
		reg [31:0] y;
		begin
			k = x[3:0];
			y = x >> 4;
			case (k)
				0: interesting = 0;
				1: interesting = 1;
				2: interesting = 32'hFFFFFFFF;
				3: interesting = 32'h80000000;
				4: interesting = 32'h7FFFFFFF;
				5: interesting = y >> (y[8:4] % 32);
				6: interesting = ~(y >> (y[8:4] % 32));
				7: interesting = {16'h0, y[15:0]};
				8: interesting = {y[15:0], 16'h0};
				9: interesting = {16'h7FFF, y[15:0]};
				10: interesting = {16'h8000, y[15:0]};
				11: interesting = {16'hFFFF, 16'h8000 | y[15:0]};
				12: interesting = {y[15:0], 16'h7FFF};
				13: interesting = {y[15:0], 16'h8000};
				default: interesting = y;
			endcase
		end
	endfunction

	// one instruction = up to 2 bus steps; step values
	integer nstep, kstep, hold, idle, gmode;
	reg [1:0] s_sel [0:1];
	reg [3:0] s_op  [0:1];
	reg       s_we  [0:1];
	reg [31:0] s_di [0:1];
	reg [31:0] s_a  [0:1];
	reg       s_s;
	integer ins;
	reg [31:0] v;

	task new_instr;
		begin
			ins = rnd32(0) % 24;
			kstep = 0; nstep = 2;
			s_s = rnd32(0);
			s_di[0] = interesting(rnd32(0)); s_di[1] = interesting(rnd32(0));
			s_a[0] = rnd32(0); s_a[1] = rnd32(0);
			if (rnd32(0) % 3 == 0) s_a[1] = s_a[0];
			case (ins)
				0,1,2: begin s_op[0] = 4'b0001; s_op[1] = 4'b0001; end			// MUL.L
				3,4: begin s_op[0] = 4'b0010; s_op[1] = 4'b0010; end			// DMULU.L
				5,6: begin s_op[0] = 4'b0011; s_op[1] = 4'b0011; end			// DMULS.L
				7,8: begin s_op[0] = 4'b1001; s_op[1] = 4'b1001; end			// MAC.L
				9,10: begin s_op[0] = 4'b1001; s_op[1] = 4'b1001; end
				11,12: begin s_op[0] = 4'b1011; s_op[1] = 4'b1011; end			// MAC.W
				13,14: begin s_op[0] = 4'b1011; s_op[1] = 4'b1011; end
				default: ;
			endcase
			if (ins <= 14) begin
				s_sel[0] = 2'b10; s_sel[1] = 2'b01; s_we[0] = 1; s_we[1] = 1;
			end else begin
				nstep = 1; s_we[0] = 1;
				case (ins)
					15: begin s_sel[0] = 2'b11; s_op[0] = 4'b0110; end			// MULU.W
					16: begin s_sel[0] = 2'b11; s_op[0] = 4'b0111; end			// MULS.W
					17: begin s_sel[0] = 2'b10; s_op[0] = 4'b0100; end			// LDS Rm,MACH
					18: begin s_sel[0] = 2'b01; s_op[0] = 4'b0100; end			// LDS Rm,MACL
					19: begin s_sel[0] = rnd32(0) % 2 ? 2'b10 : 2'b01; s_op[0] = 4'b1000; end	// LDS.L
					20: begin s_sel[0] = 2'b11; s_op[0] = 4'b1111; end			// CLRMAC
					21: begin s_sel[0] = rnd32(0) % 2 ? 2'b10 : 2'b01; s_op[0] = 4'b1100; s_we[0] = 0; end	// STS
					22: begin s_sel[0] = rnd32(0) % 2 ? 2'b10 : 2'b01; s_op[0] = 4'b1110; s_we[0] = 0; end	// STS.L
					default: begin s_sel[0] = 2'b00; s_op[0] = 4'b0000; s_we[0] = 0; end	// no MAC
				endcase
				// opposite side of a MAC register pair for variety in the MULx.W / LDS data
				if (s_op[0] == 4'b0100 || s_op[0] == 4'b1000) s_di[0] = interesting(rnd32(0));
			end
		end
	endtask

	integer ngo = 0, nsat_w = 0, nsat_l = 0, ngarb = 0, nmul = 0, nbusy = 0;

	integer rstlen = 0, cnt = 0;
	reg fired;
	always @(posedge CLK) if (cyc > 0) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || busy_d !== busy_r) begin
			$display("MISMATCH mult at clk %0d: do %08h/%08h busy %b/%b  (SEL=%b OP=%b WE=%b)", cyc, do_d, do_r, busy_d, busy_r, SEL, OP, MAC_WE);
			$display("FAIL mult"); $finish;
		end
		if (busy_r) nbusy <= nbusy + 1;
		if (CE_R && EN && MAC_WE && SEL != 0) ngo <= ngo + 1;
		if (dut.OVFW) nsat_w <= nsat_w + 1;
		if (dut.OVFL) nsat_l <= nsat_l + 1;
		// asynchronous reset pulses at arbitrary clk phase
		if (rstlen > 0) begin
			rstlen <= rstlen - 1;
			if (rstlen == 1) RST_N <= 1;
		end else if (rnd32(0) % 30000 == 0) begin
			RST_N <= 0; rstlen <= 1 + rnd32(0) % 3;
		end
		// cache data may change on the F edge too
		if (gmode != 0 && CE_F && (rnd32(0) % 4 == 0)) DI <= interesting(rnd32(0));
		if (CE_R) begin
			EN <= (rnd32(0) % 40) != 0;
			WR <= rnd32(0); REQ <= rnd32(0); BA <= rnd32(0);
			if (gmode != 0) begin
				ngarb <= ngarb + 1;
				SEL <= rnd32(0); OP <= (rnd32(0) % 4 == 0) ? 4'b1011 : (rnd32(0) % 3 == 0) ? 4'b1001 : rnd32(0);
				S <= rnd32(0); want_we <= (rnd32(0) % 3) != 0; fast <= 1;
				DI <= interesting(rnd32(0)); A <= rnd32(0);
				gmode = gmode - 1;
			end else if (idle > 0) begin
				idle = idle - 1; SEL <= 0; OP <= 0; want_we <= 0;
				if (idle == 0) begin
					if (rnd32(0) % 6 == 0) gmode = 1 + rnd32(0) % 40;
					else begin
						new_instr;
						fast <= (rnd32(0) % 8 == 0);
						cnt = 0; hold = (rnd32(0) % 3 == 0) ? rnd32(0) % 4 : 0;
						SEL <= s_sel[0]; OP <= s_op[0]; S <= s_s; DI <= s_di[0]; A <= s_a[0];
						want_we <= s_we[0] && hold == 0;
					end
				end
			end else begin
				// the step presented since the last R edge ends when WE fired (or, without WE, after the hold)
				fired = s_we[kstep] ? (want_we && MAC_WE) : (cnt >= hold);
				if (fired) begin
					kstep = kstep + 1; cnt = 0; hold = (rnd32(0) % 3 == 0) ? rnd32(0) % 4 : 0;
				end else cnt = cnt + 1;
				if (kstep >= nstep) begin
					idle = (rnd32(0) % 3 == 0) ? 1 + rnd32(0) % 12 : 1;
					SEL <= 0; OP <= 0; want_we <= 0;
				end else begin
					SEL <= s_sel[kstep]; OP <= s_op[kstep]; S <= s_s; DI <= s_di[kstep]; A <= s_a[kstep];
					want_we <= s_we[kstep] && cnt >= hold;
				end
			end
		end
	end

	initial begin
		if (!$value$plusargs("seed=%d", seed)) seed = 1;
		xs = 32'h9E3779B9 ^ (seed * 32'h85EBCA6B);
		if (!$value$plusargs("cycles=%d", ncyc)) ncyc = 600000;
		cyc = 0; idle = 3; gmode = 0; hold = 0; nstep = 0; kstep = 0;
		#37 RST_N = 1; cyc = 1;
	end
	always @(posedge CLK) if (cyc >= ncyc) begin
		$display("PASS mult seed=%0d: %0d clk, %0d MAC_WE ops, %0d MAC.W sat overflows, %0d MAC.L sat overflows, %0d garbage R-cycles, %0d busy clk",
			seed, cyc, ngo, nsat_w, nsat_l, ngarb, nbusy);
		$finish;
	end
endmodule
