#include <stdio.h>

void convert(char *ch)
{
 int x = 0;
 while(ch[x]!='\0'){
    if(ch[x]>='a' && ch[x]<='z')
    {
        ch[x]=ch[x]-32;
    }
    x++;
 }
}

int main()
{
    char str[100];
    printf("Enter a String :");
    scanf("%s",str);
    printf("\n Entered String: %s ",str);
    convert(str);
    printf("\n Processed String: %s ",str);
    return 0;


}