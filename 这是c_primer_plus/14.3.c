#include<stdio.h>


double func1(double a)
{
    return a * 2;
}

double func2(double a)
{
    return a + 1.0;
}

void transform(double *source,double *target,int len,double (*func)(double))
{
    for (int i = 0; i < len;i++)
    {
        target[i] = func(source[i]);
    }
}
int main()
{
    double a[3] = {1.1, 2.2, 3.3};
    double b[3] = {0};
    int len = sizeof(a) / sizeof(double);
    transform(a, b, len, func1);

    for (int i = 0; i < len; i++) 
    {
        printf("%lf\n", b[i]);
    }
    printf("\n");

    transform(a, b, len, func2);

    for (int i = 0; i < len; i++) {
        printf("%lf\n", b[i]);
    }

        return 0;
}