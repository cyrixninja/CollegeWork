// Print Fibonnaci Series 
#include <stdio.h>

int main() {
int x,y,z;
int t1=0,t2=1;
printf("Enter Number of Terms : ");
scanf("%d",&y);
printf(" %d \n %d",t1,t2);
for (x=3;x<=y;x++)
{
    z=t1+t2;
    printf("\n %d",z);
    t1=t2;
    t2=z;
}
}
