#include<stdio.h>

int main()
{
    printf("请输入夸脱数：");
    double single = 3e-23;
    double n;
    scanf("%lf", &n);
    printf("%e\n", n * 950.0 / single);
}