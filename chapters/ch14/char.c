#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c = 'A' + 9;
    printf("%c\n", c);

    return 0;
}

int convert_to_int(char c) {
    int value;

    if (isdigit(c)) {
        value = c - '0';
    } else {
        value = 0;
    }

    printf("%d\n",value);
    return 0;
}
