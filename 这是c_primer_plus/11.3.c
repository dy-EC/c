#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//9
void func(char *a)
{
    char* b = (char*)malloc(strlen(a) + 1);
    strcpy(b, a);
    int n = strlen(a);

    for (int i = 0; a[i] != '\0'; i++) 
    {
        b[n-i-1] = a[i];
    }
    for (int i = 0; a[i] != '\0'; i++) 
    {
        a[i] = b[i];
    }
    free(b);
}

int main()
{
    char a[1000];
    scanf("%s", a);

    func(a);

    printf("%s", a);
    return 0;
}