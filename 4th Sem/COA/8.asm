
;Write an Assembly Language Code in GNUsim8085
;to find the factorial of a number

jmp start

;data


;code
start: nop
	MVI B,03; Take Value in Register B
	MOV C,B; Move B into C
	DCR B; Decrement Register B
LOOP1:	MOV D,B; Move B into D
	MVI A,00; Intialise Accumulator with 0
LOOP2:	ADD C; Add C to Accumulator
	DCR D; Decrease D
	JNZ LOOP2; Jump to LOOP2
	MOV C,A; Move A to C
	DCR B; Decrease B 
	JNZ LOOP1; Jump to LOOP1
	STA 0001H; Store result at 0001H
hlt