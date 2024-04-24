
;Write an assembly languauge code in GNUsim8085 to 
; perform various logical arithmetc operations'
; a) AND
; b) OR
; c) XOR
; d) Complement 
; e) Rotate

jmp start

;data


;code
start: nop
	;a)AND
	MVI A, 05H; Add Value to A = 5
	MVI B, 05H; Add Value to B = 5
	ANA B; Logical AND
	STA 0001H;Store Result
	;b)OR
	MVI A, 05H; Add Value to A = 5
	MVI B, 03H; Add Value to B = 3
	ORA B; Logical OR
	STA 0002H;Store Result
	;c) XOR	
	MVI A, 05H; Add Value to A = 5
	MVI B, 05H; Add Value to B = 5
	XRA B; Logical XOR
	STA 0003H;Store Result
	MVI A, 05H; Add Value to A = 5
	MVI B, 02H; Add Value to B = 2
	XRA B; Logical XOR
	STA 0004H;Store Result
	;d) Complement
	MVI A, 05H; Add Value to A = 5
	CMA; 1's Complement of A
	STA 0005H;Store Result
	; e) Rotate
	MVI A, 05H; Add Value to A = 5
	RRC; Rotate accumulator right without carry
	STA 0006H;Store Result
	MVI A, 05H; Add Value to A = 5
	RLC; Rotate accumulator left without carry
	STA 0007H;Store Result
	MVI A, 05H; Add Value to A = 5
	RAR; Rotate accumulator right with carry
	STA 0008H;Store Result
	MVI A, 05H; Add Value to A = 5
	RAL; Rotate accumulator left with carry
	STA 0009H;Store Result

	; Logical Operations with 8-bit Data
	
	;a)AND
	MVI A, 32H; 32H = 50
	ANI 50; A = A AND 8-bit data
	STA 0AH; Store Result
	;b)OR
	MVI A, 30H; 30H = 48
	ORI 50; A = A OR 8-bit data
	STA 0BH; Store Result
	;c) XOR	
	MVI A, 30H; 30H = 48
	XRI 50; A = A XOR 8-bit data
	STA 0CH; Store Result
	
	
	
	
	


hlt