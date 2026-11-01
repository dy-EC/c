#include<stdio.h>
#include<stdlib.h>

void daoxu(double a[],int len)
{
    double* b = (double*)malloc(len * sizeof(double));
    for (int i = 0; i < len;i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < len;i++)
    {
        a[i] = b[len - i - 1];
    }
    free(b);
}

int main()
{
    double a[] = {1.0, 200.0, 3.0};
    int len = sizeof(a) / sizeof(a[0]);

    daoxu(a, len);

    for (int i = 0; i < len; i++) {
        printf("%lf ", a[i]);
    }

    return 0;
}