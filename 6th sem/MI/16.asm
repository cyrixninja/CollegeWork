;An array of binary numbers is stored in memory starting from address 3000H.
;There are ten numbers in the array. 
;Write an ALP which finds out quantity of positive numbers , negative numbers and zeros in the 
;data array and stores the result in memory location starting from address 3050H.

	LXI H , 0001H; Point to Memory Location
	MVI C , 05H ; Initialise the Counter
loop:	MOV A , M ; Move to Accumulator
	CPI 00H; Compare with Zero
	JZ zero; Jump to Zero if number is Zero
	ANI 80H; AND with 80H to Find if number is postive or negative
	JZ positive; Jump to Positive if is postive 
	JNZ negative; Jump to Positive if is negative

zero:		INR B; Increase Zero Counter
		INX H ; Increase Memory Location Pointer
		DCR C; Decrease Loop Counter
		JNZ loop ; Jump to loop if counter not zero
		JMP save ; Jump to Save

positive:	INR D; Increase Positive Counter
		INX H; ; Increase Memory Location Pointer
		DCR C; Decrease Loop Counter
		JNZ loop ; Jump to loop if counter not zero
		JMP save ; Jump to Save

negative:	INR E; Increase Negative Counter
		INX H; ; Increase Memory Location Pointer
		DCR C; Decrease Loop Counter
		JNZ loop ; Jump to loop if counter not zero
		JMP save; Jump to Save


save:	INX H ; Increase Memory Location Pointer
	MOV M , B ; Save Number of Zeros
	INX H ; Increase Memory Location Pointer
	MOV M , D; Save Number of Positive Number
	INX H ; Increase Memory Location Pointer
	MOV M , E; Save Number of Negative Number
	HLT