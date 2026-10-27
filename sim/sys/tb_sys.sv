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

localparam integer TCO = 3500;
localparam integer TIN = 1000;

// ------------------------------------------------------------------ clocks and host
reg clk_74a = 1'b0;
always #6734 clk_74a = ~clk_74a;

reg [31:0] bridge_addr = 32'd0;
reg        bridge_wr = 1'b0;
reg [31:0] bridge_wr_data = 32'd0;
wire       bridge_rd = 1'b0;

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

// ------------------------------------------------------------------ PSRAM x2 (CellularRAM pin models)
`define PSRAM_PINS(N) \
	reg [21:16] a_d_``N; reg [15:0] o_d_``N; reg oe_d_``N, clk_d_``N, adv_d_``N, cre_d_``N, ce0_d_``N, ce1_d_``N, oen_d_``N, wen_d_``N, ub_d_``N, lb_d_``N; \
	always @(cram``N``_a)     a_d_``N   <= #(TCO) cram``N``_a; \
	always @(dut.psram``N``_dq_o)  o_d_``N <= #(TCO) dut.psram``N``_dq_o; \
	always @(dut.psram``N``_dq_oe) oe_d_``N <= #(TCO) dut.psram``N``_dq_oe; \
	always @(cram``N``_clk)   clk_d_``N <= #(TCO) cram``N``_clk; \
	always @(cram``N``_adv_n) adv_d_``N <= #(TCO) cram``N``_adv_n; \
	always @(cram``N``_cre)   cre_d_``N <= #(TCO) cram``N``_cre; \
	always @(cram``N``_ce0_n) ce0_d_``N <= #(TCO) cram``N``_ce0_n; \
	always @(cram``N``_ce1_n) ce1_d_``N <= #(TCO) cram``N``_ce1_n; \
	always @(cram``N``_oe_n)  oen_d_``N <= #(TCO) cram``N``_oe_n; \
	always @(cram``N``_we_n)  wen_d_``N <= #(TCO) cram``N``_we_n; \
	always @(cram``N``_ub_n)  ub_d_``N  <= #(TCO) cram``N``_ub_n; \
	always @(cram``N``_lb_n)  lb_d_``N  <= #(TCO) cram``N``_lb_n; \
	initial begin a_d_``N = 0; o_d_``N = 0; oe_d_``N = 0; clk_d_``N = 0; adv_d_``N = 1; cre_d_``N = 0; ce0_d_``N = 1; ce1_d_``N = 1; oen_d_``N = 1; wen_d_``N = 1; ub_d_``N = 1; lb_d_``N = 1; end \
	wire [15:0] mq_``N = oe_d_``N ? o_d_``N : 16'hzzzz; \
	wire [15:0] mdq_``N; \
	assign mdq_``N = mq_``N; \
	reg [15:0] mq_in_``N; \
	always @(mdq_``N) mq_in_``N <= #(TIN) mdq_``N; \
	assign cram``N``_dq = dut.psram``N``_dq_oe ? 16'hzzzz : mq_in_``N; \
	wire [31:0] m``N``_err, m``N``_rd, m``N``_wr, m``N``_bursts, m``N``_cel, m``N``_xrow; \
	psram_model #(.T_POWER(1000000)) model``N ( \
		.clk(clk_d_``N), .host_oe(oe_d_``N), .a(a_d_``N), .dq(mdq_``N), .ce0_n(ce0_d_``N), .ce1_n(ce1_d_``N), .adv_n(adv_d_``N), \
		.oe_n(oen_d_``N), .we_n(wen_d_``N), .ub_n(ub_d_``N), .lb_n(lb_d_``N), .cre(cre_d_``N), \
		.errors(m``N``_err), .n_rd(m``N``_rd), .n_wr(m``N``_wr), .n_bursts(m``N``_bursts), .max_ce_low(m``N``_cel), .n_xrow(m``N``_xrow));

`PSRAM_PINS(0)
`PSRAM_PINS(1)

// ------------------------------------------------------------------ SDRAM
reg  [12:0] sa_d;  reg [1:0] sba_d, sdqm_d;  reg sras_d, scas_d, swe_d, sdr_clk, soe_d;  reg [15:0] so_d;
always @(dram_a)      sa_d    <= #(TCO) dram_a;
always @(dram_ba)     sba_d   <= #(TCO) dram_ba;
always @(dram_dqm)    sdqm_d  <= #(TCO) dram_dqm;
always @(dram_ras_n)  sras_d  <= #(TCO) dram_ras_n;
always @(dram_cas_n)  scas_d  <= #(TCO) dram_cas_n;
always @(dram_we_n)   swe_d   <= #(TCO) dram_we_n;
always @(dut.sdram_dq_oe) soe_d <= #(TCO) dut.sdram_dq_oe;
always @(dut.sdram_dq_o)  so_d  <= #(TCO) dut.sdram_dq_o;
always @(dram_clk)    sdr_clk <= #(TCO) dram_clk;
initial begin sa_d = 0; sba_d = 0; sdqm_d = 0; sras_d = 1; scas_d = 1; swe_d = 1; sdr_clk = 1; soe_d = 0; so_d = 0; end
wire [15:0] sdq;
assign sdq = soe_d ? so_d : 16'hzzzz;
reg [15:0] sdq_in;
always @(sdq) sdq_in <= #(TIN) sdq;
assign dram_dq = dut.sdram_dq_oe ? 16'hzzzz : sdq_in;
wire [31:0] sd_err, sd_act, sd_rd, sd_wr; wire sd_drive;
wire [63:0] t_ref = 64'd64000000000;                      // 64 ms retention limit
sdram_model sdmodel (.t_ref(t_ref), .clk(sdr_clk), .cke(dram_cke), .ras_n(sras_d), .cas_n(scas_d), .we_n(swe_d),
	.ba(sba_d), .a(sa_d), .dqm(sdqm_d), .dq(sdq), .errors(sd_err), .dq_drive(sd_drive), .n_act(sd_act), .n_rd(sd_rd), .n_wr(sd_wr));

// ------------------------------------------------------------------ SRAM
reg [16:0] ra_d; reg [15:0] ro_d; reg roe_d, roen_d, rwen_d, rub_d, rlb_d;
always @(sram_a)     ra_d   <= #(TCO) sram_a;
always @(dut.sram_dq_o)  ro_d  <= #(TCO) dut.sram_dq_o;
always @(dut.sram_dq_oe) roe_d <= #(TCO) dut.sram_dq_oe;
always @(sram_oe_n)  roen_d <= #(TCO) sram_oe_n;
always @(sram_we_n)  rwen_d <= #(TCO) sram_we_n;
always @(sram_ub_n)  rub_d  <= #(TCO) sram_ub_n;
always @(sram_lb_n)  rlb_d  <= #(TCO) sram_lb_n;
initial begin ra_d = 0; ro_d = 0; roe_d = 0; roen_d = 1; rwen_d = 1; rub_d = 1; rlb_d = 1; end
wire [15:0] rdq;
assign rdq = roe_d ? ro_d : 16'hzzzz;
reg [15:0] rdq_in;
always @(rdq) rdq_in <= #(TIN) rdq;
assign sram_dq = dut.sram_dq_oe ? 16'hzzzz : rdq_in;
wire [31:0] sr_err, sr_rd, sr_wr;
sram_model #(.T_AA(10000)) srmodel (.a(ra_d), .dq(rdq), .oe_n(roen_d), .we_n(rwen_d), .ub_n(rub_d), .lb_n(rlb_d), .errors(sr_err), .n_rd(sr_rd), .n_wr(sr_wr));

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

initial begin : host
	integer fd, i, n;
	bit [31:0] w;
	if (!$value$plusargs("BIOS=%s", bios_path)) bios_path = "";
	if (!$value$plusargs("GAP=%d", gap)) gap = 32;
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
	host_cmd(16'h0010, 0, 0);                              // Reset Enter
	$fdisplay(ftrace, "%0t HOST slot 0 write start", $time);
	for (i = 0; i < bios_len; i = i + 4) begin
		bridge_write(32'h20000000 + i, {bios[i], bios[i+1], bios[i+2], bios[i+3]});
		repeat (gap) @(posedge clk_74a);
	end
	$fdisplay(ftrace, "%0t HOST slot 0 write end, %0d words, FIFO overflow %0d", $time, bios_len/4, dut.saturn.dbg_ld_ovf);
	repeat (50) @(posedge clk_74a);
	host_cmd(16'h008F, 0, 0);                              // all slots complete
	host_cmd(16'h0011, 0, 0);                              // Reset Exit
	$fdisplay(ftrace, "%0t HOST Reset Exit", $time);
	$display("tb_sys: host sequence done at %0t ps", $time);
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
always @(posedge clk_sys) if (sys_ce_r && !rst_sys) begin
	pc_q = `SAT.MSH.core.PC;
	pc_hist[pc_q >> 2] = pc_hist[pc_q >> 2] + 1;
	pc_total++;
	pc_win_n++;
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
wire [15:0] scuint = {`SAT.SCU.CIVECF_N, `SAT.SCU.INT_SET, `SAT.SCU.VBIN_INT, `SAT.SCU.VBOUT_INT, `SAT.SCU.HBIN_INT, `SAT.SCU.SM_INT, `SAT.SCU.PAD_INT};
always @(posedge clk_sys) if (scuint !== scuint_q) begin
	scuint_q <= scuint;
	if (cyc > 1) $fdisplay(ftrace, "%0t SCUINT IVECF_N=%b INT_SET=%b VBIN=%b VBOUT=%b HBIN=%b SM=%b PAD=%b CIRL_N=%h", $time,
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
		fn = $sformatf("%s/frame_%0d_%s.ppm", frame_dir, frame_no, tag);
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
		if (fx + 1 > fw) fw <= fx + 1;
	end
	if (de_q && !video_de) begin fx <= 0; fy <= fy + 1; fh <= fy + 1; end
	if (video_vs && !vs_q) begin
		// start of vsync: previous frame complete
		if (fh > 0) begin
			$fdisplay(ftrace, "%0t FRAME %0d: %0dx%0d, %0d non-black pixels, first pixel %06h, centre %06h", $time, frame_no, fw, fh, frame_nonblack,
				fbuf[0][0], fbuf[fw/2][fh/2]);
			if (frame_no < 3 || (frame_nonblack > 0 && dumped < 2 && t_disp != 0 && $time > t_disp + 40000000)) begin
				if (frame_nonblack > 0 && t_disp != 0) dumped++;
				dump_frame(t_disp != 0 ? "disp" : "boot");
			end
			nnb_total = frame_nonblack;
		end
		frame_no <= frame_no + 1; fx <= 0; fy <= 0; fh <= 0; frame_nonblack <= 0;
	end
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
