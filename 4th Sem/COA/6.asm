
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
	LDA 0001H; Set the Size of Array at 0001H location
	MOV B, A; Transfer Value of A to B
	LXI H , 0002H; Load First Number of Array into HL Pair
	MVI A ,00; Intialise A Register with 0
	MVI C, 00; Intialise C Register with 0
ADDLOOP1:	ADD M; A <- A + M
		INR L; M <- M + 1
		JNC ADDLOOP2; Jump to ADDLOOP
		INR C; Increment C if Carry 

ADDLOOP2:	DCR B; B <- B-1
		JNZ ADDLOOP1; Jump to ADDLOOP1
		STA 0008H; Store Result at 000E Location
		MOV A,C; Transfer Value of Carry to A
		STA 0009H; Store Carry Result at 000F Location

	
	; c)Count Even and Odd Numbers (10 Numbers)
	LXI H, 0002H; Load First Number of Array into HL Pair
	MVI C,00H; Initialize Carry Register with 0
	MVI D,06H; Set the Size of the Array
COUNTODD2:	INX H; Increment Indirect memory location M by 01
		MOV A, M; Transfer Contents of Memory Location M (0002H) to Accumulator
		ANI 01;Perform AND Operation between Contents of Accumulator and 01
		JNZ COUNTODD1; JUMP to COUNTODD1
		INR C; Increase Value of Carry

COUNTODD1:	DCR D; Decrease Value of D Register
		JNZ COUNTODD2;JUMP to COUNTODD2
		MOV A,C; Move Contents of C to Accumulator
		STA 0018H; Store Contents of Accumulator at Location 0018H;
	LXI H, 0002H; Load First Number of Array into HL Pair
	MVI C,00H; Initialize Carry Register with 0
	MVI D,06H; Set the Size of the Array
COUNTEVEN2:	INX H; Increment Indirect memory location M by 01.
		MOV A, M; Transfer Contents of Memory Location M (0002H) to Accumulator
		ANI 01;Perform AND Operation between Contents of Accumulator and 01
		JZ COUNTEVEN1; JUMP to COUNTEVEN1
		INR C; Increase Value of Carry
COUNTEVEN1:	DCR D; Decrease Value of D Register
		JNZ COUNTEVEN2;JUMP to COUNTEVEN2
		MOV A,C; Move Contents of C to Accumulator
		STA 0019H; Store Contents of Accumulator at Location 0019H;

	 			 

hlt