// saturn_pocket.sv - the Sega Saturn system on the Analogue Pocket.
//
// Wires Saturn (src/fpga/saturn/Saturn/Saturn.sv) the way Saturn_MiSTer's board top does, with the
// MiSTer framework replaced by Pocket blocks: mem_pocket (SDRAM/PSRAM/SRAM), cdd_pocket (CD drive),
// pad_pocket, pocket_video, pocket_audio and a reconfigurable PLL. Pin tri-states stay in core_top.
// Owning doc: docs/integration.md.
//
// Switches for other branches (not implemented here):
//   POCKET_CUT_CD    the CD block no longer takes the SH-1 serial link: cdd_pocket and the CD_* ports are
//                    compiled out, edit the marked blocks for the new interface.
//   POCKET_CUT_SMPC  the SMPC no longer reads the PIO pads through PDR1I/PDR2I: pad_pocket is compiled out.

`default_nettype none

module saturn_pocket #(
	parameter bit LD_LITTLE = 1'b0                 // core_top: bridge_endian_little = 0
) (
	input  wire        clk_74a,
	input  wire        reset_n,                    // clk_74a: host reset, Reset action, BIOS loaded

	// interact.json settings (clk_74a)
	input  wire  [1:0] cfg_region,                 // 0 auto, 1 Japan, 2 USA, 3 Europe
	input  wire  [2:0] cfg_cart,                   // MiSTer cart_sel: 0 auto, 2 RAM 1M, 3 RAM 4M, 5 backup, 6 none

	input  wire [27:0] pad,                        // {pad2, pad1}, MiSTer joystick_0 bit order, clk_74a
	input  wire [31:0] rtc_date_bcd,
	input  wire [31:0] rtc_time_bcd,
	input  wire        rtc_valid,

	// bridge (clk_74a)
	input  wire        bridge_wr,
	input  wire [31:0] bridge_addr,
	input  wire [31:0] bridge_wr_data,
	input  wire        ld_wr,
	input  wire  [2:0] ld_sel,
	input  wire [23:0] ld_addr,
	input  wire [31:0] ld_data,

	// APF target commands for disc reads (clk_74a)
	output wire        target_dataslot_read,
	output wire [15:0] target_dataslot_id,
	output wire [31:0] target_dataslot_slotoffset,
	output wire [31:0] target_dataslot_bridgeaddr,
	output wire [31:0] target_dataslot_length,
	input  wire        target_dataslot_ack,
	input  wire        target_dataslot_done,
	input  wire  [2:0] target_dataslot_err,

	// SDRAM
	output wire [12:0] dram_a,
	output wire  [1:0] dram_ba,
	output wire [15:0] dram_dq_o,
	output wire        dram_dq_oe,
	input  wire [15:0] dram_dq_i,
	output wire  [1:0] dram_dqm,
	output wire        dram_clk,
	output wire        dram_cke,
	output wire        dram_ras_n,
	output wire        dram_cas_n,
	output wire        dram_we_n,

	// PSRAM
	output wire [21:16] cram0_a,  output wire [15:0] cram0_dq_o,  output wire cram0_dq_oe,  input wire [15:0] cram0_dq_i,
	output wire cram0_clk, cram0_adv_n, cram0_cre, cram0_ce0_n, cram0_ce1_n, cram0_oe_n, cram0_we_n, cram0_ub_n, cram0_lb_n,
	output wire [21:16] cram1_a,  output wire [15:0] cram1_dq_o,  output wire cram1_dq_oe,  input wire [15:0] cram1_dq_i,
	output wire cram1_clk, cram1_adv_n, cram1_cre, cram1_ce0_n, cram1_ce1_n, cram1_oe_n, cram1_we_n, cram1_ub_n, cram1_lb_n,

	// SRAM
	output wire [16:0] sram_a,
	output wire [15:0] sram_dq_o,
	output wire        sram_dq_oe,
	input  wire [15:0] sram_dq_i,
	output wire        sram_oe_n,
	output wire        sram_we_n,
	output wire        sram_ub_n,
	output wire        sram_lb_n,

	// video (clk_vid domain, from the PLL)
	output wire        clk_vid,
	output wire        clk_vid_90,
	output wire [23:0] video_rgb,
	output wire        video_de,
	output wire        video_hs,
	output wire        video_vs,
	output wire        video_skip,

	// audio, 48 kHz samples on clk_audio
	output wire        clk_audio,
	output wire signed [15:0] audio_l,
	output wire signed [15:0] audio_r,

	output wire        pll_locked_74a,             // clk_74a
	output wire        setup_ready_74a             // clk_74a: PLL locked and the RAM controllers initialised (APF setup done)
);

// ---------------------------------------------------------------------------------- clocks
wire clk_sys, clk_ram, pll_locked;
wire [63:0] rc_to, rc_from;

pll_sys pll (
	.refclk(clk_74a), .rst(1'b0),
	.outclk_0(clk_sys), .outclk_1(clk_ram), .outclk_2(clk_vid), .outclk_3(clk_vid_90),
	.locked(pll_locked),
	.reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from)
);

`ifdef POCKET_PLL_LITE
wire PAL;
wire SMPC_DOTSEL;
pll_lite pll_cfg (.clk(clk_74a), .pal(PAL), .dotsel(SMPC_DOTSEL), .reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from));
`else
wire        cfg_waitrequest;
reg         cfg_write;
reg   [5:0] cfg_address;
reg  [31:0] cfg_data;

pll_sys_cfg pll_cfg (
	.mgmt_clk(clk_74a), .mgmt_reset(1'b0),
	.mgmt_waitrequest(cfg_waitrequest), .mgmt_read(1'b0), .mgmt_readdata(),
	.mgmt_write(cfg_write), .mgmt_address(cfg_address), .mgmt_writedata(cfg_data),
	.reconfig_to_pll(rc_to), .reconfig_from_pll(rc_from)
);

`endif

assign clk_audio = clk_sys;

