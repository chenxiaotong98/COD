`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:32:57 03/28/2016 
// Design Name: 
// Module Name:    lab02_reg 
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

//具备两组读端口及一组写端口
//通过读端口可从0~31号的任意地址读取数据
//通过写端口可向0~31号的任意地址写入数据

module lab02_reg(
	input	clk,
	input	rst_n,
	input	[4:0]	r1_addr,
	input	[4:0]	r2_addr,
	input	[4:0]	r3_addr,
	input	[31:0] r3_din,
	input	r3_wr,
	output reg [31:0]	r1_dout,
	output reg [31:0]	r2_dout
    );
	reg [31:0] regfile [31:0];
	integer r1_add,r2_add,r3_add;
	integer i;

always@(*)
	begin
		r1_add=16*r1_addr[4]+8*r1_addr[3]+4*r1_addr[2]+2*r1_addr[1]+r1_addr[0];
		r2_add=16*r2_addr[4]+8*r2_addr[3]+4*r2_addr[2]+2*r2_addr[1]+r2_addr[0];
		r3_add=16*r3_addr[4]+8*r3_addr[3]+4*r3_addr[2]+2*r3_addr[1]+r3_addr[0];
	end
always@(posedge clk or negedge rst_n)
	begin
		if(~rst_n)
		begin
			regfile[0]<=32'b1;
			regfile[1]<=32'b1;
			for(i=2;i<32;i=i+1)
				regfile[i]<=32'b0;
		end
		else
			if(r3_wr)			
				regfile[r3_add]<=r3_din;	
	end

always@(negedge clk)
	begin
		r1_dout<=regfile [r1_add];
		r2_dout<=regfile [r2_add];
	end
endmodule
