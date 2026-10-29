#include<stdio.h>
//2.
int main()
{
    int ch;
    int n = 0;
    while ((ch = getchar()) != EOF) {
        printf("%c ---- %d   ", ch, ch);
        n++;
        if(n==10)
            printf("\n");
    }
    return 0;
}