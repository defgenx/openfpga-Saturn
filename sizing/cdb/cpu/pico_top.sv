// CPU-only sizing wrapper: PicoRV32, smallest useful configuration (RV32IC, dual-port regfile).
module cpu_pico (
	input  wire clk, input wire resetn,
	output wire valid, input wire ready, output wire [31:0] addr, output wire [31:0] wdata, output wire [3:0] wstrb,
	input wire [31:0] rdata
);
	picorv32 #(.ENABLE_COUNTERS(0), .ENABLE_COUNTERS64(0), .TWO_STAGE_SHIFT(0), .BARREL_SHIFTER(0),
		.COMPRESSED_ISA(1), .CATCH_MISALIGN(0), .CATCH_ILLINSN(0), .ENABLE_REGS_DUALPORT(1),
		.ENABLE_MUL(0), .ENABLE_DIV(0), .ENABLE_IRQ(0), .TWO_CYCLE_ALU(0), .TWO_CYCLE_COMPARE(0),
		.REGS_INIT_ZERO(0), .LATCHED_MEM_RDATA(0)) cpu (
		.clk(clk), .resetn(resetn), .mem_valid(valid), .mem_instr(), .mem_ready(ready), .mem_addr(addr),
		.mem_wdata(wdata), .mem_wstrb(wstrb), .mem_rdata(rdata), .irq(32'd0));
endmodule
