`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:45 03/29/2016 
// Design Name: 
// Module Name:    lab02_ctrl 
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
module lab02_ctrl(
	input clk,
	input rst_n,
	output [31:0] a,
	output [31:0] b,
	output [31:0] sum
    );
	reg [4:0]	ad0;
	reg [4:0]	ad1;
	reg [4:0]	ad2;
	parameter	wr_en=1'b1;
	lab02_alu alu1(
	.alu_a	(a),
   .alu_b	(b),
   .alu_op	(5'b1),
   .alu_out	(sum)
	);
	lab02_reg reg1(
	.clk	(clk),
	.rst_n	(rst_n),
	.r1_addr	(ad0),
	.r2_addr	(ad1),
	.r3_addr	(ad2),
	.r3_din	(sum),
	.r3_wr	(1'b1),
	.r1_dout	(a),
	.r2_dout	(b)
	);

	
always@(posedge clk or negedge rst_n)
	begin
		if(~rst_n)
		begin
			ad0<=5'h0;
			ad1<=5'h1;
			ad2<=5'h2;
		end
		else
		begin
			ad0<=ad0+5'b1;
			ad1<=ad1+5'b1;
			ad2<=ad2+5'b1;
		end
	end
	
endmodule
