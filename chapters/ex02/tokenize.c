#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define STR_LEN 100
#define VALUES_LEN 10
#define SEP_CAHR ",\n"

int main(void) {
    char str[STR_LEN];
    char *token;
    int values[VALUES_LEN];
    size_t i, j;

    fgets(str, sizeof(str), stdin);

    token = strtok(str, SEP_CAHR);

    for (i = 0; i < VALUES_LEN; i++) {
        if (token == NULL) {
            break;
        } else {
            values[i] = atoi(token);
        }

        token = strtok(NULL, SEP_CAHR);
    }

    for (j = 0; j < i; j++) {
        printf("%d\n", values[j]);
    }

    return 0;
}