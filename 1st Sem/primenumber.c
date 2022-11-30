#include <stdio.h>
int main() {
    int x,y,z = 0 ;
    printf("Enter A Number :"); 
    scanf("%d",&x);
    if (x == 0 || x == 1){
      y = 1;
    }
    for(z = 2;z<=x/2;++z)
    {
      if(x % z == 0)
      {
       y = 1;
       break;
      }
    }
    if (y==1){
      printf("\n %d  is not a prime number \n ",x);
    }
    else {
      printf("\n %d  is a prime number \n ",x);
    }


}

