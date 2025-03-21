;Write an 8085 program to reverse a string stored as series of ASCII characters starting from 
;location 3050h and ended with 0Dh using stack.


	LXI H , 3050H; Point to 3050H Memory Location
	MVI C , 0AH;Intialise the Counter


LOOP:	MOV E , M; Move Data to DE Pair	.
	PUSH D ; Push Current Data to Stack
	INX H; Increase HL Pair Memory Location
	DCR C; Decrease Counter
	JNZ LOOP; If Counter not Zero Jump to LOOP
	JMP INIT ; Jump to INIT Once Operation Completed


INIT:	LXI H , 3050H; Reset HL Point to 3050H Memory Location 
    	MVI C , 0AH;Reset the Counter
	JMP LOOP2;Jump to LOOP2 Once Operation Completed


LOOP2:	POP D; Pop data from Stack
	MOV M , E ; Move Data From Stack to Memory
	INX H; Increase Memory Location
	DCR C;Decrease Counter
	JNZ LOOP2; Jump to LOOP2 if Counter not Zero
	HLT