// Dumps SH2_PKG::Decode() over the whole input space (one line per input, hex of the packed DecInstr_t).
module dump_dec;
	import SH2_PKG::*;
	integer f;
	DecInstr_t D;
	initial begin
		f = $fopen("dec_dump.txt", "w");
		// normal decode
		for (int ir = 0; ir < 65536; ir++)
			for (int st = 0; st < 8; st++)
				for (int ds = 0; ds < 2; ds++)
					for (int t = 0; t < 2; t++) begin
						D = Decode(ir[15:0], st[2:0], t[0], ds[0], 1'b0, 1'b0, 1'b0, 1'b0, 1'b1);
						$fwrite(f, "N %04x %0d %0d %0d %0h\n", ir, st, ds, t, D);
					end
		// exceptions (IR ignored but check a couple of values)
		for (int mode = 1; mode < 4; mode++)
			for (int st = 0; st < 8; st++)
				for (int ilsi = 0; ilsi < 2; ilsi++)
					for (int ir = 0; ir < 65536; ir += 4097) begin
						D = Decode(ir[15:0], st[2:0], 1'b0, 1'b0, mode==1, mode==2, mode==3, ilsi[0], 1'b1);
						$fwrite(f, "E%0d %04x %0d %0d %0h\n", mode, ir, st, ilsi, D);
					end
		$fclose(f);
		$finish;
	end
endmodule
