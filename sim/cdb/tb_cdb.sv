`timescale 1ns/1ps
// CD block transaction test: the same SCU-side command script runs against
//   LLE=1  pruned SH-1 + firmware + YGR019 + cdd_pocket (the real CDD layer)
//   LLE=0  cdb_hle + cd_stream
// and logs every command, its results and the transferred data. compare.py diffs the two logs.
// Plusargs: +SCRIPT=file +LOG=file +DISC=C +CE=<clk per CDD_CE> (+FW=<mif> for LLE, +HEX=<cdb_fw.hex> is the parameter)
module tb_cdb #(parameter LLE = 0);

integer CE_CLKS;
string  disc, scriptname, logname;
integer lf;

reg clk = 0, clk74 = 0;
always #8.73 clk = ~clk;            // 57.27 MHz
always #6.734 clk74 = ~clk74;       // 74.25 MHz

integer cnt = 0, cec = 0;
reg SYS_CE_R = 0, SYS_CE_F = 0, CD_CE = 0, CDD_CE = 0;
reg rst_n = 0, cdres_n = 0, ce_en = 0;
always @(posedge clk) begin
	cnt <= cnt + 1;
	SYS_CE_R <= (cnt % 2) == 0;
	SYS_CE_F <= (cnt % 2) == 1;
	CD_CE    <= (cnt % 3) == 0;
	CDD_CE   <= 0;
	if (ce_en) begin
		cec <= cec + 1;
		if (cec >= CE_CLKS - 1) begin cec <= 0; CDD_CE <= 1; end
	end
end

// ---------------------------------------------------------------- host (SCU A-bus) side
reg [14:1] AA = 0;
reg [15:0] ADI = 0;
reg ACS2_N = 1, ARD_N = 1, AWRL_N = 1, AWRU_N = 1;
wire [15:0] ADO;
wire AWAIT_N;

// ---------------------------------------------------------------- stream side (both builds)
wire        t_read;
wire [15:0] t_id;
wire [31:0] t_off, t_baddr, t_len;
reg         t_ack = 0, t_done = 0;
reg  [2:0]  t_err = 0;
reg         bridge_wr = 0;
reg  [31:0] bridge_addr = 0, bridge_wr_data = 0;
wire [16:0] sram_a; wire [15:0] sram_dq_o; wire sram_dq_oe, sram_oe_n, sram_we_n;
reg  [15:0] smem [0:131071];
wire [15:0] sram_dq_i = (!sram_oe_n && sram_we_n) ? smem[sram_a] : 16'hFFFF;
always @(posedge sram_we_n) smem[sram_a] <= sram_dq_o;

wire        disc_ok;

generate if (LLE) begin : g
	// ------------------------------------------------------------ LLE: SH-1 + YGR019 + CDD layer
	wire [15:0] SDI, SDO, YGR_SDO;
	wire [21:0] SA;
	wire SWRL_N, SWRH_N, SRD_N, SCS1_N, SCS2_N, SCS6_N, DACK0, DACK1, DREQ0_N, DREQ1_N, SIRQL_N, SIRQH_N;
	wire CDATA, HDATA, COMCLK, COMREQ_N, COMSYNC_N, DEMP;
	wire [17:0] CD_DATA; wire CD_CK, CD_AUDIO;
	wire [15:0] CD_SL, CD_SR;
	reg  SHCLK = 0; reg SWAIT_N = 1;
	always @(posedge clk) if (CD_CE) SHCLK <= ~SHCLK;
	wire SHCE_R = SHCLK & CD_CE, SHCE_F = ~SHCLK & CD_CE;

	reg [15:0] ram [0:262143];
	integer k;
	initial for (k = 0; k < 262144; k = k + 1) ram[k] = 16'h0000;
	wire [15:0] RAM_Q = ram[SA[18:1]];
	wire [15:0] RAM_D = (!DACK0 || !DACK1) ? YGR_SDO : SDO;
	always @(posedge clk) if (!SCS1_N && SHCE_R) begin
		if (!SWRL_N) ram[SA[18:1]][7:0]  <= RAM_D[7:0];
		if (!SWRH_N) ram[SA[18:1]][15:8] <= RAM_D[15:8];
	end
	reg [15:0] lfsr = 16'hACE1;
	always @(posedge clk) lfsr <= {lfsr[14:0], lfsr[15] ^ lfsr[13] ^ lfsr[12] ^ lfsr[10]};
	always @(*) SWAIT_N = SCS1_N ? 1'b1 : (lfsr[3:1] != 3'b000);
	assign SDI = !SCS1_N ? RAM_Q : YGR_SDO;

	SH1 #("rtl/cdb105m.mif") sh1 (
		.CLK(clk), .RST_N(rst_n), .CE_R(SHCE_R), .CE_F(SHCE_F), .EN(1'b1), .RES_N(cdres_n),
		.A(SA), .DI(SDI), .DO(SDO),
		.TIOCA0(1'b0), .TIOCA1(1'b0), .DREQ0N(DREQ0_N), .DREQ1N(DREQ1_N),
		.RASN(), .CS6N(SCS6_N), .WRLN(SWRL_N), .WRHN(SWRH_N), .RDN(SRD_N), .DACK0(DACK0), .DACK1(DACK1),
		.TIOCA2(1'b1), .TIOCB2(1'b1), .PB2I(COMSYNC_N), .TIOCB3(COMREQ_N), .RXD0(CDATA),
		.IRQ6N(SIRQL_N), .IRQ7N(SIRQH_N), .PB6O(DEMP), .TXD0(HDATA), .SCK0O(COMCLK),
		.CS1N_CASHN(SCS1_N), .CS2N(SCS2_N), .CASLN(), .WAITN(SWAIT_N));

	YGR019 ygr (
		.CLK(clk), .RST_N(rst_n), .RES_N(cdres_n),
		.CE_R(SYS_CE_R), .CE_F(SYS_CE_F),
		.AA(AA), .ADI(ADI), .ADO(ADO), .AFC(2'b00),
		.ACS2_N(ACS2_N), .ARD_N(ARD_N), .AWRL_N(AWRL_N), .AWRU_N(AWRU_N),
		.ATIM0_N(1'b1), .ATIM2_N(1'b1), .AWAIT_N(AWAIT_N), .ARQT_N(),
		.SHCE_R(SHCE_R), .SHCE_F(SHCE_F),
		.SA(SA[21:1]), .SDI(SDO), .SDO(YGR_SDO), .BDI(RAM_Q),
		.SWRL_N(SWRL_N), .SWRH_N(SWRH_N), .SRD_N(SRD_N), .SCS2_N(SCS2_N), .SCS6_N(SCS6_N),
		.SIRQL_N(SIRQL_N), .SIRQH_N(SIRQH_N),
		.DACK0(DACK0), .DACK1(DACK1), .DREQ0_N(DREQ0_N), .DREQ1_N(DREQ1_N),
		.CD_D(CD_DATA[15:0]), .CD_CK(CD_CK), .CD_AUDIO(CD_AUDIO), .CD_SL(CD_SL), .CD_SR(CD_SR), .FAST(1'b0));

	cdd_pocket cdd (
		.CLK(clk), .RST_N(rst_n), .CDD_CE(CDD_CE),
		.CD_CDATA(CDATA), .CD_HDATA(HDATA), .CD_COMCLK(COMCLK), .CD_COMREQ_N(COMREQ_N), .CD_COMSYNC_N(COMSYNC_N),
		.CD_DATA(CD_DATA), .CD_CK(CD_CK), .CD_AUDIO(CD_AUDIO),
		.BOOT_BUSY(), .BOOT_WR(), .BOOT_ADDR(), .BOOT_DATA(),
		.clk_74a(clk74), .bridge_wr(bridge_wr), .bridge_addr(bridge_addr), .bridge_wr_data(bridge_wr_data),
		.target_dataslot_read(t_read), .target_dataslot_id(t_id), .target_dataslot_slotoffset(t_off),
		.target_dataslot_bridgeaddr(t_baddr), .target_dataslot_length(t_len),
		.target_dataslot_ack(t_ack), .target_dataslot_done(t_done), .target_dataslot_err(t_err),
		.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
		.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(), .sram_lb_n(), .sram_req(), .sram_gnt(1'b1),
		.DISC_OK(disc_ok), .DBG(), .STALL());
	wire [15:0] audio_l = CD_SL, audio_r = CD_SR;
	wire fd_active = 0;
end else begin : g
	// ------------------------------------------------------------ HLE: cdb_hle + cd_stream
	wire [18:1] RAM_A; wire [15:0] RAM_D; wire [1:0] RAM_WE; wire RAM_RD, RAM_CS; reg [15:0] RAM_Q = 0; reg RAM_RDY = 1;
	wire [15:0] CD_SL, CD_SR;
	wire lk_go, lk_byidx, lk_hold, lk_busy, eng_idle, lk_data, lk_s2048, pf_flush, pf_en, pf_ready, sd_go, sd_synth, sd_spd2, fd_busy, cd_ck, cd_audio, disc_new;
	wire [23:0] lk_x, lk_start, pf_fad, sd_hdr, toc_end; wire [6:0] lk_idx, lk_track, ntracks; wire [7:0] lk_tbcd, lk_idx1, ntbcd; wire [1:0] sd_kind; wire [17:0] cd_data;

	cd_stream stream (
		.clk(clk), .rst_n(rst_n), .ce(CDD_CE),
		.clk_74a(clk74), .bridge_wr(bridge_wr), .bridge_addr(bridge_addr), .bridge_wr_data(bridge_wr_data),
		.t_read(t_read), .t_id(t_id), .t_off(t_off), .t_baddr(t_baddr), .t_len(t_len), .t_ack(t_ack), .t_done(t_done), .t_err(t_err),
		.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
		.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(), .sram_lb_n(), .sram_req(), .sram_gnt(1'b1),
		.disc_ok(disc_ok), .disc_new(disc_new), .boot_busy(), .boot_wr(), .boot_addr(), .boot_data(),
		.ntracks(ntracks), .ntbcd(ntbcd), .toc_end(toc_end), .hack_wwf(), .hack_rr(),
		.lk_go(lk_go), .lk_byidx(lk_byidx), .lk_x(lk_x), .lk_idx(lk_idx), .lk_hold(lk_hold), .lk_busy(lk_busy), .eng_idle(eng_idle),
		.lk_track(lk_track), .lk_tbcd(lk_tbcd), .lk_start(lk_start), .lk_idx1(lk_idx1), .lk_data(lk_data), .lk_s2048(lk_s2048),
		.pf_flush(pf_flush), .pf_fad(pf_fad), .pf_en(pf_en), .pf_ready(pf_ready),
		.sd_go(sd_go), .sd_kind(sd_kind), .sd_synth(sd_synth), .sd_spd2(sd_spd2), .sd_hdr(sd_hdr), .fd_busy(fd_busy),
		.cd_data(cd_data), .cd_ck(cd_ck), .cd_audio(cd_audio), .err_cnt());

	cdb_hle #(.FW_FILE(`FWPATH)) hle (
		.CLK(clk), .RST_N(rst_n), .RES_N(cdres_n), .CE_R(SYS_CE_R), .CE_F(SYS_CE_F), .CD_CE(CD_CE), .CDD_CE(CDD_CE),
		.AA(AA), .ADI(ADI), .ADO(ADO), .ACS2_N(ACS2_N), .ARD_N(ARD_N), .AWRL_N(AWRL_N), .AWRU_N(AWRU_N),
		.AWAIT_N(AWAIT_N), .ARQT_N(),
		.RAM_A(RAM_A), .RAM_D(RAM_D), .RAM_WE(RAM_WE), .RAM_RD(RAM_RD), .RAM_CS(RAM_CS), .RAM_Q(RAM_Q), .RAM_RDY(RAM_RDY),
		.CD_SL(CD_SL), .CD_SR(CD_SR), .FAST(1'b0),
		.disc_ok(disc_ok), .disc_new(disc_new), .ntracks(ntracks), .ntbcd(ntbcd), .toc_end(toc_end),
		.lk_go(lk_go), .lk_byidx(lk_byidx), .lk_x(lk_x), .lk_idx(lk_idx), .lk_hold(lk_hold), .lk_busy(lk_busy), .eng_idle(eng_idle),
		.lk_track(lk_track), .lk_tbcd(lk_tbcd), .lk_start(lk_start), .lk_idx1(lk_idx1), .lk_data(lk_data), .lk_s2048(lk_s2048),
		.pf_flush(pf_flush), .pf_fad(pf_fad), .pf_en(pf_en), .pf_ready(pf_ready),
		.sd_go(sd_go), .sd_kind(sd_kind), .sd_synth(sd_synth), .sd_spd2(sd_spd2), .sd_hdr(sd_hdr), .fd_busy(fd_busy),
		.cd_data(cd_data), .cd_ck(cd_ck));

	// ddram_pocket cdram client model: edge-triggered rd/wr, busy two clocks after the edge
	reg [15:0] dmem [0:262143];
	integer dk;
	initial for (dk = 0; dk < 262144; dk = dk + 1) dmem[dk] = 16'h0000;
	reg rd_old = 0, wr_old = 0;
	integer bcnt = 0, dlat = 3;
	reg [15:0] lf2 = 16'h1D87;
	reg wr_pend = 0; reg [17:0] wr_a; reg [15:0] wr_d;
	always @(posedge clk) begin
		lf2 <= {lf2[14:0], lf2[15] ^ lf2[13] ^ lf2[12] ^ lf2[10]};
		rd_old <= RAM_RD & RAM_CS; wr_old <= |RAM_WE & RAM_CS;
		if (bcnt != 0) bcnt <= bcnt - 1;
		if (RAM_RD && RAM_CS && !rd_old) begin
			bcnt <= 1 + (lf2[2:0] == 0 ? 20 : 0);
			RAM_Q <= dmem[RAM_A];
		end
		if (|RAM_WE && RAM_CS && !wr_old) begin
			bcnt <= 1 + (lf2[3:1] == 0 ? 20 : 0);
			dmem[RAM_A] <= RAM_D;
		end
		RAM_RDY <= (bcnt <= 1) && !((RAM_RD && RAM_CS && !rd_old) || (|RAM_WE && RAM_CS && !wr_old));
	end
	wire [15:0] audio_l = CD_SL, audio_r = CD_SR;
	wire fd_active = fd_busy;
end endgenerate

// ---------------------------------------------------------------- bridge: files, TOC push, target commands
reg [31:0] f0 [0:139999];
reg [31:0] f1 [0:139999];
reg [31:0] tocw [0:511];
task bridge_write(input [31:0] a, input [31:0] d);
begin
	@(posedge clk74); bridge_wr <= 1; bridge_addr <= a; bridge_wr_data <= d;
	@(posedge clk74); bridge_wr <= 0;
	repeat (23) @(posedge clk74);
end
endtask
integer i;
task push_toc;
begin
	for (i = 0; i < 512; i = i + 1) bridge_write(32'h6000_0000 + 4 * i, tocw[i]);
end
endtask

integer BR_LAT = 8000, nwords, k2, nreads = 0;
reg [31:0] c_off, c_len, c_baddr; reg [15:0] c_id;
reg t_read_d = 0;
reg [31:0] wv;
always @(posedge clk74) begin
	t_read_d <= t_read;
	if (t_read && !t_read_d) begin
		c_off = t_off; c_len = t_len; c_baddr = t_baddr; c_id = t_id;
		t_done <= 0; t_err <= 0;
		nreads = nreads + 1;
		fork : cmd
			begin
				repeat (BR_LAT) @(posedge clk74);
				t_ack <= 1;
				nwords = c_len / 4;
				for (k2 = 0; k2 < nwords; k2 = k2 + 1) begin
					if (c_id == 16) wv = f0[c_off / 4 + k2]; else wv = f1[c_off / 4 + k2];
					@(posedge clk74); bridge_wr <= 1; bridge_addr <= c_baddr + 4 * k2; bridge_wr_data <= wv;
					@(posedge clk74); bridge_wr <= 0;
					repeat (22) @(posedge clk74);
				end
				repeat (40) @(posedge clk74);
				t_err <= 0; t_done <= 1; t_ack <= 0;
			end
		join_none
	end
end

// ---------------------------------------------------------------- host tasks
task wait_ce_r;
begin
	@(posedge clk);
	while (!SYS_CE_R) @(posedge clk);
end
endtask

task host_wr(input [7:0] off, input [15:0] d);
begin
	wait_ce_r;
	AA <= off[7:1]; ADI <= d; ACS2_N <= 0;
	repeat (4) @(posedge clk);
	AWRL_N <= 0; AWRU_N <= 0;
	repeat (8) @(posedge clk);
	while (!AWAIT_N) @(posedge clk);
	AWRL_N <= 1; AWRU_N <= 1;
	repeat (4) @(posedge clk);
	ACS2_N <= 1;
	repeat (4) @(posedge clk);
end
endtask

reg [15:0] rd_data;
task host_rd(input [7:0] off);
begin
	wait_ce_r;
	AA <= off[7:1]; ACS2_N <= 0;
	repeat (4) @(posedge clk);
	ARD_N <= 0;
	repeat (4) @(posedge clk);
	while (!AWAIT_N) @(posedge clk);
	repeat (4) @(posedge clk);
	rd_data = ADO;
	ARD_N <= 1;
	repeat (4) @(posedge clk);
	ACS2_N <= 1;
	repeat (4) @(posedge clk);
end
endtask

task delay_us(input integer us);
begin
	repeat (us * 57) @(posedge clk);
end
endtask

reg [15:0] rr [0:3];
integer t_cmd0;
task cd_cmd(input [15:0] c1, input [15:0] c2, input [15:0] c3, input [15:0] c4, input integer to_us);
	integer t; reg ok; reg [15:0] hq;
begin
	t_cmd0 = cnt;
	host_wr(8'h18, c1); host_wr(8'h1C, c2); host_wr(8'h20, c3); host_wr(8'h24, c4);
	ok = 0;
	for (t = 0; t < to_us / 20 && !ok; t = t + 1) begin
		delay_us(20);
		host_rd(8'h08);
		if (rd_data[0]) ok = 1;
	end
	hq = rd_data;
	if (ok) begin
		host_rd(8'h18); rr[0] = rd_data;
		host_rd(8'h1C); rr[1] = rd_data;
		host_rd(8'h20); rr[2] = rd_data;
		host_rd(8'h24); rr[3] = rd_data;
		host_wr(8'h08, 16'hFFFE);
		$fwrite(lf, "CMD %04h %04h %04h %04h -> %04h %04h %04h %04h HIRQ=%04h us=%0d\n", c1, c2, c3, c4, rr[0], rr[1], rr[2], rr[3], hq, (cnt - t_cmd0) / 57);
	end else $fwrite(lf, "CMD %04h %04h %04h %04h -> TIMEOUT HIRQ=%04h\n", c1, c2, c3, c4, hq);
end
endtask

// ---------------------------------------------------------------- script interpreter
integer sf, n, a1, a2, a3, a4, a5, w;
reg [8*16-1:0] op;
reg [8*256-1:0] line;
initial begin
	if (!$value$plusargs("CE=%d", CE_CLKS)) CE_CLKS = 325;
	if (!$value$plusargs("DISC=%s", disc)) disc = "C";
	if (!$value$plusargs("SCRIPT=%s", scriptname)) scriptname = "script.txt";
	if (!$value$plusargs("LOG=%s", logname)) logname = "build/run.log";
	lf = $fopen(logname, "w");
	$readmemh({"build/", disc, "_f0.hex"}, f0);
	$readmemh({"build/", disc, "_f1.hex"}, f1);
	$readmemh({"build/", disc, "_toc.hex"}, tocw);
	repeat (20) @(posedge clk); rst_n = 1;
	push_toc;
	repeat (50) @(posedge clk);
	cdres_n = 1;
	ce_en = 1;
	sf = $fopen(scriptname, "r");
	while (!$feof(sf)) begin
		n = $fgets(line, sf);
		n = $sscanf(line, " %s", op);
		if (n == 1) begin
			if (op == "cmd") begin n = $sscanf(line, " %s %h %h %h %h %d", op, a1, a2, a3, a4, a5); cd_cmd(a1, a2, a3, a4, a5); end
			else if (op == "wr")  begin n = $sscanf(line, " %s %h %h", op, a1, a2); host_wr(a1, a2); $fwrite(lf, "WR %02h %04h\n", a1, a2); end
			else if (op == "rd")  begin n = $sscanf(line, " %s %h", op, a1); host_rd(a1); $fwrite(lf, "RD %02h %04h\n", a1, rd_data); end
			else if (op == "delay") begin n = $sscanf(line, " %s %d", op, a1); delay_us(a1); end
			else if (op == "hirq") begin host_rd(8'h08); $fwrite(lf, "HIRQ %04h\n", rd_data); end
			else if (op == "clr")  begin n = $sscanf(line, " %s %h", op, a1); host_wr(8'h08, ~a1[15:0]); end
			else if (op == "mask") begin n = $sscanf(line, " %s %h", op, a1); host_wr(8'h0C, a1); end
			else if (op == "wait") begin
				n = $sscanf(line, " %s %h %d", op, a1, a2);
				w = 0;
				host_rd(8'h08);
				while ((rd_data & a1[15:0]) != a1[15:0] && w < a2 / 20) begin delay_us(20); host_rd(8'h08); w = w + 1; end
				$fwrite(lf, "WAIT %04h %0s HIRQ=%04h\n", a1, ((rd_data & a1[15:0]) == a1[15:0]) ? "ok" : "timeout", rd_data);
			end
			else if (op == "data") begin
				n = $sscanf(line, " %s %d", op, a1);
				$fwrite(lf, "DATA %0d", a1);
				for (w = 0; w < a1; w = w + 1) begin host_rd(8'h00); $fwrite(lf, " %04h", rd_data); end
				$fwrite(lf, "\n");
			end
			else if (op == "putdata") begin
				n = $sscanf(line, " %s %d %h", op, a1, a2);
				for (w = 0; w < a1; w = w + 1) host_wr(8'h00, (a2 + w * 16'h0101) & 16'hFFFF);
				$fwrite(lf, "PUTDATA %0d %04h\n", a1, a2);
			end
			else if (op == "mark") begin n = $sscanf(line, " %s %s", op, op); $fwrite(lf, "MARK %0s\n", op); end
			else if (op == "audio") $fwrite(lf, "AUDIO L=%04h R=%04h\n", g.audio_l, g.audio_r);
			else if (op == "end") begin $fclose(sf); sf = 0; end
		end
		if (sf == 0) n = 0;
	end
	$fwrite(lf, "END\n");
	$fclose(lf);
	$display("done: %0d bridge reads", nreads);
	$finish;
end

initial begin
	#4000000000;
	$display("TIMEOUT");
	$finish;
end

endmodule
