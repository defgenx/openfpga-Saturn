// Differential testbench: golden pair (REF_) vs device-under-test, compared every clk_sys cycle.
module tb_top;
	reg CLK = 0;
	reg RST_N = 0;
	always #5 CLK = ~CLK;

	wire [255:0] obs_dut, obs_ref;
	sh2_env     dut (.CLK(CLK), .RST_N(RST_N), .obs(obs_dut));
	REF_sh2_env ref0 (.CLK(CLK), .RST_N(RST_N), .obs(obs_ref));

	int unsigned ncycles;
	int unsigned cyc;
	int unsigned nbus_m, nbus_s, nvec, nirq, nown_s, nwrite;
	reg [255:0] prev_ref;
	string name;
	int verbose;
	reg [31:0] chk_r, chk_d;
	int nz;

	initial begin
		if (!$value$plusargs("cycles=%d", ncycles)) ncycles = 200000;
		if (!$value$plusargs("name=%s", name)) name = "test";
		if (!$value$plusargs("verbose=%d", verbose)) verbose = 0;
		cyc = 0; nbus_m = 0; nbus_s = 0; nvec = 0; nirq = 0; nown_s = 0; nwrite = 0;
		#42 RST_N = 1;
	end

	// obs layout (MSB first): see env.sv.in
	wire m_bs  = obs_ref[255-0] ; // placeholder, real decode below
	wire [26:0] ma = ref0.MSHA;

	always @(posedge CLK) begin
		if (RST_N) begin
			cyc <= cyc + 1;
			if (obs_dut !== obs_ref) begin
				$display("MISMATCH %s at clk %0d (t=%0t)", name, cyc, $time);
				$display("  ref  MSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b IVEC=%b RFS=%b BGR=%b", ref0.MSHA, ref0.MSHDO, ref0.MSHBS_N, ref0.MSHCS0_N, ref0.MSHCS1_N, ref0.MSHCS2_N, ref0.MSHCS3_N, ref0.MSHRD_WR_N, ref0.MSHDQM_N, ref0.MSHRD_N, ref0.MSHIVECF_N, ref0.MSRFS, ref0.MSHBGR_N);
				$display("  dut  MSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b IVEC=%b RFS=%b BGR=%b", dut.MSHA, dut.MSHDO, dut.MSHBS_N, dut.MSHCS0_N, dut.MSHCS1_N, dut.MSHCS2_N, dut.MSHCS3_N, dut.MSHRD_WR_N, dut.MSHDQM_N, dut.MSHRD_N, dut.MSHIVECF_N, dut.MSRFS, dut.MSHBGR_N);
				$display("  ref  SSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b BREQ=%b", ref0.SSHA, ref0.SSHDO, ref0.SSHBS_N, ref0.SSHCS0_N, ref0.SSHCS1_N, ref0.SSHCS2_N, ref0.SSHCS3_N, ref0.SSHRD_WR_N, ref0.SSHDQM_N, ref0.SSHRD_N, ref0.SSHBREQ_N);
				$display("  dut  SSH A=%07h DO=%08h BS=%b CS=%b%b%b%b RDWR=%b DQM=%b RD=%b BREQ=%b", dut.SSHA, dut.SSHDO, dut.SSHBS_N, dut.SSHCS0_N, dut.SSHCS1_N, dut.SSHCS2_N, dut.SSHCS3_N, dut.SSHRD_WR_N, dut.SSHDQM_N, dut.SSHRD_N, dut.SSHBREQ_N);
				$display("FAIL %s", name);
				$finish;
			end
			if (verbose && cyc < verbose) $display("%0d MSH A=%07h BS=%b CS=%b%b%b%b RW=%b RD=%b DQM=%b DO=%08h DI=%08h WAIT=%b | PC=%08h  SSHres=%b BGR=%b", cyc, ref0.MSHA, ref0.MSHBS_N, ref0.MSHCS0_N, ref0.MSHCS1_N, ref0.MSHCS2_N, ref0.MSHCS3_N, ref0.MSHRD_WR_N, ref0.MSHRD_N, ref0.MSHDQM_N, ref0.MSHDO, ref0.MSHDI, ref0.MSHWAIT_N, ref0.MSH.core.PC, ref0.SSHRES_N, ref0.MSHBGR_N);
			// coverage counters on the golden side
			if (ref0.MSHBS_N == 1'b0 && prev_ref[0] !== 1'b0) begin end
			if (!ref0.MSHBS_N) begin
				if (ref0.own_ssh) nown_s <= nown_s + 1;
				if (!ref0.MSHRD_WR_N) nwrite <= nwrite + 1;
			end
			if (!ref0.MSHIVECF_N) nvec <= nvec + 1;
			if (cyc >= ncycles) begin
				chk_r = 0; chk_d = 0; nz = 0;
				for (int i = 0; i < 65536; i++) begin
					chk_r = chk_r * 33 + ref0.wramh[i]; chk_d = chk_d * 33 + dut.wramh[i];
					if (ref0.wramh[i] != 0) nz++;
				end
				for (int i = 0; i < 16384; i++) begin
					chk_r = chk_r * 33 + ref0.wraml[i] + ref0.scr[i] + ref0.abus[i];
					chk_d = chk_d * 33 + dut.wraml[i] + dut.scr[i] + dut.abus[i];
				end
				if (chk_r != chk_d) begin $display("MISMATCH memory contents %s", name); $display("FAIL %s", name); $finish; end
				$display("  PC msh=%08h ssh=%08h  wramh nonzero words=%0d  mem-checksum=%08h", ref0.MSH.core.PC, ref0.SSH.core.PC, nz, chk_r);
				$display("PASS %s: %0d clk compared; bus-active clk: total-ssh-own=%0d, writes=%0d, vector-fetch clk=%0d, SSH released=%0d", name, cyc, nown_s, nwrite, nvec, ref0.SSHRES_N);
				$finish;
			end
		end
	end
endmodule
