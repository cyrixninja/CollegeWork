; A. Addition of two bytes stored at memory location and also store result in memory.
	LXI H , 0001H 
	MOV A , M
	INX H
	MOV B , M 
	ADD B
	INX H
	MOV M , A

; B. Subtract the content of memory location 2001H from the memory location 2002H and place the result in 2003H.
	LXI H , 2001H 
	MOV A , M 
	INX H 
	MOV B , M
	SUB B
	INX H
	MOV M , A 	
	HLT