#include<stdio.h>
//9.
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n;i++)
    {
        int c = 0;
        for (int j = 2; j < i; j++) {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(!c)
        {
            printf("%d\n",i);
        }
    }
        return 0;
}