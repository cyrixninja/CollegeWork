//1.1 Perform the following operations on Array
//Deletion of specific element at an index
#include <stdio.h>

int main(){
    int arr[100],pos,i,n;
    printf("Enter Number of Elements in Array :");
    scanf("%d",&n);
    printf("Enter %d Elements \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the location where you want to delete :");
    scanf("%d",&pos);
    if(pos>=n+1){
        printf("Can't delete.Index not found");
    }
    else{
        for(i=pos-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("New Array is \n");
    for(int i = 0; i<n-1;i++)
    {
        printf("%d \n ",arr[i]);
    }
    }

}