#include<stdio.h>

double power(double n,int p)
{
    if(!p)
    {
        if(!n)
        {
            printf("报告未定义\n");
        }
        return 1;
    }
    else if(!n)
    {
        return 0;
    }
    else if(p>0)
    {
        double pow = 1;
        int i;
        for (i = 1; i <= p; i++) {
            pow *= n;
        }
        return pow;
    }
    else if(p<0)
    {
        double pow = 1;
        int i;
        n = 1 / n;
        for (i = 1; i <= -p; i++) {
            pow *= n;
        }
        return pow;
    }
}

int main()
{
    double x, xpow;
    int exp;
    printf("计算一个数字的n次幂，输入q退出");

    while (scanf("%lf %d",&x,&exp) == 2) 
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
    }

    return 0;
}