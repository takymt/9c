#include <stdio.h>

void func(int *p);

int main(void) {
    int value = 10;
    printf("value = %d\n", value);
    func(&value);
    printf("value = %d\n", value);
    return 0;
}

void func(int *p) {
    printf("p = %p\n", p);
    *p = 100;
    printf("*p = %d\n", *p);
}