//1.1 Perform the following operations on Array
//Compare two arrays
#include <stdio.h>
int compare(int *a,int *b,int n)
{
    int i,flag = 0;
    for(i=0;i<n;i++)
    {
        if(*a != *b)
        {
            flag =1;
            break;
        }
        a++;
        b++;
    }
    if(flag==1)
    {
        printf("\n Both arrays are not equal");
    }
    else
    {
        printf("\n Both arrays are equal \n ");
    }
}
int main(){
    int a[100],b[100];
    int n,i;
    printf("Enter a Number between 1 and 10 : ");
    scanf("%d",&n);
    printf("Enter %d numbers in Array 1 : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d numbers in Array 2 : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }    
    compare(a,b,n);
    return 0 ;

    
}