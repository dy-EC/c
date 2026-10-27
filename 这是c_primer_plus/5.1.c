#include<stdio.h>
//4.
int main()
{
    double tall;
    printf("Enter a height in centimeters: ");
    scanf("%lf", &tall);

    double inch = tall / 2.54;
    int feets = (int)(inch / 12.0);
    printf("%.1lf cm = %d feets, %.1lf inches\n", tall, feets, inch - feets * 12);

    while(1)
    {
        printf("Enter a height in centimeters (<=0 to quit) : ");
       
        scanf("%lf", &tall);
        if(tall>0)
        {
            inch = tall / 2.54;
            feets = (int)(inch / 12.0);
            printf("%.1lf cm = %d feets, %.1lf inches\n", tall, feets, inch - feets * 12);
           
        } else {
            printf("bye\n");
            break;
        }
    }
    return 0;
}