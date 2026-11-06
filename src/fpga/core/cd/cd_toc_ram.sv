// 512 x 32 true dual-port RAM (one M10K pair): port a on the bridge clock (TOC push, host-written response structs,
// bridge reads of the openfile parameter struct), port b on clk_sys (TOC engine, firmware window).

`default_nettype none

module cd_toc_ram (
	input  wire        wclk,
	input  wire        we,
	input  wire [8:0]  wa,
	input  wire [31:0] wd,
	output reg  [31:0] wq,                   // word at wa, one clock later
	input  wire        rclk,
	input  wire        rwe,
	input  wire [8:0]  ra,
	input  wire [31:0] rwd,
	output reg  [31:0] rq                    // word at ra, one clock later
);

`ifdef ALTERA_RESERVED_QIS
// Quartus does not infer a two-clock true dual port from the behavioural code below (read-during-write): instantiated
wire [31:0] qa, qb;
always @* begin wq = qa; rq = qb; end
altsyncram #(
	.operation_mode("BIDIR_DUAL_PORT"), .intended_device_family("Cyclone V"), .ram_block_type("M10K"),
	.width_a(32), .widthad_a(9), .numwords_a(512), .width_b(32), .widthad_b(9), .numwords_b(512),
	.outdata_reg_a("UNREGISTERED"), .outdata_reg_b("UNREGISTERED"), .address_reg_b("CLOCK1"),
	.indata_reg_b("CLOCK1"), .wrcontrol_wraddress_reg_b("CLOCK1"),
	.read_during_write_mode_port_a("DONT_CARE"), .read_during_write_mode_port_b("DONT_CARE"),
	.read_during_write_mode_mixed_ports("DONT_CARE"), .power_up_uninitialized("FALSE"), .lpm_type("altsyncram")
) mem (
	.clock0(wclk), .address_a(wa), .data_a(wd), .wren_a(we), .q_a(qa),
	.clock1(rclk), .address_b(ra), .data_b(rwd), .wren_b(rwe), .q_b(qb),
	.aclr0(1'b0), .aclr1(1'b0), .addressstall_a(1'b0), .addressstall_b(1'b0), .byteena_a(1'b1), .byteena_b(1'b1),
	.clocken0(1'b1), .clocken1(1'b1), .clocken2(1'b1), .clocken3(1'b1),
	.eccstatus(), .rden_a(1'b1), .rden_b(1'b1)
);
`else
reg [31:0] mem [0:511];

always @(posedge wclk) begin
	if (we) mem[wa] <= wd;
	wq <= mem[wa];
end
always @(posedge rclk) begin
	if (rwe) mem[ra] <= rwd;
	rq <= mem[ra];
end
`endif

endmodule

`default_nettype wire
