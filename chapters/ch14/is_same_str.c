#include <stdio.h>

int main(void) {
    char str1[256], str2[] = "MARIO";

    scanf("%s", str1);

    for (int i = 0; i < 5; i++) {
        if (str1[i] == str2[i]) {
            printf("%s\n", "同じ");
        } else {
            printf("%s\n", "同じ");
        }
    }
}