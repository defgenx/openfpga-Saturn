// SH7604P + DCC + SCUP2 + SCSPP + sdram_pocket + SDRAM model: the SH-2 path to sound RAM at 0x25A00000, wired as in Saturn.sv and
// mem_pocket (ch2wr = RAM_WE & CS, ch2rd = RAM_RD & CS). clk_sys 57.27 MHz, clk_ram = 2 x clk_sys. gen_prog.py's program
// writes and reads back words and bytes; results land in WRAM-H 0x06000100.. and are compared with exp.hex.
`timescale 1ps/1ps
module tb_sndram #(parameter bit RAMH_SLOW = 1, parameter int NEXP = 1) ();   // NEXP: lines of exp.hex (Makefile)
	integer T_RAM = 8730;                   // clk_ram period (ps); +T_RAM=9303 +IN_CLK=53748200 is the 320 pixel mode (DOTSEL = 0)
	integer TCO = 3500, TIN = 1000;   // pad delays (ps); +TCO=n +TIN=n sweep them
	integer CAPV = 1;
	initial begin void'($value$plusargs("TCO=%d", TCO)); void'($value$plusargs("TIN=%d", TIN)); void'($value$plusargs("CAP=%d", CAPV)); end   // +CAP=n: sdram_pocket cap_sel
	wire chk_done, chk_ok;
`ifdef NOCHK_DEF
	localparam bit NOCHK = 1;