reg [1:0] lock_s;
reg       ever_locked = 1'b0;
always @(posedge clk_74a) begin
	lock_s <= {lock_s[0], pll_locked};
	if (lock_s[1]) ever_locked <= 1'b1;
end
assign pll_locked_74a = lock_s[1];

// The host pushes the BIOS right after setup is reported and the bridge has no back-pressure, so setup is
// reported only once the PSRAM accepts writes (the load FIFO holds 256 words); the timeout keeps a dead
// RAM from hanging the host.
reg [1:0]  rdy_s;
reg        ever_ready = 1'b0;
reg [17:0] rdy_to = 18'd0;
always @(posedge clk_74a) begin
	rdy_s <= {rdy_s[0], mem_ready};
	if (lock_s[1] && !rdy_to[17]) rdy_to <= rdy_to + 1'b1;
	if (rdy_s[1] || rdy_to[17]) ever_ready <= 1'b1;
end
assign setup_ready_74a = lock_s[1] & ever_ready;

`ifdef POCKET_PLL_LITE
wire rst_req_74 = ~reset_n | ~ever_locked;
`else
// clk_sys = 12 x VCO^-1: mode picks M (integer) and K (fraction) of the 74.25 MHz reference
//   M reg: 0x404 = 8, 0x20504 = 9 (low count [15:8], high count [7:0], odd-division bit 17)
//   NTSC 320: M 8.6866 53.7482 MHz   NTSC 352: M 9.2562 57.2728 MHz
//   PAL  320: M 8.6263 53.3750 MHz   PAL  352: M 9.1919 56.8750 MHz
wire PAL;
wire SMPC_DOTSEL;
wire rst_req_74 = ~reset_n | ~ever_locked;

always @(posedge clk_74a) begin
	reg pald = 0, pald2 = 0;
	reg dotsel = 0, dotsel2 = 0;
	reg resd = 0, resd2 = 0;
	reg [2:0] state = 0;

	pald   <= PAL;
	pald2  <= pald;
	dotsel <= SMPC_DOTSEL;
	dotsel2 <= dotsel;
	resd   <= rst_req_74;
	resd2  <= resd;

	if (dotsel2 != dotsel || pald2 != pald || (resd && !resd2)) state <= 3'd1;

	cfg_write <= 1'b0;
	if (!cfg_waitrequest) begin
		if (state) state <= state + 3'd1;
		case (state)
		3'd1: begin cfg_address <= 6'd0; cfg_data <= 32'd0; cfg_write <= 1'b1; end
		3'd3: begin
			cfg_address <= 6'd4;
			cfg_data    <= !dotsel2 ? 32'h00000404 : 32'h00020504;
			cfg_write   <= 1'b1;
		end
		3'd5: begin
			cfg_address <= 6'd7;
			cfg_data    <= !pald2 ? (!dotsel2 ? 32'hAFC38FAE : 32'h4196FC35)
			                      : (!dotsel2 ? 32'hA052BF5B : 32'h31219DBD);
			cfg_write   <= 1'b1;
		end
		3'd7: begin cfg_address <= 6'd2; cfg_data <= 32'd0; cfg_write <= 1'b1; end
		default: ;
		endcase
	end
end

