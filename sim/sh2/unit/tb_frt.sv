// Block-level differential test of FRT: golden REF_SH7604_FRT vs the DUT, compares every output every clock.
// seed%3==0: cache-like bus handshake and the real clock divider; 1: handshake and independent random strobes;
// 2: bus signals change on any clk and random strobes.
module tb_frt;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg         EN = 1, RES_N = 1, SBY = 0, FTCI = 0, FTI = 0;
	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WE = 0, REQ = 0;

	reg [12:0] DIV_CNT = 0, st_real = 0, st_rnd = 0;
	reg        c4, c8, c32, c128;

	wire [31:0] do_d, do_r;
	wire busy_d, busy_r, act_d, act_r, ftoa_d, ftoa_r, ftob_d, ftob_r, ici_d, ici_r, ocia_d, ocia_r, ocib_d, ocib_r, ovi_d, ovi_r;

	`DUT_MOD dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N), .SBY(SBY),
		.FTOA(ftoa_d), .FTOB(ftob_d), .FTCI(FTCI), .FTI(FTI), .CLK4_CE(c4), .CLK8_CE(c8), .CLK32_CE(c32), .CLK128_CE(c128),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_d), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_d), .IBUS_ACT(act_d),
		.ICI_IRQ(ici_d), .OCIA_IRQ(ocia_d), .OCIB_IRQ(ocib_d), .OVI_IRQ(ovi_d));
	REF_SH7604_FRT ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N), .SBY(SBY),
		.FTOA(ftoa_r), .FTOB(ftob_r), .FTCI(FTCI), .FTI(FTI), .CLK4_CE(c4), .CLK8_CE(c8), .CLK32_CE(c32), .CLK128_CE(c128),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_r), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(busy_r), .IBUS_ACT(act_r),
		.ICI_IRQ(ici_r), .OCIA_IRQ(ocia_r), .OCIB_IRQ(ocib_r), .OVI_IRQ(ovi_r));

	integer seed, mode, cyc, ncyc;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction

	// coverage
	integer nocfa = 0, nocfb = 0, novf = 0, nicf = 0, nclra = 0, nclrb = 0, nclro = 0, nclri = 0, nftoa = 0, nftob = 0, ncapt = 0, nhold = 0, nbusy = 0, nccl = 0,
	        nwfrc = 0, nwocr = 0, nrfrc = 0, nrico = 0, nrst = 0, nasync = 0, nsby = 0, nirq = 0, nftcsrw = 0;
	reg [3:0] fl_p = 0; reg ftoa_p = 0, ftob_p = 0; reg [15:0] icr_p = 0; reg [15:0] frc_p = 0;
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || busy_d !== busy_r || act_d !== act_r || ftoa_d !== ftoa_r || ftob_d !== ftob_r || ici_d !== ici_r || ocia_d !== ocia_r ||
		    ocib_d !== ocib_r || ovi_d !== ovi_r) begin
			$display("MISMATCH frt at clk %0d: do %08h/%08h busy %b/%b act %b/%b ftoa %b/%b ftob %b/%b irq %b%b%b%b/%b%b%b%b (A=%08h WE=%b REQ=%b) frc=%04h", cyc, do_d, do_r, busy_d, busy_r, act_d, act_r,
				ftoa_d, ftoa_r, ftob_d, ftob_r, ici_d, ocia_d, ocib_d, ovi_d, ici_r, ocia_r, ocib_r, ovi_r, A, WE, REQ, ref0.FRC);
			$display("FAIL frt"); $finish;
		end
		fl_p <= {ref0.FTCSR.ICF, ref0.FTCSR.OCFA, ref0.FTCSR.OCFB, ref0.FTCSR.OVF}; ftoa_p <= ftoa_r; ftob_p <= ftob_r; frc_p <= ref0.FRC;
		if (ref0.FTCSR.OCFA && !fl_p[2]) nocfa <= nocfa + 1;
		if (ref0.FTCSR.OCFB && !fl_p[1]) nocfb <= nocfb + 1;
		if (ref0.FTCSR.OVF  && !fl_p[0]) novf <= novf + 1;
		if (ref0.FTCSR.ICF  && !fl_p[3]) nicf <= nicf + 1;
		if (!ref0.FTCSR.OCFA && fl_p[2] && RES_N && !SBY) nclra <= nclra + 1;
		if (!ref0.FTCSR.OCFB && fl_p[1] && RES_N && !SBY) nclrb <= nclrb + 1;
		if (!ref0.FTCSR.OVF  && fl_p[0] && RES_N && !SBY) nclro <= nclro + 1;
		if (!ref0.FTCSR.ICF  && fl_p[3] && RES_N && !SBY) nclri <= nclri + 1;
		if (ftoa_r != ftoa_p) nftoa <= nftoa + 1;
		if (ftob_r != ftob_p) nftob <= nftob + 1;
		if (ref0.ICR != icr_p) ncapt <= ncapt + 1;
		icr_p <= ref0.ICR;
		if (CE_R && EN && ref0.ICR_READ && ref0.FTCSR.ICF) nhold <= nhold + 1;
		if (busy_r) nbusy <= nbusy + 1;
		if (CE_R && ref0.FRC == 0 && frc_p != 0 && frc_p != 16'hFFFF) nccl <= nccl + 1;
		if (CE_R && REQ && WE && A[3:0] == 3 && ref0.REG_SEL) nwfrc <= nwfrc + 1;
		if (CE_R && REQ && WE && A[3:0] == 5 && ref0.REG_SEL) nwocr <= nwocr + 1;
		if (CE_F && REQ && !WE && A[3:0] == 2 && ref0.REG_SEL) nrfrc <= nrfrc + 1;
		if (CE_F && REQ && !WE && A[3:0] == 8 && ref0.REG_SEL) nrico <= nrico + 1;
		if (CE_R && REQ && WE && A[3:0] == 1 && ref0.REG_SEL) nftcsrw <= nftcsrw + 1;
		if (!RES_N && CE_R) nrst <= nrst + 1;
		if (SBY && CE_R) nsby <= nsby + 1;
		if (ici_r | ocia_r | ocib_r | ovi_r) nirq <= nirq + 1;
	end

	// strobes: the registered pulses of the divider in SH7604.sv, or random
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin DIV_CNT <= 0; st_real <= 0; end
		else if (!RES_N) begin DIV_CNT <= 0; st_real <= 0; end
		else if (CE_R) begin
			DIV_CNT <= DIV_CNT + 1;
			st_real[2] <= &DIV_CNT[1:0]; st_real[3] <= &DIV_CNT[2:0]; st_real[5] <= &DIV_CNT[4:0]; st_real[7] <= &DIV_CNT[6:0];
		end
	end
	always @(posedge CLK) begin
		st_rnd[2] <= rnd32(0) % 4 == 0; st_rnd[3] <= rnd32(0) % 3 == 0; st_rnd[5] <= rnd32(0) % 6 == 0; st_rnd[7] <= rnd32(0) % 10 == 0;
	end
	always_comb begin
		c4 = mode == 0 ? st_real[2] : st_rnd[2]; c8 = mode == 0 ? st_real[3] : st_rnd[3];
		c32 = mode == 0 ? st_real[5] : st_rnd[5]; c128 = mode == 0 ? st_real[7] : st_rnd[7];
	end

	// bus stimulus
	reg [31:0] r;
	reg [3:0] nexta = 0; reg nextv = 0;
	function [7:0] nearby(input [7:0] x);
		begin
			case (x[2:0])
				0: nearby = 8'hFF;
				1: nearby = 8'hFE;
				2: nearby = 8'h00;
				default: nearby = x;
			endcase
		end
	endfunction
	reg quiet = 0;
	always @(posedge CLK) if (RST_N && cyc % 15000 == 0) quiet <= rnd32(0) % 3 != 0;
	task newreq;
		reg [15:0] t;
		reg [3:0] ad;
		begin
			r = rnd32(0);
			ad = r[3:0] % 10;
			if (nextv && r[7:4] < 12) begin ad = nexta; nextv = 0; end
			else nextv = 0;
			if (r[3:0] == 15) ad = r[15:12];
			WE <= !quiet && (rnd32(0) % 5) < 3;
			case (r[11:8])
				0: A <= 32'hFFFFFE0F;
				1: A <= 32'hFFFFFE1A + (r[19:16] % 6);
				2: A <= 32'hFFFFFE10 + (r[3:0] % 10) ^ (32'h1 << (4 + (rnd32(0) >> 3) % 28));
				3: A <= rnd32(0);
				default: A <= 32'hFFFFFE10 + ad;
			endcase
			r = rnd32(0);
			DI <= {r[31:8], r[7:0]};
			BA <= 4'hF;
			if (ad == 2 || ad == 4) begin nexta = ad + 1; nextv = 1; end
			if (ad == 8) begin nexta = 9; nextv = 1; end
			case (ad)
				0: DI[31:24] <= r[31:24] & ((r[2:0] == 0) ? 8'h00 : 8'hFF);
				1: DI[23:16] <= (r[2:0] < 3) ? (r[3] ? 8'h01 : 8'h00) : (r[2:0] < 5) ? 8'hFF & ~(8'h8E & {r[7],3'b0,r[6:4]} ) & {8{r[3]}} | (r[4] ? 8'h01 : 8'h00) : r[23:16];
				2: DI[15:8] <= nearby(r[15:8]);
				3: DI[7:0] <= (r[2:0] < 4) ? (8'hF0 | r[19:16]) : r[7:0];
				4: DI[31:24] <= (r[2:0] < 4) ? ref0.FRC[15:8] : r[31:24];
				5: DI[23:16] <= ref0.FRC[7:0] + r[25:20] % 32 + 4;
				6: DI[15:8] <= {r[15], 5'b0, (mode == 0) ? {1'b0, r[8]} : r[9:8]} | ((r[16]) ? 8'h00 : r[15:8] & 8'h7C);
				7: DI[7:0] <= r[7:0];
				default: ;
			endcase
		end
	endtask

	always @(posedge CLK) if (RST_N) begin
		if (mode == 2) begin
			if (rnd32(0) % 3 == 0) REQ <= ~REQ;
			if (rnd32(0) % 3 == 0) newreq;
		end else if (CE_F) begin
			if (REQ && !busy_r) REQ <= 0;
			else if (!REQ && (rnd32(0) % 3 != 0)) begin REQ <= 1; newreq; end
		end
		EN <= (rnd32(0) % 40) != 0;
		if (rnd32(0) % 40000 == 0) SBY <= 1; else if (SBY && rnd32(0) % 30 == 0) SBY <= 0;
		if (rnd32(0) % 25 == 0) FTCI <= ~FTCI;
		if (rnd32(0) % 60 == 0) FTI <= ~FTI;
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
		$display("PASS frt seed=%0d mode=%0d: %0d clk, flag sets OCFA %0d OCFB %0d OVF %0d ICF %0d, clears %0d %0d %0d %0d, FTOA/B toggles %0d %0d, ICR value changes %0d (ICR reads while ICF %0d), FRC clear-on-match %0d, wr FRC %0d OCR %0d FTCSR %0d, rd FRC %0d ICR %0d, busy clk %0d, irq clk %0d, RES_N %0d SBY %0d async %0d",
			seed, mode, cyc, nocfa, nocfb, novf, nicf, nclra, nclrb, nclro, nclri, nftoa, nftob, ncapt, nhold, nccl, nwfrc, nwocr, nftcsrw, nrfrc, nrico, nbusy, nirq, nrst, nsby, nasync);
		$finish;
	end
endmodule
