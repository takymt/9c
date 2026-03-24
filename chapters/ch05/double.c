#include <stdio.h>

int main(void) {
    double left, right;

    left = 3;
    right = 10;

    printf("%.2f\n", left + right);
    printf("%.2f\n", left - right);
    printf("%.2f\n", left * right);
    printf("%.2f\n", left / right);
    // printf("%.2f\n", left % right);  // cannot use double

    return 0;
}