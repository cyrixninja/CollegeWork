// Introduction to pointers. Call by Reference.
#include <stdio.h>

void swap(int *p,int *q)
{
    int tmp;
    tmp = *p;
    *p  = *q;
    *q  = tmp;
    printf("%d %d \n",*p,*q);
}

int main()
{
    int a,b,tmp;
    printf("Enter Value of A :");
    scanf("%d",&a);
    printf("Enter Value of B :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d %d \n",a,b);
    return 0 ;
}