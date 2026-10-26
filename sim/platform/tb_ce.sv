// tb_ce: ce_gen / ce_div against the CEGen.vhd accumulator (one per output), cycle exact, 3M clk_sys
module tb_ce;
reg clk=0; always #5 clk=~clk;
reg [25:0] inc = 57272800;
wire scsp, cd, cd_ev, smpc, cdd, ev0;
ce_gen #(26) a(.clk(clk),.in_clk(inc),.out_clk(26'd45158400),.in_ce(1'b1),.ce(scsp),.ev(ev0));
ce_gen #(12) b(.clk(clk),.in_clk(12'd3528),.out_clk(12'd3125),.in_ce(scsp),.ce(cd),.ev(cd_ev));
ce_div #(10) c(.clk(clk),.ev(cd_ev),.ce(smpc));
ce_div #(256) d(.clk(clk),.ev(scsp),.ce(cdd));
// reference: CEGen semantic
reg [31:0] s1=0,s2=0,s3=0,s4=0; reg r1=0,r2=0,r3=0,r4=0; integer err=0,n=0;
always @(posedge clk) begin
  r1<=0; r2<=0; r3<=0; r4<=0;
  s1 = s1 + 45158400; if (s1 >= inc) begin s1 = s1 - inc; r1<=1; end
  if (scsp) begin
    s2 = s2 + 40000000; if (s2 >= 45158400) begin s2 = s2 - 45158400; r2<=1; end
    s3 = s3 + 4000000; if (s3 >= 45158400) begin s3 = s3 - 45158400; r3<=1; end
    s4 = s4 + 176400; if (s4 >= 45158400) begin s4 = s4 - 45158400; r4<=1; end
  end
  if (r1!==scsp || r2!==cd || r3!==smpc || r4!==cdd) err=err+1;
  n=n+1;
  if (n==3000000) begin $display("ce_gen: cycles %0d, mismatches %0d", n, err); if (err == 0) $display("RESULT: PASS"); else $display("RESULT: FAIL"); $finish; end
end
endmodule
