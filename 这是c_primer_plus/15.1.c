#include<stdio.h>
#include<string.h>

int trans(char* a)
{
    int len=strlen(a);
    int num = 0;
    int peiwei = 1;
    for (int i = 1; i < len; i++) 
    {
        peiwei *= 2;
    }
        for (int i = 0; i < len; i++) {
            if (a[i] == '1') {
                num += peiwei;
            }
            peiwei /= 2;
        }
        return num;
}

int main()
{
    char str[] = "01001001";
    int num = trans(str);
    printf("%d\n", num);
    return 0;
}