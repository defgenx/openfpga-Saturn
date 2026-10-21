// CPU-only sizing wrapper: SERV (RV32IC, no CSR) with its register file RAM.
module cpu_serv (
	input  wire        clk, input wire rst,
	output wire [31:0] ia, output wire ic, input wire [31:0] ird, input wire iack,
	output wire [31:0] da, output wire [31:0] dd, output wire [3:0] dsel, output wire dwe, output wire dc,
	input  wire [31:0] drd, input wire dack
);
	serv_rf_top #(.COMPRESSED(1), .WITH_CSR(0), .RESET_STRATEGY("MINI")) cpu (
		.clk(clk), .i_rst(rst), .i_timer_irq(1'b0),
		.o_ibus_adr(ia), .o_ibus_cyc(ic), .i_ibus_rdt(ird), .i_ibus_ack(iack),
		.o_dbus_adr(da), .o_dbus_dat(dd), .o_dbus_sel(dsel), .o_dbus_we(dwe), .o_dbus_cyc(dc),
		.i_dbus_rdt(drd), .i_dbus_ack(dack),
		.o_ext_rs1(), .o_ext_rs2(), .o_ext_funct3(), .i_ext_rd(32'd0), .i_ext_ready(1'b0), .o_mdu_valid());
endmodule
