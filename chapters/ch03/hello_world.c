#include <stdio.h>

void print_hello_world(void) {
    printf("Hello\n");
    printf("world\n");
}

void print_operation_systems(void) {
    printf("Windows\tMicrosoft\n");
    printf("MaxOS\tApple\n");
}

int main(void) {
    print_hello_world();
    print_operation_systems();
    return 0;
}