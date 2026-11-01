#include <stdio.h>
#include <stdlib.h>

void func(char* a) 
{
    int ch;
    while(1)
    {
        if ((ch = getchar()) != ' ' && ch != '\n' && ch != '\t'&& ch!=EOF) 
        {
            a[0] = ch;
            int i = 1;
            while ((ch = getchar()) != ' ' && ch != '\n' && ch != '\t' && ch != EOF)
            {
                a[i] = ch;
                i++;
            }
            a[i] = '\0';
            break;
        }
    }
    while (ch != EOF && ch != '\n')
        {
            ch = getchar();
        }
}

int main() 
{
    char a[100];
    func(a);

    printf("%s\n", a);

    return 0;
}