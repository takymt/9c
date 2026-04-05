#include <stdio.h>

enum {
    OLYMPIC_NON,
    OLYMPIC_SUMMER,
    OLYMPIC_WINTER,
};

int check_olympic_kind(int year);

int main(void) {
    int year;
    int olympic_kind;

    printf("西暦年を入力して下さい: ");
    scanf("%d", &year);

    olympic_kind = check_olympic_kind(year);
    switch (olympic_kind) {
        case OLYMPIC_SUMMER:
            printf("%d年は夏季オリンピック開催年です\n", year);
            break;
        case OLYMPIC_WINTER:
            printf("%d年は冬季オリンピック開催年です\n", year);
            break;
        case OLYMPIC_NON:
            printf("%d年はオリンピック開催年ではありません\n", year);
            break;
        default:
            return 1;
    }

    return 0;
}

int check_olympic_kind(int year) {
    if (year % 4 == 0) {
        return OLYMPIC_SUMMER;
    } else if (year % 2 == 0) {
        return OLYMPIC_WINTER;
    } else {
        return OLYMPIC_NON;
    }
}
