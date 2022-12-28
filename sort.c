#include <stdio.h>
int arr[50];
int a,i,j,b;
void main(){

    printf("Enter Number of Elements :");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    printf("Enter Value at Position %d :",i+1);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++)
        {
            if(arr[i] > arr[j])
            {
               b = arr[i];
               arr[i] =  arr[j];
               arr[j] = b;
            }
        }
        
    }
for(i=0;i<a;i++)
    {
    printf("\n %d \n",arr[i]);
    }
    

}