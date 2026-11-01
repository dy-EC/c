#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()
{
    printf("你需要输入多少个单词？：\n");
    int n;
    scanf("%d", &n);

    char** a = (char**)malloc(n * 8);

    for (int k = 0; k < n;k++)
    {
    int ch;
    char word[1000];
    int i = 0;
    while ((ch = getchar()) != ' ' && ch != EOF) {
        word[i] = ch;
        i++;
    }
    word[i] = '\0';
    a[k] = (char*)malloc(i + 1);
    strcpy(a[k], word);
    }
    
    for (int i = 0; i < n;i++)
    {
        printf("%s\n", a[i]);
    }
        return 0;
}