;Check whether the number stored in register B is positive, negative or zero. 
;The accumulator is 00H if number is zero, 11H if number is positive and 22H if number is negative.
	
	MVI B , 0BH;
	MOV A , B;
	CMA
	INR A ;
	CPI 00H;
	JZ zero
	ANI 80H;
	JZ positive
	JNZ negative

zero:	MVI A,0H;

positive:	MVI A, 11H;

negative:	MVI A , 22H;	

		
	HLT	
