#include <stdio.h>

int main(void) {
    int data[10];

    for (int i = 0; i < 10; i++) {
        printf("%d番目の値を入力して下さい: ", i);
        scanf("%d", &data[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("data[%d] = %d\n", i, data[i]);
    }

    return 0;
}