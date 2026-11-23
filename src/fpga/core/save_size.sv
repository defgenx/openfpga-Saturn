// Save sizes in the APF ID/size table (docs/memory.md section 7, "Size"). One pass over the 32 entries, started
// when `start` falls: slot 3 gets 64 KB, slot 4 1 MB when `cart_backup`. No write outside a pass:
// the host reads the table to save at quit, sleep and power-off, and a write racing it put sizes in the wrong slots.
`default_nettype none

module save_size (
	input  wire        clk,
	input  wire        start,          // level or pulse; the pass begins the clock after it falls
	input  wire        cart_backup,
	output wire [9:0]  datatable_addr,
	output wire        datatable_wren,
	output wire [31:0] datatable_data,
	input  wire [31:0] datatable_q,    // mf_datatable: 2 clocks behind the address
	output wire        busy
);

reg         start_q = 1'b0;
reg         run = 1'b0;
reg  [4:0]  idx = 5'd0;
reg  [1:0]  ph = 2'd0;

// In phase 3 q is the ID word addressed in phase 1. Its upper half is the upper half of a 48 bit size: skip such an entry.
wire id_small = datatable_q[31:16] == 16'd0;
wire is_bram  = id_small && datatable_q[15:0] == 16'd3;
wire is_cart  = id_small && datatable_q[15:0] == 16'd4 && cart_backup;

assign datatable_addr = {4'd0, idx, &ph};
assign datatable_wren = run && &ph && (is_bram || is_cart);
assign datatable_data = is_cart ? 32'h00100000 : 32'h00010000;
assign busy = run || start;

always @(posedge clk) begin
	start_q <= start;
	if (start_q && !start) begin
		run <= 1'b1;
		idx <= 5'd0;
		ph  <= 2'd0;
	end else if (run) begin
		ph <= ph + 1'b1;
		if (&ph) begin
			idx <= idx + 1'b1;
			if (&idx) run <= 1'b0;
		end
	end
end

endmodule

`default_nettype wire
