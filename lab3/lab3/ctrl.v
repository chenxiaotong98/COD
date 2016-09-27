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
	output reg [31:0] alu_in1,
	output reg [31:0] alu_in2,
	output  [31:0] alu_out
    );
	reg [4:0] reg_aout1;
	reg [4:0] reg_aout2;
	reg [4:0] reg_ain;
	wire [31:0] reg_dout1;
	wire [31:0] reg_dout2;
	reg [31:0] reg_din;
	
	reg ram_wea,ram_ena,ram_enb;	
	reg [5:0] ram_ain;
	reg [5:0] ram_aout;
	reg [31:0] ram_din;
	wire [31:0] ram_dout;
	parameter ram_rst_n=1'b0;
	
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
	.ena		(ram_ena),
	.wea		(ram_wea),
	.addra	(ram_ain),
	.dina		(ram_din),
	.clkb		(clk),
	.rstb		(ram_rst_n),
	.enb		(ram_enb),
	.addrb	(ram_aout),
	.doutb	(ram_dout)
	);
	reg [31:0] count;
	reg [1:0] clk_ch;
	parameter count1=4,count2=8;
	
always@(posedge clk or negedge rst_n)
	begin	
		if(~rst_n)
			clk_ch<=2'b0;
		else if(clk_ch==2'b10)
			clk_ch<=2'b0;
		else
			clk_ch<=clk_ch+2'b1;
	end
	
always@(posedge clk or negedge rst_n)
	begin
		if(~rst_n)
			count<=0;
		else if(count>count2)
			count<=count;
		else
			count<=count+6'b1;
	end

always@(posedge clk or negedge rst_n)
	begin
		if(count<count1)
			begin
				ram_ena<=0;ram_wea<=0;ram_enb<=1;
				ram_aout<=6'b0;
				
				reg_ain<=5'b0;reg_din<=ram_dout;
			end
		else if(count<count2)
			begin
				ram_ena<=0;ram_wea<=0;ram_enb<=1;
				ram_aout<=6'b1;
				
				reg_ain<=5'b1;reg_din<=ram_dout;
			end
		else if(count==count2)
			begin
				ram_ena<=1;ram_wea<=1;ram_enb<=0;
				ram_ain<=6'b10;
				
				reg_ain<=5'b10;reg_aout1<=5'b0;reg_aout2<=5'b1;
			end
		else
			begin
				case(clk_ch)
				2'b00:
					begin
						alu_in1<=reg_dout1;alu_in2<=reg_dout2;
					end
				2'b01:
					begin
						reg_din<=alu_out;ram_din<=alu_out;
					end
				default:
					begin
						reg_ain<=reg_ain+5'b1;reg_aout1<=reg_aout1+5'b1;reg_aout2<=reg_aout2+5'b1;
						ram_ain<=ram_ain+6'b1;
					end
				endcase
			end
	end

endmodule
