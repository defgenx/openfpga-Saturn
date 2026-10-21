// pll_lite vs altera_pll_reconfig (pll_sys_cfg) driven by MiSTer's mgmt sequence (saturn_pocket.sv `else` branch),
// full reconfig_to_pll bus: both drive the same DPRIO plant (lock low at power-up for LOCK0 clocks, relock after an M
// write or a K-ready 0->1). Every clk_74a the 64-bit bus (bit 0, the clock, masked) and the plant's lock flag are
// written to build/bus_lite.txt and build/bus_alt.txt; bus_diff.py compares them.
// Run (sim/pll): build/core_sim.v as in the Makefile, then iverilog -g2012 tb_bus.sv lcell_stub.v pll_lite.sv build/core_sim.v
//   altera_pll_reconfig_top.v pll_sys_cfg.v altera_std_synchronizer.v; vvp; python3 bus_diff.py build/bus_lite.txt build/bus_alt.txt
// bus_diff.py reads partly-X hex digits as 0 (writedata is X during pll_lite's first two reads), so their known bits show as 0 too.
`timescale 1ns/1ps

module bus_plant #(parameter SEED = 1, parameter LOCK0 = 3000, parameter RELOCK = 400)
	(input wire [63:0] to, output wire [63:0] from);
	reg [15:0] mem [0:63];
	reg [15:0] p1, p2;
	reg        v1, v2;
	reg        lock = 1'b0;
	integer    lcnt = LOCK0, i, sd;
	wire clk = to[0];
	initial begin
		sd = SEED;
		for (i = 0; i < 64; i = i + 1) mem[i] = $random(sd);
		mem[6'h17][11] = 1'b1;
	end
	always @(posedge clk) begin
		v1 <= 1'b0; v2 <= v1; p2 <= p1; p1 <= 16'hxxxx;
		if (to[3]) begin v1 <= 1'b1; p1 <= mem[to[9:4]]; end
		if (lcnt > 0) begin lcnt <= lcnt - 1; if (lcnt == 1) lock <= 1'b1; end
		if (to[2] && !to[29] && to[1]) begin
			if ((to[9:4] == 6'h17 && to[21] && !mem[6'h17][11]) || to[9:4] == 6'h12) begin lock <= 1'b0; lcnt <= RELOCK; end
			mem[to[9:4]] <= to[25:10];
		end
	end
	assign from = {46'd0, 1'b0, lock, v2 ? p2 : 16'hxxxx};
endmodule

module tb_bus;
	reg clk = 0;
	always #6.734 clk = ~clk;

	reg pal = 0, dotsel = 0, reset_n = 0;
	wire [63:0] to_a, from_a, to_b, from_b;

	reg       ever_locked = 1'b0;
	wire      rst_req_74 = ~reset_n | ~ever_locked;
	// ours
	pll_lite dut (.clk(clk), .pal(pal), .dotsel(dotsel), .reapply(rst_req_74), .reconfig_to_pll(to_a), .reconfig_from_pll(from_a));
	bus_plant #(.SEED(7)) plant_a (.to(to_a), .from(from_a));

	// MiSTer: pll_sys_cfg and the mgmt writer of saturn_pocket.sv (not POCKET_PLL_LITE), verbatim
	wire        cfg_waitrequest;
	reg         cfg_write;
	reg   [5:0] cfg_address;
	reg  [31:0] cfg_data;
	pll_sys_cfg pll_cfg (.mgmt_clk(clk), .mgmt_reset(1'b0), .mgmt_waitrequest(cfg_waitrequest), .mgmt_read(1'b0), .mgmt_readdata(),
		.mgmt_write(cfg_write), .mgmt_address(cfg_address), .mgmt_writedata(cfg_data), .reconfig_to_pll(to_b), .reconfig_from_pll(from_b));
	bus_plant #(.SEED(7)) plant_b (.to(to_b), .from(from_b));

	reg [1:0] lock_s;
	always @(posedge clk) begin
		lock_s <= {lock_s[0], plant_b.lock};
		if (lock_s[1]) ever_locked <= 1'b1;
	end
	wire PAL = pal, SMPC_DOTSEL = dotsel;
	always @(posedge clk) begin
		reg pald = 0, pald2 = 0;
		reg dotsel_ = 0, dotsel2 = 0;
		reg resd = 0, resd2 = 0;
		reg [2:0] state = 0;
		pald   <= PAL;
		pald2  <= pald;
		dotsel_ <= SMPC_DOTSEL;
		dotsel2 <= dotsel_;
		resd   <= rst_req_74;
		resd2  <= resd;
		if (dotsel2 != dotsel_ || pald2 != pald || (resd && !resd2)) state <= 3'd1;
		cfg_write <= 1'b0;
		if (!cfg_waitrequest) begin
			if (state) state <= state + 3'd1;
			case (state)
			3'd1: begin cfg_address <= 6'd0; cfg_data <= 32'd0; cfg_write <= 1'b1; end
			3'd3: begin cfg_address <= 6'd4; cfg_data <= !dotsel2 ? 32'h00020302 : 32'h00000303; cfg_write <= 1'b1; end
			3'd5: begin
				cfg_address <= 6'd7;
				cfg_data    <= !pald2 ? (!dotsel2 ? 32'hCA825FC9 : 32'h2BB9FD78) : (!dotsel2 ? 32'hC0372A3C : 32'h20C113D3);
				cfg_write   <= 1'b1;
			end
			3'd7: begin cfg_address <= 6'd2; cfg_data <= 32'd0; cfg_write <= 1'b1; end
			default: ;
			endcase
		end
	end

	integer fa, fb, cyc = 0;
	initial begin
		fa = $fopen("build/bus_lite.txt", "w");
		fb = $fopen("build/bus_alt.txt", "w");
	end
	always @(posedge clk) begin
		cyc <= cyc + 1;
		// sampled just before the edge: what the PLL's DPRIO sees at this edge
		$fdisplay(fa, "%0d %016h %0d %0d %0d", cyc, to_a & ~64'd1, plant_a.lock, pal, dotsel);
		$fdisplay(fb, "%0d %016h %0d %0d %0d %0d %0d", cyc, to_b & ~64'd1, plant_b.lock, pal, dotsel, cfg_waitrequest, pll_cfg.pll_sys_cfg_inst.NM28_reconfig.reconfig_core.altera_pll_reconfig_core_inst0.current_state);
	end

	task mode(input p, input d);
		begin
			@(posedge clk); #1 pal = p; dotsel = d;
			repeat (3000) @(posedge clk);
		end
	endtask

	initial begin
		repeat (5000) @(posedge clk);      // power-up: PLL locks at 3000, both writers apply NTSC 320
		#1 reset_n = 1;                     // host releases reset (MiSTer re-applies the mode on the rst_req edge it already saw)
		repeat (2000) @(posedge clk);
		#1 reset_n = 0;                     // a host reset: rst_req rises, MiSTer re-applies the same mode
		repeat (2000) @(posedge clk);
		#1 reset_n = 1;
		repeat (2000) @(posedge clk);
		mode(0, 1); mode(1, 0); mode(1, 1); mode(0, 0);
		$display("dut M %h K %h %h  ref M %h K %h %h", plant_a.mem[6'h12], plant_a.mem[6'h19], plant_a.mem[6'h18],
			plant_b.mem[6'h12], plant_b.mem[6'h19], plant_b.mem[6'h18]);
		$fclose(fa); $fclose(fb);
		$finish;
	end
endmodule
