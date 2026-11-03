`timescale 1ns/1ps
// pocket_audio_mac: the Quartus branch (altmult_add, Altera simulation model) against the simulation branch.
// make -C sim platform mac-equiv ALTERA_MF=<quartus>/eda/sim_lib/altera_mf.v (the library is not in the repo)
module tb_audio_mac;
  reg clk = 0; always #5 clk = ~clk;
  reg signed [16:0] d; reg [15:0] ph; reg signed [15:0] base;
  wire [15:0] q_qis, q_sim;
  mac_qis uq (.clk(clk), .d(d), .ph(ph), .base(base), .q(q_qis));
  mac_sim us (.clk(clk), .d(d), .ph(ph), .base(base), .q(q_sim));
  integer i, err = 0, n = 0;
  task chk; begin #1; n = n + 1; if (q_qis !== q_sim) begin err = err + 1; if (err < 10) $display("MISMATCH d=%0d ph=%0d base=%0d qis=%h sim=%h", d, ph, base, q_qis, q_sim); end end endtask
  initial begin
    d = 0; ph = 0; base = 0;
    @(posedge clk); @(posedge clk); #1;            // K = 1 after the first clock
    // corners
    for (i = 0; i < 16; i = i + 1) begin
      d = (i[0]) ? 17'sh0FFFF : -17'sh10000; ph = i[1] ? 16'hFFFF : 16'h0000; base = i[2] ? 16'sh7FFF : -16'sh8000;
      if (i[3]) begin d = -1; ph = 1; base = -1; end
      chk;
    end
    for (i = 0; i < 20000; i = i + 1) begin
      d = $random; ph = $random; base = $random; chk;
    end
    // the valid operating range: d = cur - prev of two 16-bit samples
    for (i = 0; i < 20000; i = i + 1) begin
      base = $random; d = $signed({$random} % 65536) - 17'sd32768 - base; ph = $random; chk;
    end
    d = 17'sd1000; ph = 16'd32768; base = -16'sd200; #1 $display("sample qis=%0d sim=%0d (expect 300)", $signed(q_qis), $signed(q_sim));
    $display("mac equivalence: %0d vectors, %0d mismatches", n, err);
    $finish;
  end
endmodule
