//
// Analogue Pocket top level for the Saturn core: bridge, data loader, settings, controllers and pin
// tri-states around saturn_pocket (the Saturn system, memory, clocks, video and audio).
// Instantiated by the real top-level: apf_top
//

`default_nettype none

module core_top (

//
// physical connections
//

///////////////////////////////////////////////////
// clock inputs 74.25mhz. not phase aligned, so treat these domains as asynchronous

input   wire            clk_74a, // mainclk1
input   wire            clk_74b, // mainclk1 

///////////////////////////////////////////////////
// cartridge interface
// switches between 3.3v and 5v mechanically
// output enable for multibit translators controlled by pic32

// GBA AD[15:8]
inout   wire    [7:0]   cart_tran_bank2,
output  wire            cart_tran_bank2_dir,

// GBA AD[7:0]
inout   wire    [7:0]   cart_tran_bank3,
output  wire            cart_tran_bank3_dir,

// GBA A[23:16]
inout   wire    [7:0]   cart_tran_bank1,
output  wire            cart_tran_bank1_dir,

// GBA [7] PHI#
// GBA [6] WR#
// GBA [5] RD#
// GBA [4] CS1#/CS#
//     [3:0] unwired
inout   wire    [7:4]   cart_tran_bank0,
output  wire            cart_tran_bank0_dir,

// GBA CS2#/RES#
inout   wire            cart_tran_pin30,
output  wire            cart_tran_pin30_dir,
// when GBC cart is inserted, this signal when low or weak will pull GBC /RES low with a special circuit
// the goal is that when unconfigured, the FPGA weak pullups won't interfere.
// thus, if GBC cart is inserted, FPGA must drive this high in order to let the level translators
// and general IO drive this pin.
output  wire            cart_pin30_pwroff_reset,

// GBA IRQ/DRQ
inout   wire            cart_tran_pin31,
output  wire            cart_tran_pin31_dir,

// infrared
input   wire            port_ir_rx,
output  wire            port_ir_tx,
output  wire            port_ir_rx_disable, 

// GBA link port
inout   wire            port_tran_si,
output  wire            port_tran_si_dir,
inout   wire            port_tran_so,
output  wire            port_tran_so_dir,
inout   wire            port_tran_sck,
output  wire            port_tran_sck_dir,
inout   wire            port_tran_sd,
output  wire            port_tran_sd_dir,
 
///////////////////////////////////////////////////
// cellular psram 0 and 1, two chips (64mbit x2 dual die per chip)

output  wire    [21:16] cram0_a,
inout   wire    [15:0]  cram0_dq,
input   wire            cram0_wait,
output  wire            cram0_clk,
output  wire            cram0_adv_n,
output  wire            cram0_cre,
output  wire            cram0_ce0_n,
output  wire            cram0_ce1_n,
output  wire            cram0_oe_n,
output  wire            cram0_we_n,
output  wire            cram0_ub_n,
output  wire            cram0_lb_n,

output  wire    [21:16] cram1_a,
inout   wire    [15:0]  cram1_dq,
input   wire            cram1_wait,
output  wire            cram1_clk,
output  wire            cram1_adv_n,
output  wire            cram1_cre,
output  wire            cram1_ce0_n,
output  wire            cram1_ce1_n,
output  wire            cram1_oe_n,
output  wire            cram1_we_n,
output  wire            cram1_ub_n,
output  wire            cram1_lb_n,

///////////////////////////////////////////////////
// sdram, 512mbit 16bit

output  wire    [12:0]  dram_a,
output  wire    [1:0]   dram_ba,
inout   wire    [15:0]  dram_dq,
output  wire    [1:0]   dram_dqm,
output  wire            dram_clk,
output  wire            dram_cke,
output  wire            dram_ras_n,
output  wire            dram_cas_n,
output  wire            dram_we_n,

///////////////////////////////////////////////////
// sram, 1mbit 16bit

output  wire    [16:0]  sram_a,
inout   wire    [15:0]  sram_dq,
output  wire            sram_oe_n,
output  wire            sram_we_n,
output  wire            sram_ub_n,
output  wire            sram_lb_n,

///////////////////////////////////////////////////
// vblank driven by dock for sync in a certain mode

input   wire            vblank,

///////////////////////////////////////////////////
// i/o to 6515D breakout usb uart

output  wire            dbg_tx,
input   wire            dbg_rx,

///////////////////////////////////////////////////
// i/o pads near jtag connector user can solder to

output  wire            user1,
input   wire            user2,

///////////////////////////////////////////////////
// RFU internal i2c bus 

inout   wire            aux_sda,
output  wire            aux_scl,

///////////////////////////////////////////////////
// RFU, do not use
output  wire            vpll_feed,


//
// logical connections
//

///////////////////////////////////////////////////
// video, audio output to scaler
output  wire    [23:0]  video_rgb,
output  wire            video_rgb_clock,
output  wire            video_rgb_clock_90,
output  wire            video_de,
output  wire            video_skip,
output  wire            video_vs,
output  wire            video_hs,
    
output  wire            audio_mclk,
input   wire            audio_adc,
output  wire            audio_dac,
output  wire            audio_lrck,

///////////////////////////////////////////////////
// bridge bus connection
// synchronous to clk_74a
output  wire            bridge_endian_little,
input   wire    [31:0]  bridge_addr,
input   wire            bridge_rd,
output  reg     [31:0]  bridge_rd_data,
input   wire            bridge_wr,
input   wire    [31:0]  bridge_wr_data,

///////////////////////////////////////////////////
// controller data
// 
// key bitmap:
//   [0]    dpad_up
//   [1]    dpad_down
//   [2]    dpad_left
//   [3]    dpad_right
//   [4]    face_a
//   [5]    face_b
//   [6]    face_x
//   [7]    face_y
//   [8]    trig_l1
//   [9]    trig_r1
//   [10]   trig_l2
//   [11]   trig_r2
//   [12]   trig_l3
//   [13]   trig_r3
//   [14]   face_select
//   [15]   face_start
//   [31:28] type
// joy values - unsigned
//   [ 7: 0] lstick_x
//   [15: 8] lstick_y
//   [23:16] rstick_x
//   [31:24] rstick_y
// trigger values - unsigned
//   [ 7: 0] ltrig
//   [15: 8] rtrig
//
input   wire    [31:0]  cont1_key,
input   wire    [31:0]  cont2_key,
input   wire    [31:0]  cont3_key,
input   wire    [31:0]  cont4_key,
input   wire    [31:0]  cont1_joy,
input   wire    [31:0]  cont2_joy,
input   wire    [31:0]  cont3_joy,
input   wire    [31:0]  cont4_joy,
input   wire    [15:0]  cont1_trig,
input   wire    [15:0]  cont2_trig,
input   wire    [15:0]  cont3_trig,
input   wire    [15:0]  cont4_trig
    
);

// not using the IR port, so turn off both the LED, and
// disable the receive circuit to save power
assign port_ir_tx = 0;
assign port_ir_rx_disable = 1;

// bridge endianness
assign bridge_endian_little = 0;

// cart is unused, so set all level translators accordingly
// directions are 0:IN, 1:OUT
assign cart_tran_bank3 = 8'hzz;
assign cart_tran_bank3_dir = 1'b0;
assign cart_tran_bank2 = 8'hzz;
assign cart_tran_bank2_dir = 1'b0;
assign cart_tran_bank1 = 8'hzz;
assign cart_tran_bank1_dir = 1'b0;
assign cart_tran_bank0 = 4'hf;
assign cart_tran_bank0_dir = 1'b1;
assign cart_tran_pin30 = 1'b0;      // reset or cs2, we let the hw control it by itself
assign cart_tran_pin30_dir = 1'bz;
assign cart_pin30_pwroff_reset = 1'b0;  // hardware can control this
assign cart_tran_pin31 = 1'bz;      // input
assign cart_tran_pin31_dir = 1'b0;  // input

// link port is unused, set to input only to be safe
assign port_tran_so = 1'bz;
assign port_tran_so_dir = 1'b0;
assign port_tran_si = 1'bz;
assign port_tran_si_dir = 1'b0;
assign port_tran_sck = 1'bz;
assign port_tran_sck_dir = 1'b0;
assign port_tran_sd = 1'bz;
assign port_tran_sd_dir = 1'b0;

assign dbg_tx = 1'bZ;
assign user1 = 1'bZ;
assign aux_scl = 1'bZ;
assign vpll_feed = 1'bZ;


/* ------------------------------------------------------------------------------ */
/* ------------------------------ SDRAM, PSRAM and SRAM pins -------------------- */
/* ------------------------------------------------------------------------------ */

// saturn_pocket drives *_o / *_oe, the pads are tri-stated here.

wire [12:0] sdram_a;
wire  [1:0] sdram_ba;
wire [15:0] sdram_dq_o;
wire        sdram_dq_oe;
wire  [1:0] sdram_dqm;
wire        sdram_clk;
wire        sdram_cke;
wire        sdram_ras_n, sdram_cas_n, sdram_we_n;

assign dram_a     = sdram_a;
assign dram_ba    = sdram_ba;
assign dram_dq    = sdram_dq_oe ? sdram_dq_o : {16{1'bZ}};
assign dram_dqm   = sdram_dqm;
assign dram_clk   = sdram_clk;
assign dram_cke   = sdram_cke;
assign dram_ras_n = sdram_ras_n;
assign dram_cas_n = sdram_cas_n;
assign dram_we_n  = sdram_we_n;

wire [21:16] psram0_a;
wire [15:0]  psram0_dq_o;
wire         psram0_dq_oe;
wire         psram0_clk, psram0_adv_n, psram0_cre, psram0_ce0_n, psram0_ce1_n;
wire         psram0_oe_n, psram0_we_n, psram0_ub_n, psram0_lb_n;

assign cram0_a     = psram0_a;
assign cram0_dq    = psram0_dq_oe ? psram0_dq_o : {16{1'bZ}};
assign cram0_clk   = psram0_clk;
assign cram0_adv_n = psram0_adv_n;
assign cram0_cre   = psram0_cre;
assign cram0_ce0_n = psram0_ce0_n;
assign cram0_ce1_n = psram0_ce1_n;
assign cram0_oe_n  = psram0_oe_n;
assign cram0_we_n  = psram0_we_n;
assign cram0_ub_n  = psram0_ub_n;
assign cram0_lb_n  = psram0_lb_n;

wire [21:16] psram1_a;
wire [15:0]  psram1_dq_o;
wire         psram1_dq_oe;
wire         psram1_clk, psram1_adv_n, psram1_cre, psram1_ce0_n, psram1_ce1_n;
wire         psram1_oe_n, psram1_we_n, psram1_ub_n, psram1_lb_n;

assign cram1_a     = psram1_a;
assign cram1_dq    = psram1_dq_oe ? psram1_dq_o : {16{1'bZ}};
assign cram1_clk   = psram1_clk;
assign cram1_adv_n = psram1_adv_n;
assign cram1_cre   = psram1_cre;
assign cram1_ce0_n = psram1_ce0_n;
assign cram1_ce1_n = psram1_ce1_n;
assign cram1_oe_n  = psram1_oe_n;
assign cram1_we_n  = psram1_we_n;
assign cram1_ub_n  = psram1_ub_n;
assign cram1_lb_n  = psram1_lb_n;

wire [15:0] sram_dq_o;
wire        sram_dq_oe;
assign sram_dq = sram_dq_oe ? sram_dq_o : {16{1'bZ}};


/* ------------------------------------------------------------------------------ */
/* ---------------------------------- Bridge ------------------------------------ */
/* ------------------------------------------------------------------------------ */

wire            reset_n;                // driven by host commands, can be used as core-wide reset
wire    [31:0]  cmd_bridge_rd_data;

// bridge host commands
// synchronous to clk_74a
wire            setup_ready_74a;
wire            status_boot_done = pll_locked_74a;
wire            status_setup_done = pll_locked_74a & setup_ready_74a;    // rising edge triggers a target command
wire            status_running = reset_n;              // we are running as soon as reset_n goes high

wire            dataslot_requestread;
wire    [15:0]  dataslot_requestread_id;
wire            dataslot_requestread_ack = 1;
wire            dataslot_requestread_ok = 1;

wire            dataslot_requestwrite;
wire    [15:0]  dataslot_requestwrite_id;
wire    [31:0]  dataslot_requestwrite_size;
wire            dataslot_requestwrite_ack = 1;
wire            dataslot_requestwrite_ok = 1;

wire            dataslot_update;
wire    [15:0]  dataslot_update_id;
wire    [31:0]  dataslot_update_size;

wire            dataslot_allcomplete;

wire     [31:0] rtc_epoch_seconds;
wire     [31:0] rtc_date_bcd;
wire     [31:0] rtc_time_bcd;
wire            rtc_valid;

wire            savestate_supported = 1'b0;
wire    [31:0]  savestate_addr = 32'h0;
wire    [31:0]  savestate_size = 32'h0;
wire    [31:0]  savestate_maxloadsize = 32'h0;

wire            savestate_start;
wire            savestate_start_ack = 1'b0;
wire            savestate_start_busy = 1'b0;
wire            savestate_start_ok = 1'b0;
wire            savestate_start_err = 1'b0;

wire            savestate_load;
wire            savestate_load_ack = 1'b0;
wire            savestate_load_busy = 1'b0;
wire            savestate_load_ok = 1'b0;
wire            savestate_load_err = 1'b0;

wire            osnotify_inmenu;

// bridge target commands
// synchronous to clk_74a
//
// The CD drive (cdd_pocket) issues disc sector reads; nothing else uses target commands.
// A second client (a backup RAM writer) would need an arbiter on these ports. Backup RAM is saved
// by the host reading slots 3 and 4 (bk_rd_data), so there is none.
wire            target_dataslot_read;
wire            target_dataslot_write = 1'b0;
wire            target_dataslot_getfile = 1'b0;
wire            target_dataslot_openfile = 1'b0;

wire            target_dataslot_ack;
wire            target_dataslot_done;
wire    [2:0]   target_dataslot_err;

wire    [15:0]  target_dataslot_id;
wire    [31:0]  target_dataslot_slotoffset;
wire    [31:0]  target_dataslot_bridgeaddr;
wire    [31:0]  target_dataslot_length;

wire    [31:0]  target_buffer_param_struct = 32'h0;
wire    [31:0]  target_buffer_resp_struct = 32'h0;

// bridge data slot access
// synchronous to clk_74a
wire    [9:0]   datatable_addr;
wire            datatable_wren;
wire    [31:0]  datatable_data;
wire    [31:0]  datatable_q;

core_bridge_cmd icb (

    .clk                ( clk_74a ),
    .reset_n            ( reset_n ),

    .bridge_endian_little   ( bridge_endian_little ),
    .bridge_addr            ( bridge_addr ),
    .bridge_rd              ( bridge_rd ),
    .bridge_rd_data         ( cmd_bridge_rd_data ),
    .bridge_wr              ( bridge_wr ),
    .bridge_wr_data         ( bridge_wr_data ),

    .status_boot_done       ( status_boot_done ),
    .status_setup_done      ( status_setup_done ),
    .status_running         ( status_running ),

    .dataslot_requestread       ( dataslot_requestread ),
    .dataslot_requestread_id    ( dataslot_requestread_id ),
    .dataslot_requestread_ack   ( dataslot_requestread_ack ),
    .dataslot_requestread_ok    ( dataslot_requestread_ok ),

    .dataslot_requestwrite      ( dataslot_requestwrite ),
    .dataslot_requestwrite_id   ( dataslot_requestwrite_id ),
    .dataslot_requestwrite_size ( dataslot_requestwrite_size ),
    .dataslot_requestwrite_ack  ( dataslot_requestwrite_ack ),
    .dataslot_requestwrite_ok   ( dataslot_requestwrite_ok ),

    .dataslot_update            ( dataslot_update ),
    .dataslot_update_id         ( dataslot_update_id ),
    .dataslot_update_size       ( dataslot_update_size ),

    .dataslot_allcomplete   ( dataslot_allcomplete ),

    .rtc_epoch_seconds      ( rtc_epoch_seconds ),
    .rtc_date_bcd           ( rtc_date_bcd ),
    .rtc_time_bcd           ( rtc_time_bcd ),
    .rtc_valid              ( rtc_valid ),

    .savestate_supported    ( savestate_supported ),
    .savestate_addr         ( savestate_addr ),
    .savestate_size         ( savestate_size ),
    .savestate_maxloadsize  ( savestate_maxloadsize ),

    .savestate_start        ( savestate_start ),
    .savestate_start_ack    ( savestate_start_ack ),
    .savestate_start_busy   ( savestate_start_busy ),
    .savestate_start_ok     ( savestate_start_ok ),
    .savestate_start_err    ( savestate_start_err ),

    .savestate_load         ( savestate_load ),
    .savestate_load_ack     ( savestate_load_ack ),
    .savestate_load_busy    ( savestate_load_busy ),
    .savestate_load_ok      ( savestate_load_ok ),
    .savestate_load_err     ( savestate_load_err ),

    .osnotify_inmenu        ( osnotify_inmenu ),

    .target_dataslot_read       ( target_dataslot_read ),
    .target_dataslot_write      ( target_dataslot_write ),
    .target_dataslot_getfile    ( target_dataslot_getfile ),
    .target_dataslot_openfile   ( target_dataslot_openfile ),

    .target_dataslot_ack        ( target_dataslot_ack ),
    .target_dataslot_done       ( target_dataslot_done ),
    .target_dataslot_err        ( target_dataslot_err ),

    .target_dataslot_id         ( target_dataslot_id ),
    .target_dataslot_slotoffset ( target_dataslot_slotoffset ),
    .target_dataslot_bridgeaddr ( target_dataslot_bridgeaddr ),
    .target_dataslot_length     ( target_dataslot_length ),

    .target_buffer_param_struct ( target_buffer_param_struct ),
    .target_buffer_resp_struct  ( target_buffer_resp_struct ),

    .datatable_addr         ( datatable_addr ),
    .datatable_wren         ( datatable_wren ),
    .datatable_data         ( datatable_data ),
    .datatable_q            ( datatable_q )

);


/* ------------------------------------------------------------------------------ */
/* ------------------------------- Data loader ---------------------------------- */
/* ------------------------------------------------------------------------------ */

// BIOS and backup RAM arrive as bridge writes (clk_74a); see bridge_loader.sv for the map.
wire        ld_wr;
wire  [2:0] ld_sel;
wire [23:0] ld_addr;
wire [31:0] ld_data;
wire        ld_active;

bridge_loader loader (
    .clk            ( clk_74a ),
    .bridge_addr    ( bridge_addr ),
    .bridge_wr      ( bridge_wr ),
    .bridge_wr_data ( bridge_wr_data ),
    .ld_wr          ( ld_wr ),
    .ld_sel         ( ld_sel ),
    .ld_addr        ( ld_addr ),
    .ld_data        ( ld_data ),
    .ld_active      ( ld_active )
);

// All slots loaded: the system may leave reset.
reg bios_loaded = 1'b0;
always @(posedge clk_74a) begin
    if (!reset_n) bios_loaded <= 1'b0;
    else if (dataslot_allcomplete) bios_loaded <= 1'b1;
end

// Backup RAM read-back for saving (0x4xxxxxxx, 0x5xxxxxxx). Zero until saturn_top provides it.
wire [31:0] bk_rd_data = 32'h0;


/* ------------------------------------------------------------------------------ */
/* --------------------------------- Settings ----------------------------------- */
/* ------------------------------------------------------------------------------ */

// interact.json registers at 0x8000_00xx, all read back.
//   0x00 Reset (any write)   0x04 Region 0 auto 1 JP 2 US 3 EU
//   0x08 Cartridge (MiSTer cart_sel) 0 auto 2 RAM 1M 3 RAM 4M 5 backup 6 none
//   0x0C SDRAM read capture (sdram_pocket cap_sel)   0x10 SDRAM clock phase (0 inverted, 1 normal); both apply at the next Reset
reg [1:0] cfg_region   = 2'd0;
reg [2:0] cfg_cart     = 3'd0;
reg [2:0] cfg_sdcap    = 3'd1;
reg       cfg_sdclk    = 1'b0;
reg [3:0] reset_stretch = 4'd0;

always @(posedge clk_74a) begin
    if (reset_stretch != 0) reset_stretch <= reset_stretch - 1'b1;
    if (bridge_wr && bridge_addr[31:8] == 24'h800000) begin
        case (bridge_addr[7:0])
        8'h00: reset_stretch <= 4'hF;
        8'h04: cfg_region  <= bridge_wr_data[1:0];
        8'h08: cfg_cart    <= bridge_wr_data[2:0];
        8'h0C: cfg_sdcap   <= bridge_wr_data[2:0];
        8'h10: cfg_sdclk   <= bridge_wr_data[0];
        endcase
    end
end

reg [31:0] cfg_bridge_rd_data;
always @(*) begin
    case (bridge_addr[7:0])
    8'h04:   cfg_bridge_rd_data = {30'd0, cfg_region};
    8'h08:   cfg_bridge_rd_data = {29'd0, cfg_cart};
    8'h0C:   cfg_bridge_rd_data = {29'd0, cfg_sdcap};
    8'h10:   cfg_bridge_rd_data = {31'd0, cfg_sdclk};
    default: cfg_bridge_rd_data = 32'h0;
    endcase
end

// core-wide reset, active low: host reset, the Reset action, BIOS not yet loaded
wire sys_reset_n = reset_n && (reset_stretch == 0) && bios_loaded;

// for bridge write data, we just broadcast it to all bus devices
// for bridge read data, we have to mux it
always @(*) begin
    casex(bridge_addr)
    default: begin
        bridge_rd_data <= 0;
    end
    32'h4xxxxxxx, 32'h5xxxxxxx: begin
        bridge_rd_data <= bk_rd_data;
    end
    32'h80xxxxxx: begin
        bridge_rd_data <= cfg_bridge_rd_data;
    end
    32'hF8xxxxxx: begin
        bridge_rd_data <= cmd_bridge_rd_data;
    end
    endcase
end


/* ------------------------------------------------------------------------------ */
/* -------------------------------- Controllers --------------------------------- */
/* ------------------------------------------------------------------------------ */

// Pocket pad -> Saturn pad, in MiSTer's joystick_0 bit order:
//   [0] right [1] left [2] down [3] up [4] A [5] B [6] C [7] Start
//   [8] R [9] X [10] Y [11] Z [12] L [13] unused
// Pocket B/A -> Saturn A/B, R1 -> C, Y/X -> X/Y, L1 -> Z. Holding Select turns L1/R1 into Saturn
// L/R; Dock L2/R2 are always Saturn L/R.
function [13:0] pad2saturn(input [31:0] k);
    reg sel;
    begin
        sel = k[14];
        pad2saturn = {
            1'b0,                       // [13]
            k[8] & sel | k[10],         // [12] L
            k[8] & ~sel,                // [11] Z
            k[6],                       // [10] Y
            k[7],                       // [9]  X
            k[9] & sel | k[11],         // [8]  R
            k[15],                      // [7]  Start
            k[9] & ~sel,                // [6]  C
            k[4],                       // [5]  B
            k[5],                       // [4]  A
            k[0],                       // [3]  up
            k[1],                       // [2]  down
            k[2],                       // [1]  left
            k[3]                        // [0]  right
        };
    end
endfunction

// Latched on clk_74a, one word per player; the consumer synchronises it into its own clock.
reg [13:0] pad1 = 14'h0;
reg [13:0] pad2 = 14'h0;
always @(posedge clk_74a) begin
    pad1 <= pad2saturn(cont1_key);
    pad2 <= pad2saturn(cont2_key);
end
wire [27:0] pad = {pad2, pad1};


/* ------------------------------------------------------------------------------ */
/* ------------------------------------ Saturn ---------------------------------- */
/* ------------------------------------------------------------------------------ */

wire        clk_vid;
wire        clk_vid_90;
wire        clk_audio;
wire        pll_locked_74a;
wire signed [15:0] audio_l;
wire signed [15:0] audio_r;

wire [23:0] vidout_rgb;
wire        vidout_de, vidout_skip, vidout_vs, vidout_hs;

saturn_pocket saturn (
    .clk_74a        ( clk_74a ),
    .reset_n        ( sys_reset_n ),

    .cfg_region     ( cfg_region ),
    .cfg_cart       ( cfg_cart ),
    .cfg_sdcap      ( cfg_sdcap ),
    .cfg_sdclk      ( cfg_sdclk ),
    .pad            ( pad ),
    .rtc_date_bcd   ( rtc_date_bcd ),
    .rtc_time_bcd   ( rtc_time_bcd ),
    .rtc_valid      ( rtc_valid ),

    .bridge_wr      ( bridge_wr ),
    .bridge_addr    ( bridge_addr ),
    .bridge_wr_data ( bridge_wr_data ),
    .ld_wr          ( ld_wr ),
    .ld_sel         ( ld_sel ),
    .ld_addr        ( ld_addr ),
    .ld_data        ( ld_data ),

    .target_dataslot_read       ( target_dataslot_read ),
    .target_dataslot_id         ( target_dataslot_id ),
    .target_dataslot_slotoffset ( target_dataslot_slotoffset ),
    .target_dataslot_bridgeaddr ( target_dataslot_bridgeaddr ),
    .target_dataslot_length     ( target_dataslot_length ),
    .target_dataslot_ack        ( target_dataslot_ack ),
    .target_dataslot_done       ( target_dataslot_done ),
    .target_dataslot_err        ( target_dataslot_err ),

    .dram_a     ( sdram_a ),
    .dram_ba    ( sdram_ba ),
    .dram_dq_o  ( sdram_dq_o ),
    .dram_dq_oe ( sdram_dq_oe ),
    .dram_dq_i  ( dram_dq ),
    .dram_dqm   ( sdram_dqm ),
    .dram_clk   ( sdram_clk ),
    .dram_cke   ( sdram_cke ),
    .dram_ras_n ( sdram_ras_n ),
    .dram_cas_n ( sdram_cas_n ),
    .dram_we_n  ( sdram_we_n ),

    .cram0_a( psram0_a ), .cram0_dq_o( psram0_dq_o ), .cram0_dq_oe( psram0_dq_oe ), .cram0_dq_i( cram0_dq ),
    .cram0_clk( psram0_clk ), .cram0_adv_n( psram0_adv_n ), .cram0_cre( psram0_cre ),
    .cram0_ce0_n( psram0_ce0_n ), .cram0_ce1_n( psram0_ce1_n ), .cram0_oe_n( psram0_oe_n ),
    .cram0_we_n( psram0_we_n ), .cram0_ub_n( psram0_ub_n ), .cram0_lb_n( psram0_lb_n ),
    .cram1_a( psram1_a ), .cram1_dq_o( psram1_dq_o ), .cram1_dq_oe( psram1_dq_oe ), .cram1_dq_i( cram1_dq ),
    .cram1_clk( psram1_clk ), .cram1_adv_n( psram1_adv_n ), .cram1_cre( psram1_cre ),
    .cram1_ce0_n( psram1_ce0_n ), .cram1_ce1_n( psram1_ce1_n ), .cram1_oe_n( psram1_oe_n ),
    .cram1_we_n( psram1_we_n ), .cram1_ub_n( psram1_ub_n ), .cram1_lb_n( psram1_lb_n ),

    .sram_a     ( sram_a ),
    .sram_dq_o  ( sram_dq_o ),
    .sram_dq_oe ( sram_dq_oe ),
    .sram_dq_i  ( sram_dq ),
    .sram_oe_n  ( sram_oe_n ),
    .sram_we_n  ( sram_we_n ),
    .sram_ub_n  ( sram_ub_n ),
    .sram_lb_n  ( sram_lb_n ),

    .clk_vid    ( clk_vid ),
    .clk_vid_90 ( clk_vid_90 ),
    .video_rgb  ( vidout_rgb ),
    .video_de   ( vidout_de ),
    .video_hs   ( vidout_hs ),
    .video_vs   ( vidout_vs ),
    .video_skip ( vidout_skip ),

    .clk_audio  ( clk_audio ),
    .audio_l    ( audio_l ),
    .audio_r    ( audio_r ),

    .pll_locked_74a ( pll_locked_74a ),
    .setup_ready_74a ( setup_ready_74a )
);


/* ------------------------------------------------------------------------------ */
/* ----------------------------------- Video ------------------------------------ */
/* ------------------------------------------------------------------------------ */

// Scaler slots are selected inside saturn_pocket (docs/integration.md); the scaler clock and its
// 90 degree twin come straight from the system PLL.
assign video_rgb_clock = clk_vid;
assign video_rgb_clock_90 = clk_vid_90;
assign video_rgb = vidout_rgb;
assign video_de = vidout_de;
assign video_skip = vidout_skip;
assign video_vs = vidout_vs;
assign video_hs = vidout_hs;


/* ------------------------------------------------------------------------------ */
/* ----------------------------------- Audio ------------------------------------ */
/* ------------------------------------------------------------------------------ */

// 16-bit signed stereo, 48 kHz samples from the resampler
sound_i2s #(
    .CHANNEL_WIDTH ( 16 ),
    .SIGNED_INPUT  ( 1 )
) sound_i2s (
    .clk_74a    ( clk_74a ),
    .clk_audio  ( clk_audio ),
    .audio_l    ( audio_l ),
    .audio_r    ( audio_r ),
    .audio_mclk ( audio_mclk ),
    .audio_lrck ( audio_lrck ),
    .audio_dac  ( audio_dac )
);

endmodule

`default_nettype wire
