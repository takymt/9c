#include <stdio.h>

int main(void) {
    int a = 1, b = 300, c = 50000;
    double e = 1.4142, f = 3.14159265, g = 1.7320504;

    printf("Aは%06dです\n", a);
    printf("Bは%06dです\n", b);
    printf("Cは%06dです\n", c);

    printf("Eは%2.2f です\n", e);
    printf("Fは%2.2f です\n", f);
    printf("Gは%2.2f です\n", g);

    return 0;
}