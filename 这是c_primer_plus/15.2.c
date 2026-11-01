#include <stdio.h>
#include <string.h>

int trans(char* a) {
    int len = strlen(a);
    int num = 0;
    int peiwei = 1;
    for (int i = 1; i < len; i++) {
        peiwei *= 2;
    }
    for (int i = 0; i < len; i++) {
        if (a[i] == '1') {
            num += peiwei;
        }
        peiwei /= 2;
    }
    return num;
}
void trans2(int a, char p[]) {
    
    int j = 0;
    for (int i = 31; i >= 0;i--)
    {
        int x = (a >> i) & 1;
        if(x==0&&j==0&&i!=0)
        {
            continue;
        }

        if(x)
        {
            p[j] = '1';
        }
        else
        {
            p[j] = '0';
        }
        j++;
    }
    p[j] = '\0';
}

int main() {
    char str1[100];
    char str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    int num1 = trans(str1);
    int num2 = trans(str2);

    int A1 = ~num1;
    int A2 = ~num2;

    int B = num1 & num2;
    int C = num1 | num2;
    int D = num1 ^ num2;

    char numA1[100];
    char numA2[100];
    char numB[100];
    char numC[100];
    char numD[100];
    trans2(A1, numA1);
    trans2(A2, numA2);
    trans2(B, numB);
    trans2(C, numC);
    trans2(D, numD);
    printf("%s\n", numA1);
    printf("%s\n", numA2);
    printf("%s\n", numB);
    printf("%s\n", numC);
    printf("%s\n", numD);
    return 0;
}