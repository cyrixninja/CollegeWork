;Search the given byte in the list of 10 numbers. 
;If search is successful store 00H in register B and else store 01H in register B.


	LXI H , 0001H; Point to Start Location in the Memory
	MVI C , 0AH; Initialise the Counter
	MVI D , 05H; Number to Search
	MOV A , M ; A <-- M


LOOP:	CMP D ; Compare Accumulator with D
	JZ FOUND ; Jump to Found if Search Successful
	INX H; Increase Memory Location
	MOV A , M ; A <-- M
	DCR C; Decrease Counter.
	JNZ LOOP; Restart the Loop Until Counter is Zero
	JMP NOTFOUND ; Jump to NOTFOUND if Search is Unsuccessfull


FOUND:		MVI B, 00H;Store 00H in register B.
		HLT	


NOTFOUND:	MVI B, 01H;Store 01H in register B.
		HLT