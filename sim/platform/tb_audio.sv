// pocket_audio: 1 kHz sine at 44.1 kHz in, 48 kHz out. Least-squares fit of the output at 1 kHz must give the input
// amplitude and a small residual (linear interpolation: about -60 dB at 1 kHz), and the output rate must be 48 kHz.
`timescale 1ns/1ps
module tb_audio;
	parameter real FSYS = 57272800.0;
	reg clk = 0;
	always #(1.0e9 / FSYS / 2.0) clk = ~clk;

	reg rst = 1;
	reg scsp_ce = 0;
	reg signed [15:0] in_l = 0, in_r = 0;
	wire signed [15:0] out_l, out_r;
	integer acc = 0;

	pocket_audio dut (.clk(clk), .rst(rst), .scsp_ce(scsp_ce), .in_clk(32'd57272800), .in_l(in_l), .in_r(in_r), .out_l(out_l), .out_r(out_r));

	// SCSP_CE: 22.5792 MHz from clk_sys, and one new sample per 512 enables
	integer n = 0, cnt = 0;
	real pi = 3.14159265358979;
	always @(posedge clk) begin
		scsp_ce <= 0;
		acc = acc + 22579200;
		if (acc >= 57272800) begin
			acc = acc - 57272800;
			scsp_ce <= 1;
			cnt = cnt + 1;
			if (cnt == 512) begin
				cnt = 0;
				n = n + 1;
				in_l <= $rtoi(8000.0 * $sin(2.0 * pi * 1000.0 * n / 44100.0));
				in_r <= $rtoi(-4000.0 * $sin(2.0 * pi * 1000.0 * n / 44100.0));
			end
		end
	end

	// 48 kHz probe: out_l is sampled at its own strobe, every 1193.2 clk_sys
	integer pacc = 0, k = 0, nout = 0;
	real sc = 0, ss = 0, scc = 0, sss = 0, scs = 0, sy = 0, syc = 0, sys = 0, yy = 0;
	real t, c, s, y;
	always @(posedge clk) begin
		pacc = pacc + 48000;
		if (pacc >= 57272800) begin
			pacc = pacc - 57272800;
			if (k > 200 && k < 4000) begin
				t = k / 48000.0;
				c = $cos(2.0 * pi * 1000.0 * t);
				s = $sin(2.0 * pi * 1000.0 * t);
				y = out_l;
				scc = scc + c*c; sss = sss + s*s; scs = scs + c*s;
				syc = syc + y*c; sys = sys + y*s; yy = yy + y*y;
				nout = nout + 1;
			end
			k = k + 1;
		end
	end

	real det, a, b, amp, res;
	initial begin
		#100 rst = 0;
		#(90e6);   // 90 ms
		det = scc*sss - scs*scs;
		a = (syc*sss - sys*scs) / det;
		b = (sys*scc - syc*scs) / det;
		amp = $sqrt(a*a + b*b);
		res = yy - (a*syc + b*sys);
		$display("samples %0d  amplitude %f (want 8000)  residual rms %f (%f dB)", nout, amp, $sqrt(res / nout), 20.0*$log10($sqrt(res / nout) / amp));
		if (amp > 7900 && amp < 8100 && $sqrt(res / nout) < 40.0) $display("RESULT: PASS");
		else $display("RESULT: FAIL");
		$finish;
	end
endmodule
