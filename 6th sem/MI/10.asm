;Count number of 1’s in the content of D register and store the count in the B register


	MVI D , 12H
	MOV A , D
	MVI C , 08H


LOOP1:	RLC
	JC LOOP2
	DCR C
	JNZ LOOP1
	HLT

LOOP2:	INR B 
	JMP LOOP1		