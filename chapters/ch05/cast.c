# include <stdio.h>

int main(void) {
    double rate;
    int raw_price;

    rate = 1.05;
    raw_price = 198;

    printf("final price is %d\n", (int)(raw_price * rate));

    return 0;
}