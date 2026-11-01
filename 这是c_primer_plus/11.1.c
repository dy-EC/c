#include<stdio.h>
#include<stdlib.h>
//1.
void func(char* a, int n)
{
    int i = 0;
    int enter = getchar();
    int ch;
    while ((i < n) && (ch = getchar()) != EOF) 
    {
        a[i] = (char)ch;
        i++;
    }
        a[i] = '\0';
}

int main()
{
    printf("你想要输入几个字符？：\n");
    int n;
    scanf("%d", &n);

    char* a = (char*)malloc((n+1) * sizeof(char));

    func(a, n);

    printf("\n你输入了：%s\n", a);

    free(a);

    return 0;
}