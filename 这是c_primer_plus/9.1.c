#include<stdio.h>
//1.
double min(double a,double b)
{
    return (a < b ? a : b);
}

int main()
{
    double num1, num2;
    scanf("%lf %lf", &num1, &num2);
    printf("%lf", min(num1, num2));
    return 0;
}