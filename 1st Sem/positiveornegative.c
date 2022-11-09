// Program to find that if accepted number 

#include <stdio.h>
int main() {
    int number;
    printf("Enter an number: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("You entered negative number \n");
    }
    else{
        printf("You entered a positive number \n");
    }

     return 0;

}

