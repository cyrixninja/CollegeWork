#include <stdio.h>

int a = 1;
int b = 100;
void func1()
{
printf("\n %d",a);
printf("\n %d",b);
a++;
b++;
}

void main()
{
    func1();
    func1();
    func1();
}