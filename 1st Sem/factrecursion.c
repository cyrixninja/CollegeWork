#include <stdio.h>

int fact(int b)
{
    if(b==0) 
      return 1;
    else 
    return(b*fact(b-1));

}
void main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("\n Factorial : %d \n",fact(n));

}
