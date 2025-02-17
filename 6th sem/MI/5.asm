
;Find whether the number stored in register B is even or odd. 
;Load Accumulator with 00H if number is even else load 01H
	MVI B , 0DAH; Move Number to Accumulator
	MOV A , B ; A --> B 
	ANI 01H; AND Immediate with 0
	HLT