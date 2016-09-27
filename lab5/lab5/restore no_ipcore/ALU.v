`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:01 04/22/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [31:0] A,
	input [31:0] B,
	input [2:0] op,
	output [31:0] ALU_result

    );
	
	assign ALU_result=(A+B)*(op==3'b010)+(A-B)*(op==3'b110)+(A|B)*(op==3'b001);
	
endmodule
