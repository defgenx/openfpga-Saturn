// APF boot status and target commands around a PLL relock: the real core_bridge_cmd with the status inputs as
// core_top drives them (live PLL lock before Reset Exit, held once running), or as v0.2.4 did (-DLIVE: live lock
// throughout, which answers 1/2 during the relock and fails). The host must see "setup" (2) before the RAM is ready,
// then "idle" (3).
//
// Host: polls Request Status, starts the slot 0 push as soon as the core leaves "booting" (the order the PSX
// core's APF model uses; nothing in the APF docs says the host waits for "idle"), all complete, Reset Exit,
// then serves target commands and answers Ready to Run only once (+RTR_ALWAYS answers every one).
// The RTC date after the 0x0082 that follows the RTC command is reported, not checked: core_bridge_cmd is v0.2.4's,
// which wires the RTC outputs to the parameter registers.
// Core: PLL lock, RAM ready RAM_US after it, a disc read every 300 us, one relock (pll_lite mode change) at 3 ms.
`timescale 1ps/1ps
module tb_bridge_status;
	reg clk = 1'b0;
	always #6734 clk = ~clk;                         // clk_74a

	reg  [31:0] bridge_addr = 0, bridge_wr_data = 0;
	reg         bridge_wr = 0, bridge_rd = 0;
	wire [31:0] bridge_rd_data;

	// ---- core side: saturn_pocket's readiness as v0.2.4 has it (lock_s live, ever_ready sticky)
	localparam integer RAM_US = 215;                 // SDRAM 200 us power-up wait at clk_ram + PSRAM configuration
	reg  lock = 1'b0, ever_ready = 1'b0;
	wire setup_ready_74a = lock & ever_ready;
	wire reset_n;
`ifdef LIVE
	wire status_boot_done = lock, status_setup_done = lock & setup_ready_74a;
