#include <stdio.h>
int main() {
    
    char opt;
    printf("Enter a operator : \n");
    printf("Addition- A\n");
    printf("Substraction- S\n");
    printf("Division- D\n");
    printf("Multiplication- M\n");
    scanf("%c", &opt);
    int a,b;
    printf("Enter a First Number :\n");
    scanf("%d", &a);
    printf("Enter a Second Number :\n");
    scanf("%d", &b);
    if (a!=0 && b!=0)
    {
    switch (opt)
    {
    case 'A' :
        printf("Additon of two Numbers Results in : %d \n",(a+b));
        break;
    case 'S':
        printf("Substraction of two Numbers Results in : %d \n",(a-b));
        break;
    case 'D':
        printf("Division of two Numbers Results in : %d \n",(a/b));
        break;
    case 'M':
        printf("Multiplication of two Numbers Results in : %d \n ",(a*b));
        break;
    default:
        printf("Please Enter a Valid Operator");

    }
    
    }
    else{
        printf("You cannot enter zero as a number\n");
    }
    
}