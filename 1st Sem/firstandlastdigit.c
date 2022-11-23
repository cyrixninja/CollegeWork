#include <stdio.h>

int main()
{
   int x;
   printf("Enter A Number : "); 
   scanf("%d",&x);
   printf("\n You Entered: %d",x);
   int lastdigit,firstdigit;
   lastdigit = x%10;

   while (x>=10)
   {
    x= x/10;

   }
   firstdigit=x;
   printf("\n First Digit : %d",firstdigit);
   printf("\n Last Digit : %d \n",lastdigit);

}