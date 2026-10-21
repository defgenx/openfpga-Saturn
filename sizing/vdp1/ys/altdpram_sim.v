module altdpram #(parameter width=16, parameter widthad=4, parameter width_byteena=1, parameter indata_aclr="", parameter indata_reg="", parameter intended_device_family="", parameter lpm_type="", parameter outdata_aclr="", parameter outdata_reg="", parameter ram_block_type="", parameter rdaddress_aclr="", parameter rdaddress_reg="", parameter rdcontrol_aclr="", parameter rdcontrol_reg="", parameter read_during_write_mode_mixed_ports="", parameter wraddress_aclr="", parameter wraddress_reg="", parameter wrcontrol_aclr="", parameter wrcontrol_reg="") (input [width-1:0] data, input inclock, input [widthad-1:0] rdaddress, input [widthad-1:0] wraddress, input wren, output [width-1:0] q, input aclr, input byteena, input inclocken, input rdaddressstall, input rden, input wraddressstall);
	reg [width-1:0] mem [0:(1<<widthad)-1];
	always @(posedge inclock) if (wren) mem[wraddress] <= data;
	assign q = mem[rdaddress];
endmodule
