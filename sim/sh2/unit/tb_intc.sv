// Block-level differential test of INTC: golden REF_SH7604_INTC vs the DUT, compares every output every clock.
module tb_intc;
	reg CLK = 0, RST_N = 0;
	always #5 CLK = ~CLK;
	reg  div;
	wire CE_R = div, CE_F = ~div;
	always @(posedge CLK) div <= ~div;
	initial div = 0;

	reg         EN = 1, RES_N = 1, NMI_N = 1;
	reg  [3:0]  IRL_N = 4'hF, INT_MASK = 0;
	reg         INT_ACK = 0, INT_ACP = 0, VECT_REQ = 0, VBUS_WAIT = 0;
	reg  [7:0]  VBUS_DI = 0, DIVU_VEC = 0, DMAC0_VEC = 0, DMAC1_VEC = 0;
	reg  [31:0] A = 0, DI = 0;
	reg  [3:0]  BA = 4'hF;
	reg         WE = 0, REQ = 0;
	reg  [14:0] irq = 0;   // UBC DIVU DMAC0 DMAC1 WDT BSC ERI RXI TXI TEI ICI OCI OVI

	wire [3:0] lvl_d, lvl_r, vba_d, vba_r;
	wire [7:0] vec_d, vec_r;
	wire req_d, req_r, vw_d, vw_r, nmi_d, nmi_r, vreq_d, vreq_r, busy_d, busy_r, act_d, act_r;
	wire [31:0] do_d, do_r;

