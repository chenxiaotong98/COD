`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:16 04/22/2016 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
	input [5:0] opcode,
	input clk,
	input reset,
	output reg PCWrite,
	output reg IorD,
	output reg bgtz,
	output reg MemWrite,
	output reg IRWrite,
	output reg RegDst,
	output reg MemtoReg,
	output reg RegWrite,
	output reg ALUSrcA,
	output reg [1:0] ALUSrcB,
	output reg [1:0] PCSrc
    );
	
	reg add,lw,sw,addi;
	/*
		bgtz=(opcode==6'd7);
		add=(opcode==6'b0);
		lw=(opcode==6'd35);
		sw=(opcode==6'd43);
		addi=(opcode==6'd8);
	*/
	
	parameter Fetch=0,GetInstr=1,Decode=2,Jump=3,bgtz_exec=4,Branch=5,addi_exec=6;
	parameter addi_wb=7,add_exec=8,add_wb=9,GetMemAddr=10,sw_wb=11,ReadMem=12,lw_wb=13;
	reg [3:0] current_state;
	reg [3:0] next_state;
	
	always@(*)
	begin
		case(current_state)
		4'd0:next_state<=4'd1;//Fetch
		4'd1:next_state<=4'd2;//GetInstr
		4'd2://Decode
			case(opcode)
			6'd2:next_state<=4'd3;//jump
			6'd7:next_state<=4'd4;//bgtz
			6'd8:next_state<=4'd6;//addi
			6'd0:next_state<=4'd8;//add
			default:next_state<=4'd10;//lw sw
			endcase
		4'd6:next_state<=4'd7;//addi_exec
		4'd8:next_state<=4'd9;//add_exec
		4'd12:next_state<=4'd13;//ReadMem
		4'd10://GetMemAddr
			if(opcode==6'd43)
				next_state<=4'd11;//op=sw
			else
				next_state<=4'd12;//op=lw
		default:next_state<=4'd0;//Jump Branch addi_wb add_wb sw_wb lw_wb bgtz_exec
		endcase
	end
	
	always@(posedge clk or negedge reset)
	begin
		if(~reset)
			current_state<=4'd0;
		else
			current_state<=next_state;
	end
	
	always@(*)
	begin
		case(current_state)
		4'd0:begin PCWrite<=1;IorD<=0;ALUSrcA<=0;ALUSrcB<=2'b01;PCSrc<=2'b00;MemWrite<=0;bgtz<=0;RegWrite<=0;end//Fetch
		4'd1:begin IRWrite<=1;PCWrite<=0;IorD<=0;ALUSrcA<=0;end//GetInstr
		4'd2:begin IRWrite<=0;PCWrite<=0;IorD<=0;ALUSrcA<=0;ALUSrcB=2'b11;end//Decode
		4'd3:begin PCSrc<=2'b10;PCWrite<=1;IorD<=0;ALUSrcA<=0;end//Jump
		4'd4:begin ALUSrcA<=1;ALUSrcB<=2'b00;IRWrite<=0;PCWrite<=0;IorD<=0;PCSrc<=2'b01;bgtz<=1;end//bgtz_exec
		4'd5:begin PCSrc<=2'b01;bgtz<=1;PCWrite<=0;IorD<=0;ALUSrcA<=0;end//Branch
		4'd6:begin ALUSrcA<=1;ALUSrcB<=2'b10;IRWrite<=0;PCWrite<=0;IorD<=0;end//addi_exec
		4'd7:begin RegDst<=0;MemtoReg<=0;RegWrite<=1;PCWrite<=0;IorD<=0;ALUSrcA<=0;end//addi_wb
		4'd8:begin ALUSrcA<=1;ALUSrcB<=2'b00;IRWrite<=0;PCWrite<=0;IorD<=0;end//add_exec
		4'd9:begin RegDst<=1;MemtoReg<=0;RegWrite<=1;PCWrite<=0;IorD<=0;ALUSrcA<=0;end//add_wb
		4'd10:begin ALUSrcA<=1;ALUSrcB<=2'b10;IRWrite<=0;PCWrite<=0;IorD<=0;end//GetMemAddr
		4'd11:begin IorD<=1;PCWrite<=0;MemWrite<=1;ALUSrcA<=0;end//sw_wb
		4'd12:begin IorD<=1;MemWrite<=0;PCWrite<=0;ALUSrcA<=0;end//ReadMem
		default:begin RegDst<=0;MemtoReg<=1;RegWrite<=1;PCWrite<=0;IorD<=0;end//lw_wb
		endcase
	end
endmodule