`else
	// same expressions as core_top.v (status_hold)
	reg  status_hold = 1'b0;
	always @(posedge clk) status_hold <= reset_n & (status_hold | (lock & setup_ready_74a));
	wire status_boot_done = lock | status_hold, status_setup_done = (lock & setup_ready_74a) | status_hold;
`endif

	reg         t_read = 1'b0;
	wire        t_ack, t_done;
	wire [2:0]  t_err;

	core_bridge_cmd icb (
		.clk(clk), .reset_n(reset_n), .bridge_endian_little(1'b0),
		.bridge_addr(bridge_addr), .bridge_rd(bridge_rd), .bridge_rd_data(bridge_rd_data),
		.bridge_wr(bridge_wr), .bridge_wr_data(bridge_wr_data),
		.status_boot_done(status_boot_done), .status_setup_done(status_setup_done), .status_running(reset_n),
		.dataslot_requestread(), .dataslot_requestread_id(), .dataslot_requestread_ack(1'b1), .dataslot_requestread_ok(1'b1),
		.dataslot_requestwrite(), .dataslot_requestwrite_id(), .dataslot_requestwrite_size(),
		.dataslot_requestwrite_ack(1'b1), .dataslot_requestwrite_ok(1'b1),
		.dataslot_update(), .dataslot_update_id(), .dataslot_update_size(), .dataslot_allcomplete(),
		.rtc_epoch_seconds(), .rtc_date_bcd(), .rtc_time_bcd(), .rtc_valid(),
		.savestate_supported(1'b0), .savestate_addr(32'd0), .savestate_size(32'd0), .savestate_maxloadsize(32'd0),
		.osnotify_inmenu(),
		.savestate_start(), .savestate_start_ack(1'b0), .savestate_start_busy(1'b0), .savestate_start_ok(1'b0), .savestate_start_err(1'b0),
		.savestate_load(), .savestate_load_ack(1'b0), .savestate_load_busy(1'b0), .savestate_load_ok(1'b0), .savestate_load_err(1'b0),
		.target_dataslot_read(t_read), .target_dataslot_write(1'b0), .target_dataslot_getfile(1'b0), .target_dataslot_openfile(1'b0),
		.target_dataslot_ack(t_ack), .target_dataslot_done(t_done), .target_dataslot_err(t_err),
		.target_dataslot_id(16'd16), .target_dataslot_slotoffset(32'd0), .target_dataslot_bridgeaddr(32'h30000000),
		.target_dataslot_length(32'd2352),
		.target_buffer_param_struct(32'd0), .target_buffer_resp_struct(32'd0),
		.datatable_addr(10'd0), .datatable_wren(1'b0), .datatable_data(32'd0), .datatable_q()
	);

	// ---- core: PLL / RAM timeline, one relock
	initial begin
		#(20_000_000) lock = 1'b1;                   // PLL locks 20 us after configuration
		#(RAM_US * 1_000_000) ever_ready = 1'b1;
		#(2_800_000_000 - RAM_US * 1_000_000) ;      // 3 ms
		$display("%0t ps  core: pll_lite mode change, PLL relock", $time);
		lock = 1'b0;
		#(40_000_000) lock = 1'b1;                   // relocked 40 us later
	end

	// ---- core: disc reads, the cd_stream handshake (6 clock request pulse, wait for ack or !done, then done)
	integer n_req = 0, n_done = 0;
	reg running = 1'b0;
	initial begin : reader
		wait (running);
		forever begin
			repeat (22_000) @(posedge clk);          // 300 us
			n_req = n_req + 1;
			@(posedge clk) t_read <= 1'b1;
			repeat (6) @(posedge clk);
			t_read <= 1'b0;
			wait (t_ack || !t_done);
			wait (t_done);
			n_done = n_done + 1;
		end
	end

	// ---- host
	task automatic bw(input [31:0] a, input [31:0] d);
		@(posedge clk); bridge_addr <= a; bridge_wr_data <= d; bridge_wr <= 1'b1;
		@(posedge clk); bridge_wr <= 1'b0;
	endtask
	task automatic br(input [31:0] a, output [31:0] d);
		@(posedge clk); bridge_addr <= a; bridge_rd <= 1'b1;
		@(posedge clk); bridge_rd <= 1'b0;
		repeat (3) @(posedge clk); d = bridge_rd_data;
	endtask
	task automatic cmd(input [15:0] c, output [15:0] res);
		reg [31:0] r;
		bw(32'hF8000000, {16'h434D, c});
		r = 0;
		while (r[31:16] != 16'h4F4B) br(32'hF8000000, r);
		res = r[15:0];
	endtask

	integer rtr_seen = 0, rtc_ok = 0;
	integer w, early = 0, n_rtr = 0, n_boot_running = 0, rtr_always = 0, first_st = 0, seen3 = 0;
	reg [15:0] res;
	reg [31:0] t0, p;
	initial begin : host
		rtr_always = $test$plusargs("RTR_ALWAYS");
		res = 1;
		while (res == 16'd1) begin repeat (1000) @(posedge clk); cmd(16'h0000, res); end
		first_st = res;
		$display("%0t ps  host: status %0d, RAM ready %0d: Reset Enter, slot 0 push", $time, res, ever_ready);
		cmd(16'h0010, res);
		// RTC once at boot, then a slot write request: its size parameter goes to the same register 0x24
		bw(32'hF8000020, 32'd1762128000); bw(32'hF8000024, 32'h20261103); bw(32'hF8000028, 32'h02153000);
		cmd(16'h0090, res);
		bw(32'hF8000020, 32'd1); bw(32'hF8000024, 32'd524288);
		cmd(16'h0082, res);
		rtc_ok = (icb.rtc_date_bcd == 32'h20261103) && (icb.rtc_time_bcd == 32'h02153000);
		$display("%0t ps  host: RTC date after a 0x0082 %08h (%s)", $time, icb.rtc_date_bcd, rtc_ok ? "kept" : "overwritten");
		for (w = 0; w < 1024; w = w + 1) begin       // one word per 88 clk_74a, io_bridge_peripheral's fastest
			bw(32'h20000000 + 4 * w, w);
			if (!ever_ready) early = early + 1;
			repeat (86) @(posedge clk);
		end
		$display("%0t ps  host: %0d words pushed before the RAM was ready (load FIFO: 512 entries)", $time, early);
		cmd(16'h008F, res);
		res = 0;
		while (res != 16'd3) begin repeat (1000) @(posedge clk); cmd(16'h0000, res); end
		seen3 = 1;
		cmd(16'h0011, res);
		running = 1'b1;
		$display("%0t ps  host: Reset Exit", $time);
		forever begin
			repeat (400) @(posedge clk);
			br(32'hF8001000, t0);
			if (t0[31:16] == 16'h636D && t0[15:0] == 16'h0140) begin
				if (!rtr_seen) begin
					n_rtr = n_rtr + 1;
					$display("%0t ps  host: Ready to Run #%0d%s", $time, n_rtr, (n_rtr == 1 || rtr_always) ? "" : ", not answered");
				end
				rtr_seen = 1;
				if (n_rtr == 1 || rtr_always) begin bw(32'hF8001000, 32'h6F6B0000); rtr_seen = 0; end
			end else if (t0[31:16] == 16'h636D && t0[15:0] == 16'h0180) begin
				bw(32'hF8001000, 32'h62750000);
				repeat (2000) @(posedge clk);
				bw(32'hF8001000, 32'h6F6B0000);
			end
			if (running && $time > 64'd400_000_000) begin
				cmd(16'h0000, res);
				if (res == 16'd1 || res == 16'd2) n_boot_running = n_boot_running + 1;
			end
		end
	end

	initial begin
		#(6_000_000_000);                            // 6 ms
		$display("Ready to Run commands %0d; status 1/2 answered while running %0d; disc reads issued %0d, completed %0d; first status after booting %0d",
		         n_rtr, n_boot_running, n_req, n_done, first_st);
		if (n_rtr == 1 && n_boot_running == 0 && n_done >= n_req - 1 && n_req > 5 && first_st == 2 && seen3)
			$display("RESULT: PASS");
		else $display("RESULT: FAIL");
		$finish;
	end
endmodule

module mf_datatable (input [9:0] address_a, address_b, input clock_a, clock_b, input [31:0] data_a, data_b,
                     input wren_a, wren_b, output [31:0] q_a, q_b);
	assign q_a = 32'd0, q_b = 32'd0;
endmodule
