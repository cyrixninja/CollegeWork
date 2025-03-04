;a. Write an ALP to multiply the contents of memory location 3040H by the contents of memory location 3041H
;and store the result in memory locations 3042H and 3043H with LS byte of the product at memory location 3042H.
;Draw also the flow chart. (Using Repetitive Addition)

	LXI H , 0001H
	MOV C , M 
	LXI H , 0002H
	MOV B , M
	
LOOP1:	ADD B	
	DCR C
	JZ LOOP2
	JMP LOOP1

LOOP2: STA 0003H
        HLT
	

 


;b. Divide the content of register B with register C and store the result in register D.
;(Using Repetitive Subtraction)
	
	MVI B , 09H 
	MVI C , 03H
	MOV A , B
	MVI D , 01H
	
LOOP1:	SUB C
	JZ LOOP2	
	INR D
	JMP LOOP1

LOOP2:	  HLT

HLT
