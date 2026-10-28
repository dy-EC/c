#include<stdio.h>
//1.
int main()
{
    char now;
    char a[1005];
    int nspace = 0;
    int nenter = 0;
    int other = 0;
    while (1) {
        scanf("%c", &now);
        if(now=='#')
        {
            break;
        }
        else if(now==' ')
        {
            nspace++;
        } 
        else if (now == '\n')
        {
            nenter++;
        }
        else
        {
            other++;
        }
    }
    printf("空格=%d,回车=%d,其他=%d,", nspace, nenter, other);

    return 0;
}
