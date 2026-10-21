// Digital Saturn pad on the SMPC PIO ports (the PAD_DIGITAL case of Saturn_MiSTer's HPS2PAD).
//
// JOY is the 16-bit active-low word MiSTer's top builds from joystick_0:
//   [15] right [14] left [13] down [12] up [11] start [10] A [9] C [8] B [7] R [6] X [5] Y [4] Z [3] L
// PDRxI follows the TH/TR selection the SMPC drives on PDRxO/DDRx.

`default_nettype none

module pad_pocket (
	input  wire [6:0]  PDR1O,
	input  wire [6:0]  DDR1,
	input  wire [6:0]  PDR2O,
	input  wire [6:0]  DDR2,
	input  wire [15:0] JOY1,
	input  wire [15:0] JOY2,
	output reg  [6:0]  PDR1I,
	output reg  [6:0]  PDR2I
);

always @* begin
	PDR1I = (PDR1O & DDR1) | ~DDR1;
	if (DDR1[6:5] == 2'b10) begin
		PDR1I[3:0] = PDR1O[6] ? {JOY1[3], 3'b100} : JOY1[15:12];
	end else if (DDR1[6:5] == 2'b11) begin
		case (PDR1O[6:5])
		2'b00:   PDR1I[3:0] = JOY1[7:4];
		2'b01:   PDR1I[3:0] = JOY1[15:12];
		2'b10:   PDR1I[3:0] = JOY1[11:8];
		default: PDR1I[3:0] = {JOY1[3], 3'b100};
		endcase
	end

	PDR2I = (PDR2O & DDR2) | ~DDR2;
	if (DDR2[6:5] == 2'b10) begin
		PDR2I[3:0] = PDR2O[6] ? {JOY2[3], 3'b100} : JOY2[15:12];
	end else if (DDR2[6:5] == 2'b11) begin
		case (PDR2O[6:5])
		2'b00:   PDR2I[3:0] = JOY2[7:4];
		2'b01:   PDR2I[3:0] = JOY2[15:12];
		2'b10:   PDR2I[3:0] = JOY2[11:8];
		default: PDR2I[3:0] = {JOY2[3], 3'b100};
		endcase
	end
end

endmodule

`default_nettype wire
