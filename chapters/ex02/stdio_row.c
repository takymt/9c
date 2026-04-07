#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define STR_LEN 100

int main(void) {
    char str[STR_LEN];
    int val;

    fgets(str, sizeof(str), stdin);
    val = atoi(str);

    printf("%d\n", pow(val, 2));

    return 0;
}