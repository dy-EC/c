#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char id[20];
    struct {
        char name[20];
        char midname[20];
        char xing[20];
    } NAME;
} SHENFEN;

void func(SHENFEN *a)
{
    for (int i = 0; i < 5; i++) {
        printf("%s, %s %c. -- %s\n", a[i].NAME.xing, a[i].NAME.name,
               a[i].NAME.midname[0], a[i].id);
    }
}
int main()
{
    SHENFEN a[5] = {
        {"111", "name", "midname", "xing"},
        {"222","zhang","ha","jerry"},
        {"333","wang","wa","tom"},
        {"444","cherry","la","key"},
        {"555","nihao","ka","le"},
    };
    func(a);
    // for (int i = 0; i < 5;i++)
    //     {
    //     printf("%s, %s %c. -- %s\n", a[i].NAME.xing, a[i].NAME.name,
    //     a[i].NAME.midname[0], a[i].id );
    //     }
    return 0;
}