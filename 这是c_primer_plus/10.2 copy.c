#include<stdio.h>

double average(double arr[],int len)
{
    double average = 0;

    for (int i = 0; i < len; i++) 
    {
        average += arr[i];
    }
    average /= 5;
    return average;
}

double MAX(double arr[][5],int len)
{
    double max = arr[0][0];
    for (int i = 0; i < len; i++) 
    {
        for (int j = 0; j < 5;j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{
    printf("请输入三组数据，每组包含5个double类型的数：\n");
    double arr[3][5] = {0};

    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 5;j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }

    int len = sizeof(arr) / sizeof(arr[0]);
    int lenl = sizeof(arr[0]) / sizeof(arr[0][0]);
    double AVE = 0;
    for (int i = 0; i < len; i++) {
        double average1 = average(arr[i], lenl);
        printf("average %d = %lf\n", i + 1, average1);
        AVE += average1;
    }
    AVE /= 3;
    printf("所有平均：%lf\n", AVE);

    double max = MAX(arr, len);

    
    printf("max:%lf", max);
    return 0;
}