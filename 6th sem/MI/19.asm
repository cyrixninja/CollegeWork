;Perform addition of two 16 bit numbers stored in register pairs BC and DE respectively. 
;Store the result in HL pair.

	LXI B , 100AH ; Store a 16 Bit Number in BC Register Pair
	LXI D , 202BH ; Store a 16 Bit Number in DE Register Pair
	MOV A , C ; A <-- C
	ADD E; Add with E
	MOV L , A ; L <-- A
	MOV A , B ; A <-- B
	ADC D ; Add with D
	MOV H , A;  H <-- A

;Perform subtraction of two 16 bit numbers stored in register pairs BC and DE respectively. 
;Store the result in HL pair.

	LXI B , 202BH ; Store a 16 Bit Number in BC Register Pair
	LXI D , 100AH ; Store a 16 Bit Number in DE Register Pair
	MOV A , C ; A <-- C
	SUB E; Sub with E
	MOV L , A ; L <-- A
	MOV A , B ; A <-- B
	SBB D ; Sub with D
	MOV H , A;  H <-- A



HLT