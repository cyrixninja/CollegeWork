;Write an 8085 subroutine to exchange two numbers. 
;Use it to reverse an array of 10 numbers starting from 3050h.


	LXI H , 3050H; Point to Memory Location 3050H
	LXI D , 3059H ; Point to Memory Location 3059H
	MVI C , 05H; Intialise the Counter

LOOP:	CALL EXCHG ; Call Exchange Subroutine	
	DCR C ; Decrease Counter
	JNZ LOOP; Jump to Loop if Counter not Zero
	HLT

EXCHG:	MOV B , M; Move M to B
	PUSH B 
	XCHG
	MOV B , M; Move B to M
	PUSH B
	XCHG
	POP B
	MOV M , B ; Move B to M
	XCHG
	POP B
	MOV M , B; Move B to M	
	INX D ; Increase Memory Location
	DCX H ; Decrease Memory Location
	XCHG
	RET

