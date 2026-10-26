#include<stdio.h>
//英寸转换厘米
int main()
{
    printf("请输入英寸值:");
    double inch;
    scanf("%lf", &inch);
    printf("%lfcm\n", inch * 2.54);
    return 0;
}
