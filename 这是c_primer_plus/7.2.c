#include<stdio.h>
//10.
#define qwer "美元按15%%计，超出部分按28%%计"
#define WAGE1 17850
#define WAGE2 23900
#define WAGE3 29750
#define WAGE4 14875

int main()
{
    while(1)
    {
        printf("--------------------------------------\n");
        printf("输入数字以选择税金规格：\n");
        printf("1）单身：    %d" qwer "\n", WAGE1);
        printf("2）户主：    %d" qwer "\n", WAGE2);
        printf("3）已婚共有：%d" qwer "\n", WAGE3);
        printf("4）已婚离异：1%d" qwer "\n", WAGE4);
        printf("5）quit\n--------------------------------------\n");

        int n;
        scanf("%d", &n);
        if (n == 5)
            break;

        double wage;
        scanf("%lf", &wage);

        double shui;
        switch (n) {
            case 1:
                if (wage > WAGE1) {
                    shui = WAGE1 * 0.15 + (wage - WAGE1) * 0.28;
                } else {
                    shui = wage * 0.15;
                }
                break;
            case 2:
                if (wage > WAGE2) {
                    shui = WAGE2 * 0.15 + (wage - WAGE2) * 0.28;
                } else {
                    shui = wage * 0.15;
                }
                break;
            case 3:
                if (wage > WAGE3) {
                    shui = WAGE3 * 0.15 + (wage - WAGE3) * 0.28;
                } else {
                    shui = wage * 0.15;
                }
                break;
            case 4:
                if (wage > WAGE4) {
                    shui = WAGE4 * 0.15 + (wage - WAGE4) * 0.28;
                } else {
                    shui = wage * 0.15;
                }
                break;
                
        }
        printf("税金：%lf\n", shui);

        printf("---------------\n");
        printf("输入数字以继续：\n");
        printf("1）继续\n");
        printf("5）quit\n---------------\n");
        int k;
        scanf("%d", &k);
        if(k==5)
            break;
    }
    return 0;
}