`define INTC_PORTS(P, LVL, VEC, RQ, VW, NMIQ, DO, BUSY, ACT, VBA, VREQ) \
	.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(EN), .RES_N(RES_N), .NMI_N(NMI_N), .IRL_N(IRL_N), \
	.INT_MASK(INT_MASK), .INT_ACK(INT_ACK), .INT_ACP(INT_ACP), .INT_LVL(LVL), .INT_VEC(VEC), .INT_REQ(RQ), \
	.VECT_REQ(VECT_REQ), .VECT_WAIT(VW), .NMI_REQ(NMIQ), \
	.IBUS_A(A), .IBUS_DI(DI), .IBUS_DO(DO), .IBUS_BA(BA), .IBUS_WE(WE), .IBUS_REQ(REQ), .IBUS_BUSY(BUSY), .IBUS_ACT(ACT), \
	.VBUS_A(VBA), .VBUS_DI(VBUS_DI), .VBUS_REQ(VREQ), .VBUS_WAIT(VBUS_WAIT), \
	.UBC_IRQ(irq[14]), .DIVU_IRQ(irq[13]), .DIVU_VEC(DIVU_VEC), .DMAC0_IRQ(irq[12]), .DMAC0_VEC(DMAC0_VEC), .DMAC1_IRQ(irq[11]), .DMAC1_VEC(DMAC1_VEC), \
	.WDT_IRQ(irq[10]), .BSC_IRQ(irq[9]), .SCI_ERI_IRQ(irq[8]), .SCI_RXI_IRQ(irq[7]), .SCI_TXI_IRQ(irq[6]), .SCI_TEI_IRQ(irq[5]), \
	.FRT_ICI_IRQ(irq[2]), .FRT_OCI_IRQ(irq[1]), .FRT_OVI_IRQ(irq[0])

	`DUT_MOD dut (`INTC_PORTS(0, lvl_d, vec_d, req_d, vw_d, nmi_d, do_d, busy_d, act_d, vba_d, vreq_d));
	REF_SH7604_INTC ref0 (`INTC_PORTS(0, lvl_r, vec_r, req_r, vw_r, nmi_r, do_r, busy_r, act_r, vba_r, vreq_r));

	integer seed, mode, cyc, ncyc;
	reg [31:0] xs;
	function [31:0] rnd32(input integer dummy);
		begin
			xs = xs ^ (xs << 13); xs = xs ^ (xs >> 17); xs = xs ^ (xs << 5);
			rnd32 = xs;
		end
	endfunction

	// coverage
	integer win [0:15];
	integer nacp = 0, nack = 0, nvreq = 0, nvbus = 0, nnmi = 0, nirlchg = 0, nwr = 0, nrd = 0, nres = 0, nasync = 0, nvec[0:15], nirlstable = 0, ntie = 0;
	integer i;
	reg [3:0] act_p = 0, irl_p = 0;
	reg nmi_p = 0;
	initial for (i = 0; i < 16; i = i + 1) begin win[i] = 0; nvec[i] = 0; end
	always @(posedge CLK) if (RST_N) begin
		cyc <= cyc + 1;
		if (do_d !== do_r || busy_d !== busy_r || act_d !== act_r || req_d !== req_r || lvl_d !== lvl_r || vec_d !== vec_r || vw_d !== vw_r ||
		    nmi_d !== nmi_r || vba_d !== vba_r || vreq_d !== vreq_r) begin
			$display("MISMATCH intc at clk %0d: do %08h/%08h busy %b/%b act %b/%b req %b/%b lvl %h/%h vec %02h/%02h vwait %b/%b nmi %b/%b vba %h/%h vbreq %b/%b (A=%08h WE=%b REQ=%b act=%0d)",
				cyc, do_d, do_r, busy_d, busy_r, act_d, act_r, req_d, req_r, lvl_d, lvl_r, vec_d, vec_r, vw_d, vw_r, nmi_d, nmi_r, vba_d, vba_r, vreq_d, vreq_r, A, WE, REQ, ref0.INT_ACTIVE);
			$display("FAIL intc"); $finish;
		end
		act_p <= ref0.INT_ACTIVE; irl_p <= ref0.IRL_LVL; nmi_p <= nmi_r;
		if (ref0.INT_ACTIVE != act_p) win[ref0.INT_ACTIVE] <= win[ref0.INT_ACTIVE] + 1;
		if (ref0.IRL_LVL != irl_p) nirlchg <= nirlchg + 1;
		if (nmi_r && !nmi_p) nnmi <= nnmi + 1;
		if (vreq_r) nvbus <= nvbus + 1;
		if (CE_R && EN && INT_ACP) nacp <= nacp + 1;
		if (CE_R && EN && INT_ACK) nack <= nack + 1;
		if (CE_F && EN && VECT_REQ) nvreq <= nvreq + 1;
		if (CE_R && REQ && WE && act_r) nwr <= nwr + 1;
		if (CE_F && REQ && !WE && act_r) nrd <= nrd + 1;
		if (CE_R && !RES_N) nres <= nres + 1;
		if (vec_r != 0) nvec[ref0.INT_ACCEPTED] <= nvec[ref0.INT_ACCEPTED] + 1;
	end

	// stimulus
	integer irl_hold = 0, nmi_hold = 0, mask_hold = 0, dens;
	reg [3:0] irl_target = 4'hF;
	reg [31:0] r;
	function [31:0] datum(input [31:0] x);
		reg [3:0] n;
		begin
			n = x[3:0];
			case (x[7:4])
				0,1: datum = {8{n}};
				2: datum = {4{x[11:8], n}};
				3: datum = 32'hFFFFFFFF;
				4: datum = 32'h00000000;
				5: datum = {x[31:24] & 8'h7F, x[23:16] & 8'h7F, x[15:8] & 8'h7F, x[7:0] & 8'h7F};
				default: datum = rnd32(0);
			endcase
		end
	endfunction
	task newreq;
		begin
			r = rnd32(0);
			WE <= (r[3:0] < 9);
			case (r[11:8])
				0: A <= 32'hFFFFFE5F;
				1: A <= 32'hFFFFFE6A + (r[19:16] % 6);
				2: A <= 32'hFFFFFEE6 + (r[19:16] % 4);
				3: A <= 32'hFFFFFEDF;
				4: A <= (r[12] ? 32'hFFFFFE60 + (r[15:13] % 5) : 32'hFFFFFEE0 + (r[15:13] % 3)) ^ (32'h1 << (8 + (rnd32(0) >> 3) % 24));
				5: A <= rnd32(0);
				6: A <= 32'hFFFFFE60 + (r[19:16] % 10);
				default: A <= r[12] ? 32'hFFFFFE60 + (r[19:16] % 10) : 32'hFFFFFEE0 + (r[19:16] % 6);
			endcase
			DI <= datum(rnd32(0));
			BA <= (r[23:20] < 9) ? 4'hF : (r[23:20] < 11) ? 4'b1100 : (r[23:20] < 13) ? 4'b0011 : r[27:24];
		end
	endtask

	integer k, rb = 0;
	always @(posedge CLK) if (RST_N) begin
		// bus; every ~15000 clk a reset burst: NMI_N toggles, RES_N pulses and ICR is read back (NMIL during reset)
		if (rb == 0 && rnd32(0) % 15000 == 0) begin rb <= 8; NMI_N <= ~NMI_N; end
		if (rb != 0) rb <= rb - 1;
		if (CE_F) begin
			if (REQ) REQ <= 0;
			else if (rb != 0) begin REQ <= 1; A <= 32'hFFFFFEE0; WE <= 0; BA <= 4'hF; end
			else if (rnd32(0) % 3 != 0) begin REQ <= 1; newreq; end
		end
		// IRL: levels held for random sample counts, with short glitches
		if (irl_hold == 0) begin
			r = rnd32(0);
			irl_hold <= (r[5:4] == 0) ? (r[11:8] % 4) : (r[5:4] == 1) ? (r[15:8] % 40) : 40 + r[20:8] % 200;
			irl_target <= (r[27:24] < 6) ? 4'hF : r[19:16];
			IRL_N <= (r[27:24] < 6) ? 4'hF : (r[28] ? r[19:16] : IRL_N);
		end else irl_hold <= irl_hold - 1;
		// NMI
		if (nmi_hold == 0) begin NMI_N <= ~NMI_N; nmi_hold <= rnd32(0) % 600; end else nmi_hold <= nmi_hold - 1;
		// mask
		if (mask_hold == 0) begin
			r = rnd32(0);
			INT_MASK <= (r[4]) ? (r[11:8] % 6) : r[11:8];
			mask_hold <= r[27:16] % 500;
		end else mask_hold <= mask_hold - 1;
		// interrupt sources
		for (k = 0; k < 15; k = k + 1) begin
			r = rnd32(0);
			if (irq[k]) begin if (r % (6 * dens) == 0) irq[k] <= 0; end
			else if (r % (60 / dens) == 0) irq[k] <= 1;
		end
		irq[4:3] <= 2'b00;
		if (rnd32(0) % 16 == 0) begin
			DIVU_VEC <= rnd32(0); DMAC0_VEC <= rnd32(0); DMAC1_VEC <= rnd32(0); VBUS_DI <= rnd32(0);
		end
		// core handshakes: accept when requested, then acknowledge; vector fetch wait
		INT_ACP <= 0; INT_ACK <= 0; VECT_REQ <= 0;
		if (rnd32(0) % 24 == 0) INT_ACP <= req_r || (rnd32(0) % 8 == 0);
		if (rnd32(0) % 20 == 0) INT_ACK <= 1;
		if (rnd32(0) % 10 == 0) VECT_REQ <= 1;
		VBUS_WAIT <= (rnd32(0) % 3) == 0;
		EN <= (rnd32(0) % 24) != 0;
	end
	always @(posedge CLK) if (RST_N && CE_R) RES_N <= (rb == 5 || rb == 3 && rnd32(0) % 2 == 0) ? 1'b0 : (rnd32(0) % 3000) != 0;
	initial begin
		if (!$value$plusargs("seed=%d", seed)) seed = 1;
		dens = 1 + seed % 3;
		xs = 32'h9E3779B9 ^ (seed * 32'h85EBCA6B);
		if (!$value$plusargs("cycles=%d", ncyc)) ncyc = 400000;
		cyc = 0;
		#37 RST_N = 1;
		forever begin
			#((rnd32(0) % 40000 + 5000) * 10 + 3);
			RST_N = 0; nasync = nasync + 1;
			#(rnd32(0) % 25 + 1);
			RST_N = 1;
		end
	end
	always @(posedge CLK) if (RST_N && cyc >= ncyc) begin
		$display("PASS intc seed=%0d: %0d clk, bus wr %0d rd %0d, ACP %0d ACK %0d VECT_REQ %0d VBUS_REQ clk %0d, NMI %0d, IRL changes %0d, RES_N %0d async %0d, winners NMI/UBC/IRL/DIVU/DMAC0/DMAC1/WDT/BSC/ERI/RXI/TXI/TEI/ICI/OCI/OVI %0d %0d %0d %0d %0d %0d %0d %0d %0d %0d %0d %0d %0d %0d %0d",
			seed, cyc, nwr, nrd, nacp, nack, nvreq, nvbus, nnmi, nirlchg, nres, nasync, win[1], win[2], win[3], win[4], win[5], win[6], win[7], win[8], win[9], win[10], win[11], win[12], win[13], win[14], win[15]);
		$finish;
	end
endmodule
