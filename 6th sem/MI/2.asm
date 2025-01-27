; Question 2 

; 1.20H and ABH are stored at memory locations. Swap the values of them. (Using LXI,MOV only)

; We have stored 20H at 0000H and ABH at 0001H;

	LXI H , 0001H ; Load 20H in BC Register Pair
	MOV A , M ; M --> A 
	LXI H , 0002H; 
	MOV B , M ; M --> B
	MOV M , A ;

	
	;MOV H , C ; C --> H 
	;MOV C , E ; E --> C
	;MOV E , H ; H --> E


	MVI C , 00H;Reset Registers
	MVI E , 00H;Reset Registers
	MVI H , 00H;Reset Registers  

;2 . 20H and ABH are stored at memory locations. Swap the values of them. (Using LDAX and STAX)	
	 	

	HLT ; Halt the Program