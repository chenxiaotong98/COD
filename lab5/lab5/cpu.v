`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:11:45 04/22/2016 
// Design Name: 
// Module Name:    cpu 
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
module cpu(
	input clk,
	output [31:0] ALU_result
    );
	parameter Instruction_Memory_size=10,Data_Memory_size=7;
	reg  [31:0] PC; 
	wire  [4:0]  Reg_write_address;//
	reg sign_gtz;
	wire [31:0]	Reg_write_data;//
	reg [31:0]  PC_next;
	wire [31:0]  alu_b;//
	
	wire [31:0] Instruction;
	wire [31:0] signextended;
	wire [31:0] j_address;
	
	wire [31:0] Mem_read_data;
	wire [31:0] Reg_read_data1;
	wire [31:0] Reg_read_data2;

	wire RegDst,j,bgtz,MemtoReg,ALUSrc,RegWrite,MemWrite;

	ROM Instruction_Memory(
	.a					(PC[Instruction_Memory_size+1:2]),
	.spo				(Instruction[31:0])
	);
	ControlUnit ControlUnit1(
	.opcode			(Instruction[31:26]),
	.RegDst			(RegDst),
	.j					(j),
	.bgtz				(bgtz),
	.MemtoReg		(MemtoReg),
	.MemWrite		(MemWrite),
	.ALUSrc			(ALUSrc),
	.RegWrite		(RegWrite)
	);
	RAM Data_Memory(
	.clk				(clk),
	.a					(ALU_result[Data_Memory_size+1:2]),
	.d					(Reg_read_data2),
	.we				(MemWrite),
	.spo				(Mem_read_data)
	);
	Registers Registers1(
	.clk				(clk),
	.read_address1	(Instruction[25:21]),
	.read_address2	(Instruction[20:16]),
	.write_address	(Reg_write_address),
	.write_data		(Reg_write_data),
	.write_enable	(RegWrite),
	.read_data1		(Reg_read_data1),
	.read_data2		(Reg_read_data2)
    );
	ALU ALU1(
	.A				(Reg_read_data1),
	.B				(alu_b),
	.op			(3'b010),
	.ALU_result	(ALU_result)
    );
	
	SignExtend16 SignExtend16_1(
	.in	(Instruction[15:0]),
	.out	(signextended)
 	);
	SignExtend26 SignExtend26_1(
	.in	(Instruction[25:0]),
	.pc	(PC[31:28]),
	.out	(j_address)
 	);
	always@(ALU_result)
	begin
		sign_gtz=(ALU_result>0);
	end

	
	always@(*)
	begin
		if(j)
			PC_next=j_address;
		else if(sign_gtz && bgtz)
			PC_next=PC+32'b100+(signextended<<2);
		else
			PC_next=PC+32'b100;
	end
	always@(posedge clk)
	begin
		if(PC_next)
			PC=PC_next;
		
	end
	
	assign Reg_write_address=(RegDst)?(Instruction[15:11]):(Instruction[20:16]);
	assign alu_b=(ALUSrc)?(signextended):(Reg_read_data2);
	assign Reg_write_data=(MemtoReg)?(Mem_read_data):(ALU_result);

	initial
	begin
		PC=32'h0;
	end
	
endmodule
