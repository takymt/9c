#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ATTEMPT 10
#define MY_RAND_MIN 1
#define MY_RAND_MAX 10

int rand_min_max(int min, int max) {
    static int flag;

    if (flag == 0) {
        srand((unsigned int)time(NULL));
        flag = 1;
    }

    return min + (rand() * ((max - min + 1.0) / (RAND_MAX + 1.0)));
}

int main(void) {
    int n;

    for (size_t i = 0; i < ATTEMPT; i++) {
        n = rand_min_max(MY_RAND_MIN, MY_RAND_MAX);
        printf("%d\n", n);
    }

    return 0;
}