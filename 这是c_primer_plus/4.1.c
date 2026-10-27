#include <stdio.h>
#include <string.h>
// 2.
int main() 
{
    char a[200];
    scanf("%s", a);

    printf("\"%s\"\n", a);
    printf("\"%20s\"\n", a);
    printf("\"%-20s\"\n", a);
    printf("\"%*s\"\n", (int)strlen(a) + 3, a);
    return 0;
}