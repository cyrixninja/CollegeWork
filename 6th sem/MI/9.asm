;Find the minimum from two 8-bit numbers. 

	LXI H , 0001H;
	MOV A , M ; 0001H -> A
	INX H ; Point to 0002H
	MOV B , M ; 0002H -> B
	CMP B ; Compare with B
	JC MIN
	INX H
	MOV M , B
	HLT

MIN:	INX H
	MOV M , A 
	HLT




;Find the maximum number from the block of 10 data bytes.
	LXI H , 0004H ; Point to 0004H
	SUB A ; Intialise A with 0
	MVI C ,0AH; Initialise Counter with 10(0AH)
	MOV A,M; 0004H -> A

LOOP1:	INX H ; Increase HL Pointer 
	CMP M ; Compare with Memory
	DCR C ; Decrease Counter
	JZ STORE ; Store if Loop Completed
	JC LOOP2; If the Number is less than than the one is memory then jump to LOOP2
	JMP LOOP1


LOOP2:	MOV B , A;
	MOV A , M;
	JMP LOOP1

STORE: 	STA 0010H;
	HLT
	

;Find the minimum number from the block of 10 data bytes.
	LXI H , 0004H ; Point to 0004H
	SUB A ; Intialise A with 0
	MVI C ,0AH; Initialise Counter with 10(0AH)
	MOV A,M; 0004H -> A

LOOP1:	INX H ; Increase HL Pointer 
	CMP M ; Compare with Memory
	DCR C ; Decrease Counter
	JZ STORE ; Store if Loop Completed
	JNC LOOP2;  If the Number is more than than the one is memory then jump to LOOP2
	JMP LOOP1 ;


LOOP2:	MOV B , A;
	MOV A , M;
	JMP LOOP1

STORE: 	STA 0010H;
	HLT
	


	HLT
