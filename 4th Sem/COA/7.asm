;Write an assembly level code in GNUsim8085 to store 
;numbers in reverse order in memory location as
;block transfer operation

jmp start

;data


;code
start: nop
	LXI H,8000H; Point to Starting Location
	MOV C,H; Take Size of the Array in Counter C
	LXI D,9000H; Point to Address Location
	MOV C,A;
	MOV L,A; Move A to L

LOOP:	MOV A,M;Load Memory to A 
	STAX D; Store A into Destination pointed by DE
	INX D;Point destination to next location
	DCX H; Point source to previous address
	DCR C; Decrease C by 1
	JNZ LOOP;
	STAX D;
hlt