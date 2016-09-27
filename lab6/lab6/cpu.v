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
	input reset
    );
	reg [31:0] PC_Reg;
	reg [31:0] Instr_Reg;
	reg [31:0] ALU_Reg;
	reg [31:0] Data;
	wire [31:0] Mem_Addr;
	wire [31:0] Mem_Out;
	reg [31:0] Instruction;
	wire [31:0] Reg_Addr3;
	wire [31:0] Reg_In;
	reg [31:0] Reg_ALU;
	wire [31:0] Signextended;
	wire [31:0] Shifted;
	wire [31:0] A;
	wire [31:0] B;
	reg [31:0] Reg_RD1;
	reg [31:0] Reg_RD2;
	wire [31:0] ALU_Result;
	wire [31:0] ALU_A;
	wire [31:0] ALU_B;
	wire ALU_Zero;
	reg [31:0] ALU_Out;
	wire [31:0] PC_Next;
	wire [31:0] PC_Jump;
	wire PCen;
	wire MemRead;
	wire MemWrite;
	wire RegDst;
	wire IRWrite;
	wire PCWrite;
	wire bgtz;
	wire MemtoReg;
	wire ALUSrcA;
	wire [1:0] ALUSrcB;
	wire [1:0] PCSrc;
	wire IorD;
	wire RegWrite;	
	Memory Memory1(
	.clka				(clk),
	.wea				(MemWrite),
	.addra			(Mem_Addr[11:2]),
	.dina				(Reg_RD2),
	.douta			(Mem_Out)
	);
	
	ControlUnit ControlUnit1(
	.reset			(reset),
	.opcode			(Instruction[31:26]),
	.clk				(clk),
	.RegDst			(RegDst),
	.IRWrite			(IRWrite),
	.PCWrite			(PCWrite),
	.bgtz				(bgtz),
	.MemtoReg		(MemtoReg),
	.MemWrite		(MemWrite),
	.ALUSrcA			(ALUSrcA),
	.ALUSrcB			(ALUSrcB),
	.PCSrc			(PCSrc),
	.RegWrite		(RegWrite),
	.IorD				(IorD)
	);
	
	Registers Registers1(
	.clk				(clk),
	.read_address1	(Instruction[25:21]),
	.read_address2	(Instruction[20:16]),
	.write_address	(Reg_Addr3),
	.write_data		(Reg_In),
	.write_enable	(RegWrite),
	.read_data1		(A),
	.read_data2		(B)
    );
	ALU ALU1(
	.A					(ALU_A),
	.B					(ALU_B),
	.ALU_Zero		(ALU_Zero),
	.ALU_result		(ALU_Result)
    );
	
	SignExtend SignExtend_1(
	.in				(Instruction[15:0]),
	.out				(Signextended)
 	);

	
	Get_PC_Jump Get_PC_Jump_1(
	.in				(Instruction[25:0]),
	.pc				(PC_Reg[31:28]),
	.out				(PC_Jump)
 	);
	assign Shifted[31:2]=Signextended[29:0];
	assign Shifted[1:0]=2'b00;
	assign Mem_Addr=IorD?ALU_Reg:PC_Reg;
	assign Reg_Addr3=RegDst?Instruction[15:11]:Instruction[20:16];
	assign Reg_In=MemtoReg?Mem_Out:ALU_Reg;
	assign ALU_A=ALUSrcA?Reg_RD1:PC_Reg;
	assign ALU_B=(ALUSrcB==2'b00)?Reg_RD2:((ALUSrcB==2'b01)?4:((ALUSrcB==2'b10)?Signextended:Shifted));

	always@(posedge clk or negedge reset)
	begin
		if(~reset)
			PC_Reg<=32'b0;
		else if(PCen)
			PC_Reg<=PC_Next;
	end
		
	always@(posedge clk)
	begin
		Reg_RD1<=A;
		Reg_RD2<=B;
	end
	
	always@(posedge clk)
	begin
		if(IRWrite)
			Instruction<=Mem_Out;
	end
	
	always@(posedge clk)
	begin
		ALU_Reg<=ALU_Result;
	end
	assign PC_Next=(PCSrc==2'b00)?ALU_Result:((PCSrc==2'b01)?ALU_Reg:PC_Jump);

	assign PCen=PCWrite+(ALU_Zero*bgtz);
	
endmodule
