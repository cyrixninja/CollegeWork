;Calculate the sum of odd numbers and count even numbers 
;from the block of 10 data bytes stored in memory locations.


	LXI H , 0001H ; Point to 0001H
	MVI C , 05H ; Intialize Counter to 05

LOOP:	MOV A , M ; Move from Memory to Accumulator	
	ANI 01H ; And with 01H
	JZ EVEN ; Jump to Even
	
	;If ODD
	MOV A , D; Move Old Sum to Accumulator
	ADD M ; Add with Memory
	MOV D , A ; Move Updated Sum to D
	INX H;Increase Memory Location
	DCR C ; Decrease Counter
	JNZ LOOP; Jump to Loop if Counter not Zero

SAVE:	INX H ;Increase Memory Location
	MOV M , B ; Store Number of Even Number in Memory
	INX H ;Increase Memory Location
	MOV M , D ; Store Number of Even Number in Memory
	HLT
	
	;If EVEN
EVEN:	INR B ; Increase Counter B
	INX H ; Increase Memory Location
	DCR C ; Decrease Counter
	JNZ LOOP ; Jump to LOOP
	JMP SAVE
	HLT




HLT