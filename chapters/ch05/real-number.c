#include <stdio.h>

int main(void) {
    int integer;
    double real;

    integer = 10;
    real = 3.0;

    printf("%.2f\n", integer + real);
    printf("%.2f\n", integer * real);

    return 0;
}