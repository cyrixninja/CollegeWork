// Program to find that if accepted number is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an number: ");
    scanf("%d", &number);
    if (number%2==0) {
        printf("You entered a even number \n");
    }
    else{
        printf("You entered a odd number \n");
    }

     return 0;

}