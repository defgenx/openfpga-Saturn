// psram_sync + pin delays + psram_model, one chip, for the testbenches that only care about the
// 64 bit client port.

`timescale 1ps/1ps

module psram_bench #(
	parameter integer INIT_US = 20,
	parameter integer CNT_W = 10,
	parameter bit ALIGNED = 1'b0,
	parameter integer TCO = 3500,
	parameter integer TIN = 1000
) (
	input  wire        clk,
	input  wire        reset,
	output wire        busy,
	input  wire [22:0] addr,
	input  wire  [9:0] cnt,
	input  wire        rd,
	input  wire        we,
	input  wire [31:0] din,
	input  wire  [3:0] be,
	output wire [15:0] rdata,
	output wire        rvalid,
	output wire        rlast,
	output wire        idle,
	output wire [31:0] m_err, m_rd, m_wr, m_bursts, m_cel, m_xrow
);

wire [21:16] a; wire [15:0] dq_out, dq_in; wire dq_oe, cclk, adv_n, cre, ce0_n, ce1_n, oe_n, we_n, ub_n, lb_n;

psram_sync #(.LATENCY(4), .CLK_KHZ(114546), .INIT_US(INIT_US), .CNT_W(CNT_W), .ALIGNED(ALIGNED)) ctl (
	.clk(clk), .reset(reset), .init_go(1'b0), .busy(busy), .addr(addr), .cnt(cnt), .rd(rd), .we(we), .din(din), .be(be),
	.rdata(rdata), .rvalid(rvalid), .rlast(rlast), .idle(idle),
	.cram_a(a), .cram_dq_out(dq_out), .cram_dq_oe(dq_oe), .cram_dq_in(dq_in), .cram_clk(cclk),
	.cram_adv_n(adv_n), .cram_cre(cre), .cram_ce0_n(ce0_n), .cram_ce1_n(ce1_n),
	.cram_oe_n(oe_n), .cram_we_n(we_n), .cram_ub_n(ub_n), .cram_lb_n(lb_n)
);

reg [21:16] a_d; reg [15:0] o_d; reg oe_d, clk_d, adv_d, cre_d, ce0_d, ce1_d, oen_d, wen_d, ub_d, lb_d;
always @(a)      a_d   <= #(TCO) a;
always @(dq_out) o_d   <= #(TCO) dq_out;
always @(dq_oe)  oe_d  <= #(TCO) dq_oe;
always @(cclk)   clk_d <= #(TCO) cclk;
always @(adv_n)  adv_d <= #(TCO) adv_n;
always @(cre)    cre_d <= #(TCO) cre;
always @(ce0_n)  ce0_d <= #(TCO) ce0_n;
always @(ce1_n)  ce1_d <= #(TCO) ce1_n;
always @(oe_n)   oen_d <= #(TCO) oe_n;
always @(we_n)   wen_d <= #(TCO) we_n;
always @(ub_n)   ub_d  <= #(TCO) ub_n;
always @(lb_n)   lb_d  <= #(TCO) lb_n;
initial begin a_d = 0; o_d = 0; oe_d = 0; clk_d = 0; adv_d = 1; cre_d = 0; ce0_d = 1; ce1_d = 1; oen_d = 1; wen_d = 1; ub_d = 1; lb_d = 1; end

wire [15:0] dq;
assign dq = oe_d ? o_d : 16'hzzzz;
reg [15:0] dqi;
always @(dq) dqi <= #(TIN) dq;
assign dq_in = dqi;

psram_model #(.T_POWER(INIT_US * 1000000)) mdl (
	.clk(clk_d), .host_oe(oe_d), .a(a_d), .dq(dq), .ce0_n(ce0_d), .ce1_n(ce1_d), .adv_n(adv_d), .oe_n(oen_d),
	.we_n(wen_d), .ub_n(ub_d), .lb_n(lb_d), .cre(cre_d),
	.errors(m_err), .n_rd(m_rd), .n_wr(m_wr), .n_bursts(m_bursts), .max_ce_low(m_cel), .n_xrow(m_xrow)
);

endmodule
