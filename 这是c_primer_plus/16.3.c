#include<stdio.h>

#define N 25
#define SPACE ' '
#define PS() printf(" ")
#define BIG(X) ((X)+3)
#define SUMSQ(X,Y) (((X)*(X))+((Y)*(Y)))

int main()
{
    int n = N;
    printf("%d\n", n);

    printf("%c\n",SPACE);

    PS()

    n = BIG(n);
    printf("%d\n",n);

    int x = 2, y = 3;
    printf("%d\n", SUMSQ(x, y));
    return 0;
}