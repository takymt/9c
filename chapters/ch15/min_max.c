#include <stdio.h>

void get_stat(int nums[], int *min, int *max);

int main(void) {
    int nums[10] = {10, 3, 4, 19, 23, 51, -1, 1, 18, 22};
    int min;
    int max;

    get_stat(nums, &min, &max);

    printf("min: %d\n", min);
    printf("max: %d\n", max);

    return 0;
}

void get_stat(int nums[], int *min, int *max) {
    int i = 0;

    *max = 0;
    *min = 100;

    while (nums[i] != -1) {
        if (nums[i] < *min) *min = nums[i];
        if (nums[i] > *max) *max = nums[i];
        i++;
    }
}