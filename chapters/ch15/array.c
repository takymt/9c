#include <stdio.h>

double get_average(int data[]);

int main(void) {
    double avg;
    int data[5] = { 15, 98, 98, 17, 42 };

    printf("array[3] = %d\n", data[3]);
    avg = get_average(data);
    printf("array[3] = %d\n", data[3]);

    printf("avg = %.2f\n", avg);

    return 0;
}

double get_average(int data[]) {
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += data[i];
    }

    data[3] = 111;
    return (double)sum / 10;
}