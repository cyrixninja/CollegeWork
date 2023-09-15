//1.1 Perform the following operations on Array
//Insertion of new element at an index
#include <stdio.h>

int main(){
    int n;
    printf("Enter Value of N:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter Value of Array at Index %d : ",i);
        scanf("%d",&arr[i]);
    }
    int pos,val;
    printf("Enter Position :");
    scanf("%d",&pos);
    printf("Enter Value:");
    scanf("%d",&val);
    if(pos>n){
        printf("Please Input Proper Index");
    }
    else{
        for(int i=n-1;i>=pos-1;i--)
        {
            arr[i+1] = arr[i];
            arr[pos-1] =val;
        }
        printf("Array After Change : \n");
         for(int i = 0; i<n;i++)
    {
        printf("%d \n ",arr[i]);
    }
        
    }

}