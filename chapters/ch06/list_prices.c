#include <stdio.h>

int main(void) {
    int price;
    double discount10, discount30, discount50, discount80;

    printf("金額を入力して下さい:");
    scanf("%d", &price);

    discount10 = price * 9/10;
    discount30 = price * 7/10;
    discount50 = price * 5/10;
    discount80 = price * 2/10;
}