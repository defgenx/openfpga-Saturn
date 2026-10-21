`timescale 1ns/1ps
// Testbench for cdd_pocket: SH-1 serial host model, APF bridge target model, async SRAM model.
// Writes a log that check.py replays through cdd_model.py. Plusargs: +DISC=A|B +LOG=file +CE=<clk per CE>
module tb_cdd;

integer CE_CLKS;
string disc;
string logname;
integer lf;

// ---------------------------------------------------------------- clocks
reg clk = 0, clk74 = 0;
always #8.73 clk = ~clk;            // 57.27 MHz
always #6.734 clk74 = ~clk74;       // 74.25 MHz

reg ce_en = 0;
reg CE = 0;
integer cec = 0;
always @(posedge clk) begin
	CE <= 0;
	if (ce_en) begin
		cec <= cec + 1;
		if (cec >= CE_CLKS - 1) begin cec <= 0; CE <= 1; end
	end
end

// ---------------------------------------------------------------- DUT
wire CD_CDATA, CD_COMREQ_N, CD_COMSYNC_N, CD_CK, CD_AUDIO;
reg  CD_HDATA = 0, CD_COMCLK = 1;
wire [17:0] CD_DATA;
wire BOOT_BUSY, BOOT_WR, DISC_OK, STALL;
wire [8:0] BOOT_ADDR;
wire [15:0] BOOT_DATA, DBG;
reg  rst_n = 0;

reg         bridge_wr = 0;
reg  [31:0] bridge_addr = 0, bridge_wr_data = 0;
wire        t_read;
wire [15:0] t_id;
wire [31:0] t_off, t_baddr, t_len;
reg         t_ack = 0, t_done = 0;
reg  [2:0]  t_err = 0;

wire [16:0] sram_a; wire [15:0] sram_dq_o; wire sram_dq_oe, sram_oe_n, sram_we_n, sram_ub_n, sram_lb_n;
wire [15:0] dq;
assign dq = sram_dq_oe ? sram_dq_o : 16'hzzzz;

cdd_pocket dut (
	.CLK(clk), .RST_N(rst_n), .CDD_CE(CE),
	.CD_CDATA(CD_CDATA), .CD_HDATA(CD_HDATA), .CD_COMCLK(CD_COMCLK),
	.CD_COMREQ_N(CD_COMREQ_N), .CD_COMSYNC_N(CD_COMSYNC_N),
	.CD_DATA(CD_DATA), .CD_CK(CD_CK), .CD_AUDIO(CD_AUDIO),
	.BOOT_BUSY(BOOT_BUSY), .BOOT_WR(BOOT_WR), .BOOT_ADDR(BOOT_ADDR), .BOOT_DATA(BOOT_DATA),
	.clk_74a(clk74), .bridge_wr(bridge_wr), .bridge_addr(bridge_addr), .bridge_wr_data(bridge_wr_data),
	.target_dataslot_read(t_read), .target_dataslot_id(t_id), .target_dataslot_slotoffset(t_off),
	.target_dataslot_bridgeaddr(t_baddr), .target_dataslot_length(t_len),
	.target_dataslot_ack(t_ack), .target_dataslot_done(t_done), .target_dataslot_err(t_err),
	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(dq),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n), .sram_req(), .sram_gnt(1'b1),
	.DISC_OK(DISC_OK), .DBG(DBG), .STALL(STALL)
);

// ---------------------------------------------------------------- SRAM model (async, 128K x 16)
reg [15:0] smem [0:131071];
assign dq = (!sram_oe_n && sram_we_n) ? smem[sram_a] : 16'hzzzz;
always @(posedge sram_we_n) if (!sram_ub_n && !sram_lb_n) smem[sram_a] <= dq;

// ---------------------------------------------------------------- bridge: files, TOC push, target commands
reg [31:0] f0 [0:139999];
reg [31:0] f1 [0:139999];
reg [31:0] tocw [0:511];
integer f0_words, f1_words;

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

// target command model, same ack/done behaviour as core_bridge_cmd
reg        br_hold = 0;            // stall: the host does not answer
integer    BR_LAT = 8000;
integer    nwords, k, nreads = 0;
reg [31:0] c_off, c_len, c_baddr; reg [15:0] c_id;
reg        t_read_d = 0;
reg [31:0] wv;
always @(posedge clk74) begin
	t_read_d <= t_read;
	if (t_read && !t_read_d) begin
		c_off = t_off; c_len = t_len; c_baddr = t_baddr; c_id = t_id;
		t_done <= 0; t_err <= 0;
		nreads = nreads + 1;
		fork : cmd
			begin
				while (br_hold) @(posedge clk74);
				repeat (BR_LAT) @(posedge clk74);
				t_ack <= 1;
				nwords = c_len / 4;
				for (k = 0; k < nwords; k = k + 1) begin
					while (br_hold) @(posedge clk74);
					if (c_id == 16) wv = f0[c_off / 4 + k]; else wv = f1[c_off / 4 + k];
					@(posedge clk74); bridge_wr <= 1; bridge_addr <= c_baddr + 4 * k; bridge_wr_data <= wv;
					@(posedge clk74); bridge_wr <= 0;
					repeat (22) @(posedge clk74);
				end
				repeat (40) @(posedge clk74);
				t_err <= 0; t_done <= 1; t_ack <= 0;
			end
		join_none
	end
end

// ---------------------------------------------------------------- SH-1 host model
reg [7:0] nxt [0:11];
reg [7:0] txb [0:11];
reg [7:0] rxb [0:11];
reg       cmd_set = 0;
integer   xcount = 0;
integer   bi, bt;
reg [7:0] rxv;
reg       stall_at_x;

task set_cmd(input [7:0] cmd, input [23:0] fad, input [7:0] idx, input [7:0] tno, input [7:0] spd);
	integer j; reg [7:0] s;
begin
	for (j = 0; j < 12; j = j + 1) nxt[j] = 0;
	nxt[0] = cmd; nxt[1] = fad[23:16]; nxt[2] = fad[15:8]; nxt[3] = fad[7:0];
	nxt[4] = idx; nxt[8] = tno; nxt[10] = spd;
	s = 0; for (j = 0; j < 11; j = j + 1) s = s + nxt[j];
	nxt[11] = ~s;
	cmd_set = 1;
end
endtask

initial forever begin : host
	@(negedge CD_COMSYNC_N);
	stall_at_x = STALL;
	for (bi = 0; bi < 12; bi = bi + 1) begin
		txb[bi] = cmd_set ? nxt[bi] : 8'h00;
		if (bi == 11 && !cmd_set) begin : cs
			integer j; reg [7:0] s; s = 0;
			for (j = 0; j < 11; j = j + 1) s = s + txb[j];
			txb[11] = ~s;
		end
		wait (CD_COMREQ_N == 0);
		for (bt = 0; bt < 8; bt = bt + 1) begin
			CD_COMCLK = 0; repeat (6) @(posedge clk);
			rxv[bt] = CD_CDATA;
			CD_HDATA = txb[bi][bt];
			CD_COMCLK = 1; repeat (6) @(posedge clk);
		end
		rxb[bi] = rxv;
	end
	cmd_set = 0;
	xcount = xcount + 1;
	$fwrite(lf, "X %0d %0d ", xcount, stall_at_x);
	for (bi = 0; bi < 12; bi = bi + 1) $fwrite(lf, "%02x", txb[bi]);
	$fwrite(lf, " ");
	for (bi = 0; bi < 12; bi = bi + 1) $fwrite(lf, "%02x", rxb[bi]);
	$fwrite(lf, "\n");
end

// ---------------------------------------------------------------- YGR019 side: sector capture
integer wcount = 0, scount = 0, stall_x = 0;
reg [15:0] sec [0:1175];
reg        sec_audio;
integer    w;
always @(posedge clk) if (CD_CK) begin
	sec[wcount] = CD_DATA[15:0];
	if (wcount == 0) sec_audio = CD_AUDIO;
	wcount = wcount + 1;
	if (wcount == 1176) begin
		wcount = 0; scount = scount + 1;
		$fwrite(lf, "S %0d ", sec_audio);
		for (w = 0; w < 1176; w = w + 1) $fwrite(lf, "%04x", sec[w]);
		$fwrite(lf, "\n");
	end
end

// boot header replay capture
reg [15:0] bootw [0:131];
integer nboot = 0;
integer boot_bad = 0;
always @(posedge clk) if (BOOT_WR) begin bootw[BOOT_ADDR / 2] = BOOT_DATA; nboot = nboot + 1; end

// ---------------------------------------------------------------- scenario helpers
task wait_x(input integer n);
	integer t;
begin
	t = xcount + n;
	wait (xcount >= t);
end
endtask

task wait_sectors(input integer n);
	integer t;
begin
	t = scount + n;
	wait (scount >= t);
end
endtask

task marker(input string name);
begin
	$fwrite(lf, "M %s\n", name);
	$display("[%0t] scenario %s", $time, name);
end
endtask

localparam [7:0] C_SEEKRING = 8'h02, C_TOC = 8'h03, C_STOP = 8'h04, C_READ = 8'h06, C_PAUSE = 8'h08, C_SEEK = 8'h09;

integer stall_ns;
reg stall_only = 0;
integer stalls_seen;
initial begin
	if (!$value$plusargs("CE=%d", CE_CLKS)) CE_CLKS = 40;
	if (!$value$plusargs("DISC=%s", disc)) disc = "A";
	if (!$value$plusargs("LOG=%s", logname)) logname = "build/cd.log";
	lf = $fopen(logname, "w");
	$readmemh({"build/", disc, "_f0.hex"}, f0);
	$readmemh({"build/", disc, "_f1.hex"}, f1);
	$readmemh({"build/", disc, "_toc.hex"}, tocw);
	nxt[0] = 0;
	if ($test$plusargs("STALLONLY")) stall_only = 1;
	repeat (20) @(posedge clk); rst_n = 1;
	push_toc;
	repeat (50) @(posedge clk);
	ce_en = 1;
	wait (DISC_OK);
	$display("disc loaded, boot words %0d", nboot);
	boot_bad = 0;
	for (i = 0; i < 65; i = i + 1) begin
		if (bootw[2*i]   !== {tocw[4+i][23:16], tocw[4+i][31:24]}) boot_bad = boot_bad + 1;
		if (bootw[2*i+1] !== {tocw[4+i][7:0],   tocw[4+i][15:8]})  boot_bad = boot_bad + 1;
	end
	$fwrite(lf, "B %0d %0d\n", nboot, boot_bad);
	wait_x(3);

	if (disc == "A") begin
		if (!stall_only) begin
		marker("toc");
		set_cmd(C_TOC, 0, 0, 0, 1);
		wait_x(8);

		marker("read_1x");
		set_cmd(C_SEEK, 150 + 40, 0, 1, 1);          // seek first
		wait_x(8);
		set_cmd(C_READ, 150 + 16, 0, 1, 1);
		wait_sectors(14);
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(5);

		marker("read_2x");
		set_cmd(C_READ, 150 + 60, 0, 1, 2);
		wait_sectors(24);
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(4);

		marker("audio");
		set_cmd(C_READ, 270, 1, 2, 1);
		wait_sectors(16);

		marker("pause_resume");
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(6);
		set_cmd(C_READ, 270 + 20, 1, 2, 1);
		wait_sectors(8);
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(3);

		end
		marker("stall_300ms");
		set_cmd(C_READ, 150 + 30, 0, 1, 2);
		wait_sectors(10);
		br_hold = 1;
		// 300 ms of CDD time: the CE clock runs 324.7 / CE_CLKS times faster in reality
		stall_ns = (300000000.0 * CE_CLKS) / 324.7;
		#(stall_ns);
		br_hold = 0;
		wait_sectors(14);
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(3);

		marker("security_ring");
		set_cmd(C_SEEKRING, 150 + 360, 0, 1, 1);
		wait_x(6);
		set_cmd(C_READ, 150 + 360, 0, 1, 1);
		wait_sectors(4);
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(3);
	end else begin
		marker("cooked_2048");
		set_cmd(C_READ, 150 + 10, 0, 1, 1);
		wait_sectors(6);
		set_cmd(C_PAUSE, 0, 0, 0, 1);
		wait_x(3);
	end
	marker("end");
	$fclose(lf);
	$display("done: %0d exchanges, %0d sectors, %0d bridge reads", xcount, scount, nreads);
	$finish;
end

initial begin
	#2000000000;
	$display("TIMEOUT");
	$finish;
end

endmodule
