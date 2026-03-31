#include <stdio.h>

int main(void) {
    int data1;
    double data2;

    scanf("%d/%lf", &data1, &data2);
    printf("%d/%.2f\n", data1, data2);

    return 0;
}