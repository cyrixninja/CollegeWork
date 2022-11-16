#include <stdio.h>
int main() {
    int numofloop;
    int i;
    printf("Enter Number of times you want to repeat the loop :");
    scanf("%d", &numofloop);
    for (i=1; i<=numofloop;i++)
    {
        printf("%d \n",i);
    }
}