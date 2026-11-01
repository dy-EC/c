#include <stdio.h>
//11.
void printarr(int a[][5],int len)
{
    for (int i = 0; i < len;i++)
    {
        for (int j = 0; j < 5;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void doublee(int a[][5], int len) {
    for (int i = 0; i < len; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            a[i][j] *= 2;
        }
    }
}

int main()
{
    int arr[3][5] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    int len = sizeof(arr) / sizeof(arr[1]);
    printarr(arr, len);
    doublee(arr, len);
    printarr(arr, len);

    return 0;
}