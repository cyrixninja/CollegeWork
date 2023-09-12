//1.1 Perform the following operations on Array
//Reverse an array

#include <stdio.h>

int main(){
int n;
printf("Enter Value of N :");
scanf("%d",&n);
int arr[100];
for(int i=0;i<n;i++){
    printf("Enter Value of Array at Index %d : ",i);
    scanf("%d",&arr[i]);
}    
printf("Array Before Reversal : \n ");
for(int i = 0; i<n;i++)
    {
        printf("%d \n ",arr[i]);
    }
int temp;
for(int i=0;i<n/2;i++){
    temp = arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}
printf("Array Reversed : \n ");
for(int i = 0; i<n;i++)
    {
        printf("%d \n ",arr[i]);
    }
}