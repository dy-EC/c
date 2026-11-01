#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//5.
int main()
{
    srand(time(NULL));
    int a[100];
    for (int i = 0; i < 100;i++)
    {
        a[i] = rand() % 10+1;
    }
    for (int i = 0; i < 100;i++)
    {
        for (int j = i + 1; j < 100;j++)
        {
            if(a[i]<a[j])
            {
                int t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    for (int i = 0; i < 100;i++)
    {
        printf("%d\n", a[i]);
    }
        return 0;
}