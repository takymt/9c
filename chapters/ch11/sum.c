#include <stdio.h>

int sum(int, int);

int main(void) {
    printf("%d\n", sum(1, 100));
    return 0;
}

int sum(int min, int max) {
    int num;

    num = (min + max) * (max - min + 1) / 2;

    return num;
}