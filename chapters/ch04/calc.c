#include <stdio.h>

int main(void) {
    printf("%d+%d=%d\n", 100, 200, 100 + 200);
    printf("%d-%d=%d\n", 100, 200, 100 - 200);
    printf("%d*%d=%d\n", 100, 200, 100 * 200);
    printf("%d/%d=%.1f\n", 100, 200, 100.0 / 200.0);
    printf("%d%%%d=%d\n", 100, 200, 100 % 200);
    return 0;
}