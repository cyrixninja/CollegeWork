
; A.Store 80H to the accumulator and add 20H to it.
	MVI A , 80H; A --> 80H
	ADI 20H; A --> A + 20H
; B.Store 80H in the accumulator and 20H in the register then add both the numbers.
	MVI A , 80H; A --> 80H
	MVI B , 20H; B --> 20H
	ADD B; A --> A + B
; C.Store 20H in the accumulator and add the accumulator with the same.
	MVI A , 20H; A --> 20H
	ADD A; A--> A + A  
; D.Store 20H in register B,add register B with the same number and also store the result in Register B.
	MVI B , 20H; B --> 20H 
	MOV A ,B; A --> B
	ADD B ; A --> A + B
	MOV B , A ; B --> A
; E.Store 80H in memory and 20H in accumulator then add both numbers and store the result in memory.
	MVI A , 80H; A --> 80H
	STA 0001H; Store Value in A at 0001H Location in Memory
	MVI A, 20H; A --> 20H
	LXI H , 0001H; Point to Memory Location 0001H
	ADD M ; Add 0001H to Accumulator
	LXI H , 0002H; Point to 0002H
	MOV M , A ; 0002H --> Value of A
	
	HLT