#include<stdio.h>
#define EVEN_GT(x,y) (x>y&&(x%2==0))
int main()
{
    int a , b;
    scanf("%d %d", &a, &b);
    int result = EVEN_GT(a, b);
    printf("%d\n", result);
    return 0;
}