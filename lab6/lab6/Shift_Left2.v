`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:35:13 05/09/2016 
// Design Name: 
// Module Name:    Shift_Left2 
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
module Shift_Left2(
	input [31:0] in,
	output [31:0] out
    );
	assign out[31:2]=in[29:0];
	assign out[1:0]=2'b00;

endmodule
