#include <stdio.h>

int main(void) {
    int score;

    scanf("%d\n", &score);

    if (score > 100) {
        score = 100;
        printf("score is %d\n", score);
    }

    return 0;
}