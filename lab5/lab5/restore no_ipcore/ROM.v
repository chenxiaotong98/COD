`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:35:02 04/24/2016 
// Design Name: 
// Module Name:    ROM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ROM(
	input [9:0] address,
	output [31:0] data
    );
	reg [31:0] rom [0:1023];
	assign data=rom[address];
	
	initial
	begin
		$readmemh("asm1",rom);
	end

endmodule
