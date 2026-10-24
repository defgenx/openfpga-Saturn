// pll_lite - DPRIO writer for pll_sys, replacing altera_pll_reconfig (pll_sys_cfg) under POCKET_PLL_LITE.
//
// Only the M counter and the fractional K change between the four modes (NTSC/PAL x 320/352); every
// output scales together. The sequence is the one altera_pll_reconfig_core issues for a write of M and K:
//   M:  write 0x12 {hi,lo};  read-modify-write 0x15 (bit 4, bypass) and 0x17 (bit 4, odd division)
//   K:  read 0x17; write it with bit 11 (K ready) = 0; write 0x18, 0x19 (K); write 0x17 with bit 11 = 1
// The DPRIO init (self_reset, fpll_dprio_init) is reused from altera_pll_reconfig_core.v.
// Owning doc: docs/fit-status.md. Check: sim/pll (final DPRIO contents equal to the Altera core's).

`default_nettype none

module pll_lite (
	input  wire        clk,                 // clk_74a, the PLL reference
	input  wire        pal,                 // asynchronous
	input  wire        dotsel,              // asynchronous, 1 = 352 wide
	output wire [63:0] reconfig_to_pll,
	input  wire [63:0] reconfig_from_pll
);

wire init_reset, reset;
self_reset sr (.mgmt_reset(1'b0), .clk(clk), .reset(reset), .init_reset(init_reset));

wire [5:0]  i_addr;
wire        i_rd, i_wr, i_atpg, i_mdio_dis, i_scanen, i_ssl, i_done;
wire [1:0]  i_be;
wire [15:0] i_wd;
fpll_dprio_init init (
	.clk(clk), .reset_n(~reset), .locked(1'b0),
	.dprio_address(i_addr), .dprio_read(i_rd), .dprio_byteen(i_be), .dprio_write(i_wr), .dprio_writedata(i_wd),
	.atpgmode(i_atpg), .mdio_dis(i_mdio_dis), .scanen(i_scanen), .ser_shift_load(i_ssl), .dprio_init_done(i_done)
);

wire locked;
altera_std_synchronizer #(.depth(3)) lsync (.clk(clk), .reset_n(1'b1), .din(reconfig_from_pll[16]), .dout(locked));
wire [15:0] rd = reconfig_from_pll[15:0];

// mode constants: {M odd, M hi, M lo} and K
reg [1:0] md_s1, md_s2;                       // {dotsel, pal}
reg [1:0] mode;                               // applied
reg       valid = 1'b0;
reg [4:0] st = 5'd0;
reg [4:0] wt;

reg        o_wr = 1'b0, o_rd = 1'b0;
reg  [5:0] o_addr = 6'd0;
reg [15:0] o_wd = 16'd0;
reg [15:0] d1, d2;

wire        wide = mode[1];
wire  [7:0] m_hi = wide ? 8'd5 : 8'd4;
wire [31:0] k_val = !mode[0] ? (!wide ? 32'hAFC38FAE : 32'h4196FC35)
                             : (!wide ? 32'hA052BF5B : 32'h31219DBD);

always @(posedge clk) begin
	md_s1 <= {dotsel, pal};
	md_s2 <= md_s1;
	o_wr <= 1'b0;
	o_rd <= 1'b0;
	if (reset) begin
		st <= 5'd0;
		valid <= 1'b0;
	end else begin
		case (st)
		5'd0: if (i_done && (!valid || md_s2 != mode)) begin
			mode <= md_s2;
			valid <= 1'b1;
			st <= 5'd1;
		end
		5'd1: begin o_wr <= 1'b1; o_addr <= 6'h12; o_wd <= {m_hi, 8'd4}; st <= 5'd2; end
		5'd2: begin o_rd <= 1'b1; o_addr <= 6'h15; st <= 5'd3; end
		5'd3: begin o_rd <= 1'b1; o_addr <= 6'h17; st <= 5'd4; end
		5'd5: begin d1 <= rd; st <= 5'd6; end                // read latency 2: 0x15 seen at st 3, valid at st 5
		5'd6: begin d2 <= rd; st <= 5'd7; end
		5'd7: begin o_wr <= 1'b1; o_addr <= 6'h15; o_wd <= {d1[15:5], 1'b0, d1[3:0]}; st <= 5'd8; end
		5'd8: begin o_wr <= 1'b1; o_addr <= 6'h17; o_wd <= {d2[15:5], wide, d2[3:0]}; st <= 5'd9; end
		5'd9: begin o_rd <= 1'b1; o_addr <= 6'h17; st <= 5'd10; end
		5'd12: begin d2 <= rd; st <= 5'd13; end              // 0x17 seen at st 10, valid at st 12
		5'd13: begin o_wr <= 1'b1; o_addr <= 6'h17; o_wd <= {d2[15:12], 1'b0, d2[10:0]}; st <= 5'd14; end
		5'd14: begin o_wr <= 1'b1; o_addr <= 6'h18; o_wd <= k_val[15:0];  st <= 5'd15; end
		5'd15: begin o_wr <= 1'b1; o_addr <= 6'h19; o_wd <= k_val[31:16]; st <= 5'd16; end
		5'd16: begin o_wr <= 1'b1; o_addr <= 6'h17; o_wd <= {d2[15:12], 1'b1, d2[10:0]}; st <= 5'd17; wt <= 5'd0; end
		5'd17: begin wt <= wt + 5'd1; if (&wt) st <= 5'd18; end   // let the lock flag drop
		5'd18: if (locked) st <= 5'd0;
		default: st <= st + 5'd1;                              // wait states 4, 10, 11
		endcase
	end
end

assign reconfig_to_pll[0]     = clk;
assign reconfig_to_pll[1]     = ~init_reset;
assign reconfig_to_pll[2]     = i_done ? o_wr : i_wr;
assign reconfig_to_pll[3]     = i_done ? o_rd : i_rd;
assign reconfig_to_pll[9:4]   = i_done ? o_addr : i_addr;
assign reconfig_to_pll[25:10] = i_done ? o_wd : i_wd;
assign reconfig_to_pll[27:26] = 2'b11;
assign reconfig_to_pll[28]    = i_ssl;
assign reconfig_to_pll[29]    = i_mdio_dis;
assign reconfig_to_pll[30]    = 1'b0;
assign reconfig_to_pll[31]    = 1'b0;
assign reconfig_to_pll[36:32] = 5'd0;
assign reconfig_to_pll[37]    = i_scanen;
assign reconfig_to_pll[38]    = i_atpg;
assign reconfig_to_pll[63:39] = 25'd0;

endmodule

`default_nettype wire
