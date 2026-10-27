#include<stdio.h>
//5.
int main()
{
    printf("输入大写字母：");
    char letter;
    scanf("%c", &letter);
    
   
    for (int i = 'A'; i <= letter; i++) {
        for (int j = i; j < letter; j++) {
            printf(" ");
        }
        for (int k = 'A'; k <= i; k++) {
            printf("%c", k);
        }
        for (int l = i - 1; l >= 'A';l--)
        {
            printf("%c", l);
        }
            printf("\n");
    }
    return 0;
    
}