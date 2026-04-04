#include <stdio.h>

int main(void) {
    int sum = 0, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};

    for (int *data = array; data != &array[10]; data++) {
        sum += *data;
    }

    printf("%d\n", sum);

    return 0;
}