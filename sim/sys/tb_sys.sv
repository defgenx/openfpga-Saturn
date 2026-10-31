// tb_sys: full-system simulation of core_top (the real Pocket top) in the build configuration of
// src/fpga/ap_core.qsf, with the Pocket memory models of sim/mem on the SDRAM, PSRAM and SRAM pins.
//
// Host side (the Pocket's bridge, as core_top sees it): wait for setup done, Reset Enter, push the BIOS slot
// (0x2xxxxxxx writes) through bridge_loader / load_pocket, dataslot_allcomplete, Reset Exit. All commands go
// through the real core_bridge_cmd at 0xF8000000.
//
// Plusargs: +BIOS=<file> (image for slot 0), +CYCLES=<clk_sys cycles>, +GAP=<clk_74a per bridge word>,
//           +TRACE (every MSH bus cycle in the trace file), +FRAMES=<dir for PPM dumps>
// Outputs:  build/trace.log (events), stdout (summary).
//
// Progress markers: a test ROM stores to the mailbox 0x06000F00.. (word 0 = step); every store there is logged.

`timescale 1ps/1ps

module tb_sys;


// ------------------------------------------------------------------ clocks and host
reg clk_74a = 1'b0;
always #6734 clk_74a = ~clk_74a;

reg [31:0] bridge_addr = 32'd0;
reg        bridge_wr = 1'b0;
reg [31:0] bridge_wr_data = 32'd0;
reg        bridge_rd = 1'b0;

// ------------------------------------------------------------------ pins
wire [21:16] cram0_a, cram1_a;
wire [15:0]  cram0_dq, cram1_dq;
wire         cram0_clk, cram0_adv_n, cram0_cre, cram0_ce0_n, cram0_ce1_n, cram0_oe_n, cram0_we_n, cram0_ub_n, cram0_lb_n;
wire         cram1_clk, cram1_adv_n, cram1_cre, cram1_ce0_n, cram1_ce1_n, cram1_oe_n, cram1_we_n, cram1_ub_n, cram1_lb_n;
wire [12:0]  dram_a;  wire [1:0] dram_ba, dram_dqm;  wire [15:0] dram_dq;
wire         dram_clk, dram_cke, dram_ras_n, dram_cas_n, dram_we_n;
wire [16:0]  sram_a;  wire [15:0] sram_dq;
wire         sram_oe_n, sram_we_n, sram_ub_n, sram_lb_n;
wire [23:0]  video_rgb;
wire         video_rgb_clock, video_rgb_clock_90, video_de, video_skip, video_vs, video_hs;
wire         audio_mclk, audio_dac, audio_lrck;
wire [31:0]  bridge_rd_data;
wire         bridge_endian_little;

core_top dut (
	.clk_74a(clk_74a), .clk_74b(clk_74a),
	.port_ir_rx(1'b0),
	.cram0_a(cram0_a), .cram0_dq(cram0_dq), .cram0_wait(1'b0), .cram0_clk(cram0_clk), .cram0_adv_n(cram0_adv_n),
	.cram0_cre(cram0_cre), .cram0_ce0_n(cram0_ce0_n), .cram0_ce1_n(cram0_ce1_n), .cram0_oe_n(cram0_oe_n),
	.cram0_we_n(cram0_we_n), .cram0_ub_n(cram0_ub_n), .cram0_lb_n(cram0_lb_n),
	.cram1_a(cram1_a), .cram1_dq(cram1_dq), .cram1_wait(1'b0), .cram1_clk(cram1_clk), .cram1_adv_n(cram1_adv_n),
	.cram1_cre(cram1_cre), .cram1_ce0_n(cram1_ce0_n), .cram1_ce1_n(cram1_ce1_n), .cram1_oe_n(cram1_oe_n),
	.cram1_we_n(cram1_we_n), .cram1_ub_n(cram1_ub_n), .cram1_lb_n(cram1_lb_n),
	.dram_a(dram_a), .dram_ba(dram_ba), .dram_dq(dram_dq), .dram_dqm(dram_dqm), .dram_clk(dram_clk), .dram_cke(dram_cke),
	.dram_ras_n(dram_ras_n), .dram_cas_n(dram_cas_n), .dram_we_n(dram_we_n),
	.sram_a(sram_a), .sram_dq(sram_dq), .sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),
	.vblank(1'b0), .dbg_rx(1'b1), .user2(1'b0), .audio_adc(1'b0),
	.video_rgb(video_rgb), .video_rgb_clock(video_rgb_clock), .video_rgb_clock_90(video_rgb_clock_90),
	.video_de(video_de), .video_skip(video_skip), .video_vs(video_vs), .video_hs(video_hs),
	.audio_mclk(audio_mclk), .audio_dac(audio_dac), .audio_lrck(audio_lrck),
	.bridge_endian_little(bridge_endian_little), .bridge_addr(bridge_addr), .bridge_rd(bridge_rd),
	.bridge_rd_data(bridge_rd_data), .bridge_wr(bridge_wr), .bridge_wr_data(bridge_wr_data),
	.cont1_key(32'd0), .cont2_key(32'd0), .cont3_key(32'd0), .cont4_key(32'd0),
	.cont1_joy(32'd0), .cont2_joy(32'd0), .cont3_joy(32'd0), .cont4_joy(32'd0),
	.cont1_trig(16'd0), .cont2_trig(16'd0), .cont3_trig(16'd0), .cont4_trig(16'd0)
);

// ------------------------------------------------------------------ memory chips (pin-level models, no pad delays)
`define PSRAM_PINS(N) \
	wire [31:0] m``N``_err, m``N``_rd, m``N``_wr, m``N``_bursts, m``N``_cel, m``N``_xrow; \
	psram_model #(.T_POWER(1000000)) model``N ( \
		.clk(cram``N``_clk), .host_oe(dut.psram``N``_dq_oe), .a(cram``N``_a), .dq(cram``N``_dq), .ce0_n(cram``N``_ce0_n), .ce1_n(cram``N``_ce1_n), .adv_n(cram``N``_adv_n), \
		.oe_n(cram``N``_oe_n), .we_n(cram``N``_we_n), .ub_n(cram``N``_ub_n), .lb_n(cram``N``_lb_n), .cre(cram``N``_cre), \
		.errors(m``N``_err), .n_rd(m``N``_rd), .n_wr(m``N``_wr), .n_bursts(m``N``_bursts), .max_ce_low(m``N``_cel), .n_xrow(m``N``_xrow));

`PSRAM_PINS(0)
`PSRAM_PINS(1)

wire [31:0] sd_err, sd_act, sd_rd, sd_wr; wire sd_drive;
wire [63:0] t_ref = 64'd64000000000;                      // 64 ms retention limit
sdram_model sdmodel (.t_ref(t_ref), .clk(dram_clk), .cke(dram_cke), .ras_n(dram_ras_n), .cas_n(dram_cas_n), .we_n(dram_we_n),
	.ba(dram_ba), .a(dram_a), .dqm(dram_dqm), .dq(dram_dq), .errors(sd_err), .dq_drive(sd_drive), .n_act(sd_act), .n_rd(sd_rd), .n_wr(sd_wr));

wire [31:0] sr_err, sr_rd, sr_wr;
sram_model #(.T_AA(0)) srmodel (.a(sram_a), .dq(sram_dq), .oe_n(sram_oe_n), .we_n(sram_we_n), .ub_n(sram_ub_n), .lb_n(sram_lb_n), .errors(sr_err), .n_rd(sr_rd), .n_wr(sr_wr));

// ------------------------------------------------------------------ host (bridge) side
reg [7:0] bios [0:524287];
integer   bios_len = 0;
integer   gap = 32;
string    bios_path;
integer   ftrace;
longint   cyc = 0;

task automatic bridge_write(input [31:0] a, input [31:0] d);
	begin
		@(posedge clk_74a);
		bridge_addr <= a; bridge_wr_data <= d; bridge_wr <= 1'b1;
		@(posedge clk_74a);
		bridge_wr <= 1'b0;
	end
endtask

