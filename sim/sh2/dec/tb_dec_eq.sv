// Exhaustive equivalence of SH2P_dec against the golden Decode() (SH2P_PKG copy of SH_pkg): every IR x STATE x DS x T,
// all exception modes x STATE x ILSI x a sample of IR. RA.N/RB.N are compared only when their R/W flags are set.
module tb_dec_eq;
	import SH2P_PKG::*;
	reg  [15:0] IR; reg [2:0] ST; reg T, DS, RE, IE, LE, LS;
	DecInstr_t D_dut, D_ref;
	SH2P_dec #(1) dut (.IR(IR), .STATE(ST), .T(T), .DS(DS), .RES_EXP(RE), .INT_EXP(IE), .ILI_EXP(LE), .ILSI(LS), .DECI(D_dut), .CLS_O());
	integer n = 0, bad = 0;
	function DecInstr_t mask(DecInstr_t d);
		DecInstr_t m;
		m = d;
		if (!(d.RA.R | d.RA.W)) m.RA.N = 0;
		if (!(d.RB.R | d.RB.W)) m.RB.N = 0;
		return m;
	endfunction
	task check;
		begin
			#1;
			D_ref = Decode(IR, ST, T, DS, RE, IE, LE, LS, 1'b1);
			n++;
			if (mask(D_dut) !== mask(D_ref)) begin
				bad++;
				if (bad < 10) $display("MISMATCH IR=%04h ST=%0d T=%b DS=%b RE=%b IE=%b LE=%b LS=%b dut=%h ref=%h", IR, ST, T, DS, RE, IE, LE, LS, D_dut, D_ref);
			end
		end
	endtask
	initial begin
		RE = 0; IE = 0; LE = 0; LS = 0;
		for (int ir = 0; ir < 65536; ir++)
			for (int st = 0; st < 8; st++)
				for (int ds = 0; ds < 2; ds++)
					for (int t = 0; t < 2; t++) begin IR = ir; ST = st; DS = ds; T = t; check; end
		for (int m = 1; m < 8; m++)
			for (int st = 0; st < 8; st++)
				for (int ls = 0; ls < 2; ls++)
					for (int ir = 0; ir < 65536; ir += 257)
						for (int ds = 0; ds < 2; ds++) begin IR = ir; ST = st; DS = ds; T = ir[0]; RE = m[0]; IE = m[1]; LE = m[2]; LS = ls; check; end
		if (bad == 0) $display("PASS dec_eq: %0d vectors", n); else $display("FAIL dec_eq: %0d of %0d", bad, n);
		$finish;
	end
endmodule
