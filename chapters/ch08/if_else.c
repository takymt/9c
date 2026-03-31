#include <stdio.h>

int main(void) {
    int value;

    scanf("%d", &value);

    if (value == 10) {
        printf("入力値は10です");
    } else if (value > 10) {
        printf("入力値は10より大きいです");
    } else {
        printf("入力値は10より小さいです");
    }
}