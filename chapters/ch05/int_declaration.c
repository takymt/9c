#include <stdio.h>

int main(void) {
    int left;
    int right;
    int sum;
    int sum_plus_1;

    left = 10;
    right = 3;
    sum = left + right;

    printf("%d + %d = %d\n", left, right, sum);
    printf("%d - %d = %d\n", left, right, left - right);
    printf("%d * %d = %d\n", left, right, left * right);
    printf("%d / %d = %.1f\n", left, right, (double)left / right);
    printf("%d %% %d = %d\n", left, right, left % right);

    sum += 10;
    printf("%d\n", sum);

    sum++;
    printf("%d\n", sum);

    sum--;
    printf("%d\n", sum);

    sum /= 10;
    printf("%d\n", sum);

    return 0;
}