


;Addition of 1 to 10 number using counter.
	MVI C,0AH; Initialize C Register with 10
	MVI A,0H; Initialize 0 Register with 0
LOOP1: 	ADD C; Add C
	DCR C; Decrease C with Every Iteration
	JNZ LOOP1; Jump Back to Loop 
	STA 0000H; Store Result at 000H

;Addition of any 10 numbers stored in memory locations
	MVI A ,00H;
	MVI C ,0AH;
	LXI H , 0001H;

LOOP2:  ADD M; 	
	INX H;
	DCR C
	JNZ LOOP2
	STA 000BH;

;Add any ten byte type hexadecimal numbers. 
;Store FFH in memory location 2080H when the sum exceeds eight bits, otherwise store the sum.
	MVI A ,00H;
	MVI C ,0AH;
	LXI H , 0001H;

LOOP3:  ADD M; 	
	INX H;
	DCR C
	JNZ LOOP3
	JC LOOP4
	STA 000CH;

LOOP4:  STA 000DH;

	HLT