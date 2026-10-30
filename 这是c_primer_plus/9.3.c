#include<stdio.h>
// 7.//printf("%d,%d,%d,%d", 'a', 'z', 'A', 'Z');  // 97,122,65,90
int report()
{
    int a[1005];
    int i = 0;

    while ((a[i] = getchar()) != EOF) 
    {
        if (a[i] >= 65 && a[i] <= 90) 
        {
            printf("yes---%d\n", a[i] - 64);
        } 
        else if (a[i] >= 97 && a[i] <= 122) 
        {
            printf("yes---%d\n", a[i] - 96);
        } 
        else
        {
            printf("no\n");
        }
        i++;
    }

    i = 0;
    if (a[i] >= 65 && a[i] <= 90) 
    {
        return a[i] - 64;
    } 
    else if (a[i] >= 97 && a[i] <= 122) 
    {
        return a[i] - 96;
    } 
    else 
    {
        return -1;
    }
    i++;
}
int main()
{
    printf("%d\n", report());
    return 0;
}