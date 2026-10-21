// Raw J68 core, registered pins only, for area measurement.
module j68_raw (
	input clk, input rst, input ena,
	output rd_ena, output wr_ena, input data_ack, output [1:0] byte_ena, output [31:0] address,
	input [15:0] rd_data, output [15:0] wr_data, output [2:0] fc, input [2:0] ipl_n);
	cpu_j68 #(.USE_CLK_ENA(1)) u (.rst(rst), .clk(clk), .clk_ena(ena), .rd_ena(rd_ena), .wr_ena(wr_ena),
		.data_ack(data_ack), .byte_ena(byte_ena), .address(address), .rd_data(rd_data), .wr_data(wr_data),
		.fc(fc), .ipl_n(ipl_n), .dbg_reg_addr(), .dbg_reg_wren(), .dbg_reg_data(), .dbg_sr_reg(),
		.dbg_pc_reg(), .dbg_usp_reg(), .dbg_ssp_reg(), .dbg_vbr_reg(), .dbg_cycles(), .dbg_ifetch(), .dbg_irq_lvl());
endmodule
