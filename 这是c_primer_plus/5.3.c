#include <stdio.h>
//9.

void Temperatures(double F)
{
    const double xishu1 = 5.0 / 9.0;
    const double xishu2 = 32.0;
    const double xishu3 = 273.16;

    double C = xishu1 * (F - xishu2);
    double K = C + xishu3;
    printf("华氏度：%.2lf\n", F);
    printf("摄氏度：%.2lf\n", C);
    printf("开氏度：%.2lf\n", K);
}

int main()
{
    double F;
    while (1==scanf("%lf", &F))
    {
        Temperatures(F);
    }
    return 0;
}