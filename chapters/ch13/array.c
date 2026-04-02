#include <stdio.h>
#include <memory.h>

int print_array(void);
int copy_array(void);
int copy_array_w_memcpy(void);

int main(void) {
    print_array();
    copy_array();
    copy_array_w_memcpy();

    return 0;
}

int print_array(void) {
    printf("--- print_array ---\n");

    int array[] = { 42, 79, 13, 75, 19 };
    int len = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < len; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}

int copy_array(void) {
    printf("--- copy_array ---\n");

    int array1[] = { 42, 79, 13, 19, 41 };
    int array2[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array2) / sizeof(array2[0]);

    for (int i = 0; i < size; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    for (int i = 0; i < size; i++) {
        array2[i] = array1[i];
    }

    for (int i = 0; i < size; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}

int copy_array_w_memcpy(void) {
    printf("--- copy_array_w_memcpy ---\n");

    int array1[] = { 42, 79, 13, 19, 41 };
    int array2[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(array2) / sizeof(array2[0]);

    for (int i = 0; i < size; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    memcpy(array2, array1, sizeof(array1));

    for (int i = 0; i < size; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}