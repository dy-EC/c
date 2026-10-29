#include <stdio.h>

int main() {
    int ch;
    int a[1005];
    int i = 0;
    int count = 0;
    // printf("%d", ' ');

    while ((ch = getchar()) != EOF) {
        if (ch == 32) {
            a[i] = count;
            count = 0;
            i++;
        } else {
            count++;
        }
    }

    if (count > 0) {
        a[i] = count;
        i++;
    }
    double average = 0;
    for (int n = 0; n < i; n++) {
        average += a[n];
    }
    average /= i;
    printf("%lf\n", average);
    return 0;
}