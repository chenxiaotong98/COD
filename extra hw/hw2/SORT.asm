DSEG	SEGMENT
	NUMBERS	DW	10,50H,42H,31H,34H,30H,30H,30H,35H,35H,36H
DSEG	ENDS

CSEG	SEGMENT
	ASSUME	DS:DSEG,CS:CSEG

START:		MOV	AX,DSEG
			MOV	DS,AX
			MOV	BX,0
			MOV CX,WORD	PTR	NUMBERS[BX]
			DEC	CX
			ADD	CX,CX
			MOV DX,2
			
OUTLOOP:	MOV	BX,CX
INLOOP:		MOV	AX,NUMBERS[BX]
			CMP	AX,NUMBERS[BX+2]
			JBE	NOT_SWAP
			XCHG AX,NUMBERS[BX+2]
			MOV	NUMBERS[BX],AX
NOT_SWAP:	SUB	BX,2
			CMP	BX,DX
			JAE	INLOOP
			ADD DX,2
			CMP	DX,CX
			JBE	OUTLOOP
			
			MOV	AH,4CH
			INT 21H

CSEG	ENDS

END START