// Write masks for the CD-block firmware profile (SH7034 FW_PRUNE=1).
// Each value holds the bits the firmware ever writes as 1 (restricted to writable bits);
// every other bit is tied to its reset value. Per-channel values are packed ch0 in the low bits.
// Derived by tools/sh1_census.py (checked with --check-fw); see docs/sh1.md.
package SH7034_FW;
	// ITU
	localparam bit [7:0]        TSTR  = 8'h10;                                               // only ITU4 is ever started
	localparam bit [4:0][7:0]   TCR   = {8'h03, 8'h00, 8'h00, 8'h00, 8'h00};
	localparam bit [4:0][7:0]   TIOR  = {8'h00, 8'h50, 8'h55, 8'h05, 8'h05};
	localparam bit [4:0][7:0]   TIER  = {8'h07, 8'h02, 8'h03, 8'h01, 8'h01};
	localparam bit [4:0]        TCNT_W  = 5'b10000;                                          // TCNT0-3 never counted or loaded
	localparam bit [4:0][15:0]  GRA_ONE = {16'h0000, 16'hFFFF, 16'hFFFF, 16'hFFFF, 16'hFFFF}; // GRA/GRB that stay at reset value
	localparam bit [4:0][15:0]  GRB_ONE = {16'h0000, 16'h0000, 16'hFFFF, 16'hFFFF, 16'hFFFF};
	localparam bit [4:0]        CAPA_EN = 5'b00000;                                          // input capture reachable
	localparam bit [4:0]        CAPB_EN = 5'b01000;
	// DMAC
	localparam bit [3:0][15:0]  CHCR  = {16'h184D, 16'h194D, 16'h535D, 16'h436D};
	localparam bit [31:0]       ADDR  = 32'h0FFFFFFF;                                        // SAR/DAR: 28-bit bus
	localparam bit [15:0]       DMAOR = 16'h0001;
	// INTC
	localparam bit [15:0]       IPRA  = 16'h0000;
	localparam bit [15:0]       IPRB  = 16'h0068;
	localparam bit [15:0]       IPRC  = 16'h8600;
	localparam bit [15:0]       IPRD  = 16'h6666;
	localparam bit [15:0]       IPRE  = 16'h0000;
	localparam bit [15:0]       ICR   = 16'h0000;
	// SCI0 (clocked synchronous, internal clock)
	localparam bit [7:0]        SMR   = 8'h80;
	localparam bit [7:0]        SCR   = 8'h70;
	// BSC
	localparam bit [15:0]       BCR   = 16'h8000;
	localparam bit [15:0]       DCR   = 16'h7500;
	localparam bit [15:0]       PCR   = 16'h0000;
	// PFC
	localparam bit [15:0]       PADR  = 16'hF6FB;
	localparam bit [15:0]       PBDR  = 16'h0040;
	localparam bit [15:0]       PAIOR = 16'h5BF6;
	localparam bit [15:0]       PBIOR = 16'h3AF0;
	localparam bit [15:0]       PACR1 = 16'hFF22;
	localparam bit [15:0]       PACR2 = 16'hBF1A;
	localparam bit [15:0]       PBCR1 = 16'h5AAA;
	localparam bit [15:0]       PBCR2 = 16'h008A;
endpackage
