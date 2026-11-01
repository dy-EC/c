#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 6
int main() {
    srand(time(NULL));
    int a[10]={0};
    
    for (int i = 0; i < 1000; i++) {
        a[rand() % 10 ]++;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}
//种子不同 生成次数不相同