// hps2cdd drop-in for the Pocket: same core-facing ports as Saturn_MiSTer's HPS2CDD (the SH-1
// serial link and the CD_DATA/CD_CK/CD_AUDIO sector stream), plus the Pocket-side ports that
// replace the ARM: APF bridge/target commands, the 16-bit SRAM and the disc header replay.
//
//   cdd_link  serial link        (this file's thin layer)
//   cdd_ctl   CDD command set    (saturncdd.cpp behaviour)
//   cd_stream TOC, prefetch, ring, sector streamer   (no knowledge of the SH-1 link)
//
// boot_* replays the first disc header bytes with the addressing of MiSTer's cdboot ioctl download
// (byte address, 16-bit little-endian words, cart request word at 0x100), so Saturn.sv's
// game-id / area / cartridge capture logic works unchanged with
//   cdboot_download = BOOT_BUSY, ioctl_wr = BOOT_WR, ioctl_addr = BOOT_ADDR, ioctl_data = BOOT_DATA.
// Hold the Saturn in reset while BOOT_BUSY.

`default_nettype none

module cdd_pocket #(
	parameter [31:0] RING_BRIDGE = 32'h3000_0000,
	parameter [15:0] TRACK_SLOT_BASE = 16'd16,
	parameter        BRIDGE_LITTLE = 0
) (
	input  wire        CLK,
	input  wire        RST_N,

	input  wire        CDD_CE,
	output wire        CD_CDATA,
	input  wire        CD_HDATA,
	input  wire        CD_COMCLK,
	output wire        CD_COMREQ_N,
	output wire        CD_COMSYNC_N,

	output wire [17:0] CD_DATA,
	output wire        CD_CK,
	output wire        CD_AUDIO,

	// disc header replay
	output wire        BOOT_BUSY,
	output wire        BOOT_WR,
	output wire [8:0]  BOOT_ADDR,
	output wire [15:0] BOOT_DATA,

	// APF bridge
	input  wire        clk_74a,
	input  wire        bridge_wr,
	input  wire [31:0] bridge_addr,
	input  wire [31:0] bridge_wr_data,
	output wire        target_dataslot_read,
	output wire [15:0] target_dataslot_id,
	output wire [31:0] target_dataslot_slotoffset,
	output wire [31:0] target_dataslot_bridgeaddr,
	output wire [31:0] target_dataslot_length,
	input  wire        target_dataslot_ack,
	input  wire        target_dataslot_done,
	input  wire [2:0]  target_dataslot_err,

	// SRAM pins (drive through a tri-state at the top)
	output wire [16:0] sram_a,
	output wire [15:0] sram_dq_o,
	output wire        sram_dq_oe,
	input  wire [15:0] sram_dq_i,
	output wire        sram_oe_n,
	output wire        sram_we_n,
	output wire        sram_ub_n,
	output wire        sram_lb_n,

	output wire        DISC_OK,
	output wire [15:0] DBG,
	output wire        STALL
);

wire [3:0] pk_ha, pk_wa;
wire [7:0] pk_hq, pk_wd;
wire pk_cmd_new, pk_cmd_ack, pk_we, pk_send;

cdd_link link (
	.clk(CLK), .rst_n(RST_N),
	.CD_CDATA(CD_CDATA), .CD_HDATA(CD_HDATA), .CD_COMCLK(CD_COMCLK),
	.CD_COMREQ_N(CD_COMREQ_N), .CD_COMSYNC_N(CD_COMSYNC_N),
	.pk_we(pk_we), .pk_wa(pk_wa), .pk_wd(pk_wd), .pk_send(pk_send),
	.pk_ha(pk_ha), .pk_hq(pk_hq), .pk_cmd_new(pk_cmd_new), .pk_cmd_ack(pk_cmd_ack)
);

wire disc_new;
wire [6:0] ntracks, lk_track, lk_idx;
wire [7:0] ntbcd;
wire [23:0] toc_end, lk_start, sd_hdr, lk_x, pf_fad;
wire hack_wwf, hack_rr, lk_go, lk_byidx, lk_hold, lk_busy, eng_idle, lk_data, lk_s2048;
wire [7:0] lk_tbcd, lk_idx1;
wire pf_flush, pf_en, pf_ready, sd_go, sd_spd2, sd_synth, fd_busy;
wire [1:0] sd_kind;

cdd_ctl ctl (
	.clk(CLK), .ce(CDD_CE),
	.pk_ha(pk_ha), .pk_hq(pk_hq), .pk_cmd_new(pk_cmd_new), .pk_cmd_ack(pk_cmd_ack),
	.pk_we(pk_we), .pk_wa(pk_wa), .pk_wd(pk_wd), .pk_send(pk_send),
	.disc_new(disc_new), .ntracks(ntracks), .ntbcd(ntbcd), .toc_end(toc_end),
	.hack_wwf(hack_wwf), .hack_rr(hack_rr),
	.lk_go(lk_go), .lk_byidx(lk_byidx), .lk_x(lk_x), .lk_idx(lk_idx), .lk_hold(lk_hold),
	.lk_busy(lk_busy), .eng_idle(eng_idle), .lk_track(lk_track), .lk_tbcd(lk_tbcd),
	.lk_start(lk_start), .lk_idx1(lk_idx1), .lk_data(lk_data), .lk_s2048(lk_s2048),
	.pf_flush(pf_flush), .pf_fad(pf_fad), .pf_en(pf_en), .pf_ready(pf_ready),
	.sd_go(sd_go), .sd_kind(sd_kind), .sd_synth(sd_synth), .sd_spd2(sd_spd2), .sd_hdr(sd_hdr),
	.fd_busy(fd_busy), .dbg(DBG), .stall_tick(STALL)
);

cd_stream #(.RING_BRIDGE(RING_BRIDGE), .TRACK_SLOT_BASE(TRACK_SLOT_BASE), .BRIDGE_LITTLE(BRIDGE_LITTLE)) stream (
	.clk(CLK), .rst_n(RST_N), .ce(CDD_CE),
	.clk_74a(clk_74a), .bridge_wr(bridge_wr), .bridge_addr(bridge_addr), .bridge_wr_data(bridge_wr_data),
	.t_read(target_dataslot_read), .t_id(target_dataslot_id), .t_off(target_dataslot_slotoffset),
	.t_baddr(target_dataslot_bridgeaddr), .t_len(target_dataslot_length),
	.t_ack(target_dataslot_ack), .t_done(target_dataslot_done), .t_err(target_dataslot_err),
	.sram_a(sram_a), .sram_dq_o(sram_dq_o), .sram_dq_oe(sram_dq_oe), .sram_dq_i(sram_dq_i),
	.sram_oe_n(sram_oe_n), .sram_we_n(sram_we_n), .sram_ub_n(sram_ub_n), .sram_lb_n(sram_lb_n),
	.disc_ok(DISC_OK), .disc_new(disc_new), .boot_busy(BOOT_BUSY), .boot_wr(BOOT_WR),
	.boot_addr(BOOT_ADDR), .boot_data(BOOT_DATA),
	.ntracks(ntracks), .ntbcd(ntbcd), .toc_end(toc_end), .hack_wwf(hack_wwf), .hack_rr(hack_rr),
	.lk_go(lk_go), .lk_byidx(lk_byidx), .lk_x(lk_x), .lk_idx(lk_idx), .lk_hold(lk_hold),
	.lk_busy(lk_busy), .eng_idle(eng_idle), .lk_track(lk_track), .lk_tbcd(lk_tbcd),
	.lk_start(lk_start), .lk_idx1(lk_idx1), .lk_data(lk_data), .lk_s2048(lk_s2048),
	.pf_flush(pf_flush), .pf_fad(pf_fad), .pf_en(pf_en), .pf_ready(pf_ready),
	.sd_go(sd_go), .sd_kind(sd_kind), .sd_synth(sd_synth), .sd_spd2(sd_spd2), .sd_hdr(sd_hdr),
	.fd_busy(fd_busy), .cd_data(CD_DATA), .cd_ck(CD_CK), .cd_audio(CD_AUDIO),
	.err_cnt()
);

endmodule

`default_nettype wire
