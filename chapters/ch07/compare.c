#include <stdio.h>

int main(void) {
    int value = 10;

    if (value == 10)
        printf("value is 10\n");

    if (value != 20)
        printf("value is not 20\n");

    if (value >= 5 && value <= 20)
        printf("value is in a good range");
}