// Program to find that if student is passed or fail

#include <stdio.h>
int main() {
    int number1;
    printf("Enter Subject 1 Marks: ");
    scanf("%d", &number1);
    int number2;
    printf("Enter Subject 2 Marks: ");
    scanf("%d", &number2);
    int number3;
    printf("Enter Subject 3 Marks: ");
    scanf("%d", &number3);
    if (number1 < 33 || number2 < 33 || number3 < 33) 
    {
        printf("Student has failed \n");
    }
    else{
        printf("Student has passed \n");
    }

     return 0;

}

