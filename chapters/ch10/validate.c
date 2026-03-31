#include <stdio.h>

int main(void) {
    int score;

    while (1) {
        printf("テストの点数を入力して下さい:");
        scanf("%d", &score);

        if (score >= 0 && score <= 100) break;
    }

    return 0;
}