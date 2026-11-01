#include<stdio.h>

int func(int n)
{
    int count = 0;
    while(n!=0)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", func(n));
    return 0;
}