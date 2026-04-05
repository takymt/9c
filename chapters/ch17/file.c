#include <stdio.h>

int main(void) {
    FILE *file;
    int i, j;

    file = fopen("chapters/ch17/test.txt", "r");

    fscanf(file, "%d,%d", &i, &j);
    printf("i: %d\n", i);
    printf("j: %d\n", j);

    fclose(file);

    return 0;
}