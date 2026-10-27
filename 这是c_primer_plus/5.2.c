#include<stdio.h>
//8.
int main()
{
    printf("This program computes moduli.\nEnter an integer to serve as the second operand: ");
    int chushu, beichushu;
    scanf("%d", &chushu);

    printf("Now enter the first operand:");
    scanf("%d", &beichushu);
    printf("%d %% %d is %d\n", beichushu, chushu, beichushu % chushu);
    while(1)
    {
        printf("Enter next number for fist operand(<= 0 to quit):");
        scanf("%d", &beichushu);
        if(beichushu>0)
        {
        printf("%d %% %d is %d\n", beichushu, chushu, beichushu % chushu);
        }
        else
        {
            printf("Done\n");
            break;
        }
    }
    return 0;
}