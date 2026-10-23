// Copyright 2011-2018 Frederic Requin
//
// This file is part of the MCC216 project
//
// The J68 core:
// -------------
// Simple re-implementation of the MC68000 CPU
// The core has the following characteristics:
//  - Tested on a Cyclone III (90 MHz) and a Stratix II (180 MHz)
//  - from 1500 (~70 MHz) to 1900 LEs (~90 MHz) on Cyclone III
//  - 2048 x 20-bit microcode ROM
//  - 256 x 28-bit decode ROM
//  - 2 x block RAM for the data and instruction stacks
//  - stack based CPU with forth-like microcode
//  - not cycle-exact : needs a frequency ~3 x higher
//  - all 68000 instructions are implemented
//  - almost all 68000 exceptions are implemented (only bus error missing)
//  - only auto-vector interrupts supported

// Portable (Cyclone V and simulation) inferred RAM, replacing the altsyncram instances of the original.
module j68_dpram_2048x20
(
    input         reset,
    input         clock,
    input         clocken,
    // Port A : micro-instruction fetch
    input         rden_a,
    input  [10:0] address_a,
    output [19:0] q_a,
    // Port B : m68k registers read/write
    input   [1:0] wren_b,
    input  [10:0] address_b,
    input  [15:0] data_b,
    output [15:0] q_b
);
    parameter RAM_INIT_FILE = "j68_ram_c.mem";

    reg  [19:0] r_mem_blk [0:2047];
    initial $readmemb(RAM_INIT_FILE, r_mem_blk);

    reg  [19:0] r_q_a;
    reg  [15:0] r_q_b;
    reg         r_vld;      // cleared by reset: q_a reads as NOP until the first fetch

    always @(posedge clock) begin
        if (clocken) begin
            if (rden_a) r_q_a <= r_mem_blk[address_a];
            r_q_b <= r_mem_blk[address_b][15:0];
            if (wren_b[0]) r_mem_blk[address_b][7:0]  <= data_b[7:0];
            if (wren_b[1]) r_mem_blk[address_b][15:8] <= data_b[15:8];
        end
    end

    always @(posedge reset or posedge clock)
        if (reset)                    r_vld <= 1'b0;
        else if (clocken && rden_a)   r_vld <= 1'b1;

    assign q_a = r_vld ? r_q_a : 20'hC0458; // NOP
    assign q_b = r_q_b;

endmodule