`endif

// ---------------------------------------------------------------------------------- settings into clk_sys
reg [1:0] region_s1, region_s2;
reg [2:0] cart_s1, cart_s2;
reg [27:0] pad_s1, pad_s2;
reg [2:0] rst_s;
always @(posedge clk_sys) begin
	region_s1 <= cfg_region;  region_s2 <= region_s1;
	cart_s1   <= cfg_cart;    cart_s2   <= cart_s1;
	pad_s1    <= pad;         pad_s2    <= pad_s1;
	rst_s     <= {rst_s[1:0], rst_req_74};
end
wire reset = rst_s[2];

// ---------------------------------------------------------------------------------- reset
wire rst_ram, download;
wire loading, mem_ready;
wire dbg_sdram_ready, dbg_psram_ready, dbg_ld_ovf;
ram_reset ramrst (.clk(clk_sys), .reset(reset), .loading(loading), .rst_ram(rst_ram), .download(download));

wire boot_busy;
wire rst_sys = reset | download | rst_ram | boot_busy;

// ---------------------------------------------------------------------------------- disc header capture
wire        boot_wr;
wire  [8:0] boot_addr;
wire [15:0] boot_data;

reg [2:0]   cart_auto_pending = 3'd0;
reg [2:0]   cart_auto = 3'd0;
reg [127:0] game_id;
reg [7:0]   cd_area_symbol;
reg         dezaemon2_hack = 1'b0;

always @(posedge clk_sys) begin
	if (reset && !boot_busy) cart_auto <= cart_auto_pending;
	if (boot_busy && boot_wr) begin
		case (boot_addr)
		9'h000: cart_auto_pending <= 3'd0;
		9'h100: cart_auto_pending <= (boot_data == 16'hA102) ? 3'd2 : (boot_data == 16'hA103) ? 3'd3 : 3'd0;
		9'h020: game_id[127:112] <= {boot_data[7:0], boot_data[15:8]};
		9'h022: game_id[111:96]  <= {boot_data[7:0], boot_data[15:8]};
		9'h024: game_id[95:80]   <= {boot_data[7:0], boot_data[15:8]};
		9'h026: game_id[79:64]   <= {boot_data[7:0], boot_data[15:8]};
		9'h028: game_id[63:48]   <= {boot_data[7:0], boot_data[15:8]};
		9'h02A: game_id[47:32]   <= {boot_data[7:0], boot_data[15:8]};
		9'h02C: game_id[31:16]   <= {boot_data[7:0], boot_data[15:8]};
		9'h02E: game_id[15:0]    <= {boot_data[7:0], boot_data[15:8]};
		9'h030: dezaemon2_hack   <= (game_id[127:64] == "T-16804G");
		9'h040: cd_area_symbol   <= boot_data[7:0];
		default: ;
		endcase
	end
end

wire [2:0] cart_sel  = cart_s2;
wire [2:0] cart_type = (cart_sel == 3'd0) ? cart_auto : (cart_sel < 3'd6) ? cart_sel : 3'd0;

wire [3:0] cd_area_code = cd_area_symbol == "J" ? 4'h1 :
                          cd_area_symbol == "T" ? 4'h2 :
                          cd_area_symbol == "U" ? 4'h4 :
                          cd_area_symbol == "B" ? 4'h5 :
                          cd_area_symbol == "K" ? 4'h6 :
                          cd_area_symbol == "A" ? 4'hA :
                          cd_area_symbol == "E" ? 4'hC :
                          cd_area_symbol == "L" ? 4'hD : 4'h1;

wire [3:0] area_code = region_s2 == 2'd1 ? 4'h1 :
                       region_s2 == 2'd2 ? 4'h4 :
                       region_s2 == 2'd3 ? 4'hC : cd_area_code;

assign PAL = (area_code >= 4'hA);

// ---------------------------------------------------------------------------------- RTC (clk_74a -> SMPC)
// payload holds still for 2 clk_74a before the toggle flips
reg [47:0] rtc_pl;
reg        rtc_tog = 1'b0;
reg  [1:0] rtc_dly;
always @(posedge clk_74a) begin
	rtc_dly <= {rtc_dly[0], 1'b0};
	if (rtc_valid) begin
		// MSM6242B layout: sec, min, hour, day, month (4 + tens), year (2 BCD digits)
		rtc_pl <= {rtc_date_bcd[23:16], 3'b000, rtc_date_bcd[12:8], rtc_date_bcd[7:0], rtc_time_bcd[23:0]};
		rtc_dly <= 2'b01;
	end
	if (rtc_dly[1]) rtc_tog <= ~rtc_tog;
end
reg [1:0] tog_s;
always @(posedge clk_sys) tog_s <= {tog_s[0], rtc_tog};
wire [64:0] RTC = {tog_s[1], 16'h0000, rtc_pl};

// ---------------------------------------------------------------------------------- clock enables
reg [25:0] in_clk;
always @(posedge clk_sys)
	in_clk <= !PAL ? (!SMPC_DOTSEL ? 53748200 : 57272800) :
	                 (!SMPC_DOTSEL ? 53375000 : 56875000);

bit MCLK_DIV;
always @(posedge clk_sys) MCLK_DIV <= ~MCLK_DIV;
wire SYS_CE_R =  MCLK_DIV;
wire SYS_CE_F = ~MCLK_DIV;

wire SCSP_2X_CE;
ce_gen #(26) SCSP_CEGen (.clk(clk_sys), .in_clk(in_clk), .out_clk(26'd45158400), .in_ce(1'b1), .ce(SCSP_2X_CE), .ev());

bit SCSP_DIV;
always @(posedge clk_sys) if (SCSP_2X_CE) SCSP_DIV <= ~SCSP_DIV;
wire SCSP_CE = SCSP_2X_CE & SCSP_DIV;

wire SMPC_CE;
wire CD_EV;   // SMPC (4 MHz) and CD (40 MHz) are 1/10 and 1 of the same ratio: every 10th CD enable
ce_div #(10) SMPC_CEGen (.clk(clk_sys), .ev(CD_EV), .ce(SMPC_CE));

wire CD_CE;
ce_gen #(12) CD_CEGen (.clk(clk_sys), .in_clk(12'd3528), .out_clk(12'd3125), .in_ce(SCSP_2X_CE), .ce(CD_CE), .ev(CD_EV));   // 40 MHz / 45.1584 MHz = 3125 / 3528

wire CDD_2X_CE;
ce_div #(256) CDD_CEGen (.clk(clk_sys), .ev(SCSP_2X_CE), .ce(CDD_2X_CE));   // 176.4 kHz = 45.1584 MHz / 256

// ---------------------------------------------------------------------------------- Saturn
wire [24: 0] MEM_A;
wire [31: 0] MEM_DI;
wire [31: 0] MEM_DO;
wire         ROM_CS_N, SRAM_CS_N, RAML_CS_N, RAMH_CS_N;
wire [ 3: 0] MEM_DQM_N;
wire         MEM_RD_N;
wire         MEM_WAIT_N;

wire [18: 1] VDP1_VRAM_A;
wire [15: 0] VDP1_VRAM_D, VDP1_VRAM_Q;
wire [ 1: 0] VDP1_VRAM_WE;
wire         VDP1_VRAM_RD;
wire [ 8: 0] VDP1_VRAM_BLEN;
wire         VDP1_VRAM_RDY;
wire [17: 1] VDP1_FB0_A, VDP1_FB1_A;
wire [15: 0] VDP1_FB0_D, VDP1_FB0_Q, VDP1_FB1_D, VDP1_FB1_Q;
wire [ 1: 0] VDP1_FB0_WE, VDP1_FB1_WE;
wire         VDP1_FB0_RD, VDP1_FB1_RD, VDP1_FB_RDY, VDP1_FB_MODE3;

wire [18: 1] VDP2_RA0_A, VDP2_RB0_A;
wire [16: 1] VDP2_RA1_A, VDP2_RB1_A;
wire [63: 0] VDP2_RA_D, VDP2_RB_D;
wire [ 7: 0] VDP2_RA_WE, VDP2_RB_WE;
wire         VDP2_RA_RD, VDP2_RB_RD;
wire [31: 0] VDP2_RA0_Q, VDP2_RA1_Q, VDP2_RB0_Q, VDP2_RB1_Q;

wire [18: 1] SCSP_RAM_A;
wire [15: 0] SCSP_RAM_D, SCSP_RAM_Q;
wire [ 1: 0] SCSP_RAM_WE;
wire         SCSP_RAM_RD, SCSP_RAM_CS, SCSP_RAM_RDY;

wire [ 6: 0] SMPC_PDR1I, SMPC_PDR1O, SMPC_DDR1, SMPC_PDR2I, SMPC_PDR2O, SMPC_DDR2;

wire         CD_CDATA, CD_HDATA, CD_COMCLK, CD_COMREQ_N, CD_COMSYNC_N, CD_CK, CD_AUDIO;
wire [17: 0] CD_DATA;
`ifdef POCKET_CUT_CDB_LLE
wire        disc_ok, disc_new;
wire  [6:0] ntracks, lk_track, lk_idx;
wire  [7:0] ntbcd, lk_tbcd, lk_idx1;
wire [23:0] toc_end, lk_start, sd_hdr, lk_x, pf_fad;
wire        lk_go, lk_byidx, lk_hold, lk_busy, eng_idle, lk_data, lk_s2048;
wire        pf_flush, pf_en, pf_ready, sd_go, sd_spd2, sd_synth, fd_busy;
wire  [1:0] sd_kind;
`endif
wire [18: 1] CD_RAM_A;
wire [15: 0] CD_RAM_D, CD_RAM_Q;
wire [ 1: 0] CD_RAM_WE;
wire         CD_RAM_RD, CD_RAM_CS, CD_RAM_RDY;

wire [25: 1] CART_MEM_A;
wire [15: 0] CART_MEM_D, CART_MEM_Q;
wire [ 1: 0] CART_MEM_WE;
wire         CART_MEM_RD, CART_MEM_RDY;

wire [ 7: 0] R, G, B;
wire         HS_N, VS_N, DCLK, HBL_N, VBL_N, FIELD, INTERLACE, DCE_R, DCE_F;
wire [ 1: 0] HRES, VRES;
`ifdef POCKET_DEBUG_OVERLAY
wire [ 6: 0] dbg_tap;
wire [99: 0] dbg_txt;
wire [28: 0] dbg_da;
wire [26: 0] dbg_68k;
wire [29: 0] dbg_serv;
`endif
wire [15: 0] SOUND_L, SOUND_R;

Saturn #(.RAMH_SLOW(1)) saturn (
	.CLK(clk_sys),
	.RST_N(~rst_sys),
	.EN(1'b1),

	.SYS_CE_F(SYS_CE_F),
	.SYS_CE_R(SYS_CE_R),

	.SRES_N(1'b1),

	.PAL(PAL),

	.MEM_A(MEM_A),
	.MEM_DI(MEM_DI),
	.MEM_DO(MEM_DO),
	.MEM_DQM_N(MEM_DQM_N),
	.ROM_CS_N(ROM_CS_N),
	.SRAM_CS_N(SRAM_CS_N),
	.RAML_CS_N(RAML_CS_N),
	.RAMH_CS_N(RAMH_CS_N),
	.RAMH_BURST(),
	.RAMH_RFS(),
	.MEM_RD_N(MEM_RD_N),
	.MEM_WAIT_N(MEM_WAIT_N),

	.VDP1_VRAM_A(VDP1_VRAM_A),
	.VDP1_VRAM_D(VDP1_VRAM_D),
	.VDP1_VRAM_WE(VDP1_VRAM_WE),
	.VDP1_VRAM_RD(VDP1_VRAM_RD),
	.VDP1_VRAM_BLEN(VDP1_VRAM_BLEN),
	.VDP1_VRAM_Q(VDP1_VRAM_Q),
	.VDP1_VRAM_RDY(VDP1_VRAM_RDY),
	.VDP1_FB0_A(VDP1_FB0_A),
	.VDP1_FB0_D(VDP1_FB0_D),
	.VDP1_FB0_WE(VDP1_FB0_WE),
	.VDP1_FB0_RD(VDP1_FB0_RD),
	.VDP1_FB0_Q(VDP1_FB0_Q),
	.VDP1_FB1_A(VDP1_FB1_A),
	.VDP1_FB1_D(VDP1_FB1_D),
	.VDP1_FB1_WE(VDP1_FB1_WE),
	.VDP1_FB1_RD(VDP1_FB1_RD),
	.VDP1_FB1_Q(VDP1_FB1_Q),
	.VDP1_FB_RDY(VDP1_FB_RDY),
	.VDP1_FB_MODE3(VDP1_FB_MODE3),

	.VDP2_RA0_A(VDP2_RA0_A),
	.VDP2_RA1_A(VDP2_RA1_A),
	.VDP2_RA_D(VDP2_RA_D),
	.VDP2_RA_WE(VDP2_RA_WE),
	.VDP2_RA_RD(VDP2_RA_RD),
	.VDP2_RA0_Q(VDP2_RA0_Q),
	.VDP2_RA1_Q(VDP2_RA1_Q),
	.VDP2_RB0_A(VDP2_RB0_A),
	.VDP2_RB1_A(VDP2_RB1_A),
	.VDP2_RB_D(VDP2_RB_D),
	.VDP2_RB_WE(VDP2_RB_WE),
	.VDP2_RB_RD(VDP2_RB_RD),
	.VDP2_RB0_Q(VDP2_RB0_Q),
	.VDP2_RB1_Q(VDP2_RB1_Q),

	.SCSP_CE(SCSP_CE),
	.SCSP_RAM_A(SCSP_RAM_A),
	.SCSP_RAM_D(SCSP_RAM_D),
	.SCSP_RAM_WE(SCSP_RAM_WE),
	.SCSP_RAM_RD(SCSP_RAM_RD),
	.SCSP_RAM_CS(SCSP_RAM_CS),
	.SCSP_RAM_Q(SCSP_RAM_Q),
	.SCSP_RAM_RFS(),
	.SCSP_RAM_RDY(SCSP_RAM_RDY),

	.SMPC_CE(SMPC_CE),
	.TIME_SET(1'b1),
	.RTC(RTC),
	.SMPC_AREA(area_code),
	.SMPC_DOTSEL(SMPC_DOTSEL),
	.SMPC_PDR1I(SMPC_PDR1I),
	.SMPC_PDR1O(SMPC_PDR1O),
	.SMPC_DDR1(SMPC_DDR1),
	.SMPC_PDR2I(SMPC_PDR2I),
	.SMPC_PDR2O(SMPC_PDR2O),
	.SMPC_DDR2(SMPC_DDR2),

`ifdef POCKET_CUT_CDB_LLE
	.CD_CE(CD_CE),
	.CD_CDATA(1'b1),
	.CD_HDATA(),
	.CD_COMCLK(),
	.CD_COMREQ_N(1'b1),
	.CD_COMSYNC_N(1'b1),
	.CD_DEMP(),
	.CD_D(CD_DATA[15:0]),
	.CD_CK(CD_CK),
	.CD_AUDIO(CD_AUDIO),
	.CD_RAM_A(CD_RAM_A),
	.CD_RAM_D(CD_RAM_D),
	.CD_RAM_WE(CD_RAM_WE),
	.CD_RAM_RD(CD_RAM_RD),
	.CD_RAM_CS(CD_RAM_CS),
	.CD_RAM_Q(CD_RAM_Q),
	.CD_RAM_RDY(CD_RAM_RDY),
	.CDD_CE(CDD_2X_CE),
	.DISC_OK(disc_ok), .DISC_NEW(disc_new), .TOC_NTRACKS(ntracks), .TOC_NTBCD(ntbcd), .TOC_END(toc_end),
	.LK_GO(lk_go), .LK_BYIDX(lk_byidx), .LK_X(lk_x), .LK_IDX(lk_idx), .LK_HOLD(lk_hold), .LK_BUSY(lk_busy),
	.LK_ENG_IDLE(eng_idle), .LK_TRACK(lk_track), .LK_TBCD(lk_tbcd), .LK_START(lk_start), .LK_IDX1(lk_idx1),
	.LK_DATA(lk_data), .LK_S2048(lk_s2048),
	.PF_FLUSH(pf_flush), .PF_FAD(pf_fad), .PF_EN(pf_en), .PF_READY(pf_ready),
	.SD_GO(sd_go), .SD_KIND(sd_kind), .SD_SYNTH(sd_synth), .SD_SPD2(sd_spd2), .SD_HDR(sd_hdr), .FD_BUSY(fd_busy),
	.CD_DATA18(CD_DATA),
`endif
`ifndef POCKET_CUT_CDB_LLE
`ifndef POCKET_CUT_CD
	.CD_CE(CD_CE),
	.CD_CDATA(CD_CDATA),
	.CD_HDATA(CD_HDATA),
	.CD_COMCLK(CD_COMCLK),
	.CD_COMREQ_N(CD_COMREQ_N),
	.CD_COMSYNC_N(CD_COMSYNC_N),
	.CD_DEMP(),
	.CD_D(CD_DATA[15:0]),
	.CD_CK(CD_CK),
	.CD_AUDIO(CD_AUDIO),
	.CD_RAM_A(CD_RAM_A),
	.CD_RAM_D(CD_RAM_D),
	.CD_RAM_WE(CD_RAM_WE),
	.CD_RAM_RD(CD_RAM_RD),
	.CD_RAM_CS(CD_RAM_CS),
	.CD_RAM_Q(CD_RAM_Q),
	.CD_RAM_RDY(CD_RAM_RDY),
`endif
`endif

	.CART_MODE(cart_type),
	.CART_MEM_A(CART_MEM_A),
	.CART_MEM_D(CART_MEM_D),
	.CART_MEM_WE(CART_MEM_WE),
	.CART_MEM_RD(CART_MEM_RD),
	.CART_MEM_Q(CART_MEM_Q),
	.CART_MEM_RDY(CART_MEM_RDY),

	.R(R),
	.G(G),
	.B(B),
	.DCLK(DCLK),
	.VS_N(VS_N),
	.HS_N(HS_N),
	.HBL_N(HBL_N),
	.VBL_N(VBL_N),

	.FIELD(FIELD),
	.INTERLACE(INTERLACE),
	.HRES(HRES),
	.VRES(VRES),
	.DCE_R(DCE_R),
	.DCE_F(DCE_F),

	.SOUND_L(SOUND_L),
	.SOUND_R(SOUND_R),

	.FAST(1'b0),
	.BLUR_MESH(1'b0),

	.SCRN_EN(8'hFF),
	.SND_EN(3'b111),
	.DBG_PAUSE(1'b0),
	.DBG_BREAK(1'b0),
	.DBG_RUN(1'b0),
	.DBG_EXT(8'h00)
`ifdef POCKET_DEBUG_OVERLAY
	, .DBG_TAP(dbg_tap), .DBG_TXT(dbg_txt), .DBG_DA(dbg_da), .DBG_68K(dbg_68k), .DBG_SERV(dbg_serv)
`endif
);

// ---------------------------------------------------------------------------------- pads
// MiSTer joystick bits: [0] right [1] left [2] down [3] up [4] A [5] B [6] C [7] Start [8] R [9] X [10] Y [11] Z [12] L
function automatic [15:0] joy_word(input [13:0] j);
	joy_word = {~j[0]|j[1], ~j[1]|j[0], ~j[2]|j[3], ~j[3]|j[2], ~j[7], ~j[4], ~j[6], ~j[5],
	            ~j[8], ~j[9], ~j[10], ~j[11], ~j[12], 3'b111};
endfunction

`ifndef POCKET_CUT_SMPC
pad_pocket pads (
	.PDR1O(SMPC_PDR1O), .DDR1(SMPC_DDR1), .PDR2O(SMPC_PDR2O), .DDR2(SMPC_DDR2),
	.JOY1(joy_word(pad_s2[13:0])), .JOY2(joy_word(pad_s2[27:14])),
	.PDR1I(SMPC_PDR1I), .PDR2I(SMPC_PDR2I)
);
`endif

// ---------------------------------------------------------------------------------- CD drive
wire        rg_wr, rg_wbusy, rg_rd, rg_rbusy;
wire [12:0] rg_wa;
wire [31:0] rg_wd;
wire [13:0] rg_ra;
wire [15:0] rg_q;

`ifdef POCKET_CUT_CDB_LLE
// HLE CD block inside Saturn: cd_stream is the only CD client (no cdd_link / cdd_ctl). The disc
// header replay stays: area code, cartridge request and game id are needed before the BIOS runs.
cd_stream stream (
	.clk(clk_sys), .rst_n(~(reset | download | rst_ram)), .ce(CDD_2X_CE),
	.clk_74a(clk_74a), .bridge_wr(bridge_wr), .bridge_addr(bridge_addr), .bridge_wr_data(bridge_wr_data),
	.t_read(target_dataslot_read), .t_id(target_dataslot_id), .t_off(target_dataslot_slotoffset),
	.t_baddr(target_dataslot_bridgeaddr), .t_len(target_dataslot_length),
	.t_ack(target_dataslot_ack), .t_done(target_dataslot_done), .t_err(target_dataslot_err),
	.rg_wr(rg_wr), .rg_wa(rg_wa), .rg_wd(rg_wd), .rg_wbusy(rg_wbusy),
	.rg_rd(rg_rd), .rg_ra(rg_ra), .rg_q(rg_q), .rg_rbusy(rg_rbusy),
	.disc_ok(disc_ok), .disc_new(disc_new), .boot_busy(boot_busy), .boot_wr(boot_wr),
	.boot_addr(boot_addr), .boot_data(boot_data),
	.ntracks(ntracks), .ntbcd(ntbcd), .toc_end(toc_end), .hack_wwf(), .hack_rr(),
	.lk_go(lk_go), .lk_byidx(lk_byidx), .lk_x(lk_x), .lk_idx(lk_idx), .lk_hold(lk_hold),
	.lk_busy(lk_busy), .eng_idle(eng_idle), .lk_track(lk_track), .lk_tbcd(lk_tbcd),
	.lk_start(lk_start), .lk_idx1(lk_idx1), .lk_data(lk_data), .lk_s2048(lk_s2048),
	.pf_flush(pf_flush), .pf_fad(pf_fad), .pf_en(pf_en), .pf_ready(pf_ready),
	.sd_go(sd_go), .sd_kind(sd_kind), .sd_synth(sd_synth), .sd_spd2(sd_spd2), .sd_hdr(sd_hdr),
	.fd_busy(fd_busy), .cd_data(CD_DATA), .cd_ck(CD_CK), .cd_audio(CD_AUDIO),
	.err_cnt(), .ovf_cnt()
);
`endif
`ifndef POCKET_CUT_CDB_LLE
`ifndef POCKET_CUT_CD
cdd_pocket cdd (
	.CLK(clk_sys),
	.RST_N(~(reset | download | rst_ram)),
	.CDD_CE(CDD_2X_CE),
	.CD_CDATA(CD_CDATA),
	.CD_HDATA(CD_HDATA),
	.CD_COMCLK(CD_COMCLK),
	.CD_COMREQ_N(CD_COMREQ_N),
	.CD_COMSYNC_N(CD_COMSYNC_N),
	.CD_DATA(CD_DATA),
	.CD_CK(CD_CK),
	.CD_AUDIO(CD_AUDIO),
	.BOOT_BUSY(boot_busy),
	.BOOT_WR(boot_wr),
	.BOOT_ADDR(boot_addr),
	.BOOT_DATA(boot_data),
	.clk_74a(clk_74a),
	.bridge_wr(bridge_wr),
	.bridge_addr(bridge_addr),
	.bridge_wr_data(bridge_wr_data),
	.target_dataslot_read(target_dataslot_read),
	.target_dataslot_id(target_dataslot_id),
	.target_dataslot_slotoffset(target_dataslot_slotoffset),
	.target_dataslot_bridgeaddr(target_dataslot_bridgeaddr),
	.target_dataslot_length(target_dataslot_length),
	.target_dataslot_ack(target_dataslot_ack),
	.target_dataslot_done(target_dataslot_done),
	.target_dataslot_err(target_dataslot_err),
	.rg_wr(rg_wr), .rg_wa(rg_wa), .rg_wd(rg_wd), .rg_wbusy(rg_wbusy),
	.rg_rd(rg_rd), .rg_ra(rg_ra), .rg_q(rg_q), .rg_rbusy(rg_rbusy),
	.DISC_OK(),
	.DBG(),
	.STALL()
);
`else
assign boot_busy = 1'b0;
assign boot_wr = 1'b0;
assign boot_addr = 9'd0;
assign boot_data = 16'd0;
assign target_dataslot_read = 1'b0;
assign target_dataslot_id = 16'd0;
assign target_dataslot_slotoffset = 32'd0;
assign target_dataslot_bridgeaddr = 32'd0;
assign target_dataslot_length = 32'd0;
assign rg_wr = 1'b0;
assign rg_wa = 13'd0;
assign rg_wd = 32'd0;
assign rg_rd = 1'b0;
assign rg_ra = 14'd0;
assign CD_RAM_Q = 16'd0;
assign CD_RAM_RDY = 1'b1;
`endif
`endif

// ---------------------------------------------------------------------------------- memory
// WRAM-H write data and enables are registered on clk_ram as in the MiSTer top (and carry the one-game patch)
reg [31:0] ramh_din;
reg  [3:0] ramh_wr;
always @(posedge clk_ram) begin
	// the patch only sets bit 20 (5A01 5E01 -> 5A11 5E01)
	ramh_din <= {MEM_DO[31:21], MEM_DO[20] | (dezaemon2_hack && MEM_A[19:0] == 20'h1746C && MEM_DO == 32'h5A015E01), MEM_DO[19:0]};
	ramh_wr  <= {4{~RAMH_CS_N}} & ~MEM_DQM_N;
end
wire [21:1] raml_addr = {~RAML_CS_N, ~SRAM_CS_N, ROM_CS_N & SRAM_CS_N & MEM_A[19], MEM_A[18:1]};

wire [15:0] cdram_do, raml_do, vdp1vram_do, cart_do;
wire [31:0] ramh_do;
wire        cdram_busy, raml_busy, ramh_busy, vdp1vram_busy, cart_busy;

mem_pocket #(.LD_LITTLE(LD_LITTLE)) mem (
	.clk_ram(clk_ram), .clk_sys(clk_sys), .rst_ram(rst_ram),

	.dram_a(dram_a), .dram_ba(dram_ba), .dram_dq_o(dram_dq_o), .dram_dq_oe(dram_dq_oe), .dram_dq_i(dram_dq_i),
	.dram_dqm(dram_dqm), .dram_clk(dram_clk), .dram_cke(dram_cke),
	.dram_ras_n(dram_ras_n), .dram_cas_n(dram_cas_n), .dram_we_n(dram_we_n),

	.cram0_a(cram0_a), .cram0_dq_o(cram0_dq_o), .cram0_dq_oe(cram0_dq_oe), .cram0_dq_i(cram0_dq_i),
	.cram0_clk(cram0_clk), .cram0_adv_n(cram0_adv_n), .cram0_cre(cram0_cre), .cram0_ce0_n(cram0_ce0_n), .cram0_ce1_n(cram0_ce1_n),
	.cram0_oe_n(cram0_oe_n), .cram0_we_n(cram0_we_n), .cram0_ub_n(cram0_ub_n), .cram0_lb_n(cram0_lb_n),
	.cram1_a(cram1_a), .cram1_dq_o(cram1_dq_o), .cram1_dq_oe(cram1_dq_oe), .cram1_dq_i(cram1_dq_i),
	.cram1_clk(cram1_clk), .cram1_adv_n(cram1_adv_n), .cram1_cre(cram1_cre), .cram1_ce0_n(cram1_ce0_n), .cram1_ce1_n(cram1_ce1_n),
	.cram1_oe_n(cram1_oe_n), .cram1_we_n(cram1_we_n), .cram1_ub_n(cram1_ub_n), .cram1_lb_n(cram1_lb_n),

	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),

	.sync(DCE_R),
	.addr_a0(VDP2_RA0_A[17:1]), .addr_a1(VDP2_RA1_A[16:1]), .din_a(VDP2_RA_D), .wr_a(VDP2_RA_WE), .rd_a(VDP2_RA_RD),
	.dout_a0(VDP2_RA0_Q), .dout_a1(VDP2_RA1_Q),
	.addr_b0(VDP2_RB0_A[17:1]), .addr_b1(VDP2_RB1_A[16:1]), .din_b(VDP2_RB_D), .wr_b(VDP2_RB_WE), .rd_b(VDP2_RB_RD),
	.dout_b0(VDP2_RB0_Q), .dout_b1(VDP2_RB1_Q),
	.ch2addr({1'b0, SCSP_RAM_A}), .ch2din(SCSP_RAM_D), .ch2wr(SCSP_RAM_WE & {2{SCSP_RAM_CS}}),
	.ch2rd(SCSP_RAM_RD & SCSP_RAM_CS), .ch2dout(SCSP_RAM_Q), .ch2rdy(SCSP_RAM_RDY),

	.ramh_addr(MEM_A[19:2]), .ramh_dout(ramh_do), .ramh_din(ramh_din),
	.ramh_rd(~RAMH_CS_N & ~MEM_RD_N), .ramh_wr(ramh_wr), .ramh_busy(ramh_busy),
	.raml_addr(raml_addr), .raml_dout(raml_do), .raml_din(MEM_DO[15:0]),
	.raml_rd((~ROM_CS_N | ~SRAM_CS_N | ~RAML_CS_N) & ~MEM_RD_N),
	.raml_wr({2{~SRAM_CS_N | ~RAML_CS_N}} & ~MEM_DQM_N[1:0]), .raml_busy(raml_busy),
	.cdram_addr(CD_RAM_A), .cdram_dout(cdram_do), .cdram_din(CD_RAM_D),
	.cdram_rd(CD_RAM_RD & CD_RAM_CS), .cdram_wr(CD_RAM_WE & {2{CD_RAM_CS}}), .cdram_busy(cdram_busy),
	.vdp1vram_addr(VDP1_VRAM_A), .vdp1vram_dout(vdp1vram_do), .vdp1vram_din(VDP1_VRAM_D),
	.vdp1vram_rd(VDP1_VRAM_RD), .vdp1vram_wr(VDP1_VRAM_WE), .vdp1vram_blen(VDP1_VRAM_BLEN), .vdp1vram_busy(vdp1vram_busy),
	.cdbuf_addr(13'd0), .cdbuf_dout(), .cdbuf_rd(1'b0), .cdbuf_busy(),
	.cart_addr(CART_MEM_A), .cart_dout(cart_do), .cart_din(CART_MEM_D),
	.cart_rd(CART_MEM_RD), .cart_wr(CART_MEM_WE), .cart_busy(cart_busy),
	.bsram_addr(20'd0), .bsram_dout(), .bsram_din(16'd0), .bsram_rd(1'b0), .bsram_wr(2'b00), .bsram_busy(),
	.cdbuf_waddr(13'd0), .cdbuf_wdata(16'd0), .cdbuf_wwr(1'b0), .cdbuf_wbusy(),

	.FB_MODE3(VDP1_FB_MODE3),
	.FB0_A(VDP1_FB0_A), .FB0_D(VDP1_FB0_D), .FB0_WE(VDP1_FB0_WE), .FB0_RD(VDP1_FB0_RD), .FB0_Q(VDP1_FB0_Q),
	.FB1_A(VDP1_FB1_A), .FB1_D(VDP1_FB1_D), .FB1_WE(VDP1_FB1_WE), .FB1_RD(VDP1_FB1_RD), .FB1_Q(VDP1_FB1_Q),
	.FB_RDY(VDP1_FB_RDY),

	.ringw_addr(rg_wa), .ringw_data(rg_wd), .ringw_wr(rg_wr), .ringw_busy(rg_wbusy),
	.ring_addr(rg_ra), .ring_dout(rg_q), .ring_rd(rg_rd), .ring_busy(rg_rbusy),

	.clk_74a(clk_74a),
	.ld_wr(ld_wr), .ld_sel(ld_sel), .ld_addr(ld_addr), .ld_data(ld_data),
	.loading(loading),
	.mem_ready(mem_ready),
	.dbg_sdram_ready(dbg_sdram_ready), .dbg_psram_ready(dbg_psram_ready), .dbg_ld_ovf(dbg_ld_ovf)
);

assign VDP1_VRAM_Q   = vdp1vram_do;
assign VDP1_VRAM_RDY = ~vdp1vram_busy;
`ifndef POCKET_CUT_CD
assign CD_RAM_Q      = cdram_do;
assign CD_RAM_RDY    = ~cdram_busy;
`endif
assign CART_MEM_Q    = cart_do;
assign CART_MEM_RDY  = ~cart_busy;
assign MEM_DI        = !RAMH_CS_N ? ramh_do : {16'h0000, raml_do};
assign MEM_WAIT_N    = !RAMH_CS_N ? ~ramh_busy : ~raml_busy;

// ---------------------------------------------------------------------------------- video and audio
// ---------------------------------------------------------------------------------- debug overlay
// 16 status squares over the picture, legend in docs/debug-overlay.md
`ifdef POCKET_DEBUG_OVERLAY
reg [1:0]  dbg_pll_s, dbg_rn_s;
reg        dbg_bios_seen = 1'b0;            // clk_74a: a BIOS word arrived
reg  [1:0] dbg_bios_s;
always @(posedge clk_74a) if (ld_wr && ld_sel[0]) dbg_bios_seen <= 1'b1;
reg        dbg_wramh = 1'b0;
reg [24:0] dbg_win = 25'd0;
always @(posedge clk_sys) begin
	dbg_pll_s  <= {dbg_pll_s[0], lock_s[1]};
	dbg_rn_s   <= {dbg_rn_s[0], reset_n};
	dbg_bios_s <= {dbg_bios_s[0], dbg_bios_seen};
	dbg_win    <= dbg_win + 25'd1;
	if (!RAMH_CS_N) dbg_wramh <= 1'b1;
end
wire dbg_tick = &dbg_win;
wire a_irl, a_cd, a_vs, a_de;
dbg_act d_irl  (.clk(clk_sys), .tick(dbg_tick), .s(dbg_tap[3]), .y(a_irl));
dbg_act d_cd   (.clk(clk_sys), .tick(dbg_tick), .s(dbg_tap[4]), .y(a_cd));
dbg_act d_vs   (.clk(clk_sys), .tick(dbg_tick), .s(VS_N), .y(a_vs));
dbg_act d_de   (.clk(clk_sys), .tick(dbg_tick), .s(HBL_N & VBL_N), .y(a_de));
`ifdef POCKET_CUT_CDB_LLE
wire dbg_toc = disc_ok;
`else
wire dbg_toc = 1'b0;
`endif
wire [15:0] dbg_g = {
	dbg_toc,                                           // 16 TOC loaded
	1'b0,                                              // 15 SCSP/68K (activity)
	dbg_tap[5],                                        // 14 SMPC released MSH
	1'b0,                                              // 13 CD block (activity)
	1'b0,                                              // 12 SCU irq (activity)
	1'b0,                                              // 11 vblank (activity)
	dbg_tap[6],                                        // 10 VDP2 DISP
	dbg_wramh,                                         //  9 WRAM-H reached
	2'b00,                                             //  8, 7 SSH, MSH (activity)
	dbg_psram_ready,                                   //  6 PSRAM init
	dbg_sdram_ready,                                   //  5 SDRAM init
	dbg_rn_s[1],                                       //  4 host release + all slots complete
	dbg_bios_s[1] & ~loading & ~dbg_ld_ovf,            //  3 BIOS loaded intact
	~rst_sys,                                          //  2 core reset released
	dbg_pll_s[1]                                       //  1 PLL locked
};
wire [15:0] dbg_y = {2'b00, 1'b0, a_cd, a_irl, 1'b0, 2'b00, 1'b0, 1'b0, 6'b000000};   // squares 7 (MSH), 8 (SSH), 11 (VBL) and 15 have no detector in the debug build
wire dbg_alive = a_vs & a_de;

// hex text row (docs/debug-overlay.md): marker 5, SMPC_SERV PC (sampled each window), COMREG, flags digits
reg  [9:0] dbg_ia = 10'd0;
always @(posedge clk_sys) if (dbg_tick) dbg_ia <= dbg_serv[27:18];
wire        dbg_we = 1'b1;
wire [31:0] dbg_wd = {4'h5, 2'b00, dbg_ia, dbg_serv[16:9],
                      dbg_serv[17], dbg_serv[5], dbg_serv[0], dbg_serv[2],   // SF, SNDRES_N, MSHRES_N, SSHRES_N
                      4'h0};
wire  [3:0] dbg_lo = {dbg_serv[29], dbg_serv[28], dbg_serv[4], dbg_serv[6]};   // MRES_N, SERV i_rst, SYSRES_N, CDRES_N
`endif

pocket_video video (
	.clk_sys(clk_sys), .clk_vid(clk_vid),
	.R(R), .G(G), .B(B), .DCLK(DCLK), .HS_N(HS_N), .VS_N(VS_N), .HBL_N(HBL_N), .VBL_N(VBL_N),
	.HRES(HRES), .VRES(VRES),
	.video_rgb(video_rgb), .video_de(video_de), .video_hs(video_hs), .video_vs(video_vs), .video_skip(video_skip)
`ifdef POCKET_DEBUG_OVERLAY
	, .dbg_g(dbg_g), .dbg_y(dbg_y), .dbg_alive(dbg_alive), .dbg_wd(dbg_wd), .dbg_lo(dbg_lo), .dbg_we(dbg_we)
`endif
);

pocket_audio audio (
	.clk(clk_sys), .rst(rst_sys), .scsp_ce(SCSP_CE), .in_clk(in_clk),
	.in_l($signed(SOUND_L)), .in_r($signed(SOUND_R)),
	.out_l(audio_l), .out_r(audio_r)
);

endmodule

`default_nettype wire
