#include<stdio.h>
//6.
void paixu(double* p1,double*p2,double*p3)
{
    if(*p1>*p2)
    {
        double t = *p1;
        *p1 = *p2;
        *p2 = t;
    }
    if (*p1 > *p3) {
        double t = *p1;
        *p1 = *p3;
        *p3 = t;
    }
    if (*p2 > *p3) {
        double t = *p3;
        *p3 = *p2;
        *p2 = t;
    }
}

int main() {
    double a[3];
    for (int i = 0; i < 3;i++)
    {
        scanf("%lf", &a[i]);
    }

    paixu(&a[0], &a[1], &a[2]);
    for (int i = 0; i < 3; i++) {
        printf("%lf ", a[i]);
    }

    return 0;
}