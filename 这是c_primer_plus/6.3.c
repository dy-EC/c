#include<stdio.h>

int main()
{
    double a[8];
    double b[8];
    printf("请输入八个值并且以空格隔开：\n");
    for (int i = 0; i < 8; i++) 
    {
        scanf("%lf", &a[i]);
    }
    for (int i = 0; i < 8;i++)
    {
        if(i==0)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = a[i] + b[i - 1];
        }
    }

    //算一下最大值小数点前有多少位
    int chang = 0;
    double num = b[7];
    while (num>1)
    {
        num /= 10.0;
        chang++;
    }

    for (int i = 0; i < 8;i++)
    {
        printf("%-*.2lf", chang + 5, a[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%-*.2lf", chang + 5, b[i]);
    }
    printf("\n");
    return 0;
}