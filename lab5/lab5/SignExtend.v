`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:08:03 04/22/2016 
// Design Name: 
// Module Name:    SignExtend 
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
module SignExtend16(
	input [15:0] in,
	output [31:0] out
    );
	assign out[15:0]=in[15:0];
	assign out[31]=in[15];assign out[30]=in[15];assign out[29]=in[15];assign out[28]=in[15];
	assign out[27]=in[15];assign out[26]=in[15];assign out[25]=in[15];assign out[24]=in[15];
	assign out[23]=in[15];assign out[22]=in[15];assign out[21]=in[15];assign out[20]=in[15];
	assign out[19]=in[15];assign out[18]=in[15];assign out[17]=in[15];assign out[16]=in[15];

endmodule
