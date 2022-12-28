#include <stdio.h>
#include <math.h>

void main(){
int x,y;
float arr1[50];
float a = 0,b = 0, c = 1;
printf("Enter Number of Elements:");
scanf("%d",&y);
for(x=0;x<y;x++){
    printf(" \n Enter Value in Index Postion %d :",x+1);   
    scanf("%f",&arr1[x]);
    a = a+arr1[x];
    b = b+(1.0/arr1[x]);
    c = c*arr1[x];
    }
    printf("\n Average Mean : %f",a/y);
    printf("\n Harmonic Mean: %f",y/b);
    printf("\n Geometric Mean : %f \n",pow(c,x));


}





