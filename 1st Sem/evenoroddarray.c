#include <stdio.h>
int x,y;
int num[10];
int even,odd,zero;

void main(){

for(x=0;x<10;x++){
    printf("Enter Number %d :",x);
    scanf("%d",&num[x]);
}
for(y=0;y<10;y++){
    if(num[y]%2==0)
    {
      even++;
    }
    else if(num[y]%2!=0)
    {
      odd++;
    }
    else
    {
      zero++;
    }


} 
printf("\n Even Numbers : %d",even);
printf("\n Odd Numbers : %d",odd);
printf("\n Zeroes: %d \n",zero);

}
