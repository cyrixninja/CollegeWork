#include <stdio.h>

void exchange(int *x,int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int a,b;
    printf("Enter value of X:");
    scanf("%d",&a);
    printf("Enter Value of Y:");
    scanf("%d",&b);
    printf("\n You Entered");
    printf("\n X : %d",a);
    printf("\n Y : %d",b);
    exchange(&a,&b);
    printf("\nSwapped Values");
    printf("\nX : %d",a);
    printf("\nY : %d \n ",b);


}