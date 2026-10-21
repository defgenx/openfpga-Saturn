//
// Analogue Pocket top level for the Saturn core: bridge, data loader, controllers, video and audio
// output. The Saturn system itself (saturn_top) is not integrated yet.
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

assign sram_a = 'h0;
assign sram_dq = {16{1'bZ}};
assign sram_oe_n  = 1;
assign sram_we_n  = 1;
assign sram_ub_n  = 1;
assign sram_lb_n  = 1;

assign dbg_tx = 1'bZ;
assign user1 = 1'bZ;
assign aux_scl = 1'bZ;
assign vpll_feed = 1'bZ;


/* ------------------------------------------------------------------------------ */
/* ------------------------------ SDRAM and PSRAM ports ------------------------- */
/* ------------------------------------------------------------------------------ */

// Controller ports as saturn_top will drive them. Idle until then.

wire [12:0] sdram_a      = 13'h0;
wire  [1:0] sdram_ba     = 2'h0;
wire [15:0] sdram_dq_o   = 16'h0;
wire        sdram_dq_oe  = 1'b0;
wire  [1:0] sdram_dqm    = 2'h0;
wire        sdram_clk    = 1'b0;
wire        sdram_cke    = 1'b0;
wire        sdram_ras_n  = 1'b1;
wire        sdram_cas_n  = 1'b1;
wire        sdram_we_n   = 1'b1;
wire [15:0] sdram_dq_i   = dram_dq;

assign dram_a     = sdram_a;
assign dram_ba    = sdram_ba;
assign dram_dq    = sdram_dq_oe ? sdram_dq_o : {16{1'bZ}};
assign dram_dqm   = sdram_dqm;
assign dram_clk   = sdram_clk;
assign dram_cke   = sdram_cke;
assign dram_ras_n = sdram_ras_n;
assign dram_cas_n = sdram_cas_n;
assign dram_we_n  = sdram_we_n;

wire [21:16] psram0_a     = 6'h0;
wire [15:0]  psram0_dq_o  = 16'h0;
wire         psram0_dq_oe = 1'b0;
wire         psram0_clk   = 1'b0;
wire         psram0_adv_n = 1'b1;
wire         psram0_cre   = 1'b0;
wire         psram0_ce0_n = 1'b1;
wire         psram0_ce1_n = 1'b1;
wire         psram0_oe_n  = 1'b1;
wire         psram0_we_n  = 1'b1;
wire         psram0_ub_n  = 1'b1;
wire         psram0_lb_n  = 1'b1;
wire [15:0]  psram0_dq_i  = cram0_dq;

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

wire [21:16] psram1_a     = 6'h0;
wire [15:0]  psram1_dq_o  = 16'h0;
wire         psram1_dq_oe = 1'b0;
wire         psram1_clk   = 1'b0;
wire         psram1_adv_n = 1'b1;
wire         psram1_cre   = 1'b0;
wire         psram1_ce0_n = 1'b1;
wire         psram1_ce1_n = 1'b1;
wire         psram1_oe_n  = 1'b1;
wire         psram1_we_n  = 1'b1;
wire         psram1_ub_n  = 1'b1;
wire         psram1_lb_n  = 1'b1;
wire [15:0]  psram1_dq_i  = cram1_dq;

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


/* ------------------------------------------------------------------------------ */
/* ---------------------------------- Bridge ------------------------------------ */
/* ------------------------------------------------------------------------------ */

wire            reset_n;                // driven by host commands, can be used as core-wide reset
wire    [31:0]  cmd_bridge_rd_data;

// bridge host commands
// synchronous to clk_74a
wire            status_boot_done = pll_core_locked_s;
wire            status_setup_done = pll_core_locked_s; // rising edge triggers a target command
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
// The disc reader drives these: it reads the .cue from slot 2, then asks for each track file
// (slot 3) with openfile and reads sectors on demand with dataslot_read. Idle until then.
reg             target_dataslot_read = 1'b0;
reg             target_dataslot_write = 1'b0;
reg             target_dataslot_getfile = 1'b0;
reg             target_dataslot_openfile = 1'b0;

wire            target_dataslot_ack;
wire            target_dataslot_done;
wire    [2:0]   target_dataslot_err;

reg     [15:0]  target_dataslot_id = 16'h0;
reg     [31:0]  target_dataslot_slotoffset = 32'h0;
reg     [31:0]  target_dataslot_bridgeaddr = 32'h0;
reg     [31:0]  target_dataslot_length = 32'h0;

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
//   0x00 Reset (any write)   0x04 Region 0 auto 1 JP 2 US 3 EU   0x08 CD Speed 0 1x 1 2x
reg [1:0] cfg_region   = 2'd0;
reg       cfg_cdspeed  = 1'b0;
reg [3:0] reset_stretch = 4'd0;

always @(posedge clk_74a) begin
    if (reset_stretch != 0) reset_stretch <= reset_stretch - 1'b1;
    if (bridge_wr && bridge_addr[31:8] == 24'h800000) begin
        case (bridge_addr[7:0])
        8'h00: reset_stretch <= 4'hF;
        8'h04: cfg_region  <= bridge_wr_data[1:0];
        8'h08: cfg_cdspeed <= bridge_wr_data[0];
        endcase
    end
end

reg [31:0] cfg_bridge_rd_data;
always @(*) begin
    case (bridge_addr[7:0])
    8'h04:   cfg_bridge_rd_data = {30'd0, cfg_region};
    8'h08:   cfg_bridge_rd_data = {31'd0, cfg_cdspeed};
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
/* ----------------------------- Saturn system (to come) ------------------------ */
/* ------------------------------------------------------------------------------ */

// INTEGRATION POINT: instantiate saturn_top here. It takes
//   reset: ~sys_reset_n, pad: pad, region/cd speed: cfg_region / cfg_cdspeed,
//   BIOS / backup RAM stream: ld_*, SDRAM and PSRAM: the sdram_* / psram0_* / psram1_* ports above,
//   disc reads: the target_dataslot_* registers, video / audio: replacing the stubs below.


/* ------------------------------------------------------------------------------ */
/* ----------------------------------- Video ------------------------------------ */
/* ------------------------------------------------------------------------------ */

// Test pattern in the 320x224 scaler slot (video.json slot 0), until the Saturn VDP2 output
// is wired. One pixel per clk_core_12288 clock; the Saturn's 320-wide dot clock (~6.7 MHz)
// replaces this clock with saturn_top.
// 12,288,000 Hz / (400 x 512) = 60 Hz

assign video_rgb_clock = clk_core_12288;
assign video_rgb_clock_90 = clk_core_12288_90deg;
assign video_rgb = vidout_rgb;
assign video_de = vidout_de;
assign video_skip = vidout_skip;
assign video_vs = vidout_vs;
assign video_hs = vidout_hs;

    localparam  VID_V_BPORCH = 'd10;
    localparam  VID_V_ACTIVE = 'd224;
    localparam  VID_V_TOTAL = 'd512;
    localparam  VID_H_BPORCH = 'd10;
    localparam  VID_H_ACTIVE = 'd320;
    localparam  VID_H_TOTAL = 'd400;

    localparam [2:0] VID_SLOT = 3'd0;       // 320x224, in video.json order

    reg [9:0]   x_count;
    reg [9:0]   y_count;

    reg [23:0]  vidout_rgb;
    reg         vidout_de;
    reg         vidout_skip;
    reg         vidout_vs;
    reg         vidout_hs;

    wire [9:0]  visible_x = x_count - VID_H_BPORCH;
    wire [9:0]  visible_y = y_count - VID_V_BPORCH;
    wire        in_x = x_count >= VID_H_BPORCH && x_count < VID_H_ACTIVE + VID_H_BPORCH;
    wire        in_y = y_count >= VID_V_BPORCH && y_count < VID_V_ACTIVE + VID_V_BPORCH;

always @(posedge clk_core_12288 or negedge reset_n) begin

    if(~reset_n) begin

        x_count <= 0;
        y_count <= 0;

    end else begin
        vidout_de <= 0;
        vidout_skip <= 0;
        vidout_vs <= 0;
        vidout_hs <= 0;

        // x and y counters
        x_count <= x_count + 1'b1;
        if(x_count == VID_H_TOTAL-1) begin
            x_count <= 0;

            y_count <= y_count + 1'b1;
            if(y_count == VID_V_TOTAL-1) begin
                y_count <= 0;
            end
        end

        // sync signal in back porch
        if(x_count == 0 && y_count == 0) vidout_vs <= 1;
        // HS a bit after VS, not on the same cycle
        if(x_count == 3) vidout_hs <= 1;

        // inactive screen areas are black
        vidout_rgb <= 24'h0;

        if(in_x && in_y) begin
            vidout_de <= 1;
            // grey ramp across the line, white border
            if (visible_x == 0 || visible_x == VID_H_ACTIVE-1 || visible_y == 0 || visible_y == VID_V_ACTIVE-1)
                vidout_rgb <= 24'hFFFFFF;
            else
                vidout_rgb <= {3{visible_x[8:1]}};
        end else if(x_count == VID_H_ACTIVE + VID_H_BPORCH && in_y) begin
            // end of line: scaler slot select
            vidout_rgb <= {8'h00, VID_SLOT, 13'h0000};
        end
    end
end


/* ------------------------------------------------------------------------------ */
/* ----------------------------------- Audio ------------------------------------ */
/* ------------------------------------------------------------------------------ */

// Silent until saturn_top: 16-bit signed stereo at 48 kHz
wire signed [15:0] audio_l = 16'sd0;
wire signed [15:0] audio_r = 16'sd0;

sound_i2s #(
    .CHANNEL_WIDTH ( 16 ),
    .SIGNED_INPUT  ( 1 )
) sound_i2s (
    .clk_74a    ( clk_74a ),
    .clk_audio  ( clk_74a ),
    .audio_l    ( audio_l ),
    .audio_r    ( audio_r ),
    .audio_mclk ( audio_mclk ),
    .audio_lrck ( audio_lrck ),
    .audio_dac  ( audio_dac )
);


/* ------------------------------------------------------------------------------ */
/* ----------------------------------- Clocks ----------------------------------- */
/* ------------------------------------------------------------------------------ */

    wire    clk_core_12288;
    wire    clk_core_12288_90deg;

    wire    pll_core_locked;
    wire    pll_core_locked_s;
synch_3 s01(pll_core_locked, pll_core_locked_s, clk_74a);

mf_pllbase mp1 (
    .refclk         ( clk_74a ),
    .rst            ( 0 ),

    .outclk_0       ( clk_core_12288 ),
    .outclk_1       ( clk_core_12288_90deg ),

    .locked         ( pll_core_locked )
);

endmodule

`default_nettype wire
