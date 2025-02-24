;a. Find the 1’s complement of the number stored at memory location 2000H.
;b. Find the 2’s complement of a number stored in memory location A000 H.
;For both, store the result in B000H and B001H.
	LDA 2000H;
	CMA
	STA 0B00H;
	LDA 0A00H
	CMA 
	INR A
	STA 0B01H	

;c. Five data bytes are stored on location starting from 6001H. 
;Write an 8085 ALP to convert into 2’s complement and store them on location 9001H.
	MVI A ,00H
	MVI C ,05H
	LXI H , 6001H
	LXI D , 9001H

ALP:	MOV A , M 
	CMA
	INR A
	XCHG
	MOV M , A
	XCHG
	INX H
	INX D
	DCR C
	JNZ ALP
		
	
	
	HLT
