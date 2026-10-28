#include<stdio.h>
#include<string.h>
//7.
int main()
{
    char a[1005];
    scanf("%s", a);
    int len = (int)strlen(a);
    for (int i = len - 1; i >= 0;i--)
    {
        printf("%c", a[i]);
    }
        return 0;
}