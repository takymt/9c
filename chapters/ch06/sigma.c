#include <stdio.h>

int main(void) {
    int min, max, sum;

    scanf("%d,%d", &min, &max);

    sum = (min + max) * (max - min + 1) / 2;

    printf("%d", sum);
}