`else
	localparam bit NOCHK = 0;
`endif
	reg clk_ram = 0, CLK = 0, RST_N = 0;
	wire init_done;
	reg clk_run = 0;
	always begin wait (clk_run); #(T_RAM/2) clk_ram = ~clk_ram; end
	reg clk_cap = 0;   // clk_ram + 90 degrees (PLL counter 4)
	always @(clk_ram) clk_cap <= #(T_RAM/4) clk_ram;
	always begin wait (clk_run); #(T_RAM)   CLK = ~CLK; end
	reg MCLK_DIV = 0;
	always @(posedge CLK) MCLK_DIV <= ~MCLK_DIV;
	wire CE_R = MCLK_DIV, CE_F = ~MCLK_DIV;
	reg [31:0] cyc = 0;
	always @(posedge CLK) cyc <= cyc + 1;
	always @(posedge CLK) if (cyc > 420 && init_done) RST_N <= 1;   // the BIOS starts long after the SDRAM init
	wire SYSRES_N = RST_N;

	// SCSP_CE = 22.5792 MHz as saturn_pocket.sv makes it
	reg [25:0] in_clk = 57272800;
	integer in_clk_i = 57272800;
	initial begin void'($value$plusargs("T_RAM=%d", T_RAM)); if ($value$plusargs("IN_CLK=%d", in_clk_i)) in_clk = in_clk_i; clk_run = 1; end
	wire SCSP_2X_CE; reg SCSP_DIV = 0;
	ce_gen #(26) SCSP_CEGen (.clk(CLK), .in_clk(in_clk), .out_clk(26'd45158400), .in_ce(1'b1), .ce(SCSP_2X_CE), .ev());
	always @(posedge CLK) if (SCSP_2X_CE) SCSP_DIV <= ~SCSP_DIV;
	wire SCSP_CE = SCSP_2X_CE & SCSP_DIV;

	// VDP2 dot sync for sdram_pocket (DCE_R, one clk_sys pulse per 8 clk_sys)
	reg [1:0] dot_div = 0; reg ce_ph = 0;
	always @(posedge CLK) begin ce_ph <= ~ce_ph; if (ce_ph) dot_div <= dot_div + 1'd1; end
	wire dot_ce_r = (dot_div == 2'd3) & ce_ph;

	wire [26:0] MSHA; wire [31:0] MSHDO; wire [31:0] MSHDI;
	wire MSHBS_N, MSHCS0_N, MSHCS1_N, MSHCS2_N, MSHCS3_N, MSHRD_WR_N, MSHRD_N, MSHIVECF_N;
	wire [3:0] MSHDQM_N, CIRL_N;
	wire CWAIT_N, CWATIN_N;
	wire [31:0] SCU_DO;
	wire ROMCE_N, SRAMCE_N, SMPCCE_N, DRAMCE_N, MWR_N;
	wire [24:0] CA = MSHA[24:0];

	SH7604P #(.UBC_DISABLE(1), .SCI_DISABLE(1), .BUS_AREA_TIMIMG({RAMH_SLOW,3'b111}), .BUS_SIZE_BYTE_DISABLE(1)) MSH (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .EN(1'b1),
		.RES_N(1'b1), .NMI_N(1'b1), .IRL_N(CIRL_N),
		.A(MSHA), .DI(MSHDI), .DO(MSHDO), .BS_N(MSHBS_N), .CS0_N(MSHCS0_N), .CS1_N(MSHCS1_N), .CS2_N(MSHCS2_N), .CS3_N(MSHCS3_N),
		.RD_WR_N(MSHRD_WR_N), .WE_N(MSHDQM_N), .RD_N(MSHRD_N), .IVECF_N(MSHIVECF_N), .RFS(),
		.EA('0), .EDI(), .EDO('0), .EBS_N(1'b1), .ECS0_N(1'b1), .ECS1_N(1'b1), .ECS2_N(1'b1), .ECS3_N(1'b1),
		.ERD_WR_N(1'b1), .EWE_N(4'hF), .ERD_N(1'b1), .ECE_N(1'b1), .EOE_N(1'b1), .EIVECF_N(1'b1),
		.WAIT_N(CWAIT_N), .BRLS_N(1'b1), .BGR_N(),
		.DREQ0(1'b1), .DREQ1(1'b1), .FTCI(1'b1), .FTI(1'b1), .RXD(1'b1), .SCKI(1'b1),
		.MD(6'b001000), .FAST(1'b0));

	DCC DCC (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .RES_N(SYSRES_N),
		.A(CA[24:1]), .BS_N(MSHBS_N), .CS0_N(MSHCS0_N), .CS1_N(MSHCS1_N), .CS2_N(MSHCS2_N),
		.RD_WR_N(MSHRD_WR_N), .WE_N(MSHDQM_N[1:0]), .RD_N(MSHRD_N), .WAIT_N(CWAIT_N),
		.BRLS_N(), .BGR_N(1'b1), .BREQ_N(1'b1), .BACK_N(), .EXBREQ_N(1'b1), .EXBACK_N(),
		.WTIN_N(CWATIN_N), .IVECF_N(1'b1), .HINT_N(1'b1), .VINT_N(1'b1), .IREQ_N(),
		.MFTI(), .SFTI(), .DCE_N(DRAMCE_N), .DOE_N(), .DWE_N(), .DWAIT_N(1'b1),
		.ROMCE_N(ROMCE_N), .SRAMCE_N(SRAMCE_N), .SMPCCE_N(SMPCCE_N), .MOE_N(), .MWR_N(MWR_N), .FAST(1'b0));

	// B-bus and SCSP
	wire [15:0] BDI, BDO, SCSP_DO;
	wire BADDT_N, BDTEN_N, BREQ_N, BCSS_N, BRDYS_N, BCS1_N, BCS2_N;
	assign BDI = !BCSS_N ? SCSP_DO : 16'h0000;
`ifdef USE_SCU
`define SCU_MOD SCU
`else
`define SCU_MOD SCUP2
`endif
	`SCU_MOD #(RAMH_SLOW) SCU (
		.CLK(CLK), .RST_N(RST_N), .CE_R(CE_R), .CE_F(CE_F), .RES_N(SYSRES_N),
		.CA(CA), .CDI(MSHDO), .CDO(SCU_DO), .CCS1_N(MSHCS1_N), .CCS2_N(MSHCS2_N), .CCS3_N(MSHCS3_N),
		.CRD_WR_N(MSHRD_WR_N), .CDQM_N(MSHDQM_N), .CRD_N(MSHRD_N), .CWAIT_N(CWATIN_N),
		.CIVECF_N(MSHIVECF_N), .CIRL_N(CIRL_N), .CBREQ_N(), .CBACK_N(1'b1),
		.ECA(), .ECDI(32'd0), .ECDO(), .ECDQM_N(), .ECRD_WR_N(), .ECCS3_N(), .ECRD_N(), .ECBURST(), .ECRFS(), .ECWAIT_N(1'b1),
		.AA(), .ADI(16'hFFFF), .ADO(), .AFC(), .AAS_N(), .ACS0_N(), .ACS1_N(), .ACS2_N(), .AWAIT_N(1'b1), .AIRQ_N(1'b1),
		.ARD_N(), .AWRL_N(), .AWRU_N(), .ATIM0_N(), .ATIM1_N(), .ATIM2_N(),
		.BDI(BDI), .BDO(BDO), .BADDT_N(BADDT_N), .BDTEN_N(BDTEN_N), .BREQ_N(BREQ_N), .BCS1_N(BCS1_N), .BRDY1_N(1'b1), .IRQ1_N(1'b1),
		.BCS2_N(BCS2_N), .BRDY2_N(1'b1), .IRQV_N(1'b1), .IRQH_N(1'b1), .IRQL_N(1'b1), .BCSS_N(BCSS_N), .BRDYS_N(BRDYS_N), .IRQS_N(1'b1),
		.MIREQ_N(1'b1), .FAST(1'b0));

	wire [18:1] SCSP_RAM_A; wire [15:0] SCSP_RAM_D, SCSP_RAM_Q; wire [1:0] SCSP_RAM_WE;
	wire SCSP_RAM_RD, SCSP_RAM_CS, SCSP_RAM_RDY, SCSP_RAM_RFS;
`ifdef USE_SCSP
`define SCSP_MOD SCSP
`else
`define SCSP_MOD SCSPP
`endif
	`SCSP_MOD SCSP (
		.CLK(CLK), .RST_N(RST_N), .CE(SCSP_CE), .RES_N(SYSRES_N), .CE_R(CE_R), .CE_F(CE_F),
		.DI(BDO), .DO(SCSP_DO), .CS_N(BCSS_N),
		.AD_N(BADDT_N), .DTEN_N(BDTEN_N), .REQ_N(BREQ_N), .RDY_N(BRDYS_N), .INT_N(),
		.SCCE_R(), .SCCE_F(), .SCA(23'd0), .SCDI(16'd0), .SCDO(), .SCRW_N(1'b1), .SCAS_N(1'b1), .SCLDS_N(1'b1), .SCUDS_N(1'b1),
		.SCDTACK_N(), .SCFC(3'd0), .SCAVEC_N(), .SCIPL_N(),
		.RAM_A(SCSP_RAM_A), .RAM_D(SCSP_RAM_D), .RAM_WE(SCSP_RAM_WE), .RAM_RD(SCSP_RAM_RD), .RAM_CS(SCSP_RAM_CS),
		.RAM_Q(SCSP_RAM_Q), .RAM_RFS(SCSP_RAM_RFS), .RAM_RDY(SCSP_RAM_RDY),
		.ESL(16'd0), .ESR(16'd0), .SOUND_L(), .SOUND_R(), .SND_EN(3'b111));

	// ---- sdram_pocket + model (pins as sim/mem/tb_sdram.sv)
	wire [12:0] dram_a; wire [1:0] dram_ba, dram_dqm; wire [15:0] dram_dq_o; wire dram_dq_oe, dram_cke, dram_ras_n, dram_cas_n, dram_we_n, dram_clk;
	wire [15:0] dram_dq_i; wire [7:0] dbg_scrub_wrap, dbg_scsp_drop;
	reg init = 1;
	initial begin #1; #(T_RAM*10); init = 0; end
	wire [31:0] dout_a0, dout_a1, dout_b0, dout_b1;
	sdram_pocket #(.INIT_CLKS(2000)) sdram (
		.clk(clk_ram), .clk_cap(clk_cap), .init(init), .sync(dot_ce_r), .cap_sel(CAPV[2:0]),
		.dram_a(dram_a), .dram_ba(dram_ba), .dram_dq_o(dram_dq_o), .dram_dq_oe(dram_dq_oe), .dram_dq_i(dram_dq_i),
		.dram_dqm(dram_dqm), .dram_cke(dram_cke), .dram_ras_n(dram_ras_n), .dram_cas_n(dram_cas_n), .dram_we_n(dram_we_n), .dram_clk(dram_clk),
		.addr_a0(17'd0), .addr_a1(16'd0), .din_a(64'd0), .wr_a(8'd0), .rd_a(1'b0), .dout_a0(dout_a0), .dout_a1(dout_a1),
		.addr_b0(17'd0), .addr_b1(16'd0), .din_b(64'd0), .wr_b(8'd0), .rd_b(1'b0), .dout_b0(dout_b0), .dout_b1(dout_b1),
		.ch2addr({1'b0, SCSP_RAM_A}), .ch2din(SCSP_RAM_D), .ch2wr(SCSP_RAM_WE & {2{SCSP_RAM_CS}}), .ch2rd(SCSP_RAM_RD & SCSP_RAM_CS),
		.ch2dout(SCSP_RAM_Q), .ch2rdy(SCSP_RAM_RDY),
		.init_done(init_done), .chk_done(chk_done), .chk_ok(chk_ok), .dbg_scrub_wrap(dbg_scrub_wrap), .dbg_scsp_drop(dbg_scsp_drop));

	wire [12:0] a_d;  wire [1:0] ba_d, dqm_d;  wire ras_d, cas_d, we_d, sdr_clk, oe_d;  wire [15:0] o_d;
	wire [15:0] dq; wire [15:0] dq_in_r;
	// transport delays (module tdel below)
	reg pre = 1;   // pins are undefined until the first registered NOP
	initial #100000 pre = 0;
	tdel #(13) d_a   (.d(TCO), .i(dram_a),     .o(a_d));
	tdel #(2)  d_ba  (.d(TCO), .i(dram_ba),    .o(ba_d));
	tdel #(2)  d_dqm (.d(TCO), .i(dram_dqm),   .o(dqm_d));
	tdel #(1, 1'b1) d_ras (.d(TCO), .i(dram_ras_n | pre), .o(ras_d));
	tdel #(1, 1'b1) d_cas (.d(TCO), .i(dram_cas_n | pre), .o(cas_d));
	tdel #(1, 1'b1) d_we  (.d(TCO), .i(dram_we_n | pre),  .o(we_d));
	tdel #(1)  d_oe  (.d(TCO), .i(dram_dq_oe), .o(oe_d));
	tdel #(16) d_o   (.d(TCO), .i(dram_dq_o),  .o(o_d));
	tdel #(1, 1'b1) d_clk (.d(TCO), .i(dram_clk),   .o(sdr_clk));
	assign dq = oe_d ? o_d : 16'hzzzz;
	tdel #(16, 16'hzzzz) d_in (.d(TIN), .i(dq), .o(dq_in_r));
	assign dram_dq_i = dq_in_r;
	wire [31:0] m_err, m_act, m_rd, m_wr; wire m_drive;
	sdram_model model (.t_ref(64'd64000000000), .clk(sdr_clk), .cke(dram_cke), .ras_n(ras_d), .cas_n(cas_d), .we_n(we_d),
		.ba(ba_d), .a(a_d), .dqm(dqm_d), .dq(dq), .errors(m_err), .dq_drive(m_drive), .n_act(m_act), .n_rd(m_rd), .n_wr(m_wr));

	// ---- ROM / WRAM-H
	reg [31:0] rom [0:2047];
	reg [31:0] wramh [0:65535];
	reg [31:0] expv [0:255];
	initial begin
		for (int i = 0; i < 65536; i++) wramh[i] = 0;
		$readmemh("prog.hex", rom);
		$readmemh("exp.hex", expv);
	end
	wire [31:0] cs0w = rom[MSHA[11:2]];
	wire [15:0] cs0h = MSHA[1] ? cs0w[15:0] : cs0w[31:16];
	assign MSHDI = !MSHCS3_N ? wramh[MSHA[17:2]] :
	               !ROMCE_N ? {16'h0, cs0h} :
	               !MSHCS1_N || !MSHCS2_N ? SCU_DO : 32'hFFFFFFFF;
	function automatic [31:0] merge(input [31:0] old, input [31:0] d, input [3:0] n);
		merge = {n[3] ? old[31:24] : d[31:24], n[2] ? old[23:16] : d[23:16], n[1] ? old[15:8] : d[15:8], n[0] ? old[7:0] : d[7:0]};
	endfunction
	always @(posedge CLK) if (!MSHRD_WR_N && !MSHCS3_N && !(&MSHDQM_N)) wramh[MSHA[17:2]] <= merge(wramh[MSHA[17:2]], MSHDO, MSHDQM_N);

	// ---- logging: SCSP_RAM_* requests (clk_ram), B-bus completions, SH-2 B-bus accesses
	reg old_rd = 0, old_wr = 0;
	always @(posedge clk_ram) begin
		old_rd <= SCSP_RAM_RD & SCSP_RAM_CS; old_wr <= |(SCSP_RAM_WE & {2{SCSP_RAM_CS}});
		if (SCSP_RAM_RD & SCSP_RAM_CS & ~old_rd) $display("%0t RAM  RD A=%05h", $time, {SCSP_RAM_A, 1'b0});
		if (|(SCSP_RAM_WE & {2{SCSP_RAM_CS}}) & ~old_wr) $display("%0t RAM  WR A=%05h D=%04h WE=%b", $time, {SCSP_RAM_A, 1'b0}, SCSP_RAM_D, SCSP_RAM_WE);
	end
	reg [15:0] ram_q_o;
	always @(posedge clk_ram) begin ram_q_o <= SCSP_RAM_Q; if (SCSP_RAM_Q != ram_q_o) $display("%0t RAM  Q=%04h", $time, SCSP_RAM_Q); end
	reg brdy_o = 1;
	always @(posedge CLK) begin
		brdy_o <= BRDYS_N;
		if (!BCSS_N && !BDTEN_N) $display("%0t BBUS data  BDO=%04h", $time, BDO);
		if (BRDYS_N && !brdy_o) ; else if (!BRDYS_N && brdy_o) $display("%0t BBUS RDY  BDI=%04h", $time, BDI);
	end
	reg cs2_o = 1;
	always @(posedge CLK) begin
		cs2_o <= MSHCS2_N;
		if (!MSHCS2_N && cs2_o) $display("%0t SH2  %s A=%07h DQM=%b DO=%08h", $time, MSHRD_WR_N ? "RD" : "WR", MSHA[26:0], MSHDQM_N, MSHDO);
		if (!MSHCS2_N && CWAIT_N && MSHRD_WR_N && !MSHRD_N) $display("%0t SH2  rd data=%08h", $time, MSHDI);
	end

`ifdef TRACE
	always @(MSHCS2_N or MSHCS1_N or MSHCS0_N or MSHBS_N or CWAIT_N or BCSS_N or BRDYS_N or BREQ_N or BADDT_N or BDTEN_N or CWATIN_N or MSHRD_WR_N or MSHA)
		if ($time > 100000000 && $time < 300000000) $display("%0t TR cs012=%b%b%b bs=%b wait=%b cs2=%b rw=%b bcss=%b brdys=%b breq=%b baddt=%b bdten=%b cwatin=%b A=%07h", $time, MSHCS0_N, MSHCS1_N, MSHCS2_N, MSHBS_N, CWAIT_N, MSHCS2_N, MSHRD_WR_N, BCSS_N, BRDYS_N, BREQ_N, BADDT_N, BDTEN_N, CWATIN_N, MSHA[26:0]);
`endif
`ifdef SDTRACE
	always @(posedge clk_ram) if ($time > 13000000 && $time < 15500000 && !(dram_ras_n && dram_cas_n && dram_we_n))
		$display("%0t SDR ras=%b cas=%b we=%b ba=%0d a=%04h dqm=%b dq_o=%04h oe=%b", $time, dram_ras_n, dram_cas_n, dram_we_n, dram_ba, dram_a, dram_dqm, dram_dq_o, dram_dq_oe);
`endif
	int errs;
	initial begin
		repeat (600) #(T_RAM * 2 * 1000);   // 600000 clk_sys
		errs = 0;
		for (int i = 0; i < NEXP; i++) begin
			if (wramh[64 + i] !== expv[i]) begin errs++; $display("MISMATCH #%0d: got %08h exp %08h", i, wramh[64 + i], expv[i]); end
		end
		$display("done_flag=%04h results=%0d mismatches=%0d sdram_errors=%0d scsp_drop=%0d", wramh[3], NEXP, errs, m_err, dbg_scsp_drop);
		if (wramh[3] == 32'h0D0E && errs == 0 && m_err == 0 && (chk_done && chk_ok || NOCHK)) $display("PASS"); else $display("FAIL");
		$finish;
	end
endmodule

module tdel #(parameter W = 1, parameter [W-1:0] INIT = '0) (input integer d, input [W-1:0] i, output reg [W-1:0] o);
	initial o = INIT;
	// FIFO with a due time per change (constant d keeps the order); Verilator evaluates the RHS of `<= #d` at the end of the delay
	logic [W-1:0] vq [$];
	longint tq [$];
	always @(i) begin vq.push_back(i); tq.push_back($time + d); end
	always begin
		wait (tq.size() > 0);
		#(tq[0] - $time);
		o = vq.pop_front(); void'(tq.pop_front());
	end
endmodule
