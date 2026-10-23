// Block-level differential test of the DMAC: golden REF_SH7604_DMAC vs the DUT with identical stimulus, every output
// compared every clk_sys.  IBUS accesses change on CE_F edges (as the cache drives them); every other input changes on
// any clk.  +wild=1 lets the IBUS signals change on any clk too.
module tb_dmac;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg         RES_N = 1, NMI_N = 1;
	reg         DREQ0 = 0, DREQ1 = 0, RXI = 0, TXI = 0;
	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WE = 0, REQ = 0;
	reg  [31:0] DBUS_DI = 0;
	reg         DBUS_WAIT = 0, BSC_ACK = 0;

	wire [31:0] do_d, do_r, da_d, da_r, dd_d, dd_r;
	wire [3:0]  dba_d, dba_r;
	wire        act_d, act_r, dack0_d, dack0_r, dack1_d, dack1_r, dwe_d, dwe_r, dreq_d, dreq_r, dlock_d, dlock_r, dburst_d, dburst_r;
	wire        irq0_d, irq0_r, irq1_d, irq1_r;
	wire [7:0]  vec0_d, vec0_r, vec1_d, vec1_r;

	`DUT_MOD dut (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(RES_N), .NMI_N(NMI_N),
		.DREQ0(DREQ0), .DACK0(dack0_d), .DREQ1(DREQ1), .DACK1(dack1_d), .RXI_IRQ(RXI), .TXI_IRQ(TXI),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_d), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_ACT(act_d),
		.DBUS_A(da_d), .DBUS_DI(DBUS_DI), .DBUS_DO(dd_d), .DBUS_BA(dba_d), .DBUS_WE(dwe_d), .DBUS_REQ(dreq_d),
		.DBUS_LOCK(dlock_d), .DBUS_BURST(dburst_d), .DBUS_WAIT(DBUS_WAIT), .BSC_ACK(BSC_ACK),
		.DMAC0_IRQ(irq0_d), .DMAC0_VEC(vec0_d), .DMAC1_IRQ(irq1_d), .DMAC1_VEC(vec1_d));
	REF_SH7604_DMAC ref0 (.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1), .RES_N(RES_N), .NMI_N(NMI_N),
		.DREQ0(DREQ0), .DACK0(dack0_r), .DREQ1(DREQ1), .DACK1(dack1_r), .RXI_IRQ(RXI), .TXI_IRQ(TXI),
		.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(do_r), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_ACT(act_r),
		.DBUS_A(da_r), .DBUS_DI(DBUS_DI), .DBUS_DO(dd_r), .DBUS_BA(dba_r), .DBUS_WE(dwe_r), .DBUS_REQ(dreq_r),
		.DBUS_LOCK(dlock_r), .DBUS_BURST(dburst_r), .DBUS_WAIT(DBUS_WAIT), .BSC_ACK(BSC_ACK),
		.DMAC0_IRQ(irq0_r), .DMAC0_VEC(vec0_r), .DMAC1_IRQ(irq1_r), .DMAC1_VEC(vec1_r));

	integer seed, cyc, ncyc, wild;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction

	function [31:0] addr_val(input [31:0] x);
		reg [3:0] k;
		begin
			k = x[3:0];
			case (k)
				0: addr_val = 0;
				1: addr_val = 32'hFFFFFFFC;
				2: addr_val = 32'h07FFFFFC + {30'd0, x[5:4]};
				3: addr_val = 32'h06000000 + {x[9:4], 2'b00};
				4: addr_val = 32'h0FFFFFF0 + {28'd0, x[7:4]};
				5: addr_val = 32'h00200000 + x[15:4];
				6: addr_val = 32'h0000FF00 + x[11:4];
				7: addr_val = 32'h80000000 + x[12:4];
				8: addr_val = 32'hFFFFFFF0 + {28'd0, x[7:4]};
				default: addr_val = {x[31:4], x[3:0]} ^ (x >> 7);
			endcase
		end
	endfunction

	// ---- mismatch check ----
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || act_d !== act_r || dack0_d !== dack0_r || dack1_d !== dack1_r || da_d !== da_r || dd_d !== dd_r ||
		    dba_d !== dba_r || dwe_d !== dwe_r || dreq_d !== dreq_r || dlock_d !== dlock_r || dburst_d !== dburst_r ||
		    irq0_d !== irq0_r || irq1_d !== irq1_r || vec0_d !== vec0_r || vec1_d !== vec1_r) begin
			$display("MISMATCH dmac at clk %0d (CE_F=%b): do %08h/%08h act %b/%b dack %b%b/%b%b A %08h/%08h do %08h/%08h ba %h/%h we %b/%b req %b/%b lock %b/%b burst %b/%b irq %b%b/%b%b vec %02h%02h/%02h%02h  (IBUS A=%08h WE=%b REQ=%b)",
				cyc, CE_F, do_d, do_r, act_d, act_r, dack0_d, dack1_d, dack0_r, dack1_r, da_d, da_r, dd_d, dd_r, dba_d, dba_r, dwe_d, dwe_r,
				dreq_d, dreq_r, dlock_d, dlock_r, dburst_d, dburst_r, irq0_d, irq1_d, irq0_r, irq1_r, vec0_d, vec1_d, vec0_r, vec1_r, A, WE, REQ);
			$display("FAIL dmac"); $finish;
		end
	end

	// ---- coverage (inside the golden) ----
	integer c_rd = 0, c_wr = 0, c_ev = 0, c_ts[4], c_te0 = 0, c_te1 = 0, c_irq0 = 0, c_irq1 = 0, c_burst = 0, c_lock = 0;
	integer c_sa = 0, c_sa_am0 = 0, c_dual = 0, c_tb = 0, c_ch1 = 0, c_wait = 0, c_both = 0, c_prio = 0, c_ar = 0, c_dreq = 0, c_rxi = 0, c_txi = 0;
	integer c_smi = 0, c_smd = 0, c_dmi = 0, c_dmd = 0, c_ds = 0, c_ibr = 0, c_ibw = 0, c_nmi = 0, c_res = 0, c_dack = 0, c_tcr0 = 0;
	reg te0_o = 0, te1_o = 0;
	initial begin c_ts[0] = 0; c_ts[1] = 0; c_ts[2] = 0; c_ts[3] = 0; end
	wire ev = CE_F && (ref0.DMA_RD || ref0.DMA_WR) && !DBUS_WAIT;
	always @(posedge CLK) if (RST_N) begin
		te0_o <= ref0.CHCR[0].TE; te1_o <= ref0.CHCR[1].TE;
		if (ref0.CHCR[0].TE && !te0_o) c_te0 <= c_te0 + 1;
		if (ref0.CHCR[1].TE && !te1_o) c_te1 <= c_te1 + 1;
		if (irq0_r) c_irq0 <= c_irq0 + 1;
		if (irq1_r) c_irq1 <= c_irq1 + 1;
		if (dburst_r) c_burst <= c_burst + 1;
		if (dlock_r) c_lock <= c_lock + 1;
		if ((ref0.DMA_RD || ref0.DMA_WR) && DBUS_WAIT && CE_F) c_wait <= c_wait + 1;
		if (!ref0.DMA_REQ && ref0.CH_REQ[0] && ref0.CH_REQ[1] && ref0.DMAOR.PR && CE_R) c_both <= c_both + 1;
		if (ref0.DMA_REQ_CLR && ref0.RB_PRIO && ref0.DMA_CH) c_prio <= c_prio + 1;
		if (!NMI_N) c_nmi <= c_nmi + 1;
		if (!RES_N && CE_R) c_res <= c_res + 1;
		if (CE_F && REQ && !WE && (A >= 32'hFFFFFF80 && A <= 32'hFFFFFFB3 || A == 32'hFFFFFE71 || A == 32'hFFFFFE72)) c_ibr <= c_ibr + 1;
		if (CE_R && REQ && WE && (A >= 32'hFFFFFF80 && A <= 32'hFFFFFFB3 || A == 32'hFFFFFE71 || A == 32'hFFFFFE72)) c_ibw <= c_ibw + 1;
		if (!dack0_r || !dack1_r) c_dack <= c_dack + 1;
		if (ev) begin
			c_ev <= c_ev + 1;
			if (ref0.DMA_RD) c_rd <= c_rd + 1;
			if (ref0.DMA_WR) c_wr <= c_wr + 1;
			c_ts[ref0.CHCR[ref0.DMA_CH].TS] <= c_ts[ref0.CHCR[ref0.DMA_CH].TS] + 1;
			if (ref0.DMA_CH) c_ch1 <= c_ch1 + 1;
			if (ref0.CHCR[ref0.DMA_CH].TA) c_sa <= c_sa + 1;
			if (ref0.CHCR[ref0.DMA_CH].TA && !ref0.CHCR[ref0.DMA_CH].AM) c_sa_am0 <= c_sa_am0 + 1;
			if (!ref0.CHCR[ref0.DMA_CH].TA) c_dual <= c_dual + 1;
			if (ref0.CHCR[ref0.DMA_CH].TB) c_tb <= c_tb + 1;
			if (ref0.CHCR[ref0.DMA_CH].AR) c_ar <= c_ar + 1;
			if (!ref0.CHCR[ref0.DMA_CH].AR && ref0.DRCR[ref0.DMA_CH].RS == 0) c_dreq <= c_dreq + 1;
			if (!ref0.CHCR[ref0.DMA_CH].AR && ref0.DRCR[ref0.DMA_CH].RS == 1) c_rxi <= c_rxi + 1;
			if (!ref0.CHCR[ref0.DMA_CH].AR && ref0.DRCR[ref0.DMA_CH].RS == 2) c_txi <= c_txi + 1;
			if (ref0.DMA_RD && ref0.CHCR[ref0.DMA_CH].SM == 1) c_smi <= c_smi + 1;
			if (ref0.DMA_RD && ref0.CHCR[ref0.DMA_CH].SM == 2) c_smd <= c_smd + 1;
			if (ref0.DMA_WR && ref0.CHCR[ref0.DMA_CH].DM == 1) c_dmi <= c_dmi + 1;
			if (ref0.DMA_WR && ref0.CHCR[ref0.DMA_CH].DM == 2) c_dmd <= c_dmd + 1;
			if (ref0.CHCR[ref0.DMA_CH].DS) c_ds <= c_ds + 1;
		end
	end

	// ---- stimulus ----
	// DBUS responder / sideband inputs: random every clk with a seed-dependent wait density
	integer pwait, pack, pdreq;
	always @(posedge CLK) if (RST_N) begin
		DBUS_DI <= rnd32(0);
		if (rnd32(0) % 16 < pwait) DBUS_WAIT <= 1; else DBUS_WAIT <= 0;
		BSC_ACK <= (rnd32(0) % 16) < pack;
		if (rnd32(0) % 16 < pdreq) DREQ0 <= ~DREQ0;
		if (rnd32(0) % 16 < pdreq) DREQ1 <= ~DREQ1;
		if (rnd32(0) % 24 == 0) RXI <= ~RXI;
		if (rnd32(0) % 24 == 0) TXI <= ~TXI;
		NMI_N <= (rnd32(0) % 6000) != 0;
		RES_N <= (rnd32(0) % 5000) != 0;
	end

	// register offsets in FFFFFF80 window
	function [7:0] regoff(input [3:0] k);
		case (k)
			0: regoff = 8'h80; 1: regoff = 8'h84; 2: regoff = 8'h88; 3: regoff = 8'h8C;
			4: regoff = 8'h90; 5: regoff = 8'h94; 6: regoff = 8'h98; 7: regoff = 8'h9C;
			8: regoff = 8'hA0; 9: regoff = 8'hA8; 10: regoff = 8'hB0; 11: regoff = 8'hA4;
			12: regoff = 8'hAC; 13: regoff = 8'hB4; 14: regoff = 8'h8C; default: regoff = 8'h9C;
		endcase
	endfunction

	function [31:0] chcr_val(input integer dummy);
		reg [31:0] r;
		begin
			r = rnd32(0);
			// DM[15:14] SM[13:12] TS[11:10] AR[9] AM[8] AL[7] DS[6] DL[5] TB[4] TA[3] IE[2] TE[1] DE[0]
			chcr_val = r & 32'h0000FFFD;           // TE written as 0
			chcr_val[0] = (r[20:17] != 0);          // DE mostly 1
			chcr_val[9] = (r[22:21] != 0);          // AR often (auto request transfers run immediately)
			if (r[26:23] == 0) chcr_val[1] = 1;
			if (r[29:27] == 0) chcr_val[3] = 1;     // TA: single address
		end
	endfunction

	function [31:0] tcr_val(input integer dummy);
		reg [31:0] r;
		begin
			r = rnd32(0);
			case (r[3:0])
				0: tcr_val = 0;
				1: tcr_val = 32'h00FFFFFF;
				2: tcr_val = {8'h00, r[31:8]};
				3: tcr_val = r;
				4, 5, 6: tcr_val = 1;
				7: tcr_val = 2;
				default: tcr_val = 1 + (r[12:4] % 9);
			endcase
		end
	endfunction

	integer step, gap, hold, curch, mode;
	reg [3:0] rk;
	reg [31:0] r, av;
	reg        newreq, wr_now;
	task issue(input [31:0] a, input w, input [31:0] d);
		begin
			A <= a; WE <= w; DI <= d; REQ <= 1; BA <= 4'hF;
			if (rnd32(0) % 10 == 0) BA <= rnd32(0);
			hold = 0;
			if (rnd32(0) % 5 == 0) hold = 1 + rnd32(0) % 2;
		end
	endtask
	task drop;
		begin
			REQ <= 0;
			// garbage on the bus while idle
			A <= (rnd32(0) % 2) ? (32'hFFFFFF80 + (rnd32(0) % 64)) : (32'hFFFFFE00 + (rnd32(0) % 256));
			WE <= rnd32(0); DI <= rnd32(0);
			gap = rnd32(0) % 6;
		end
	endtask
	always @(posedge CLK) if (RST_N && (CE_F || wild != 0)) begin
		if (REQ && hold > 0) hold = hold - 1;
		else if (!REQ && gap > 0) gap = gap - 1;
		else begin
			if (REQ) begin
				if (rnd32(0) % 3 != 0) drop;
				else gap = 0;   // back-to-back access
			end
			if (!REQ || wild != 0 || gap == 0) begin
				if (step > 0) begin
					// scripted programming sequence for channel curch
					case (step)
						7: issue(32'hFFFFFF00 + regoff(curch ? 4'd7 : 4'd3), 0, 0);     // read CHCR (arms the TE clear)
						6: issue(32'hFFFFFF00 + regoff(curch ? 4'd4 : 4'd0), 1, addr_val(rnd32(0)));  // SAR
						5: issue(32'hFFFFFF00 + regoff(curch ? 4'd5 : 4'd1), 1, addr_val(rnd32(0)));  // DAR
						4: issue(32'hFFFFFF00 + regoff(curch ? 4'd6 : 4'd2), 1, tcr_val(0));          // TCR
						3: begin
							r = rnd32(0);
							issue(r[0] ? 32'hFFFFFE71 : 32'hFFFFFE72, 1, {8'h00, r[7:0], r[15:8], 8'h00});   // DRCR
						end
						2: issue(32'hFFFFFF00 + regoff(curch ? 4'd7 : 4'd3), 1, chcr_val(0));       // CHCR
						1: begin
							r = rnd32(0);
							issue(32'hFFFFFFB0, 1, (r[2:0] != 0) ? {28'd0, r[8], 2'b00, 1'b1} : r);   // DMAOR
						end
					endcase
					step = step - 1;
				end else begin
					r = rnd32(0);
					mode = r[7:0] % 32;
					if (mode < 4) begin
						step = 7; curch = r[8];
						issue(32'hFFFFFF00 + regoff(curch ? 4'd7 : 4'd3), 0, 0);
						step = 6;
					end else if (mode < 14) begin
						// random read of a DMAC register
						issue(32'hFFFFFF00 + regoff(r[15:12]), 0, 0);
						if (r[19:16] == 0) issue(32'hFFFFFE71 + r[20], 0, 0);
					end else if (mode < 22) begin
						// random write, random register, structured value where it matters
						rk = r[15:12];
						case (rk)
							3, 7, 14, 15: issue(32'hFFFFFF00 + regoff(rk), 1, chcr_val(0));
							2, 6: issue(32'hFFFFFF00 + regoff(rk), 1, tcr_val(0));
							0, 1, 4, 5: issue(32'hFFFFFF00 + regoff(rk), 1, addr_val(rnd32(0)));
							10: issue(32'hFFFFFFB0, 1, (r[19:17] != 0) ? {28'd0, r[20], 2'b00, 1'b1} : rnd32(0));
							default: issue(32'hFFFFFF00 + regoff(rk), 1, rnd32(0));
						endcase
						A <= 32'hFFFFFF00 + regoff(rk) + (r[23:22] == 0 ? r[25:24] : 0);
					end else if (mode < 24) begin
						issue(32'hFFFFFE70 + r[10:8] % 4, r[11], rnd32(0));        // DRCR window and neighbours
					end else if (mode < 27) begin
						issue(32'hFFFFFF80 + r[13:8] % 56, r[14], rnd32(0));        // anything in the window and just outside
					end else begin
						issue(r[15] ? 32'hFFFFFF00 + r[14:8] : 32'h00001000 + r[23:8], r[16], rnd32(0));   // other blocks
					end
				end
			end
		end
	end

	initial begin
		if (!$value$plusargs("seed=%d", seed)) seed = 1;
		if (!$value$plusargs("cycles=%d", ncyc)) ncyc = 400000;
		if (!$value$plusargs("wild=%d", wild)) wild = 0;
		xs = 32'h9E3779B9 ^ (seed * 32'h85EBCA6B);
		pwait = (seed % 3) * 3 + 1;       // 1, 4, 7 of 16
		pack = 3 + (seed % 4) * 3;
		pdreq = 1 + (seed % 3) * 2;
		cyc = 0; step = 0; gap = 0; hold = 0; curch = 0;
		#37 RST_N = 1;
	end
	always @(posedge CLK) if (RST_N && cyc >= ncyc) begin
		$display("PASS dmac seed=%0d: %0d clk | events %0d (rd %0d wr %0d, wait-stall %0d) TS0/1/2/3 %0d/%0d/%0d/%0d ch1 %0d | dual %0d single %0d (AM0 %0d) TB %0d AR %0d DREQ %0d RXI %0d TXI %0d DS %0d",
			seed, cyc, c_ev, c_rd, c_wr, c_wait, c_ts[0], c_ts[1], c_ts[2], c_ts[3], c_ch1, c_dual, c_sa, c_sa_am0, c_tb, c_ar, c_dreq, c_rxi, c_txi, c_ds);
		$display("     TE0/TE1 %0d/%0d irq-clks %0d/%0d burst-clks %0d lock-clks %0d both-req(PR) %0d rr-flip %0d dack-clks %0d SM+/- %0d/%0d DM+/- %0d/%0d ibus rd/wr %0d/%0d nmi %0d res %0d",
			c_te0, c_te1, c_irq0, c_irq1, c_burst, c_lock, c_both, c_prio, c_dack, c_smi, c_smd, c_dmi, c_dmd, c_ibr, c_ibw, c_nmi, c_res);
		$finish;
	end
endmodule
