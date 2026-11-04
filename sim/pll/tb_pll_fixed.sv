// pll_lite #(.NO_RECONFIG(1)) (POCKET_PLL_NO_RECONFIG): from power-up through every mode change and host reset the bus
// must stay at the values altera_pll.v gives the Cyclone V DPRIO ports in its "General" subtype, with no DPRIO access.
// NR = 0 (negative control, Makefile) runs the default pll_lite through the same sequence and must fail.
`timescale 1ns/1ps

module tb_fixed #(parameter NR = 1);
	reg clk = 0;
	always #6.734 clk = ~clk;

	reg pal = 0, dotsel = 0, reapply = 0, lock = 0;
	wire [63:0] to;
	pll_lite #(.NO_RECONFIG(NR)) dut (.clk(clk), .pal(pal), .dotsel(dotsel), .reapply(reapply), .reconfig_to_pll(to),
		.reconfig_from_pll({47'd0, lock, 16'd0}));

	// altera_pll.v, Cyclone V, pll_subtype "General": clk 0, rstn 1, write 0, addr 0, din 0, byteen 0, sershiftload 1,
	// mdiodis 1, usr_phase_en 0, updn 0, cntsel 0 (read is reconfig_to_pll[3] in every subtype)
	localparam [63:0] GENERAL = 64'h0000_0000_3000_0002;
	integer n_wr = 0, n_rd = 0, n_rst = 0, n_mdio = 0, n_ssl = 0, n_clk = 0, n_other = 0, n_diff = 0, cyc = 0, m;
	reg c0;
	initial c0 = 1'b0;
	always @(posedge clk) begin
		cyc <= cyc + 1;
		if (to[2] === 1'b1) n_wr <= n_wr + 1;           // write strobe
		if (to[3] === 1'b1) n_rd <= n_rd + 1;           // read strobe
		if (to[1] !== 1'b1) n_rst <= n_rst + 1;         // DPRIO reset (rstn low)
		if (to[29] !== 1'b1) n_mdio <= n_mdio + 1;      // DPRIO enabled (mdio_dis low)
		if (to[28] !== 1'b1) n_ssl <= n_ssl + 1;        // ser_shift_load low (the init's CRAM load)
		if (to[30] !== 1'b0 || to[31] !== 1'b0 || to[36:32] !== 5'd0) n_other <= n_other + 1;   // phase step
		if (to !== GENERAL) n_diff <= n_diff + 1;
	end
	always @(to[0]) if ($time > 0) n_clk = n_clk + 1;   // DPRIO clock edges after power-up

	initial begin
		#1;
		repeat (1500) @(posedge clk);                   // pll_lite's init would run here (64 writes + CRAM load)
		lock = 1;                                       // first lock: pll_lite would write M and K here
		repeat (1500) @(posedge clk);
		for (m = 0; m < 8; m = m + 1) begin             // every mode, then a host reset in each
			{pal, dotsel} = m[1:0];
			repeat (800) @(posedge clk);
			reapply = 1; repeat (4) @(posedge clk); reapply = 0;
			repeat (800) @(posedge clk);
		end
		$display("NO_RECONFIG %0d: %0d clk_74a, DPRIO writes %0d reads %0d, rstn low %0d, mdio_dis low %0d, ser_shift_load low %0d,",
		         NR, cyc, n_wr, n_rd, n_rst, n_mdio, n_ssl);
		$display("  phase-step inputs set %0d, DPRIO clock edges %0d, cycles off the General-subtype values %0d",
		         n_other, n_clk, n_diff);
		if (n_wr + n_rd + n_rst + n_mdio + n_ssl + n_other + n_clk + n_diff == 0) $display("RESULT: PASS");
		else $display("RESULT: FAIL");
		$finish;
	end
endmodule
