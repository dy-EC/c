#include<stdio.h>

int main()
{
    char a;
    while((a=getchar())!='#')
        putchar(a);
    return 0;
}