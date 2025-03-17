;Write a program to sort the following set of marks scored by ten students in a MI course 
;in descending order. [ Data(H) 63,41,56,62,48,5A,4F,4C,56,56]

START:		LXI H, 0000H ; Load Number of Values
	  	MVI D, 00H ; Initialise Flag D
		MOV C, M ;Set C register with number of values		
	  	DCR C ; Decrement C
 	  	INX H ; Point to Data Block 	

LOOP1:	 	MOV A, M 	
 	  	INX H 	
 	  	CMP M 	
 	  	JC LOOP2 	
 	  	JZ LOOP2 	
 	  	MOV B, M 	
 	  	MOV M, A 	 
 	  	DCX H 	 
 	  	MOV M, B 	 
 	  	INX H 	 
 	  	MVI D, 01H 
	
LOOP2:	 	DCR C 	
 	  	JNZ LOOP1 		
 	  	MOV A, D 	
 	  	CPI 01H 	
 	  	JZ  START
 	  	HLT 	

