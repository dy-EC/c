#include<stdio.h>
//1.
int main()
{
    int ch,count=0;
    while((ch=getchar())!=EOF)
    {
        count++;
    }
    printf("%d\n", count);
    return 0;
}