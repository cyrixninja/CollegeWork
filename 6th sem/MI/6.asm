;Check whether the number stored in register B is positive, negative or zero. 
;The accumulator is 00H if number is zero, 11H if number is positive and 22H if number is negative.
JMP start

start:	MVI B , 05H ; B --> 05H
	MOV A , B;


zero:		MVI  A, 00H

positive:	MVI A, 11H

negative:	MVI A, 22H
		
	HLT	