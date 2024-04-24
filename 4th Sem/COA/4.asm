;Write an assembly language code in GNUsim8085 to perform various arithmetic operations.
;a) Addition of two 8-bit numbers and also maintain carry registers
;b) Addition of two 16-bit numbers (with and without carry)
;c) Subtraction of two 8-bit numbers
;d) Subtraction of two 16-bit numbers (with and without borrow)
;e) Multiplication of 8-bit numbers
;f) Division of 16 bit by 8-bit number
jmp start
;data
;code
start: nop
        ;a) Addition of two 8-bit numbers and also maintain carry registers
        MVI C,00H; Initializng C Register
        LXI H,0001H; Taking Input from 0001H
        MOV A,M ; Move 1st Data to Accumulator
        INX H; Incrementing to point 2nd Data (0002H)
        MOV B,M; Move 2nd Data to B Register
        ADD B ;
        JNC ADDLOOP8BIT; Check whether Carry Flag is reset
        INR C;
ADDLOOP8BIT:    STA 0003H ;Store Result at 0003H
                MOV A,C; Move carry to Accumulator
                STA 0004H; Store carry to memory 0004H

        ;b) Addition of two 16-bit numbers (with carry)
        MVI C,00H; Initializng C Register
        MVI A,00H; Initializng Accumulator
        MVI L, 16H; Load 1st Data
        MVI H, 5AH; Load 1st Data
        XCHG; Transfer to DE Register Pair
        MVI L,9AH; Load 2nd Data
        MVI H,7CH; Load 2nd Data
        DAD D; Add DE + HL Register Pair
        JNC ADD16BIT;
        INR C;
ADD16BIT:       SHLD 0005H;Store Result
                MOV A, C;
                STA 0007H; Store Carry

        ;b) Addition of two 16-bit numbers (without carry)
        MVI A,00H; Initializng Accumulator
        MVI L,12; Load 1st Data
        MVI H,10; Load 1st Data
        XCHG; Transfer to DE Register Pair
        MVI L,50; Load 2nd Data
        MVI H,20; Load 2nd Data
        DAD D; Add DE + HL Register Pair
        SHLD 0008H; Store at Location

        ;c) Subtraction of two 8-bit numbers
        MVI C,00H ; Initializng C Register
        MVI A,00H ; Initializng C Register
        LXI H,0001H; Taking Input from 0001H
        MOV A,M; Move 1st Data to Accumulator
        INX H; Incrementing to point 2nd Data (0002H)
        MOV B,M; Move 2nd Data to B Register
        SUB B;
        JNC SUBSKIP8BIT; If Carry Flag reset, go to skip.
        CMA;
        ADI 00H; If the Subtraction result in borrow take 2’s complement of the accumulator
        INR C; Increment register C
SUBSKIP8BIT:    STA 000AH; Store Result at 0003H
                MOV A,C; Move Carry Flag to Accumulator
                STA 000BH; Store the carry flag to indicate whether the result is positive or negative

        ;d) Subtraction of two 16-bit numbers (without borrow)
        MVI L,88; Load 1st Data
        MVI H,67; Load 1st Data
        XCHG; Transfer to DE Register Pair
        MVI L,55; Load 2nd Data
        MVI H,57; Load 2nd Data
        MOV A,E;
        SUB L;
        MOV L,A;
        MOV A,D;
        SBB H;
        MOV H,A;
        SHLD 000CH; Store the result at location 000CH

        ;d) Subtraction of two 16-bit numbers (with borrow)
        MVI L,02; Load 1st Data
        MVI H,02; Load 1st Data
        XCHG; Transfer to DE Register Pair
        MVI L,04; Load 2nd Data
        MVI H,04; Load 2nd Data
        MVI B,00H; Move 0H to B
        MVI C,00H; Move 0H to C
        MOV A,E; Move lower order of 1st no. to A
        SUB L; Subtract lower order L from A
        JNC SUB16BIT1; Jump to SUB16BIT1 if there is no borrow
        INR C; If borrow, then increment C
SUB16BIT1:  MOV E,A; Move lower order back to E
            MOV A,D; Move higher order of 1st Number to A
            SUB C; Subtract borrow from C
            SUB H; Subtract higher order from A
            JNC SUB16BIT2; Jump to SUB16BIT2 if there is no borrow
            INR B; If borrow, increment B
SUB16BIT2:  MOV D,A; Move higher order back to D
            XCHG; Exchange the result from DE with HL
            SHLD 000EH; Store the result at location 000EH
            MOV A,B; Move borrow to Accumulator
            STA 0010H; Store borrow at location 0010H

        ;e) Multiplication of 8-bit numbers
        MVI D,00 ;Initialize Register D
        MVI A,00 ;Initialize Accumulator
        LXI H,0011H ; Move 1st Data to Accumulator
        MOV B,M ;Get the first number in B Register
        INX H ; Incrementing to point 2nd Data (00012H)
        MOV C,M ;Get the second number in C register
MULLOOP:    ADD B ; Add content of reigister A to register B.
            JNC MULNEXT; Jump on no carry to MULNEXT.
            INR D ;Increment register D
MULNEXT:    DCR C ;Decrement register C.
            JNZ MULLOOP;MULLOOP Jump on no zero to address
            STA 0013H ;Store Result at 0013H
            MOV A, D ;
            STA 0014H ;Store MSB of Result at 0014H

        ;f) Division of 16 bit by 8-bit number
        MVI C,00 ;
        MVI A,00 ;
        LXI H, 0015H; Point 0015H address
        MOV A, M; Store the lower order byte
        INX H; Increase the HL pair to point next location
        MOV B, M; Store the higher order byte
        INX H; Increase the HL pair to point next location
        MOV C, M; Load the denominator
        INR B; Increase Register B
        LXI H,0000H; Store 0000H into HL pair

DIVLOOP:    SUB C; Subtract C from Accumulator
            JC DIVSKIP; Jump to DIVSKIP when CY = 1

DIVINCR:    INX H; Increase Quotient
            JMP DIVLOOP; Jump to DIVLOOP

DIVSKIP:    DCR B; Decrease B
            JZ DIVSTORE; Jump to DIVSTORE when Z = 1
            JMP DIVINCR; Jump to INCR
DIVSTORE:   ADD C; Add C with Accumulator
            XCHG; Swap DE and HL
            LXI H,0018H; Load the destination address
            MOV M,E; Store the lower order quotient
            INX H; Increase HLpair
            MOV M,D; Store the higher order quotient
            INX H; Increase HLpair
            MOV M,A; Store the remainder
hlt