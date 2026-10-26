#include<stdio.h>
//5.
void br()
{
    printf("Brazil, Russia");
}

void ic()
{
    printf("India, China");
}

int main()
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    return 0;
}