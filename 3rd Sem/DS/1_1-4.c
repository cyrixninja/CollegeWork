//1.1 Perform the following operations on Array
//Append one array to the other
#include <stdio.h>
int mergearr(int a[],int b[],int asize,int bsize)
{
    int arr_total = asize+bsize;
    int c[arr_total],i,j;
    for(i=0;i<asize;i++){
        c[i] = a[i];
    }
    for(i=0,j=asize;j<arr_total && i<bsize;i++,j++)
    {
        c[j] = b[j];
    }
    printf("Array after Merging : ");
    for(int k=0;k<arr_total;k++)
    {
        printf("%d",c[k]);
    }
}
int main(){
    int asize;
    int bsize;
    printf("Enter Size of Array 1 :");
    scanf("%d",&asize);
    printf("Enter Size of Array 2 :");
    scanf("%d",&bsize);
    int a[asize],b[bsize];
    for(int i = 0;i<asize;i++)
    {
        printf("Enter Value in Array 1 at Index %d :",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<bsize;i++)
    {
        printf("Enter Value in Array 2 at Index %d :",i);
        scanf("%d",&b[i]);
    }
    printf("%d \n",mergearr(a,b,asize,bsize));
    return 0;
}