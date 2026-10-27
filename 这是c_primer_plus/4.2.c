#include<stdio.h>
//5.
int main()
{
    double v, s;
    printf("请输入以兆位每秒的下载速度：");
    scanf("%lf", &v);
    printf("请输入以兆字节为单位的文件大小：");
    scanf("%lf", &s);
    //double s' *= 8.0;
    printf(
        "At %.2lf megabits per second, a file of %.2lf megabytes\ndownloads in "
        "%.2lf second.",
        v, s, s * 8 / v);
    return 0;
}