#include<stdio.h>

typedef void(*p)();

void A()
{
    printf("调用函数A\n");
}
void B() {
    printf("调用函数B\b");
}

int main() {
    p a[2] = {A, B};

    printf("选择：\n");
    printf("a) 调用A函数\n");
    printf("b) 调用B函数\n");

    char ch;
    scanf("%c", &ch);


    switch(ch)
    {
        case 'a':
            a[0]();
            break;
        case 'b':
            a[1]();
            break;
    }
    return 0;
}