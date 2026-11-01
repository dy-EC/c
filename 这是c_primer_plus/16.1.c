#include<stdio.h>
//2.

#define max(a,b) a>b?a:b
int main()
{
    int a = 1, b = 2;
    int max = max(a, b);
    printf("%d\n", max);
    return 0;
}