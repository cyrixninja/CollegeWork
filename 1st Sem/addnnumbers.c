#include <stdio.h>

int addnum(int n)
{
    int sum =0;
    for(int x = 1;x<=n;x++)
        sum=sum+x;
    return sum;
    
}

int main()
{
    int n;
    printf("Enter Value of N:");
    scanf("%d",&n);
    printf("\n Sum of N Numbers is :%d \n",addnum(n));
    return 0;
}