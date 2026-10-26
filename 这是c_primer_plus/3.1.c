#include<stdio.h>

int main()
{
    printf("Enter a floating-point value:");
    double a;
    scanf("%lf", &a);
    printf("fixed-point notation:%lf\n", a);
    printf("exponential notation:%e\n", a);
    printf("p notation: %a\n",a);
    return 0;
}