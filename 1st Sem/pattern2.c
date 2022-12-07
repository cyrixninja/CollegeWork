#include <stdio.h>

void main()
{
int x,y;
for(x=1;y<=5;++x){
    for(y=1;y<=x;++y){
        printf("* ");
    }
    printf("\n");
}

}