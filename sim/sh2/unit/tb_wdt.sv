// Block-level differential test of WDT: golden REF_SH7604_WDT vs the DUT, compares every output every clock.
// seed%3==0: cache-like bus handshake and the real clock divider; 1: handshake and independent random strobes;
// 2: bus signals change on any clk and random strobes.
module tb_wdt;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg         EN = 1, RES_N = 1, SBY = 0, NMI = 0;
	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WE = 0, REQ = 0;

	// strobes
	reg [12:0] DIV_CNT = 0;
	reg [12:0] st_real;
	reg [12:0] st_rnd;
	reg        c2, c64, c128, c256, c512, c1024, c4096, c8192;

	wire [31:0] do_d, do_r;
	wire busy_d, busy_r, act_d, act_r, iti_d, iti_r, ovf_d, ovf_r, pres_d, pres_r, mres_d, mres_r, wdtovf_d, wdtovf_r;

	`DUT_MOD dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N), .SBY(SBY), .NMI(NMI), .WDTOVF_N(wdtovf_d),
		.CLK2_CE(c2), .CLK64_CE(c64), .CLK128_CE(c128), .CLK256_CE(c256), .CLK512_CE(c512), .CLK1024_CE(c1024), .CLK4096_CE(c4096), .CLK8192_CE(c8192),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_d), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_d), .IBUS_ACT(act_d),
		.ITI_IRQ(iti_d), .OVF(ovf_d), .PRES(pres_d), .MRES(mres_d));
	REF_SH7604_WDT ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N), .SBY(SBY), .NMI(NMI), .WDTOVF_N(wdtovf_r),
		.CLK2_CE(c2), .CLK64_CE(c64), .CLK128_CE(c128), .CLK256_CE(c256), .CLK512_CE(c512), .CLK1024_CE(c1024), .CLK4096_CE(c4096), .CLK8192_CE(c8192),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_r), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_r), .IBUS_ACT(act_r),
		.ITI_IRQ(iti_r), .OVF(ovf_r), .PRES(pres_r), .MRES(mres_r));

	integer seed, mode, cyc, ncyc;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction

	// coverage
	integer nwcnt = 0, nwcsr = 0, nrst = 0, nrdcsr = 0, nrdcnt = 0, nrdrst = 0, nrdopen = 0, novf = 0, nwovf = 0, nsbyovf = 0, nwres = 0, nclr = 0, nresn = 0, nasync = 0, nbusy = 0;
	reg ovf_p = 0, wo_p = 0, wres_p = 0, wcsrovf_p = 0;
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || busy_d !== busy_r || act_d !== act_r || iti_d !== iti_r || ovf_d !== ovf_r || pres_d !== pres_r || mres_d !== mres_r || wdtovf_d !== wdtovf_r) begin
			$display("MISMATCH wdt at clk %0d: do %08h/%08h busy %b/%b act %b/%b iti %b/%b ovf %b/%b pres %b/%b mres %b/%b wdtovf %b/%b (A=%08h WE=%b REQ=%b)",
				cyc, do_d, do_r, busy_d, busy_r, act_d, act_r, iti_d, iti_r, ovf_d, ovf_r, pres_d, pres_r, mres_d, mres_r, wdtovf_d, wdtovf_r, A, WE, REQ);
			$display("FAIL wdt"); $finish;
		end
		ovf_p <= ref0.WTCSR[7]; wo_p <= !wdtovf_r; wres_p <= ref0.WRES;
		if (ovf_r) nsbyovf <= nsbyovf + 1;
		if (ref0.WTCSR[7] && !ovf_p) novf <= novf + 1;
		if (!ref0.WTCSR[7] && ovf_p) nclr <= nclr + 1;
		if (!wdtovf_r && !wo_p) nwovf <= nwovf + 1;
		if (ref0.WRES && !wres_p) nwres <= nwres + 1;
		if (!RES_N && CE_R) nresn <= nresn + 1;
		if (busy_r) nbusy <= nbusy + 1;
		if (CE_R && ref0.REG_SEL && ref0.IBUS_WE && !REQ && ref0.IBUS_REQ_OLD && (BA == 4'b1100 || BA == 4'b0011)) begin
			if (A[2:0] == 0 && DI[15:8] == 8'h5A) nwcnt <= nwcnt + 1;
			if (A[2:0] == 0 && DI[15:8] == 8'hA5) nwcsr <= nwcsr + 1;
			if (A[2:0] == 2 && (DI[15:8] == 8'h5A || DI[15:8] == 8'hA5)) nrst <= nrst + 1;
		end
		if (CE_F && ref0.REG_SEL && !WE && REQ && !ref0.BUSY[0]) begin
			if (A[2:0] == 0) nrdcsr <= nrdcsr + 1;
			if (A[2:0] == 1) nrdcnt <= nrdcnt + 1;
			if (A[2:0] == 3) nrdrst <= nrdrst + 1;
			if (A[2:0] == 4) nrdopen <= nrdopen + 1;
		end
	end

	// strobes (the same registered pulses as the divider in SH7604.sv, or random)
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin
			DIV_CNT <= 0; st_real <= 0;
		end else if (!RES_N) begin
			DIV_CNT <= 0; st_real <= 0;
		end else if (CE_R) begin
			DIV_CNT <= DIV_CNT + 1;
			st_real[0] <= DIV_CNT[0]; st_real[1] <= &DIV_CNT[1:0]; st_real[2] <= &DIV_CNT[2:0]; st_real[3] <= &DIV_CNT[3:0];
			st_real[4] <= &DIV_CNT[4:0]; st_real[5] <= &DIV_CNT[5:0]; st_real[6] <= &DIV_CNT[6:0]; st_real[7] <= &DIV_CNT[7:0];
			st_real[8] <= &DIV_CNT[8:0]; st_real[9] <= &DIV_CNT[9:0]; st_real[10] <= &DIV_CNT[10:0]; st_real[11] <= &DIV_CNT[11:0];
			st_real[12] <= &DIV_CNT[12:0];
		end
	end
	always @(posedge CLK) begin
		st_rnd[0] <= rnd32(0) % 3 == 0;
		st_rnd[6:1] <= 0;
		st_rnd[1] <= rnd32(0) % 4 == 0; st_rnd[2] <= rnd32(0) % 4 == 0; st_rnd[3] <= rnd32(0) % 4 == 0;
		st_rnd[4] <= rnd32(0) % 4 == 0; st_rnd[5] <= rnd32(0) % 4 == 0; st_rnd[6] <= rnd32(0) % 4 == 0;
		st_rnd[7] <= rnd32(0) % 6 == 0; st_rnd[8] <= rnd32(0) % 6 == 0; st_rnd[9] <= rnd32(0) % 6 == 0;
		st_rnd[10] <= rnd32(0) % 6 == 0; st_rnd[11] <= rnd32(0) % 6 == 0; st_rnd[12] <= rnd32(0) % 6 == 0;
	end
	always_comb begin
		{c8192,c4096,c1024,c512,c256,c128,c64,c2} = 0;
		if (mode == 0) begin
			c2 = st_real[0]; c64 = st_real[5]; c128 = st_real[6]; c256 = st_real[7]; c512 = st_real[8]; c1024 = st_real[9]; c4096 = st_real[11]; c8192 = st_real[12];
		end else begin
			c2 = st_rnd[0]; c64 = st_rnd[5]; c128 = st_rnd[6]; c256 = st_rnd[7]; c512 = st_rnd[8]; c1024 = st_rnd[9]; c4096 = st_rnd[11]; c8192 = st_rnd[12];
		end
	end

	reg quiet = 0;
	always @(posedge CLK) if (RST_N && cyc % 12000 == 0) quiet <= rnd32(0) % 3 != 0;
	task newreq;
		reg [31:0] r;
		reg [7:0] hi;
		begin
			WE <= !quiet && (rnd32(0) % 5) < 2;
			case (rnd32(0) % 16)
				0: A <= 32'hFFFFFE7F;
				1: A <= 32'hFFFFFE90;
				2: A <= 32'hFFFFFE80 ^ (32'h1 << (4 + rnd32(0) % 28));
				3: A <= rnd32(0);
				4,5: A <= 32'hFFFFFE80 | (rnd32(0) % 8);
				6,7,8,9: A <= 32'hFFFFFE80;
				10,11,12: A <= 32'hFFFFFE82;
				default: A <= 32'hFFFFFE80 | (rnd32(0) % 16);
			endcase
			r = rnd32(0);
			hi = (r[3:0] < 6) ? 8'h5A : (r[3:0] < 12) ? 8'hA5 : r[15:8];
			// WTCSR writes: mostly enable the timer with a fast clock; WTCNT writes: near overflow
			DI[31:16] <= r[31:16];
			DI[15:8] <= hi;
			case (r[7:4])
				0,1,2,3: DI[7:0] <= {r[23], r[22], 1'b1, 2'b00, (mode == 0) ? {2'b0, r[16]} : r[18:16]};
				4,5,6: DI[7:0] <= 8'hF8 + r[2:0];
				default: DI[7:0] <= r[23:16];
			endcase
			BA <= (rnd32(0) % 8 == 0) ? rnd32(0) : (rnd32(0) % 2) ? 4'b1100 : 4'b0011;
		end
	endtask

	always @(posedge CLK) if (RST_N) begin
		if (mode == 2) begin
			if (rnd32(0) % 3 == 0) REQ <= ~REQ;
			if (rnd32(0) % 4 == 0) newreq;
			if (rnd32(0) % 2 == 0) DI <= {rnd32(0)};
		end else if (CE_F) begin
			if (REQ && !busy_r) REQ <= 0;
			else if (!REQ && (rnd32(0) % 3 != 0)) begin
				REQ <= 1;
				newreq;
			end
		end
		EN <= (rnd32(0) % 32) != 0;
		if (rnd32(0) % 2000 == 0) SBY <= ~SBY;
		if (rnd32(0) % 40 == 0) NMI <= ~NMI;
	end
	always @(posedge CLK) if (RST_N && CE_R) RES_N <= (rnd32(0) % 20000) != 0;
	initial begin
		if (!$value$plusargs("seed=%d", seed)) seed = 1;
		mode = seed % 3;
		xs = 32'h9E3779B9 ^ (seed * 32'h85EBCA6B);
		if (!$value$plusargs("cycles=%d", ncyc)) ncyc = 400000;
		cyc = 0;
		#37 RST_N = 1;
		forever begin
			#((rnd32(0) % 60000 + 5000) * 10 + 3);
			RST_N = 0; nasync = nasync + 1;
			#(rnd32(0) % 25 + 1);
			RST_N = 1;
		end
	end
	always @(posedge CLK) if (RST_N && cyc >= ncyc) begin
		$display("PASS wdt seed=%0d mode=%0d: %0d clk, wr WTCNT %0d WTCSR %0d RSTCSR %0d, rd WTCSR %0d WTCNT %0d RSTCSR %0d OPEN %0d, WTCSR.OVF set %0d cleared %0d, WDTOVF_N low %0d, WRES %0d, SBY-mode OVF %0d, busy clk %0d, RES_N pulses %0d, async %0d",
			seed, mode, cyc, nwcnt, nwcsr, nrst, nrdcsr, nrdcnt, nrdrst, nrdopen, novf, nclr, nwovf, nwres, nsbyovf, nbusy, nresn, nasync);
		$finish;
	end
endmodule
