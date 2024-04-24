;Write an assembly level code in GNUsim8085 to store 
;numbers in reverse order in memory location as
;block transfer operation

jmp start

;data


;code
start: nop
	LXI H,8000H; Point to 8000H to get Block Size
	MOV C,M; Take Size of the Block in Counter C
	LXI D,9000H; Point to Destination Location
	MOV A,L; Load L into A
	ADD C; Add C to point to last address of block
	MOV L,A; Move A to L

LOOP:	MOV A,M;Load Memory to A 
		STAX D; Store A into Destination pointed by DE
		INX D;Point destination to next location
		DCX H; Point source to previous address
		DCR C; Decrease C by 1
		JNZ LOOP; If Z not set then jump to loop
hlt