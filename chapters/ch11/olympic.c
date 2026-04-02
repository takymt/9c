#include <stdio.h>

int isOlympicYear(int);

int main(void) {
    int year, hold;

    scanf("%d\n", year);
    hold = isOlympicYear(year);

    switch (hold) {
        case 0:
            printf("夏季オリンピック\n");
            break;
        case 1:
            printf("冬季オリンピック\n");
            break;
        case 2:
            printf("開催なし");
            break;
    }

    return 0;
}

int isOlympicYear(int year) {
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return 2;
    }
}