// SMPC differential bench: the LLE SMPC (HMCS400 + firmware) and SMPC_HLE see the same bus traffic, the same
// vertical-blank signal and the same pads; every observable event is printed with a CE-tick timestamp.
// tools/cmp.py compares the two logs. Firmware: HEX file given by +rom (generated from ref/ by mif2hex.py).
`timescale 1ns/1ps
module tb_smpc;
	reg CLK = 0;
	always #5 CLK = ~CLK;
	reg RST_N = 0;

	// CE every 14 clk (57.27 MHz / 4 MHz)
	reg  [3:0] cediv = 0;
	reg        CE = 0;
	int        ce = 0;
	always @(posedge CLK) begin
		CE <= 0;
		cediv <= cediv + 1;
		if (cediv == 13) begin cediv <= 0; CE <= 1; ce <= ce + 1; end
	end
	reg MRES_N = 0;
	reg CE32K = 0;
	reg [7:0] CLK_DIV = 0;
	always @(posedge CLK or negedge RST_N) begin
		if (!RST_N) begin MRES_N <= 0; CLK_DIV <= 0; CE32K <= 0; end
		else if (CE) begin
			MRES_N <= 1; CE32K <= 0; CLK_DIV <= CLK_DIV + 1;
			if (CLK_DIV == 121) begin CLK_DIV <= 0; CE32K <= 1; end
		end
	end

	// vertical blank: IRQV_N low during blanking (NTSC 66860 CE per frame)
	int     fr = 0;
	reg     IRQV_N = 1;
	int     VBL = 5700;
	always @(posedge CLK) if (CE) begin
		fr <= fr + 1;
		if (fr == 66860 - VBL) IRQV_N <= 0;
		if (fr == 66860 - 1) begin fr <= 0; IRQV_N <= 1; end
	end

	// bus
	reg  [6:1] CA = 0;
	reg  [7:0] CDI = 0;
	reg        CS_N = 1, MWR_N = 1;
	wire [7:0] DO_L, DO_H;
	reg  [64:0] RTC = 65'h0;

	reg [3:0] AC = 4'h1;
	initial if ($value$plusargs("ac=%h", AC)) ;
	// pads: two standard digital pads, port 2 optional
	reg        pad2 = 1;
	wire [6:0] P1O_L, P1D_L, P2O_L, P2D_L, P1O_H, P1D_H, P2O_H, P2D_H;
	function automatic [6:0] pad(input [6:0] po, input [6:0] pd, input [3:0] pat0, input present);
		// pat0: {R,L,D,U}  start/A/C/B and R/X/Y/Z derived from it; TH=bit6, TR=bit5 (input = pulled high)
		reg th, tr; reg [3:0] n;
		th = pd[6] ? po[6] : 1'b1;
		tr = pd[5] ? po[5] : 1'b1;
		if (!present) pad = 7'h7F;
		else begin
			case ({th,tr})
				2'b11: n = 4'b1100;
				2'b01: n = pat0;
				2'b10: n = {~pat0[0], pat0[3], pat0[2], pat0[1]};
				2'b00: n = {pat0[1], ~pat0[2], pat0[3], pat0[0]};
			endcase
			pad = {th, tr, tr, n};
		end
	endfunction
	wire [6:0] P1I_L = pad(P1O_L, P1D_L, 4'b1110, 1'b1);
	wire [6:0] P2I_L = pad(P2O_L, P2D_L, 4'b0111, pad2);
	wire [6:0] P1I_H = pad(P1O_H, P1D_H, 4'b1110, 1'b1);
	wire [6:0] P2I_H = pad(P2O_H, P2D_H, 4'b0111, pad2);

	wire MIRQ_L, MSHRES_L, MSHNMI_L, SSHRES_L, SSHNMI_L, SYSRES_L, SNDRES_L, CDRES_L, EXL_L, DOT_L;
	wire MIRQ_H, MSHRES_H, MSHNMI_H, SSHRES_H, SSHNMI_H, SYSRES_H, SNDRES_H, CDRES_H, EXL_H, DOT_H;

	SMPC #(.rom_file("smpc.hex")) lle (
		.CLK(CLK), .RST_N(RST_N), .EN(1'b1), .CE(CE), .CE32K(CE32K & CE), .RESET_N(MRES_N),
		.A(CA), .DBI(CDI), .DBO(DO_L), .CS_N(CS_N), .RW_N(MWR_N),
		.D0(MIRQ_L), .D1(1'b1), .D2(1'b0), .D3(1'b1), .D4(SNDRES_L), .D5(SYSRES_L), .D6(MSHRES_L), .D7(MSHNMI_L),
		.D8(SSHRES_L), .D9(SSHNMI_L), .D10(DOT_L), .D13_INT0(1'b1),
		.R01_INT2(IRQV_N),
		.PIOA_I(P1I_L), .PIOA_O(P1O_L), .PIOA_D(P1D_L), .PIOB_I(P2I_L), .PIOB_O(P2O_L), .PIOB_D(P2D_L),
		.R5(AC),
		.R60_D(), .R60_O(), .R60_I(1'b0), .R61_D(), .R61_O(), .R61_I(1'b1), .R62_I(1'b0), .R63_I(1'b0),
		.R70_I(1'b0), .R71_I(1'b0), .R72_O(CDRES_L), .R73_O(),
		.EXL_N(EXL_L), .EXT_RTC(RTC), .DBG_EXT(8'h00));

`ifndef HLE_MOD
`define HLE_MOD SMPC_HLE
`endif
`ifndef HLE_PARAMS
`define HLE_PARAMS
`endif
	`HLE_MOD `HLE_PARAMS hle (
		.CLK(CLK), .RST_N(RST_N), .CE(CE), .MRES_N(MRES_N), .TIME_SET(1'b1), .EXT_RTC(RTC), .AC(AC),
		.A(CA), .DI(CDI), .DO(DO_H), .CS_N(CS_N), .RW_N(MWR_N),
		.SRES_N(1'b1), .IRQV_N(IRQV_N), .EXL_N(EXL_H),
		.MSHRES_N(MSHRES_H), .MSHNMI_N(MSHNMI_H), .SSHRES_N(SSHRES_H), .SSHNMI_N(SSHNMI_H), .SYSRES_N(SYSRES_H),
		.SNDRES_N(SNDRES_H), .CDRES_N(CDRES_H), .MIRQ_N(MIRQ_H), .DOTSEL(DOT_H),
		.PDR1I(P1I_H), .PDR1O(P1O_H), .DDR1(P1D_H), .PDR2I(P2I_H), .PDR2O(P2O_H), .DDR2(P2D_H));

	// event log
	reg [9:0] prev_l, prev_h;
	wire [9:0] cur_l = {MIRQ_L, MSHRES_L, MSHNMI_L, SSHRES_L, SSHNMI_L, SYSRES_L, SNDRES_L, CDRES_L, DOT_L, lle.SF};
	wire [9:0] cur_h = {MIRQ_H, MSHRES_H, MSHNMI_H, SSHRES_H, SSHNMI_H, SYSRES_H, SNDRES_H, CDRES_H, DOT_H, hle.SF};
	string nm [10] = '{"SF","DOTSEL","CDRES_N","SNDRES_N","SYSRES_N","SSHNMI_N","SSHRES_N","MSHNMI_N","MSHRES_N","MIRQ_N"};
	reg logen = 0;
	always @(posedge CLK) begin
		prev_l <= cur_l; prev_h <= cur_h;
		if (logen) for (int i = 0; i < 10; i++) begin
			if (cur_l[i] !== prev_l[i]) $display("EV L %0d %s %b", ce, nm[i], cur_l[i]);
			if (cur_h[i] !== prev_h[i]) $display("EV H %0d %s %b", ce, nm[i], cur_h[i]);
		end
	end

	reg [13:0] pp_l, pp_h;
	always @(posedge CLK) if ($test$plusargs("pins")) begin
		pp_l <= {P1D_L, P1O_L}; pp_h <= {P1D_H, P1O_H};
		if ({P1D_L, P1O_L} !== pp_l) $display("PIN L %0d DDR=%b PDR=%b in=%b fr=%0d", ce, P1D_L, P1O_L, P1I_L, fr);
		if ({P1D_H, P1O_H} !== pp_h) $display("PIN H %0d DDR=%b PDR=%b in=%b fr=%0d", ce, P1D_H, P1O_H, P1I_H, fr);
	end
	task automatic idle(input int n); repeat (n) @(posedge CLK); endtask
	// bus inputs change like the registered outputs of the SH-2 bus controller (after the clock edge), not before it
	task automatic wr(input [6:0] addr, input [7:0] d);
		CA <= addr[6:1]; CDI <= d; CS_N <= 0; MWR_N <= 1; idle(6); MWR_N <= 0; idle(30); MWR_N <= 1; idle(6); CS_N <= 1; idle(10);
	endtask
	task automatic rd(input [6:0] addr, output [7:0] vl, output [7:0] vh);
		CA <= addr[6:1]; CS_N <= 0; MWR_N <= 1; idle(8); vl = DO_L; vh = DO_H; CS_N <= 1; idle(10);
	endtask
	task automatic waitce(input int n); int t; t = ce + n; while (ce < t) @(posedge CLK); endtask

	// wait until both SF are clear (or timeout in CE)
	task automatic wait_sf(input int tmo);
		int t; t = ce + tmo;
		while ((lle.SF || hle.SF) && ce < t) @(posedge CLK);
	endtask
	// read SR and OREG0-31 for one model ("L" or "H"); the bus is shared, so the other model's value is dropped
	reg [7:0] last_sr_l, last_sr_h;
	task automatic dump_side(input string tag, input bit hl);
		reg [7:0] a, b;
		rd(7'h61, a, b); $display("RD %s %s SR %02h", tag, hl ? "H" : "L", hl ? b : a);
		if (hl) last_sr_h = b; else last_sr_l = a;
		for (int i = 0; i < 32; i++) begin
			rd(7'h21 + 2*i, a, b);
			$display("RD %s %s OREG%0d %02h", tag, hl ? "H" : "L", i, hl ? b : a);
		end
	endtask
	task automatic dump(input string tag); dump_side(tag, 0); dump_side(tag, 1); endtask
	task automatic cmd(input string tag, input [7:0] c, input [7:0] i0, input [7:0] i1, input [7:0] i2, input [7:0] i3,
	                   input [7:0] i4, input [7:0] i5, input [7:0] i6, input int nir);
		wr(7'h01, i0); if (nir > 1) wr(7'h03, i1); if (nir > 2) wr(7'h05, i2); if (nir > 3) wr(7'h07, i3);
		if (nir > 4) wr(7'h09, i4); if (nir > 5) wr(7'h0B, i5); if (nir > 6) wr(7'h0D, i6);
		wr(7'h63, 8'h01);
		$display("CMD %s %02h t=%0d", tag, c, ce);
		wr(7'h1F, c);
		wait_sf((c == 8'h0D || c == 8'h0E || c == 8'h0F) ? 600000 : 30000);
		idle(200);
	endtask
	// MIRQ falls per model; each model is dumped when its own MIRQ fires
	reg miq_l, miq_h;
	always @(posedge CLK) begin
		if (!MIRQ_L && prev_l[9]) miq_l <= 1;
		if (!MIRQ_H && prev_h[9]) miq_h <= 1;
	end
	task automatic mirq_dump(input string tag, input int tmo);
		int t; bit dl, dh;
		t = ce + tmo; dl = 0; dh = 0;
		while (!(dl && dh) && ce < t) begin
			@(posedge CLK);
			if (miq_l && !dl) begin dl = 1; $display("MIRQ L t=%0d phase=%0d", ce, fr); dump_side(tag, 0); end
			else if (miq_h && !dh) begin dh = 1; $display("MIRQ H t=%0d phase=%0d", ce, fr); dump_side(tag, 1); end
		end
		if (!dl) $display("MIRQ L none"); if (!dh) $display("MIRQ H none");
		idle(200);
	endtask
	task automatic intback(input string tag, input [7:0] i0, input [7:0] i1, input [7:0] i2, input int maxit);
		miq_l = 0; miq_h = 0;
		while (fr != 20000) @(posedge CLK);       // start well before vblank-in (61160)
		wr(7'h01, i0); wr(7'h03, i1); wr(7'h05, i2); wr(7'h63, 8'h01);
		$display("CMD %s 10 t=%0d", tag, ce);
		wr(7'h1F, 8'h10);
		for (int k = 0; k < maxit; k++) begin
			mirq_dump({tag, ".", $sformatf("%0d", k)}, 3 * 66860);
			if (!(last_sr_l[5] || last_sr_h[5])) break;
			miq_l = 0; miq_h = 0;
			wr(7'h01, 8'h80);      // CONTINUE
		end
		wait_sf(66860 * 2);
		idle(200);
	endtask

	reg [7:0] ra, rb;
	initial begin
		RTC = {1'b1, 16'h0, 8'h21, 4'h0, 4'h1, 8'h25, 8'h23, 8'h10, 8'h59};   // 2021-01-25 23:10:59, bit 64 toggled
		idle(10); RST_N = 1;
		logen = 1;
		waitce(1900000);   // the firmware holds the reset lines for ~1.63M CE after power-on
		$display("STEP boot done t=%0d", ce);
		if ($test$plusargs("exp")) begin
			// experiment: where in the frame does each model deliver the peripheral data?
			for (int ph = 0; ph < 66860; ph += 11000) begin
				while ((fr % 66860) != ph) @(posedge CLK);
				$display("EXP frame-phase %0d vblank-in at %0d", ph, 66860 - VBL);
				intback("EXP_OPT", 8'h01, 8'h08, 8'hF0, 4);
				while ((fr % 66860) != ph) @(posedge CLK);
				intback("EXP_NOOPT", 8'h01, 8'h0A, 8'hF0, 4);
				while ((fr % 66860) != ph) @(posedge CLK);
				intback("EXP_PONLY", 8'h00, 8'h08, 8'hF0, 4);
			end
			$finish;
		end
		miq_l = 0; miq_h = 0;
		cmd("INTBACK_STAT", 8'h10, 8'h01, 8'h00, 8'hF0, 0, 0, 0, 0, 3);
		mirq_dump("INTBACK_STAT", 2000);
		cmd("SETSMEM", 8'h17, 8'h11, 8'h22, 8'h33, 8'h44, 0, 0, 0, 4);
		cmd("SETTIME", 8'h16, 8'h20, 8'h21, 8'h01, 8'h25, 8'h23, 8'h10, 8'h59, 7);
		miq_l = 0; miq_h = 0;
		cmd("INTBACK_STAT2", 8'h10, 8'h01, 8'h00, 8'hF0, 0, 0, 0, 0, 3);
		mirq_dump("INTBACK_STAT2", 2000);
		cmd("MSHON", 8'h00, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SNDON", 8'h06, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SSHON", 8'h02, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("CDOFF", 8'h09, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("CDON", 8'h08, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SSHOFF", 8'h03, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SNDOFF", 8'h07, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("RESENAB", 8'h19, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("RESDISA", 8'h1A, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("NMIREQ", 8'h18, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SSHON2", 8'h02, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SNDON2", 8'h06, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("CKCHG352", 8'h0E, 0, 0, 0, 0, 0, 0, 0, 0);
		waitce(3 * 66860);   // the firmware needs a few frames after a clock change before it times the pad poll
		cmd("SSHON3", 8'h02, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SNDON3", 8'h06, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("CKCHG320", 8'h0F, 0, 0, 0, 0, 0, 0, 0, 0);
		waitce(3 * 66860);
		// peripheral data: optimised (status + pads), then not optimised, then peripheral only
		intback("WARMUP_PERI", 8'h00, 8'h08, 8'hF0, 4);   // the first peripheral INTBACK after reset is answered early with F0 F0 by the firmware
		intback("INTBACK_PERI_OPT", 8'h01, 8'h08, 8'hF0, 4);
		intback("INTBACK_PERI_NOOPT", 8'h01, 8'h0A, 8'hF0, 4);
		intback("INTBACK_PERI_ONLY", 8'h00, 8'h08, 8'hF0, 4);
		pad2 = 0;
		intback("INTBACK_PONLY_NOOPT", 8'h00, 8'h0A, 8'hF0, 4);
		intback("INTBACK_PERI_1PAD", 8'h00, 8'h08, 8'hF0, 4);
		pad2 = 1;
		// SH-2 direct mode: IOSEL/DDR/PDR registers and pad read-back through PDR
		wr(7'h79, 8'h60); wr(7'h7B, 8'h60); wr(7'h7D, 8'h03);
		for (int k = 0; k < 4; k++) begin
			reg [7:0] v, a, b; v = {1'b0, k[1], k[0], 5'b0};
			wr(7'h75, v); wr(7'h77, v); idle(40);
			rd(7'h75, a, b); $display("RD PDIRECT.%0d L PDR1 %02h", k, a); $display("RD PDIRECT.%0d H PDR1 %02h", k, b);
			rd(7'h77, a, b); $display("RD PDIRECT.%0d L PDR2 %02h", k, a); $display("RD PDIRECT.%0d H PDR2 %02h", k, b);
			$display("RD PDIRECT.%0d L PO1 %02h", k, P1O_L); $display("RD PDIRECT.%0d H PO1 %02h", k, P1O_H);
			$display("RD PDIRECT.%0d L DD1 %02h", k, P1D_L); $display("RD PDIRECT.%0d H DD1 %02h", k, P1D_H);
		end
		wr(7'h7D, 8'h00); wr(7'h79, 8'h00); wr(7'h7B, 8'h00);
		cmd("SSHON4", 8'h02, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SNDON4", 8'h06, 0, 0, 0, 0, 0, 0, 0, 0);
		cmd("SYSRES", 8'h0D, 0, 0, 0, 0, 0, 0, 0, 0);
		waitce(2 * 66860);
		$display("DONE t=%0d", ce);
		$finish;
	end
	initial begin #20000000000; $display("TIMEOUT"); $finish; end
endmodule
