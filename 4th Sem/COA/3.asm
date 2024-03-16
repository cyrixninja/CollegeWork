;Write an assembly language code in GNUsim8085 to implement data transfer instruction. (HINT : MOV, MVI, LXI, LDAX, LDA, STA, STAX)

jmp start

;data


;code
start: nop
	; LDA instruction - Load accumulator direct
	LDA 0001H ; Load accumulator with the value at memory address 0001H

	; LXI instruction - Load immediate data into register pair
	LXI H, 0002H ; Load immediate address of data into register pair HL (0005H)

	; MVI instruction - Move immediate data into a register or memory location
    	MVI C, 0AH ; Move immediate value 0AH into register B
	
	; STA instruction - Store accumulator direct
    	STA 0004H ; Store accumulator value at memory address 0002H
	
	; MOV instruction - Move data between registers
	MOV  D, C ; Move contents of register C to register B

	; LDAX instruction - Load accumulator indirect
	LDAX B ; Load accumulator with the value at the address pointed by register pair BC (0AH)

	; STAX instruction - Store accumulator indirect
	LXI B, 0007H;
	MVI A, 0AH ;
	STAX B ;
	
hlt