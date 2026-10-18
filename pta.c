#include<stdio.h>

int main()
{
    int c = 0;
    int a[1000];
    while (1) {
        scanf("%d", &a[c]);
        if(a[c]<=0)
        {
            break;
        }
        else if(a[c]%2!=0)
        {
            c++;
        }
    }
    int count = 0;
    for (int i = 0; i < c;i++)
    {
        count += a[i];
    }
    printf("%d", count);
    return 0;
}