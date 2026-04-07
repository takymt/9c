#include <stdlib.h>
#include <stdio.h>
#define N 10

int main(void) {
    int *heap;

    heap = (int*)malloc(sizeof(int) * N);
    if (heap == NULL) {
        exit(0);
    }

    for (int i = 0; i < N; i++) {
        heap[i] = i;
    }

    printf("%d\n", heap[5]);

    heap = (int*)realloc(heap, sizeof(int) * N * 2);

    free(heap);

    return 0;
}