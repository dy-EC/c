#include <stdio.h>
//9.
double di(double n,int p,double pow)
{
    if (p == 0) 
    {
        return pow;
    }

    pow *= n;

    return di(n, p-1, pow);
}

double power(double n, int p) 
{
    if (!p) 
    {
        if (!n) 
        {
            printf("报告未定义\n");
        }
        return 1;
    } 
    else if (!n) 
    {
        return 0;
    } 
    else if (p > 0) 
    {
        return di(n,p,1);
    } 
    else
    {
        return di(1.0/n,-p,1);
    }
    
}

int main() {
    double x, xpow;
    int exp;
    printf("计算一个数字的n次幂，输入q退出");

    while (scanf("%lf %d", &x, &exp) == 2) {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
    }

    return 0;
}