`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:04:22 04/24/2016 
// Design Name: 
// Module Name:    SignExtend26 
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
module Get_PC_Jump(
	input [27:0] in,
	input [3:0]  pc,
	output [31:0] out
    );
	assign out[31:28]=pc[3:0];
	assign out[27:2]=in[25:0];
	assign out[1:0]=2'b00;

endmodule
