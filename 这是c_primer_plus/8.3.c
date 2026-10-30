#include<stdio.h>
//3.
int main()
{
    //printf("%d,%d,%d,%d", 'a', 'z', 'A', 'Z');  // 97,122,65,90

    int ch;
    int a=0, A=0;
    while ((ch = getchar()) != EOF) {
        if(ch>=65)
        {
            if(ch<=122)
            {
                if(ch<=90)
                {
                    A++;
                }
                else if(ch>=97)
                {
                    a++;
                }
            }
        }
    }
    printf("小写：%d,大写：%d\n", a, A);
    return 0;
}