;Find the minimum from two 8-bit numbers. 

	LXI H , 0001H;
	MOV A , M 
	INX H 
	MOV B , M
	CMP B
	INX H
	JC MIN1
	JNC MIN2

MIN1:	MOV M , A 

MIN2:	MOV M , B
	
;Find the maximum number from the block of 10 data bytes.
;Find the minimum number from the block of 10 data bytes.

	HLT