// APF host command: parameter words, then 0x434D<cmd> at 0xF8000000; the target answers within a few clocks
task automatic host_cmd(input [15:0] cmd, input [31:0] p0, input [31:0] p1);
	begin
		bridge_write(32'hF8000020, p0);
		bridge_write(32'hF8000024, p1);
		bridge_write(32'hF8000000, {16'h434D, cmd});
		repeat (200) @(posedge clk_74a);
	end
endtask


// ------------------------------------------------------------------ disc: TOC push and dataslot read service
// +TOC=<file> (2048 bytes, tools/mktoc.py) is pushed to bridge 0x60000000 before the slots complete; +DISC0..3=<file> are the
// track files (data slots 16..19, read on demand with $fseek/$fread, so a full image is fine). After Reset Exit the host polls the
// target command register (core_bridge_cmd 0xF8001000), answers "ready to run" and every dataslot read the core issues, writing the
// sector words to the bridge address like the APF.
string    toc_path = "";
string    disc_path [0:3];
integer   disc_fd [0:3];
integer   n_ds_reads = 0, n_ds_err = 0;
reg [7:0] sec [0:4095];

task automatic bridge_read(input [31:0] a, output [31:0] d);
	begin
		@(posedge clk_74a);
		bridge_addr <= a; bridge_rd <= 1'b1;
		@(posedge clk_74a);
		bridge_rd <= 1'b0;
		repeat (3) @(posedge clk_74a);
		d = bridge_rd_data;
	end
endtask

task automatic serve_dataslot(input [31:0] id, input [31:0] off, input [31:0] baddr, input [31:0] len);
	integer fd, got, i, n;
	reg [31:0] w;
	begin
		n_ds_reads++;
		fd = (id >= 16 && id < 20) ? disc_fd[id - 16] : 0;
		got = 0;
		if (fd != 0) begin
			void'($fseek(fd, off, 0));
			got = $fread(sec, fd, 0, len);
		end
		for (i = got; i < len; i++) sec[i] = 8'h00;
		bridge_write(32'hF8001000, 32'h62750000);                 // ack: data follows
		for (i = 0; i < len; i = i + 4) begin
			bridge_write(baddr + i, {sec[i], sec[i+1], sec[i+2], sec[i+3]});
			repeat (gap) @(posedge clk_74a);
		end
		repeat (40) @(posedge clk_74a);
		if (got < len) n_ds_err++;
		bridge_write(32'hF8001000, got < len ? 32'h6F6B0002 : 32'h6F6B0000);   // done, err 2 on a short read
		$fdisplay(ftrace, "%0t DISC dataslot read id=%0d off=%0d baddr=%08h len=%0d got=%0d", $time, id, off, baddr, len, got);
	end
endtask

task automatic poll_target();
	reg [31:0] t0, p0, p1, p2, p3;
	begin
		forever begin
			bridge_read(32'hF8001000, t0);
			if (t0[31:16] == 16'h636D) begin
				if (t0[15:0] == 16'h0140) bridge_write(32'hF8001000, 32'h6F6B0000);       // ready to run
				else if (t0[15:0] == 16'h0180) begin
					bridge_read(32'hF8001020, p0); bridge_read(32'hF8001024, p1);
					bridge_read(32'hF8001028, p2); bridge_read(32'hF800102C, p3);
					serve_dataslot(p0, p1, p2, p3);
				end else bridge_write(32'hF8001000, 32'h6F6B0001);                         // unsupported: error
			end
			repeat (400) @(posedge clk_74a);
		end
	end
endtask

initial begin : host
	integer fd, i, n;
	bit [31:0] w;
	if (!$value$plusargs("BIOS=%s", bios_path)) bios_path = "";
	if (!$value$plusargs("GAP=%d", gap)) gap = 32;
	if (!$value$plusargs("TOC=%s", toc_path)) toc_path = "";
	for (i = 0; i < 4; i++) begin disc_fd[i] = 0; disc_path[i] = ""; end
	if ($value$plusargs("DISC0=%s", disc_path[0])) disc_fd[0] = $fopen(disc_path[0], "rb");
	if ($value$plusargs("DISC1=%s", disc_path[1])) disc_fd[1] = $fopen(disc_path[1], "rb");
	if ($value$plusargs("DISC2=%s", disc_path[2])) disc_fd[2] = $fopen(disc_path[2], "rb");
	if ($value$plusargs("DISC3=%s", disc_path[3])) disc_fd[3] = $fopen(disc_path[3], "rb");
	for (i = 0; i < 524288; i = i + 1) bios[i] = 8'h00;
	if (bios_path != "") begin
		fd = $fopen(bios_path, "rb");
		if (fd == 0) begin $display("tb_sys: cannot open BIOS image %s", bios_path); $finish; end
		bios_len = $fread(bios, fd);
		$fclose(fd);
		$display("tb_sys: slot 0 image %0d bytes", bios_len);
	end else begin
		$display("tb_sys: no +BIOS given"); $finish;
	end
	// the host waits for "setup done" (status request answers 3), then resets the core and loads the slots
	wait (dut.status_setup_done === 1'b1);
	repeat (20) @(posedge clk_74a);
	$fdisplay(ftrace, "%0t HOST setup done, Reset Enter", $time);
	bridge_write(32'h8000000C, 32'd5);                     // SDRAM read capture: falling edge +4.5 (no pad delays in the sim)
	host_cmd(16'h0010, 0, 0);                              // Reset Enter
	$fdisplay(ftrace, "%0t HOST slot 0 write start", $time);
	for (i = 0; i < bios_len; i = i + 4) begin
		bridge_write(32'h20000000 + i, {bios[i], bios[i+1], bios[i+2], bios[i+3]});
		repeat (gap) @(posedge clk_74a);
	end
	$fdisplay(ftrace, "%0t HOST slot 0 write end, %0d words, FIFO overflow %0d", $time, bios_len/4, dut.saturn.dbg_ld_ovf);
	repeat (50) @(posedge clk_74a);
	if (toc_path != "") begin : tocpush
		integer ft, k, nb;
		reg [7:0] tb8 [0:2047];
		ft = $fopen(toc_path, "rb"); nb = $fread(tb8, ft); $fclose(ft);
		$fdisplay(ftrace, "%0t HOST TOC push %0d bytes", $time, nb);
		for (k = 0; k < 2048; k = k + 4) begin
			bridge_write(32'h60000000 + k, {tb8[k], tb8[k+1], tb8[k+2], tb8[k+3]});
			repeat (gap) @(posedge clk_74a);
		end
	end
	host_cmd(16'h008F, 0, 0);                              // all slots complete
	host_cmd(16'h0011, 0, 0);                              // Reset Exit
	$fdisplay(ftrace, "%0t HOST Reset Exit", $time);
	$display("tb_sys: host sequence done at %0t ps", $time);
	poll_target();
end

// ------------------------------------------------------------------ probes
`define SAT dut.saturn.saturn
wire        clk_sys = dut.saturn.clk_sys;
wire        sys_ce_r = `SAT.SYS_CE_R;
wire        rst_sys = dut.saturn.rst_sys;

function automatic string region(input [26:0] a);
	// A-bus / B-bus map of the SH-2 external address space (cache-through and mirror bits dropped)
	if (a < 27'h0080000)                 return "BIOS";
	else if (a < 27'h0100000)            return "ROM-mirror";
	else if (a < 27'h0100080)            return "SMPC";
	else if (a >= 27'h0180000 && a < 27'h0190000) return "BACKUP";
	else if (a >= 27'h0200000 && a < 27'h0300000) return "WRAM-L";
	else if (a >= 27'h1000000 && a < 27'h1000004) return "MINIT";
	else if (a >= 27'h1800000 && a < 27'h1800004) return "SINIT";
	else if (a >= 27'h2000000 && a < 27'h4000000) return "ABUS-CS0";
	else if (a >= 27'h4000000 && a < 27'h5800000) return "ABUS-CS1";
	else if (a >= 27'h5800000 && a < 27'h5900000) return "ABUS-CS2/CD";
	else if (a >= 27'h5A00000 && a < 27'h5A80000) return "SOUNDRAM";
	else if (a >= 27'h5B00000 && a < 27'h5B00EE4) return "SCSP-REGS";
	else if (a >= 27'h5C00000 && a < 27'h5C80000) return "VDP1-VRAM";
	else if (a >= 27'h5C80000 && a < 27'h5D00000) return "VDP1-FB";
	else if (a >= 27'h5D00000 && a < 27'h5D00020) return "VDP1-REGS";
	else if (a >= 27'h5E00000 && a < 27'h5F00000) return "VDP2-VRAM";
	else if (a >= 27'h5F00000 && a < 27'h5F01000) return "VDP2-CRAM";
	else if (a >= 27'h5F80000 && a < 27'h5F80120) return "VDP2-REGS";
	else if (a >= 27'h5FE0000 && a < 27'h5FF0000) return "SCU-REGS";
	else if (a >= 27'h6000000 && a < 27'h7FFFFFF) return "WRAM-H";
	else return "UNMAPPED";
endfunction

// ---- MSH bus cycle snoop (one record per cycle: address, direction, data at the end of the cycle)
reg         cy_open = 1'b0, cy_wr;
reg  [26:0] cy_a;
reg  [31:0] cy_d;
reg  [3:0]  cy_be;
integer     cy_len = 0;
bit         trace_all = 0;
longint     n_cycles = 0;
integer     n_unmapped = 0;
integer     wait_report = 0;
integer     scu_irq_n = 0;
reg [31:0]  last_flag = 32'hFFFFFFFF;
longint     step_t [0:255];

task automatic log_cycle();
	string r;
	r = region(cy_a);
	n_cycles++;
	bra[bri] = cy_a; brd[bri] = cy_d; bwr[bri] = cy_wr; bri = (bri + 1) % 64;
	if (r == "UNMAPPED") begin
		n_unmapped++;
		if (n_unmapped < 50) $fdisplay(ftrace, "%0t UNMAPPED %s A=%07h data=%08h", $time, cy_wr ? "WR" : "RD", cy_a, cy_d);
	end
	if (cy_wr) begin
		if (r == "SMPC") begin
			$fdisplay(ftrace, "%0t SMPC WR  A=%07h D=%02h %s", $time, cy_a, cy_d[7:0],
				cy_a[6:0] == 7'h1F ? "COMREG" : cy_a[6:0] == 7'h63 ? "SF" : cy_a[6:0] <= 7'h0D ? "IREG" : "");
		end else if (r == "SCU-REGS") begin
			$fdisplay(ftrace, "%0t SCU  WR  A=%07h D=%08h %s", $time, cy_a, cy_d,
				cy_a[7:0] == 8'hA0 ? "IMS" : cy_a[7:0] == 8'hA4 ? "IST" : cy_a[7:0] == 8'hA8 ? "AIACK" : "");
		end else if (r == "VDP2-REGS") begin
			$fdisplay(ftrace, "%0t VDP2 WR  A=%07h D=%08h %s", $time, cy_a, cy_d, cy_a[8:0] == 9'h000 ? "TVMD" : cy_a[8:0] == 9'h020 ? "BGON" : "");
		end else if (r == "VDP1-REGS" || r == "SCSP-REGS" || r == "ABUS-CS2/CD") begin
			$fdisplay(ftrace, "%0t %s WR  A=%07h D=%08h", $time, r, cy_a, cy_d);
		end else if (r == "WRAM-H" && cy_a[19:2] == 18'h0D23B) begin
			$fdisplay(ftrace, "%0t VAR348EC WR D=%08h PC=%08h", $time, cy_d, `SAT.MSH.core.PC);
		end else if (r == "WRAM-H" && cy_a[19:0] >= 20'h00600 && cy_a[19:0] < 20'h00700 && cyc > 100000) begin
			$fdisplay(ftrace, "%0t WRH-WR A=%07h D=%08h", $time, cy_a, cy_d);
		end else if (r == "WRAM-H" && cy_a[19:0] >= 20'h00F00 && cy_a[19:0] < 20'h00F40) begin
			$fdisplay(ftrace, "%0t MARK [%0h] = %08h", $time, cy_a[7:0], cy_d);
			if (cy_a[7:0] == 8'h00) $display("%0t ps  step marker %08h", $time, cy_d);
			else $display("%0t ps    detail[%0h] = %08h", $time, cy_a[7:2], cy_d);
		end
	end else begin
		if (r == "SMPC" || r == "SCU-REGS" || r == "VDP1-REGS" || r == "ABUS-CS2/CD" || r == "SCSP-REGS" ||
		    (r == "VDP2-REGS" && cy_a[8:0] != 9'h004 && cy_a[8:0] != 9'h008 && cy_a[8:0] != 9'h00A))
			$fdisplay(ftrace, "%0t %s RD  A=%07h D=%08h", $time, r, cy_a, cy_d);
	end
	if (trace_all) $fdisplay(ftrace, "%0t BUS %s %s A=%07h D=%08h", $time, cy_wr ? "WR" : "RD", r, cy_a, cy_d);
endtask

always @(posedge clk_sys) if (sys_ce_r && !rst_sys) begin
	cyc <= cyc + 1;
	if (cy_open) begin
		cy_d <= cy_wr ? `SAT.MSHDO : `SAT.MSHDI;
		cy_len <= cy_len + 1;
		if (cy_len == 400) begin
			$fdisplay(ftrace, "%0t WAIT-FOREVER? %s %s A=%07h still open after 400 bus clocks (MSHWAIT_N=%b)", $time, cy_wr ? "WR" : "RD", region(cy_a), cy_a, `SAT.MSHWAIT_N);
			if (wait_report++ < 10) $display("%0t ps  WAIT-FOREVER at A=%07h (%s)", $time, cy_a, region(cy_a));
			$fdisplay(ftrace, "   waitdbg: CWAIT_N=%b MEM_WAIT_N=%b RAMH_CS_N=%b RAML_CS_N=%b MEM_RD_N=%b ramh_busy=%b raml_busy=%b MSHCS3_N=%b DQM=%h",
				`SAT.CWAIT_N, dut.saturn.MEM_WAIT_N, dut.saturn.RAMH_CS_N, dut.saturn.RAML_CS_N, dut.saturn.MEM_RD_N, dut.saturn.ramh_busy, dut.saturn.raml_busy, `SAT.MSHCS3_N, `SAT.MSHDQM_N);
		end
	end
	if (!`SAT.MSHBS_N) begin
		if (cy_open) log_cycle();
		cy_open <= 1'b1; cy_wr <= !`SAT.MSHRD_WR_N; cy_a <= `SAT.MSHA; cy_len <= 0; cy_d <= 32'd0;
	end
end

// WRAM-H writes from either CPU: mailbox (also catches the slave)
reg [24:0] mk_a_q;
always @(posedge clk_sys) begin
	if (!`SAT.RAMH_CS_N && `SAT.MEM_RD_N && (&`SAT.MEM_DQM_N == 1'b0) && `SAT.MEM_A[19:8] == 12'h00F && `SAT.MEM_A[7:6] == 2'b10) begin
		// slave flag word at 0x06000F80 (SSH started): printed once
		if (last_flag != `SAT.MEM_DO) begin
			last_flag = `SAT.MEM_DO;
			$fdisplay(ftrace, "%0t MARK-H [%0h] = %08h", $time, `SAT.MEM_A[7:0], `SAT.MEM_DO);
			$display("%0t ps    slave/flag word [%0h] = %08h", $time, `SAT.MEM_A[7:0], `SAT.MEM_DO);
		end
	end
end

// ---- program counter histogram of the master SH-2 and loop detection
integer pc_hist [int];
integer pc_win_n = 0;
longint pc_total = 0;
integer win_len = 200000;
reg [31:0] pc_q;
reg [31:0] pcr [0:511]; int pcr_i = 0; bit ring_dumped = 0;
reg [26:0] bra [0:63]; reg [31:0] brd [0:63]; reg bwr [0:63]; int bri = 0;
reg [19:0] pc_reg_q = 20'hFFFFF;
int pc_reg_n = 0;
always @(posedge clk_sys) if (sys_ce_r && !rst_sys) begin
	pc_q = `SAT.MSH.core.PC;
	pc_hist[pc_q >> 2] = pc_hist[pc_q >> 2] + 1;
	pc_total++;
	pc_win_n++;
	if (pc_q != pcr[(pcr_i + 511) % 512]) begin
		pcr[pcr_i] = pc_q; pcr_i = (pcr_i + 1) % 512;
		if (!ring_dumped && pc_q >= 32'h06000600 && pc_q < 32'h06000700) begin
			ring_dumped = 1;
			$fdisplay(ftrace, "%0t RING: PC entered %08h; last 512 PC changes:", $time, pc_q);
			for (int k = 0; k < 512; k++) $fdisplay(ftrace, "   pc %08h", pcr[(pcr_i + k) % 512]);
			$fdisplay(ftrace, "   last 64 bus cycles:");
			for (int k = 0; k < 64; k++) $fdisplay(ftrace, "   %s A=%07h D=%08h", bwr[(bri + k) % 64] ? "WR" : "RD", bra[(bri + k) % 64], brd[(bri + k) % 64]);
			$fflush();
		end
	end
	if (pc_q[31:12] != pc_reg_q) begin
		pc_reg_q <= pc_q[31:12];
		if (pc_reg_n < 4000) $fdisplay(ftrace, "%0t PC-REGION %08h (cyc %0d)", $time, pc_q, cyc);
		pc_reg_n++;
	end
	if (cyc % 100000 == 0) begin $fdisplay(ftrace, "%0t PC-SAMPLE %08h (cyc %0d) last bus %s %s A=%07h D=%08h", $time, pc_q, cyc, cy_wr ? "WR" : "RD", region(cy_a), cy_a, cy_d); $fdisplay(ftrace, "   audio scsp=%0d nz=%0d poc=%0d nz=%0d i2s=%0d nz=%0d kyonex=%0d", n_scsp, n_scsp_nz, n_poc, n_poc_nz, n_i2s, n_i2s_nz, n_kyonex);
		$fdisplay(ftrace, "   SSH PC=%08h SSHRES_N=%b SSHBS_N=%b | MSH SR.I=%0d IRL_N=%h", `SAT.SSH.core.PC, `SAT.SSHRES_N, `SAT.SSHBS_N, `SAT.MSH.core.SR.I, `SAT.MSHIRL_N);
		$fdisplay(ftrace, "   smp dev1 %0d/%0d dev2 %0d/%0d dev3 %0d/%0d dev4 %0d/%0d dev5 %0d/%0d (bad/total)", smp_bad[1], smp_n[1], smp_bad[2], smp_n[2], smp_bad[3], smp_n[3], smp_bad[4], smp_n[4], smp_bad[5], smp_n[5]);
		$fdisplay(ftrace, "   ch2 latency <16 %0d <20 %0d <24 %0d <28 %0d <32 %0d <36 %0d more %0d", lat_h[0], lat_h[1], lat_h[2], lat_h[3], lat_h[4], lat_h[5], lat_h[6]);
		$fdisplay(ftrace, "   m68k word reads %0d stale %0d, byte reads %0d stale %0d", m68_rn, m68_rbad, m68_bn, m68_bbad);
		$fdisplay(ftrace, "   scsp_drop=%0d ch2 reads=%0d bad=%0d", dut.saturn.mem.sd_drop, ch2_reads, ch2_bad);
		$fdisplay(ftrace, "   fbdrop=%0d vdp2 write groups %0d multi-lane %0d", dut.saturn.mem.fb.wf_drop, wg_total, wg_multi);
		$fdisplay(ftrace, "   biu: BUS_STATE=%0d CACHE_BUSY=%b IBUSY=%b DBUSY=%b MULT_BUSY=%b IBUS_REQ=%b DBUS_REQ=%b MA_ACT=%b IF_ACT=%b BS_N=%b WAIT_N=%b CE_R=%b BUS_RLS=%b",
		`SAT.MSH.bsc.BUS_STATE, `SAT.MSH.CACHE_BUSY, `SAT.MSH.BSC_IBUS_BUSY, `SAT.MSH.BSC_DBUS_BUSY, `SAT.MSH.MULT_BUSY, `SAT.MSH.IBUS_REQ, `SAT.MSH.DBUS_REQ,
		`SAT.MSH.core.MA_ACTIVE, `SAT.MSH.core.IF_ACTIVE, `SAT.MSHBS_N, `SAT.MSHWAIT_N, sys_ce_r, `SAT.MSH.BUS_RLS); $fdisplay(ftrace, "   cache: IBUS_READ=%b READARRAY=%b READ_PEND=%b WRITE_PEND=%b IBREQ=%b IBUS_WRITE=%b CBUS_REQ=%b CBUS_WR=%b CBUS_A=%08h CCR=%02h HIT=%b",
		`SAT.MSH.cache.IBUS_READ, `SAT.MSH.cache.IBUS_READARRAY, `SAT.MSH.cache.IBUS_READ_PEND, `SAT.MSH.cache.IBUS_WRITE_PEND, `SAT.MSH.cache.IBREQ, `SAT.MSH.cache.IBUS_WRITE,
		`SAT.MSH.cache.CBUS_REQ, `SAT.MSH.cache.CBUS_WR, `SAT.MSH.cache.CBUS_A, `SAT.MSH.cache.CCR, `SAT.MSH.cache.HIT); $fflush(); end
	if (pc_win_n == win_len) begin
		report_pc("window");
		pc_hist.delete();
		pc_win_n = 0;
	end
end

task automatic report_pc(input string why);
	int k, best[4], bn[4], j, t;
	int tot = 0;
	for (j = 0; j < 4; j++) begin best[j] = -1; bn[j] = 0; end
	if (pc_hist.first(k)) begin
		do begin
			tot += pc_hist[k];
			if (pc_hist[k] > bn[3]) begin
				bn[3] = pc_hist[k]; best[3] = k;
				for (j = 3; j > 0; j--) if (bn[j] > bn[j-1]) begin
					t = bn[j]; bn[j] = bn[j-1]; bn[j-1] = t;
					t = best[j]; best[j] = best[j-1]; best[j-1] = t;
				end
			end
		end while (pc_hist.next(k));
	end
	$fdisplay(ftrace, "%0t PC-HIST (%s, %0d samples): %08h x%0d, %08h x%0d, %08h x%0d, %08h x%0d", $time, why, tot,
		best[0] << 2, bn[0], best[1] << 2, bn[1], best[2] << 2, bn[2], best[3] << 2, bn[3]);
endtask


// ---- cache FSM probe around the first PC at 0x06000680
int cp_n = 0; reg cp_on = 0;
always @(posedge clk_sys) begin
	if (!cp_on && cp_n == 0 && `SAT.MSH.core.PC >= 32'h06000670 && `SAT.MSH.core.PC < 32'h06000700) cp_on <= 1;
	if (cp_on && cp_n < 160) begin
		cp_n <= cp_n + 1;
		$fdisplay(ftrace, "CP R=%b F=%b PC=%08h CREQ=%b CWR=%b CA=%08h BUSY=%b IBREQ=%b IBWE=%b IBA=%08h RD=%b RA=%b RP=%b WP=%b WR=%b HIT=%b IBWAIT=%b BSC=%0d MA=%b IF=%b",
			`SAT.SYS_CE_R, `SAT.MSH.CE_F, `SAT.MSH.core.PC, `SAT.MSH.cache.CBUS_REQ, `SAT.MSH.cache.CBUS_WR, `SAT.MSH.cache.CBUS_A, `SAT.MSH.cache.CBUS_BUSY,
			`SAT.MSH.cache.IBREQ, `SAT.MSH.cache.IBWE, `SAT.MSH.cache.IBADDR, `SAT.MSH.cache.IBUS_READ, `SAT.MSH.cache.IBUS_READARRAY, `SAT.MSH.cache.IBUS_READ_PEND,
			`SAT.MSH.cache.IBUS_WRITE_PEND, `SAT.MSH.cache.IBUS_WRITE, `SAT.MSH.cache.HIT, `SAT.MSH.cache.IBUS_WAIT, `SAT.MSH.bsc.BUS_STATE, `SAT.MSH.core.MA_ACTIVE, `SAT.MSH.core.IF_ACTIVE);
	end
end

// ---- SCU interrupt state, SH-2 IRL, SMPC release, VDP2 TVMD.DISP
reg [31:0] ims_q = 32'hx, ist_q = 32'hx;
reg [3:0]  irl_q = 4'hx;
reg        disp_q = 1'bx, mshres_q = 1'bx, sshbs_q = 1'bx;
reg [15:0] tvmd_q = 16'hx;
longint    sshbs_toggles = 0, vbl_toggles = 0, irl_changes = 0;
reg        vbl_q = 1'bx;
longint    t_disp = 0;
always @(posedge clk_sys) begin
	if (`SAT.SCU.IMS !== ims_q) begin ims_q <= `SAT.SCU.IMS; $fdisplay(ftrace, "%0t SCU IMS = %08h", $time, `SAT.SCU.IMS); end
	if (`SAT.SCU.IST !== ist_q) begin ist_q <= `SAT.SCU.IST; $fdisplay(ftrace, "%0t SCU IST = %08h", $time, `SAT.SCU.IST); end
	if (`SAT.MSHIRL_N !== irl_q) begin irl_q <= `SAT.MSHIRL_N; irl_changes++; $fdisplay(ftrace, "%0t SH2 IRL_N = %h", $time, `SAT.MSHIRL_N); end
	if (`SAT.MSHRES_N !== mshres_q) begin mshres_q <= `SAT.MSHRES_N; $fdisplay(ftrace, "%0t SMPC MSHRES_N = %b", $time, `SAT.MSHRES_N); end
	if (`SAT.SSHBS_N !== sshbs_q) begin sshbs_q <= `SAT.SSHBS_N; sshbs_toggles++; end
	if (`SAT.VBL_N !== vbl_q) begin vbl_q <= `SAT.VBL_N; vbl_toggles++; if (vbl_toggles < 6) $fdisplay(ftrace, "%0t VBL_N = %b", $time, `SAT.VBL_N); end
	if (`SAT.VDP2.REGS.TVMD !== tvmd_q) begin
		tvmd_q <= `SAT.VDP2.REGS.TVMD;
		$fdisplay(ftrace, "%0t VDP2 TVMD = %04h (DISP=%b)", $time, `SAT.VDP2.REGS.TVMD, `SAT.VDP2.REGS.TVMD.DISP);
		if (`SAT.VDP2.REGS.TVMD.DISP && t_disp == 0) begin t_disp = $time; $display("%0t ps  *** TVMD.DISP set ***", $time); end
	end
end

// ---- SCU interrupt internals
reg [15:0] scuint_q = 16'hx;
longint n_scuint = 0;
wire [15:0] scuint = {`SAT.SCU.CIVECF_N, `SAT.SCU.INT_SET, `SAT.SCU.VBIN_INT, `SAT.SCU.VBOUT_INT, `SAT.SCU.HBIN_INT, `SAT.SCU.SM_INT, `SAT.SCU.PAD_INT};
always @(posedge clk_sys) if (scuint !== scuint_q) begin
	scuint_q <= scuint;
	if (cyc > 1 && n_scuint++ < 200000) $fdisplay(ftrace, "%0t SCUINT IVECF_N=%b INT_SET=%b VBIN=%b VBOUT=%b HBIN=%b SM=%b PAD=%b CIRL_N=%h", $time,
		`SAT.SCU.CIVECF_N, `SAT.SCU.INT_SET, `SAT.SCU.VBIN_INT, `SAT.SCU.VBOUT_INT, `SAT.SCU.HBIN_INT, `SAT.SCU.SM_INT, `SAT.SCU.PAD_INT, `SAT.SCU.CIRL_N);
end

// ------------------------------------------------------------------ video capture
integer frame_no = 0, frame_nonblack = 0;
integer fx = 0, fy = 0, fw = 0, fh = 0;
reg [23:0] fbuf [0:1023][0:511];
reg        vs_q = 1'b0, de_q = 1'b0;
integer    dumped = 0;
string     frame_dir;
bit        have_dir = 0;
integer    ncol;
reg [23:0] colset [0:15];
integer    nnb_total = 0;

task automatic dump_frame(input string tag);
	integer f, x, y;
	string fn;
	if (have_dir) begin
		fn = $sformatf("%s/frame_%0d_%s_c%0d.ppm", frame_dir, frame_no, tag, layers ? (frame_no / 2) % 4 : 0);
		f = $fopen(fn, "wb");
		$fwrite(f, "P6\n%0d %0d\n255\n", fw, fh);
		for (y = 0; y < fh; y++) for (x = 0; x < fw; x++) $fwrite(f, "%c%c%c", fbuf[x][y][23:16], fbuf[x][y][15:8], fbuf[x][y][7:0]);
		$fclose(f);
		$display("tb_sys: wrote %s", fn);
	end
endtask

always @(posedge video_rgb_clock) begin
	vs_q <= video_vs; de_q <= video_de;
	if (video_de) begin
		if (fx < 1024 && fy < 512) begin
			fbuf[fx][fy] <= video_rgb;
			if (video_rgb != 24'h000000) frame_nonblack++;
		end
		fx <= fx + 1;
		if (fx + 1 > fw && fx < 1024) fw <= fx + 1;
	end
	if (de_q && !video_de) begin fx <= 0; fy <= fy + 1; fh <= fy + 1; end
	if (video_vs && !vs_q) begin
		// start of vsync: previous frame complete
		if (fh > 0) begin
			$fdisplay(ftrace, "%0t FRAME %0d: %0dx%0d, %0d non-black pixels, first pixel %06h, centre %06h", $time, frame_no, fw, fh, frame_nonblack,
				fbuf[0][0], fbuf[fw/2][fh/2]);
			if (fx > 1024 || fh > 512) $fdisplay(ftrace, "%0t FRAME %0d ABNORMAL: last-line px=%0d lines=%0d", $time, frame_no, fx, fh);
			if (fx <= 1024 && fh <= 512 && (frame_no < 3 || (t_disp != 0 && (layers ? (frame_no >= 440 && frame_no % 2 == 0) : (frame_no % 32 == 0)) && dumped < 60))) begin
				if (t_disp != 0) dumped++;
				dump_frame(t_disp != 0 ? "disp" : "boot");
			end
			nnb_total = frame_nonblack;
		end
		frame_no <= frame_no + 1; fx <= 0; fy <= 0; fh <= 0; frame_nonblack <= 0;
	end
end


// ---- VDP2 VRAM write groups seen by sdram_pocket (one 16 bit lane is written per slot)
longint wg_total = 0, wg_multi = 0;
reg [7:0] wa_q = 0, wb_q = 0;
function automatic int nl(input [7:0] w); nl = (|w[7:6]) + (|w[5:4]) + (|w[3:2]) + (|w[1:0]); endfunction
always @(posedge clk_sys) begin
	wa_q <= dut.saturn.mem.wr_a; wb_q <= dut.saturn.mem.wr_b;
	if (dut.saturn.mem.wr_a != 0 && wa_q == 0) begin wg_total++; if (nl(dut.saturn.mem.wr_a) > 1) wg_multi++; end
	if (dut.saturn.mem.wr_b != 0 && wb_q == 0) begin wg_total++; if (nl(dut.saturn.mem.wr_b) > 1) wg_multi++; end
end


// ---- audio probes: SCSP output (44.1 kHz), pocket_audio output (48 kHz), decoded I2S pins; 68K reset and SCSP key-ons
integer fa_scsp, fa_poc, fa_i2s;
longint n_scsp = 0, n_scsp_nz = 0, n_poc = 0, n_poc_nz = 0, n_i2s = 0, n_i2s_nz = 0, n_kyonex = 0;
reg ev_q = 0;
reg sndres_q = 1'bx, m68kres_q = 1'bx, kyp_q = 0;
initial begin fa_scsp = $fopen("scsp.raw", "wb"); fa_poc = $fopen("pocket.raw", "wb"); fa_i2s = $fopen("i2s.raw", "wb"); end
always @(posedge clk_sys) begin
	ev_q <= dut.saturn.audio.in_ev;
	if (dut.saturn.audio.in_ev && !ev_q) begin
		$fwrite(fa_scsp, "%c%c%c%c", dut.saturn.SOUND_L[7:0], dut.saturn.SOUND_L[15:8], dut.saturn.SOUND_R[7:0], dut.saturn.SOUND_R[15:8]);
		if (n_scsp % 2205 == 0) $fdisplay(ftrace, "%0t SCSPMIX n=%0d MVOL=%0d DB=%b SUM_L=%0d SUM_R=%0d ACC_L=%0d out=%0d", $time, n_scsp, `SAT.SCSP.CR0.MVOL, `SAT.SCSP.CR0.DB, $signed(`SAT.SCSP.SUM_L), $signed(`SAT.SCSP.SUM_R), $signed(`SAT.SCSP.ACC_L), $signed(dut.saturn.SOUND_L));
		n_scsp++; if (dut.saturn.SOUND_L != 0 || dut.saturn.SOUND_R != 0) n_scsp_nz++;
	end
	if (dut.saturn.audio.out_stb) begin
		$fwrite(fa_poc, "%c%c%c%c", dut.saturn.audio.out_l[7:0], dut.saturn.audio.out_l[15:8], dut.saturn.audio.out_r[7:0], dut.saturn.audio.out_r[15:8]);
		n_poc++; if (dut.saturn.audio.out_l != 0 || dut.saturn.audio.out_r != 0) n_poc_nz++;
	end
	if (`SAT.SNDRES_N !== sndres_q) begin sndres_q <= `SAT.SNDRES_N; $fdisplay(ftrace, "%0t SNDRES_N = %b", $time, `SAT.SNDRES_N); end
	if (`SAT.M68K_RESO_N !== m68kres_q) begin m68kres_q <= `SAT.M68K_RESO_N; $fdisplay(ftrace, "%0t M68K_RESO_N = %b", $time, `SAT.M68K_RESO_N); end
	kyp_q <= `SAT.SCSP.KYONEX_PEND;
	if (`SAT.SCSP.KYONEX_PEND && !kyp_q) begin n_kyonex++; if (n_kyonex < 200) $fdisplay(ftrace, "%0t SCSP KYONEX #%0d", $time, n_kyonex); end
end
// I2S decode (clk_74a): sample the data pin at each rising edge of SCLK, 1 bit delay after an LRCK edge
reg lr_q = 0; reg sclk_q = 0; integer i2s_bc = 0; reg [15:0] i2s_sh = 0; reg [15:0] i2s_l = 0;
always @(posedge clk_74a) begin
	sclk_q <= dut.sound_i2s.audgen_sclk;
	if (dut.sound_i2s.audgen_sclk && !sclk_q) begin
		if (audio_lrck !== lr_q) begin lr_q <= audio_lrck; i2s_bc = 0; end
		else i2s_bc++;
		// bit counter 0 = first clock after the edge (the I2S delay bit); data bits are 1..16
		if (i2s_bc >= 1 && i2s_bc <= 16) i2s_sh <= {i2s_sh[14:0], audio_dac};
		if (i2s_bc == 17) begin
			if (!lr_q) i2s_l <= i2s_sh;
			else begin
				$fwrite(fa_i2s, "%c%c%c%c", i2s_l[7:0], i2s_l[15:8], i2s_sh[7:0], i2s_sh[15:8]);
				n_i2s++; if (i2s_l != 0 || i2s_sh != 0) n_i2s_nz++;
			end
		end
	end
end


// ---- SCSP mixer contributors once the output sits at DC
integer mxn = 0;
always @(posedge clk_sys) if (n_scsp > 75000 && mxn < 120 && `SAT.SCSP.MX_W != 0 && `SAT.SCSP.MX_SDL != 0) begin
	mxn++;
	$fdisplay(ftrace, "%0t SCSPMX slot=%0d DSEL=%b MX_W=%0d SDL=%0d PAN=%0d EFREG_Q=%0d SD=%0d", $time, `SAT.SCSP.OP7.SLOT, `SAT.SCSP.DSEL, $signed(`SAT.SCSP.MX_W), `SAT.SCSP.MX_SDL, `SAT.SCSP.MX_PAN, $signed(`SAT.SCSP.EFREG_Q), $signed(`SAT.SCSP.OP7.SD));
end


integer efn = 0, efnz = 0;
always @(posedge clk_sys) if (`SAT.SCSP.DSP_EFREG_WE && !`SAT.SCSP.OP7.RST) begin
	efn++;
	if (`SAT.SCSP.DSP_EFREG_D != 0 && efnz < 60) begin efnz++;
		$fdisplay(ftrace, "%0t DSPEF write #%0d wa=%0d d=%0d mpro1=%h", $time, efn, `SAT.SCSP.DSP_EFREG_WA, $signed(`SAT.SCSP.DSP_EFREG_D), `SAT.SCSP.MPRO1_Q);
	end
end


integer rgn = 0;
// every SCSP register write (any region), for replaying the BIOS configuration in sim/scsp
always @(posedge clk_sys) if (|`SAT.SCSP.REG_WE && rgn < 20000 && `SAT.SCSP.CYCLE1_CE) begin
	rgn++;
	$fdisplay(ftrace, "%0t SCSPDSPREG a=%03h we=%b d=%04h", $time, {`SAT.SCSP.REG_A, 1'b0}, `SAT.SCSP.REG_WE, `SAT.SCSP.REG_D);
end


integer wmn = 0;
always @(posedge clk_sys) if (sys_ce_r && `SAT.MSH.core.PC == 32'h000032e8 && wmn < 6) begin
	wmn++;
	$fdisplay(ftrace, "%0t WAITHIRQ (PC 32e8) last bus cycles: %s A=%07h D=%08h | %s A=%07h D=%08h | %s A=%07h D=%08h", $time,
		bwr[(bri+63)%64] ? "WR" : "RD", bra[(bri+63)%64], brd[(bri+63)%64], bwr[(bri+62)%64] ? "WR" : "RD", bra[(bri+62)%64], brd[(bri+62)%64], bwr[(bri+61)%64] ? "WR" : "RD", bra[(bri+61)%64], brd[(bri+61)%64]);
end


// ---- sound RAM read check: data delivered to the SCSP against the SDRAM model content at the requested address
reg ch2rd_q = 0; reg [19:1] ch2_a = 0; reg ch2_pend = 0; reg [15:0] ch2_exp;
longint ch2_reads = 0, ch2_bad = 0; reg [15:0] ch2dq = 0;
function automatic [19:0] sc_idx(input [19:1] a);
	reg [17:0] sc; sc = a[18:1];
	sc_idx = {1'b0, 2'd2 + {1'b0, sc[17]}, 1'b1, sc[16:0]} ;
endfunction
always @(posedge dut.saturn.clk_ram) begin
	ch2rd_q <= dut.saturn.mem.ch2rd;
	if (dut.saturn.mem.ch2rd && !ch2rd_q) begin ch2_a <= dut.saturn.mem.ch2addr; ch2_pend <= 1; ch2_exp <= sdmodel.mem[{2'd2 + {1'b0, dut.saturn.mem.ch2addr[18]}, 1'b1, dut.saturn.mem.ch2addr[17:1]}]; end
	ch2dq <= dut.saturn.mem.ch2dout;
	if (ch2_pend && dut.saturn.mem.ch2dout !== ch2dq) begin
		ch2_pend <= 0; ch2_reads++;
		if (dut.saturn.mem.ch2dout !== ch2_exp) begin ch2_bad++; if (ch2_bad < 40) $fdisplay(ftrace, "%0t CH2 mismatch addr=%05h got=%04h model=%04h", $time, ch2_a, dut.saturn.mem.ch2dout, ch2_exp); end
	end
end


// ---- +SCUPROBE: SCU DSP DMA -> B-bus -> sound RAM write path
longint pb_dma_rd = 0, pb_dma_rd_nz = 0, pb_dma_wr = 0, pb_dma_wr_nz = 0, pb_bw = 0, pb_bw_snd = 0, pb_bw_snd_nz = 0, pb_ram = 0, pb_ram_nz = 0, pb_ppaf = 0;
integer pb_n5 = 0, pb_n1 = 0, pb_n2 = 0, pb_n3 = 0, pb_n4 = 0; reg pb_en; initial pb_en = $test$plusargs("SCUPROBE");
reg pb_bcss_q = 1;
always @(posedge clk_sys) if (pb_en) begin
	pb_bcss_q <= `SAT.BCSS_N;
	if (`SAT.SCU.DSP_DMA_ACK && !`SAT.SCU.DSP_DMA_WE) begin pb_dma_rd++; if (`SAT.SCU.DSP_DMA_DI != 0) pb_dma_rd_nz++;
		if (pb_n1 < 40) begin pb_n1++; $display("%0t SCUPROBE DSP-DMA-RD  RA=%07h di=%08h", $time, `SAT.SCU.DMA_RA, `SAT.SCU.DSP_DMA_DI); end end
	if (`SAT.SCU.DSP_DMA_ACK && `SAT.SCU.DSP_DMA_WE) begin pb_dma_wr++; if (`SAT.SCU.DSP_DMA_DO != 0) pb_dma_wr_nz++;
		if (pb_n2 < 40) begin pb_n2++; $display("%0t SCUPROBE DSP-DMA-WR  WA=%07h do=%08h", $time, `SAT.SCU.DMA_WA, `SAT.SCU.DSP_DMA_DO); end end
	if (`SAT.SCU.f_pd && `SAT.SCU.DMA_WRITE_B && !`SAT.BCSS_N) begin pb_bw++; pb_bw_snd++; if (`SAT.SCU.bdo_n != 0) pb_bw_snd_nz++;
		if (pb_n3 < 60) begin pb_n3++; $display("%0t SCUPROBE BBUS-WRDATA WA=%07h bdo_n=%04h rpos=%0d wpos=%0d size=%0d rba=%0d dsp=%b", $time, `SAT.SCU.DMA_WA, `SAT.SCU.bdo_n, `SAT.SCU.DMA_BUF_RPOS, `SAT.SCU.DMA_BUF_WPOS, `SAT.SCU.DMA_BUF_SIZE, `SAT.SCU.DMA_RBA, `SAT.SCU.DMA_DSP); end end
	if (`SAT.SCU.DSP_PUSH && pb_n5 < 60) begin pb_n5++; $display("%0t SCUPROBE DSP-PUSH do=%08h wpos=%0d size=%0d rba=%0d", $time, `SAT.SCU.DSP_DMA_DO, `SAT.SCU.DMA_BUF_WPOS, `SAT.SCU.DMA_BUF_SIZE, `SAT.SCU.DMA_RBA); end
	if (|`SAT.SCSP_RAM_WE && `SAT.SCSP_RAM_A >= 18'h28000 && `SAT.SCSP_RAM_A < 18'h2C000) begin pb_ram++; if (`SAT.SCSP_RAM_D != 0) pb_ram_nz++;
		if (pb_n4 < 40) begin pb_n4++; $display("%0t SCUPROBE SNDRAM-WR A=%05h d=%04h we=%b", $time, {`SAT.SCSP_RAM_A,1'b0}, `SAT.SCSP_RAM_D, `SAT.SCSP_RAM_WE); end end
	if (0) $display("%0t SCUPROBE-SUM dmaRD=%0d(nz %0d) dmaWR=%0d(nz %0d) bbusWR_scsp=%0d(nz %0d) sndram50000WR=%0d(nz %0d)", $time, pb_dma_rd, pb_dma_rd_nz, pb_dma_wr, pb_dma_wr_nz, pb_bw_snd, pb_bw_snd_nz, pb_ram, pb_ram_nz);
end

// SCSP common-register writes (0x400-0x41F) incl. MVOL
integer pb_n6 = 0;
always @(posedge clk_sys) if (pb_en && `SAT.SCSP.CYCLE1_CE && |`SAT.SCSP.REG_WE && `SAT.SCSP.REG_A[11:9] == 3'b010 && `SAT.SCSP.REG_A[5:1] < 5'd16 && pb_n6 < 80) begin pb_n6++;
	$display("%0t SCUPROBE SCSP-CREG A=%03h D=%04h WE=%b MVOL=%0d", $time, {`SAT.SCSP.REG_A[11:1],1'b0}, `SAT.SCSP.REG_D, `SAT.SCSP.REG_WE, `SAT.SCSP.CR0.MVOL); end

// 68K writes to SCSP common registers 0x100400-0x10041F
integer pb_n7 = 0; reg pb_dtk_q = 1;
always @(posedge clk_sys) begin pb_dtk_q <= `SAT.SCDTACK_N;
	if (pb_en && !`SAT.SCDTACK_N && pb_dtk_q && !`SAT.SCRW_N && {`SAT.SCA[23:5],5'd0} == 24'h100400 && pb_n7 < 60) begin pb_n7++;
		$display("%0t SCUPROBE M68K-CREG-WR A=%06h D=%04h uds=%b lds=%b", $time, {`SAT.SCA, 1'b0}, `SAT.SCDI, `SAT.SCUDS_N, `SAT.SCLDS_N); end end

// all 68K bus cycles in a window (+M68KWIN=<start_ps>), 4 ms long
longint pb_w0; reg pb_wen; initial pb_wen = $value$plusargs("M68KWIN=%d", pb_w0);
always @(posedge clk_sys) if (pb_wen && !`SAT.SCDTACK_N && pb_dtk_q && $time > pb_w0 && $time < pb_w0 + 64'd6000000000)
	$display("%0t M68KW %s A=%06h D=%04h uds=%b lds=%b", $time, `SAT.SCRW_N ? "RD" : "WR", {`SAT.SCA, 1'b0}, `SAT.SCRW_N ? `SAT.SCDO : `SAT.SCDI, `SAT.SCUDS_N, `SAT.SCLDS_N);

// ---- +SNDDUMP: sound RAM (512 KB, 16 bit big endian words) at about 1.8 s of SCSP time
reg snd_dumped = 0;
always @(posedge clk_sys) if (!snd_dumped && n_scsp == 80000 && $test$plusargs("SNDDUMP")) begin : sd
	integer f, i;
	snd_dumped <= 1;
	f = $fopen("sndram.bin", "wb");
	for (i = 0; i < (1 << 18); i++) $fwrite(f, "%c%c", sdmodel.mem[{2'd2 + {1'b0, i[17]}, 1'b1, i[16:0]}][15:8], sdmodel.mem[{2'd2 + {1'b0, i[17]}, 1'b1, i[16:0]}][7:0]);
	$fclose(f);
	$display("tb_sys: dumped sound RAM");
end


// ---- DSP step trace around the DC onset (compare the full and the compact DSP builds)
always @(posedge clk_sys) if (`SAT.SCSP.CYCLE1_CE && n_scsp >= 53250 && n_scsp < 53253)
	$fdisplay(ftrace, "DSPSTEP n=%0d step=%0d mpro=%h sft=%h temp=%h", n_scsp, `SAT.SCSP.DSP_MPRO_STEP, `SAT.SCSP.MPRO1_Q, `SAT.SCSP.SFT_REG, `SAT.SCSP.TEMP_Q);


// ---- per-sample hash of the DSP datapath (SFT_REG, TEMP_Q) to find the first divergence between DSP builds
reg [31:0] dsph = 0; reg [31:0] dsph_prev = 0;
always @(posedge clk_sys) begin
	if (`SAT.SCSP.CYCLE1_CE) dsph <= dsph * 32'd31 + {5'd0, `SAT.SCSP.SFT_REG} + {8'd0, `SAT.SCSP.TEMP_Q};
	if (dut.saturn.audio.in_ev && !ev_q) begin
		if (n_scsp > 20000 && n_scsp < 82000 && dsph != dsph_prev) $fdisplay(ftrace, "DSPHASH n=%0d h=%08h", n_scsp, dsph);
		dsph_prev <= dsph; dsph <= 0;
	end
end


// ---- 68K bus cycles in the window around the BIOS sound command (+M68KLOG)
longint m68_rn = 0, m68_rbad = 0, m68_bn = 0, m68_bbad = 0; integer m68n = 0; reg dtk_q = 1; reg [1:0] m68p = 0; reg [23:0] m68a; reg [15:0] m68d0; reg m68rw; reg [1:0] m68be;
always @(posedge clk_sys) begin
	dtk_q <= `SAT.SCDTACK_N;
	if (`SAT.SCDTACK_N && !dtk_q && m68rw && $time > 64'd1000000000000) begin : m68c reg [15:0] mw; mw = sdmodel.mem[{2'd2 + {1'b0, m68a[18]}, 1'b1, m68a[17:1]}]; if (m68be == 2'b11) begin m68_rn++; if (`SAT.SCDO !== mw) m68_rbad++; end else if (m68be == 2'b10) begin m68_bn++; if (`SAT.SCDO[15:8] !== mw[15:8]) m68_bbad++; end else if (m68be == 2'b01) begin m68_bn++; if (`SAT.SCDO[7:0] !== mw[7:0]) m68_bbad++; end end
	if (!`SAT.SCDTACK_N && dtk_q) begin
		m68p <= 2'd2; m68d0 <= `SAT.SCDO; m68a <= {`SAT.SCA, 1'b0}; m68rw <= `SAT.SCRW_N; m68be <= {~`SAT.SCUDS_N, ~`SAT.SCLDS_N};
	end else if (m68p != 0) begin
		m68p <= m68p - 1'd1;
		if (m68p == 1) begin if ($test$plusargs("M68KLOG") && $time > 64'd1917000000000 && $time < 64'd1947000000000) $fdisplay(ftrace, "%0t M68KBUS %s A=%06h be=%b D=%04h model=%04h", $time, m68rw ? "RD" : "WR", m68a, m68be, m68rw ? m68d0 : `SAT.SCDI, sdmodel.mem[{2'd2 + {1'b0, m68a[18]}, 1'b1, m68a[17:1]}]); end
	end
end


// ---- data the SCSP samples from the RAM port (RAM_Q at CYCLE0_CE) against the SDRAM model at the REQUEST address, per requester
longint smp_n [0:7]; longint smp_bad [0:7]; integer smp_log = 0;
reg [18:0] sp_a2; reg sp_v2 = 0; longint smp_stale_tot = 0;
initial for (int q = 0; q < 8; q++) begin smp_n[q] = 0; smp_bad[q] = 0; end
always @(posedge clk_sys) if (!rst_sys) begin : smp
	reg [15:0] exp_w;
	// MEM_RD/MEM_A are stable over the CYCLE0_CE of the request cycle; the device latch takes it there and RAM_Q is sampled at the next one
	if (`SAT.SCSP.CYCLE0_CE) begin
		if (sp_v2 && `SAT.SCSP.MEM_DEV_LATCH != 0) begin
			exp_w = sdmodel.mem[{2'd2 + {1'b0, sp_a2[17]}, 1'b1, sp_a2[16:0]}];
			smp_n[`SAT.SCSP.MEM_DEV_LATCH]++;
			if (`SAT.SCSP.RAM_Q !== exp_w) begin
				smp_bad[`SAT.SCSP.MEM_DEV_LATCH]++; smp_stale_tot++;
				if (smp_log < 40 && $time > 64'd900000000000) begin smp_log++; $fdisplay(ftrace, "%0t SCSPSAMPLE bad dev=%0d A=%05h got=%04h model=%04h", $time, `SAT.SCSP.MEM_DEV_LATCH, sp_a2, `SAT.SCSP.RAM_Q, exp_w); end
			end
		end
		sp_a2 <= `SAT.SCSP.MEM_A; sp_v2 <= `SAT.SCSP.MEM_RD & `SAT.SCSP.MEM_CS;
	end
end


// ---- latency of the SCSP RAM port: request (ch2rd rise) to delivery (ch2dout change), clk_ram cycles
longint lat_h [0:7]; longint ramclk = 0; longint lat_t0 = 0; reg lat_pend = 0; reg lat_rd_q = 0; reg [15:0] lat_dq = 0;
initial for (int q = 0; q < 8; q++) lat_h[q] = 0;
always @(posedge dut.saturn.clk_ram) begin
	ramclk++;
	lat_rd_q <= dut.saturn.mem.ch2rd; lat_dq <= dut.saturn.mem.ch2dout;
	if (dut.saturn.mem.ch2rd && !lat_rd_q) begin lat_t0 <= ramclk; lat_pend <= 1; end
	if (lat_pend && dut.saturn.mem.ch2dout !== lat_dq) begin
		lat_pend <= 0;
		case (1'b1)
			(ramclk - lat_t0) < 16: lat_h[0]++;
			(ramclk - lat_t0) < 20: lat_h[1]++;
			(ramclk - lat_t0) < 24: lat_h[2]++;
			(ramclk - lat_t0) < 28: lat_h[3]++;
			(ramclk - lat_t0) < 32: lat_h[4]++;
			(ramclk - lat_t0) < 36: lat_h[5]++;
			default: lat_h[6]++;
		endcase
	end
end


// ---- RAM port event trace in a short window (+RAMEV): request, delivery, SCSP sample
reg ev_rd_q = 0; reg [15:0] ev_dq = 0; integer evn = 0;
always @(posedge dut.saturn.clk_ram) begin
	ev_rd_q <= dut.saturn.mem.ch2rd; ev_dq <= dut.saturn.mem.ch2dout;
	if ($test$plusargs("RAMEV") && $time > 64'd1930000000000 && $time < 64'd1930040000000 && evn < 400) begin
		if (dut.saturn.mem.ch2rd && !ev_rd_q) begin evn++; $fdisplay(ftrace, "%0t EV req  A=%05h", $time, dut.saturn.mem.ch2addr); end
		if (dut.saturn.mem.ch2dout !== ev_dq) begin evn++; $fdisplay(ftrace, "%0t EV dlv  D=%04h", $time, dut.saturn.mem.ch2dout); end
		if (`SAT.SCSP.CYCLE0_CE && `SAT.SCSP.MEM_DEV_LATCH != 0) begin evn++; $fdisplay(ftrace, "%0t EV smp  dev=%0d Q=%04h", $time, `SAT.SCSP.MEM_DEV_LATCH, `SAT.SCSP.RAM_Q); end
		if (`SAT.SCSP.CYCLE1_CE && `SAT.SCSP.MEM_ST == 0 ) begin end
	end
end

// ---- +LAYERS: from frame 440 cycle the VDP2 layer enables every 2 frames: all, sprite only, NBG2 only, NBG3 only; dump each frame
bit layers = 0;
initial layers = $test$plusargs("LAYERS");
reg [7:0] scrn_cfg = 8'hFF;
always @(*) begin
	scrn_cfg = 8'hFF;
	if (layers && frame_no >= 440) case ((frame_no / 2) % 4) 1: scrn_cfg = 8'hE0; 2: scrn_cfg = 8'hC4; 3: scrn_cfg = 8'hC8; default: scrn_cfg = 8'hFF; endcase
end
initial begin #1; force dut.saturn.saturn.SCRN_EN = scrn_cfg; end

// ---- +DUMPAT=<frame>: VDP1 VRAM (PSRAM1 die 0, halfwords 0..0x3FFFF) as raw big-endian bytes to vdp1vram.bin
integer dumpat = -1;
initial if (!$value$plusargs("DUMPAT=%d", dumpat)) dumpat = -1;
always @(posedge video_vs) if (frame_no == dumpat) begin : dmp
	integer f, i;
	f = $fopen("vdp1vram.bin", "wb");
	for (i = 0; i < 262144; i++) $fwrite(f, "%c%c", model1.mem[i][15:8], model1.mem[i][7:0]);
	$fclose(f);
	f = $fopen("wramh.bin", "wb");
	for (i = 0; i < 524288; i++) $fwrite(f, "%c%c", model0.mem[24'h180000 + i][15:8], model0.mem[24'h180000 + i][7:0]);
	$fclose(f);
	$fdisplay(ftrace, "PC ring at dump:"); for (i = 0; i < 64; i++) $fdisplay(ftrace, "   pc %08h", pcr[(pcr_i + 448 + i) % 512]); $fflush();
	f = $fopen("sdram.bin", "wb");
	for (i = 0; i < (4<<18); i++) $fwrite(f, "%c%c", sdmodel.mem[i][15:8], sdmodel.mem[i][7:0]);
	$fclose(f);
	$display("tb_sys: dumped VDP1 VRAM at frame %0d", frame_no);
end

// ------------------------------------------------------------------ run control and summary
longint max_cycles = 20000000;
initial begin
	ftrace = $fopen("trace.log", "w");
	if ($test$plusargs("TRACE")) trace_all = 1;
	if ($value$plusargs("FRAMES=%s", frame_dir)) have_dir = 1;
	if (!$value$plusargs("CYCLES=%d", max_cycles)) max_cycles = 20000000;
end

task automatic summary();
	report_pc("final");
	$display("---- summary ----");
	$display("clk_sys cycles (CE_R, out of reset) %0d, MSH bus cycles %0d, unmapped %0d", cyc, n_cycles, n_unmapped);
	$display("TVMD.DISP set at: %0t ps, VBL toggles %0d, SH-2 IRL changes %0d, SSH bus toggles %0d", t_disp, vbl_toggles, irl_changes, sshbs_toggles);
	$display("audio: SCSP samples %0d (%0d non-zero), pocket_audio %0d (%0d), I2S %0d (%0d); SCSP key-on events %0d", n_scsp, n_scsp_nz, n_poc, n_poc_nz, n_i2s, n_i2s_nz, n_kyonex);
	$fflush();
	if (pb_en) $display("SCUPROBE-FINAL dmaRD=%0d(nz %0d) dmaWR=%0d(nz %0d) bbusWR_scsp=%0d(nz %0d) sndram50000WR=%0d(nz %0d)", pb_dma_rd, pb_dma_rd_nz, pb_dma_wr, pb_dma_wr_nz, pb_bw_snd, pb_bw_snd_nz, pb_ram, pb_ram_nz);
	$display("disc: %0d dataslot reads, %0d short", n_ds_reads, n_ds_err);
	$display("VDP2 VRAM write groups %0d, multi-lane %0d", wg_total, wg_multi);
	$display("VDP1 FB write FIFO drops %0d", dut.saturn.mem.fb.wf_drop);
	$display("frames %0d, last frame non-black %0d", frame_no, nnb_total);
	$display("model errors: psram0 %0d psram1 %0d sdram %0d sram %0d", m0_err, m1_err, sd_err, sr_err);
	$display("load FIFO overflow %0d, SDRAM ready %b PSRAM ready %b", dut.saturn.dbg_ld_ovf, dut.saturn.dbg_sdram_ready, dut.saturn.dbg_psram_ready);
endtask

always @(posedge clk_sys) begin
	if (cyc >= max_cycles) begin
		$display("tb_sys: cycle limit reached");
		summary();
		$finish;
	end
	// the test ROM stores 0x00FF0000 | failures to the mailbox when it is done
	if (!`SAT.RAMH_CS_N && `SAT.MEM_RD_N && (&`SAT.MEM_DQM_N == 1'b0) && `SAT.MEM_A[19:0] == 20'h00F00 && `SAT.MEM_DO[31:16] == 16'h00FF) begin
		$display("tb_sys: ROM finished: %0d failed steps", `SAT.MEM_DO[15:0]);
		repeat (4) @(posedge clk_sys);
		summary();
		$finish;
	end
end

endmodule
