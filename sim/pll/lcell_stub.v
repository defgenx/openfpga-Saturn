// Behavioural generic_lcell_comb (the Altera file maps it to a device primitive).
module generic_lcell_comb #(parameter family = "", parameter [63:0] lut_mask = 64'h0, parameter dont_touch = "on")
	(input dataa, datab, datac, datad, datae, dataf, output combout);
	// unconnected inputs read as 0
	assign combout = lut_mask[{dataf === 1'b1, datae === 1'b1, datad === 1'b1, datac === 1'b1, datab === 1'b1, dataa === 1'b1}];
endmodule
