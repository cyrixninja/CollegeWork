// Program the maximum number using nested if else

#include <stdio.h>
int main() {
    // Taking Number Input
    printf("Enter First Number 1:");
    int number1;
    scanf("%d", &number1);
    printf("Enter First Number 2:");
    int number2;
    scanf("%d", &number2);
    printf("Enter First Number 3:");
    int number3;
    scanf("%d", &number3);
    // Nested Else-If
    if (number1>number2)
    {
        if(number1>number3)
        {
        printf("Number 1: %d is maximum \n", number1);
        }

    }

    if (number2>number1)
    {
        if(number2>number3)
        {
        printf("Number 2: %d is maximum \n", number2);
        }

    }

    if (number3>number1)
    {
        if(number3>number2)
        {
        printf("Number 3 : %d is maximum \n", number3);
        
        }

    }


     return 0;

}
