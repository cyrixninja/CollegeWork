;a. Write an 8085 program to copy a block of ten numbers starting from location 2050h 
;to locations starting from 3050h.

	LXI H , 2050H
	LXI D , 3050H 
	MVI C , 0AH
	
LOOP:	MOV A , M
	XCHG
	MOV M , A
	INX H
	XCHG
	INX H
	DCR C
	JZ LOOP2	
	JMP LOOP

LOOP2:	HLT
	
	
;b. The following block of data is stored in memory locations from XX55H to XX5AH. 
;Transfer the data to the location XX80H to XX85H in the reverse order. 
;[ Data(H) 22,A5,B2,99,FF,37]

	LXI H , 2255H
	LXI D , 2285H 
	MVI C , 06H
	
LOOP:	MOV A , M
	XCHG
	MOV M , A
	XCHG
	DCX D
	INX H
	DCR C
	JZ LOOP2	
	JMP LOOP

LOOP2:	HLT