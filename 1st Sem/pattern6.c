#include <stdio.h>

void main()
{
int x,y;
for(x=0;y<=4;x++){
    for(y=0;y<=x;y++){
        printf("%c",(char)(65+x));
    }
    printf("\n");
}

}