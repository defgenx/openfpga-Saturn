// CPU-only sizing wrapper: FemtoRV32 quark.
module cpu_femto (
	input  wire clk, input wire rstn,
	output wire [31:0] a, output wire [31:0] wd, output wire [3:0] wm, input wire [31:0] rd,
	output wire rs, input wire rb, input wire wb
);
	FemtoRV32 #(.ADDR_WIDTH(20)) cpu (.clk(clk), .mem_addr(a), .mem_wdata(wd), .mem_wmask(wm), .mem_rdata(rd),
		.mem_rstrb(rs), .mem_rbusy(rb), .mem_wbusy(wb), .reset(rstn));
endmodule
