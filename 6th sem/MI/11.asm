;A set of current readings is stored in memory locations starting at XX50H. 
;The end of the data string is indicated by the data byte 00H. Add the set of readings. 
;The answer may be larger than FFH. Store the entire sum at memory locations XX70 and XX71H.
;[Data(H) 32,52,F2,C5,00]


	LXI H, 0001H

LOOP1:	MOV A , M
	INX H
	CPI 00H
	JZ LOOP2
	ADD B
	JC LOOP3
	MOV B , A
	JMP LOOP1


LOOP2:	MOV M , B
	HLT

LOOP3: 	MOV M , B
	INX H 
	INR C
	MOV M , C
	HLT 