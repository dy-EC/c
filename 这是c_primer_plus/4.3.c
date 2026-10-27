#include<stdio.h>
#include<string.h>
//6.
int main()
{
    char a[1005];
    char b[1005];
    printf("请输入名：");
    scanf("%s", a);
    printf("请输入姓：");
    scanf("%s", b);

    printf("%s %s\n", a, b);
    printf("%*d %*d\n", (int)strlen(a), (int)strlen(a), (int)strlen(b),
           (int)strlen(b));
    printf("%s %s\n", a, b);
    printf("%-*d %-to*d\n", (int)strlen(a), (int)strlen(a), (int)strlen(b),
           (int)strlen(b));

    return 0;
}