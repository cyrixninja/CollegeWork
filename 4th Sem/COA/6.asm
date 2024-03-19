
;Write an assembly language code in GNUsim8085 to perform various
; logical operations on a set of 10 data
; a)Addition of First 10 Numbers
; b)Addition of any 10 Numbers stored in memory
; c)Count Even and Odd Numbers 

jmp start

;data


;code
start: nop
	; a)Addition of First 10 Numbers
	MVI C,10; Initialize C Register with 10
	MVI A,0; Initialize 0 Register with 0
AGAIN: 	ADD C; Add C
	DCR C; Decrease C with Every Iteration
	JNZ AGAIN; Jump Back to Loop 
	STA 0000H; Store Result at 000H
	
	; b)Addition of any 10 Numbers stored in memory
	MVI A,0AH; Set the Size of the Array
	MOV B, A; Transfer Value of A to B
	LXI H , 0001H; Load First Number of Array into HL Pair
	MVI A ,00; Intialise A Register with 0
	MVI C, 00; Intialise C Register with 0
ADDLOOP1:	ADD M; A <- A + M
		INR L; M <- M + 1
		JNC ADDLOOP2; Jump to ADDLOOP
		INR C; Increment C if Carry 

ADDLOOP2:	DCR B; B <- B-1
		JNZ ADDLOOP1; Jump to ADDLOOP1
		STA 000BH; Store Result at 000E Location
		MOV A,C; Transfer Value of Carry to A
		STA 000CH; Store Carry Result at 000F Location

	
	; c)Count Even and Odd Numbers (10 Numbers)
	LXI H, 0001H; Load First Number of Array into HL Pair
	MVI C,00H; Initialize Carry Register with 0
	MVI D,0AH; Set the Size of the Array
COUNT2:		INX H; Increment Indirect memory location M by 01
		MOV A, M; Transfer Contents of Memory Location M (0002H) to Accumulator
		ANI 01;Perform AND Operation between Contents of Accumulator and 01
		JZ COUNT1; JUMP to COUNTODD1
		INR C; Increase Value of Carry

COUNT1:		DCR D; Decrease Value of D Register
		JNZ COUNT2;JUMP to COUNTODD2
		MOV A,C; Move Contents of C to Accumulator
		STA 000DH; Store Contents of Accumulator at Location 0018H (Odd Numbers);
		MVI A,0AH; Initialize Accumulator with Value of Total Number of Elements
		SUB C; Subract Number of Odd Numbers to Numbers to Find Total Number of Even Numbers
		STA 000EH;  Store Contents of Accumulator at Location 0018H (Even Numbers);

	 			 

hlt
