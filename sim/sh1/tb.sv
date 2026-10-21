// Differential test: golden SH-1 (REF_*, copied from ref/) vs pruned SH-1, both in a full CD-block
// environment (YGR019 + DRAM + CDD model) driven by the same SCU-side host sequence.
// Every clock the pins and the SH7034 CPU/peripheral buses of the two instances are compared.
module tb;
	reg CLK = 0;
	reg RST_N = 0;
	reg CDRES_N = 0;
	integer cnt = 0;
	always #5 CLK = ~CLK;

	reg fast = 0;
	initial if ($test$plusargs("FAST")) fast = 1;
	reg SYS_CE_R, SYS_CE_F, CD_CE;
	reg [15:0] ce_lfsr = 16'hBEEF;
	always @(posedge CLK) ce_lfsr <= {ce_lfsr[14:0], ce_lfsr[15] ^ ce_lfsr[13] ^ ce_lfsr[12] ^ ce_lfsr[10]};
	always @(posedge CLK) begin
		cnt <= cnt + 1;
		SYS_CE_R <= (cnt % 2) == 0;
		SYS_CE_F <= (cnt % 2) == 1;
		CD_CE    <= fast || (ce_lfsr[2:0] != 3'b000);
	end

	// host (SCU A-bus) side
	reg [14:1] AA = 0;
	reg [15:0] ADI = 0;
	reg  [1:0] AFC = 0;
	reg ACS2_N = 1, ARD_N = 1, AWRL_N = 1, AWRU_N = 1;

	wire [15:0] ADO_A, ADO_B;
	wire AWAIT_A, AWAIT_B, ARQT_A, ARQT_B;
	wire [21:0] SA_A, SA_B;
	wire [15:0] SDO_A, SDO_B;
	wire SWRL_A, SWRL_B, SWRH_A, SWRH_B, SRD_A, SRD_B, SCS1_A, SCS1_B, SCS2_A, SCS2_B, SCS6_A, SCS6_B;
	wire DACK0_A, DACK0_B, DACK1_A, DACK1_B, HDATA_A, HDATA_B, COMCLK_A, COMCLK_B, DEMP_A, DEMP_B;
	wire [7:0] CMD_A, CMD_B;
	wire [31:0] FR_A, FR_B;

	cd_blk #(.REF(1)) a (.CLK(CLK), .RST_N(RST_N), .CD_CE(CD_CE), .SYS_CE_R(SYS_CE_R), .SYS_CE_F(SYS_CE_F), .CDRES_N(CDRES_N),
		.AA(AA), .ADI(ADI), .ADO(ADO_A), .AFC(AFC), .ACS2_N(ACS2_N), .ARD_N(ARD_N), .AWRL_N(AWRL_N), .AWRU_N(AWRU_N),
		.AWAIT_N(AWAIT_A), .ARQT_N(ARQT_A), .SA(SA_A), .SDO(SDO_A), .SWRL_N(SWRL_A), .SWRH_N(SWRH_A), .SRD_N(SRD_A),
		.SCS1_N(SCS1_A), .SCS2_N(SCS2_A), .SCS6_N(SCS6_A), .DACK0(DACK0_A), .DACK1(DACK1_A), .HDATA(HDATA_A),
		.COMCLK(COMCLK_A), .DEMP(DEMP_A), .CDD_LAST_CMD(CMD_A), .CDD_FRAMES(FR_A));
	cd_blk #(.REF(0)) b (.CLK(CLK), .RST_N(RST_N), .CD_CE(CD_CE), .SYS_CE_R(SYS_CE_R), .SYS_CE_F(SYS_CE_F), .CDRES_N(CDRES_N),
		.AA(AA), .ADI(ADI), .ADO(ADO_B), .AFC(AFC), .ACS2_N(ACS2_N), .ARD_N(ARD_N), .AWRL_N(AWRL_N), .AWRU_N(AWRU_N),
		.AWAIT_N(AWAIT_B), .ARQT_N(ARQT_B), .SA(SA_B), .SDO(SDO_B), .SWRL_N(SWRL_B), .SWRH_N(SWRH_B), .SRD_N(SRD_B),
		.SCS1_N(SCS1_B), .SCS2_N(SCS2_B), .SCS6_N(SCS6_B), .DACK0(DACK0_B), .DACK1(DACK1_B), .HDATA(HDATA_B),
		.COMCLK(COMCLK_B), .DEMP(DEMP_B), .CDD_LAST_CMD(CMD_B), .CDD_FRAMES(FR_B));

	// ---- comparison of the pins and of the SH7034 internal buses
	integer errors = 0;
	integer compared = 0;
	wire [511:0] SIG_A = {
		SA_A, SDO_A, SWRL_A, SWRH_A, SRD_A, SCS1_A, SCS2_A, SCS6_A, DACK0_A, DACK1_A, HDATA_A, COMCLK_A, DEMP_A,
		ADO_A, AWAIT_A, ARQT_A,
		a.g.sh1.sh7034.CBUS_A, a.g.sh1.sh7034.CBUS_DO, a.g.sh1.sh7034.CBUS_DI, a.g.sh1.sh7034.CBUS_WR,
		a.g.sh1.sh7034.CBUS_BA, a.g.sh1.sh7034.CBUS_REQ, a.g.sh1.sh7034.CBUS_WAIT,
		a.g.sh1.sh7034.DBUS_A, a.g.sh1.sh7034.DBUS_DO, a.g.sh1.sh7034.DBUS_DI, a.g.sh1.sh7034.DBUS_WE,
		a.g.sh1.sh7034.DBUS_BA, a.g.sh1.sh7034.DBUS_REQ, a.g.sh1.sh7034.DBUS_WAIT,
		a.g.sh1.sh7034.INT_REQ, a.g.sh1.sh7034.INT_LVL, a.g.sh1.sh7034.INT_VEC};
	wire [511:0] SIG_B = {
		SA_B, SDO_B, SWRL_B, SWRH_B, SRD_B, SCS1_B, SCS2_B, SCS6_B, DACK0_B, DACK1_B, HDATA_B, COMCLK_B, DEMP_B,
		ADO_B, AWAIT_B, ARQT_B,
		b.g.sh1.sh7034.CBUS_A, b.g.sh1.sh7034.CBUS_DO, b.g.sh1.sh7034.CBUS_DI, b.g.sh1.sh7034.CBUS_WR,
		b.g.sh1.sh7034.CBUS_BA, b.g.sh1.sh7034.CBUS_REQ, b.g.sh1.sh7034.CBUS_WAIT,
		b.g.sh1.sh7034.DBUS_A, b.g.sh1.sh7034.DBUS_DO, b.g.sh1.sh7034.DBUS_DI, b.g.sh1.sh7034.DBUS_WE,
		b.g.sh1.sh7034.DBUS_BA, b.g.sh1.sh7034.DBUS_REQ, b.g.sh1.sh7034.DBUS_WAIT,
		b.g.sh1.sh7034.INT_REQ, b.g.sh1.sh7034.INT_LVL, b.g.sh1.sh7034.INT_VEC};

	always @(negedge CLK) begin
		if (RST_N) begin
			compared = compared + 1;
			if (SIG_A !== SIG_B) begin
				errors = errors + 1;
				if (errors < 5) begin
					$display("MISMATCH at cycle %0d (t=%0t)", cnt, $time);
					$display("  A SA=%h SDO=%h CBUS_A=%h DO=%h DI=%h WR=%b REQ=%b | DBUS_A=%h DI=%h", SA_A, SDO_A,
						a.g.sh1.sh7034.CBUS_A, a.g.sh1.sh7034.CBUS_DO, a.g.sh1.sh7034.CBUS_DI, a.g.sh1.sh7034.CBUS_WR,
						a.g.sh1.sh7034.CBUS_REQ, a.g.sh1.sh7034.DBUS_A, a.g.sh1.sh7034.DBUS_DI);
					$display("  B SA=%h SDO=%h CBUS_A=%h DO=%h DI=%h WR=%b REQ=%b | DBUS_A=%h DI=%h", SA_B, SDO_B,
						b.g.sh1.sh7034.CBUS_A, b.g.sh1.sh7034.CBUS_DO, b.g.sh1.sh7034.CBUS_DI, b.g.sh1.sh7034.CBUS_WR,
						b.g.sh1.sh7034.CBUS_REQ, b.g.sh1.sh7034.DBUS_A, b.g.sh1.sh7034.DBUS_DI);
				end
				if (errors == 1) $display("  (diff mask %h)", SIG_A ^ SIG_B);
			end
		end
	end

	// ---- coverage of on-chip register accesses (golden instance)
	reg [7:0] cov_r [0:511];
	reg [7:0] cov_w [0:511];
	integer ci;
	initial for (ci = 0; ci < 512; ci = ci + 1) begin cov_r[ci] = 0; cov_w[ci] = 0; end
	wire [27:0] CA = a.g.sh1.sh7034.CBUS_A;
	always @(posedge CLK) begin
		if (RST_N && CD_CE && a.g.sh1.sh7034.CBUS_REQ && !a.g.sh1.sh7034.CBUS_WAIT &&
		    CA >= 28'h5FFFE00 && CA <= 28'h5FFFFFF) begin
			if (a.g.sh1.sh7034.CBUS_WR) begin if (cov_w[CA[8:0]] != 8'hFF) cov_w[CA[8:0]] <= cov_w[CA[8:0]] + 1; end
			else                        begin if (cov_r[CA[8:0]] != 8'hFF) cov_r[CA[8:0]] <= cov_r[CA[8:0]] + 1; end
		end
	end

	// ---- interrupt statistics (golden instance)
	integer vec_cnt [0:255];
	integer vi;
	initial for (vi = 0; vi < 256; vi = vi + 1) vec_cnt[vi] = 0;
	always @(posedge CLK) if (RST_N && CD_CE && a.g.sh1.sh7034.INT_ACK && a.g.sh1.sh7034.INT_ACP)
		vec_cnt[a.g.sh1.sh7034.INT_VEC] <= vec_cnt[a.g.sh1.sh7034.INT_VEC] + 1;

	// ---- optional progress trace (+TRACE=<period>)
	integer trace_period = 0;
	initial if ($value$plusargs("TRACE=%d", trace_period)) ;
	always @(posedge CLK) if (trace_period != 0 && RST_N && (cnt % trace_period) == 0)
		$display("trace cycle %0d PC=%h EXPC=%h INT_REQ=%b ITU3 TSR=%h TIER=%h IRQ6=%b IRQ7=%b COMREQ=%b", cnt,
			a.g.sh1.sh7034.core.PC, a.g.sh1.sh7034.core.PIPE.EX.PC,
			a.g.sh1.sh7034.INT_REQ, a.g.sh1.sh7034.itu.TSR[3], a.g.sh1.sh7034.itu.TIER[3],
			a.SIRQL_N, a.SIRQH_N, a.COMREQ_N);

	// ---- host (SCU) side access tasks
	task wait_ce_r;
		begin
			@(posedge CLK);
			while (!SYS_CE_R) @(posedge CLK);
		end
	endtask

	// All spacing below is an even number of clocks so that strobes change right after a SYS_CE_R edge.
	task host_wr(input [7:0] off, input [15:0] d);
		begin
			wait_ce_r;
			AA <= off[7:1]; ADI <= d; ACS2_N <= 0;
			repeat (4) @(posedge CLK);
			AWRL_N <= 0; AWRU_N <= 0;
			repeat (8) @(posedge CLK);
			AWRL_N <= 1; AWRU_N <= 1;
			repeat (4) @(posedge CLK);
			ACS2_N <= 1;
			repeat (4) @(posedge CLK);
		end
	endtask

	reg [15:0] rd_data;
	task host_rd(input [7:0] off);
		begin
			wait_ce_r;
			AA <= off[7:1]; ACS2_N <= 0;
			repeat (4) @(posedge CLK);
			ARD_N <= 0;
			repeat (4) @(posedge CLK);
			while (!AWAIT_A) @(posedge CLK);
			repeat (4) @(posedge CLK);
			rd_data = ADO_A;
			ARD_N <= 1;
			repeat (4) @(posedge CLK);
			ACS2_N <= 1;
			repeat (4) @(posedge CLK);
		end
	endtask

	reg [15:0] rr [0:3];
	integer cmds_done = 0, cmds_timeout = 0;
	task cd_cmd(input [15:0] c1, input [15:0] c2, input [15:0] c3, input [15:0] c4);
		integer t;
		reg ok;
		begin
			host_wr(8'h18, c1);
			host_wr(8'h1C, c2);
			host_wr(8'h20, c3);
			host_wr(8'h24, c4);
			ok = 0;
			for (t = 0; t < 400 && !ok; t = t + 1) begin
				repeat (2000) @(posedge CLK);
				host_rd(8'h08);
				if (rd_data[0]) ok = 1;
			end
			if (ok) begin
				host_rd(8'h18); rr[0] = rd_data;
				host_rd(8'h1C); rr[1] = rd_data;
				host_rd(8'h20); rr[2] = rd_data;
				host_rd(8'h24); rr[3] = rd_data;
				host_wr(8'h08, 16'hFFFE);   // clear CMOK
				cmds_done = cmds_done + 1;
				$display("cmd %04h %04h %04h %04h -> %04h %04h %04h %04h  (HIRQ=%04h cycle %0d)", c1, c2, c3, c4,
					rr[0], rr[1], rr[2], rr[3], rd_data, cnt);
			end else begin
				cmds_timeout = cmds_timeout + 1;
				$display("cmd %04h %04h %04h %04h -> timeout (cycle %0d)", c1, c2, c3, c4, cnt);
			end
		end
	endtask

	integer maxcyc = 30000000;
	integer boot_wait = 30000000;
	integer i, nc;
	initial begin
		if ($value$plusargs("CYCLES=%d", maxcyc)) ;
		if ($value$plusargs("BOOT=%d", boot_wait)) ;
		if ($value$plusargs("NCMD=%d", nc)) ; else nc = 12;
		repeat (20) @(posedge CLK);
		RST_N <= 1;
		repeat (50) @(posedge CLK);
		CDRES_N <= 1;
		// wait for the firmware to finish its start-up (DRAM test) and raise HIRQ
		// (the idle loop at 0x1BE6 is entered once start-up is done)
		while (!(a.g.sh1.sh7034.core.PC >= 32'h1BE0 && a.g.sh1.sh7034.core.PC <= 32'h1BF0) && cnt < boot_wait) @(posedge CLK);
		repeat (300000) @(posedge CLK);
		host_rd(8'h08);
		$display("after boot: HIRQ=%04h cycle %0d", rd_data, cnt);
		host_rd(8'h0C); $display("HMASK=%04h", rd_data);
		if (nc > 0)  cd_cmd(16'h0000, 16'h0000, 16'h0000, 16'h0000);  // get status
		if (nc > 1)  cd_cmd(16'h0100, 16'h0000, 16'h0000, 16'h0000);  // get hardware info
		if (nc > 2)  cd_cmd(16'h0400, 16'h0000, 16'h0000, 16'h0000);  // initialize CD system
		if (nc > 3)  cd_cmd(16'h0000, 16'h0000, 16'h0000, 16'h0000);
		if (nc > 4)  cd_cmd(16'h0200, 16'h0000, 16'h0000, 16'h0000);  // get TOC
		if (nc > 5)  cd_cmd(16'h0300, 16'h0000, 16'h0000, 16'h0000);  // get session info
		if (nc > 6)  cd_cmd(16'h3000, 16'h0000, 16'hFF00, 16'h0000);  // set CD device connection
		if (nc > 7)  cd_cmd(16'h4800, 16'h0000, 16'h0000, 16'h0000);  // reset selector
		if (nc > 8)  cd_cmd(16'h5000, 16'h0000, 16'h0000, 16'h0000);  // get buffer size
		if (nc > 9)  cd_cmd(16'h6100, 16'h0000, 16'h0000, 16'h0000);  // get sector data info? (query)
		if (nc > 10) cd_cmd(16'h4000, 16'h0000, 16'h0000, 16'h0000);  // set filter
		if (nc > 11) cd_cmd(16'h0000, 16'h0000, 16'h0000, 16'h0000);
		for (i = 0; i < nc - 12; i = i + 1) cd_cmd(16'h0000, 16'h0000, 16'h0000, 16'h0000);
		while (cnt < maxcyc) @(posedge CLK);
		$display("---- end: %0d cycles, %0d compared, %0d mismatching cycles, CDD frames %0d, cmds ok %0d timeout %0d",
			cnt, compared, errors, FR_A, cmds_done, cmds_timeout);
		$display("---- on-chip registers accessed by the CPU (golden): addr R W");
		for (ci = 0; ci < 512; ci = ci + 1)
			if (cov_r[ci] != 0 || cov_w[ci] != 0) $display("COV 5FFF%03h R=%0d W=%0d", ci + 12'hE00, cov_r[ci], cov_w[ci]);
		for (vi = 0; vi < 256; vi = vi + 1) if (vec_cnt[vi] != 0) $display("INT vec %0d taken %0d times", vi, vec_cnt[vi]);
		$display("YGR019: CDIRQL=%h CDMASKL=%h CDIRQU=%h CDMASKU=%h HIRQ=%h CR=%h %h %h %h RR=%h %h %h %h", a.ygr.CDIRQL, a.ygr.CDMASKL,
			a.ygr.CDIRQU, a.ygr.CDMASKU, a.ygr.HIRQ, a.ygr.CR[0], a.ygr.CR[1], a.ygr.CR[2], a.ygr.CR[3], a.ygr.RR[0], a.ygr.RR[1], a.ygr.RR[2], a.ygr.RR[3]);
		if (errors == 0) $display("RESULT: PASS");
		else $display("RESULT: FAIL");
		$finish;
	end
endmodule
