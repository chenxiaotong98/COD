`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:35 04/04/2016 
// Design Name: 
// Module Name:    ctrl 
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
module ctrl(
	input clk,
	input rst_n,
	output [31:0] alu_in1,
	output [31:0] alu_in2,
	output [31:0] alu_out
    );
	reg [4:0] reg_aout1;
	reg [4:0] reg_aout2;
	reg [4:0] reg_ain;
	wire [31:0] reg_dout1;
	wire [31:0] reg_dout2;
	reg [31:0] reg_din;
	reg [5:0] ram_ain;
	reg [5:0] ram_aout;
	wire [31:0] ram_din;
	wire [31:0] ram_dout;
	
	alu alu1(
	.alu_a	(alu_in1),
   .alu_b	(alu_in2),
   .alu_op	(5'b1),
   .alu_out	(alu_out)
	);
	regfile reg1(
	.clk	(clk),
	.rst_n	(rst_n),
	.r1_addr	(reg_aout1),
	.r2_addr	(reg_aout2),
	.r3_addr	(reg_ain),
	.r3_din	(reg_din),
	.r3_wr	(1'b1),
	.r1_dout	(reg_dout1),
	.r2_dout	(reg_dout2)
	);
	ram ram1(
	.clka		(clk),
	.ena		(state[2]),
	.wea		(state[2]),
	.addra	(ram_ain),
	.dina		(ram_din),
	.clkb		(clk),
	.rstb		(1'b0),
	.enb		(~state[2]),
	.addrb	(ram_aout),
	.doutb	(ram_dout)
	);
	
	reg [2:0] state;
	assign ram_din=alu_out;
	assign alu_in1=reg_dout1;
	assign alu_in2=reg_dout2;
always@(posedge clk or negedge rst_n)
	begin
	if(~rst_n)
		state<=3'b0;
	else if(state==3'b100)
		state<=state;
	else
		state<=state+3'b1;
	end
	
always@(*)
	begin
	if(state[2])
		reg_din<=alu_out;
	else
		reg_din<=ram_dout;
	end
	
always@(posedge clk)
	begin
		case(state)
			3'b0:begin	ram_aout<=6'b0;reg_ain<=5'b0;	end
			3'b1:begin	ram_aout<=6'b0;reg_ain<=5'b0;	end
			3'b10:begin	ram_aout<=6'b1;reg_ain<=5'b1;	end
			3'b11:begin	reg_ain<=5'b10;ram_ain<=6'b10;reg_aout1<=5'b0;reg_aout2<=5'b1;	end
			default:
			begin
				reg_ain<=reg_ain+5'b1;
				reg_aout1<=reg_aout1+5'b1;reg_aout2<=reg_aout2+5'b1;
				ram_ain<=ram_ain+6'b1;
			end
		endcase
	end

endmodule
