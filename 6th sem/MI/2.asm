; Question 2 

; 1.20H and ABH are stored at memory locations. Swap the values of them. (Using LXI,MOV only)

; We have stored 20H at 0000H and ABH at 0001H;

	;LXI H , 0001H ;Point to 0001H Memory Location
	;MOV A , M ; M --> A 
	;LXI H , 0002H;Point to 0001H Memory Location
	;MOV B , M ; M --> B
	;LXI H , 0001H;Point to 0001H Memory Location
	;MOV M , B ; B --> M
	;LXI H , 0002H;Point to 0001H Memory Location
	;MOV M , A ; A --> M

;2 . 20H and ABH are stored at memory locations. Swap the values of them. (Using LDAX and STAX)	

; We have stored 20H at 0003H and  ABH at 0004H;
	 
	;LXI H,0003H ; Point to 0003H Memory Location 
	;MOV D,M; M --> D
	;LXI B,0004H ; Point to 0004H Memory Location
	;LDAX B; Load Data of Memory Location (B)  in  Accumulator 
	;MOV M,A; A --> M
	;MOV A,D; D --> A 
	;STAX B; Store Data at Memory Location (B) using Accumulator



;3 . 20H and ABH are stored at memory locations. Swap the values of them. (Using LDA and STA)
	
	;LDA 0005H; Load Data into Accumulator from 0005H Memory Location
	;MOV B , A ; A --> B
	;LDA 0006H ; Load Data into Accumulator from 0006H Memory Location
	;MOV D , A ; A --> D
	;MOV A , B ; B --> A
	;STA 0006H; Store Value at Accumulator at 0006H
	;MOV A , D ; D --> A 
	;STA 0005H; Store Value at Accumulator at 0005H
		
;4 . 20H and ABH are stored at memory locations. Swap the values of them. (Using XCHG)
	LXI H , 0007H; 
	MOV D , M ; M --> D 
	LXI H , 0008H; 
	MOV H , M ;
	XCHG
	MOV M, D ; 
	;MOV M , D;
		

	HLT ; Halt the Program
