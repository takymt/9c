#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[] = "123";
    char str2[10];
    char str3[10];
    char str4[10];
    int value = atoi(str);

    char str5[32];
    int i;
    int len;

    scanf("%32s", str5);

    for (i = 0; str[i] != '\0'; i++);
    len = strlen(str);

    printf("%d\n", i);
    printf("%d\n", len);

    strcpy(str2, "MARIO");
    strncpy(str3, str, 3);
    str3[3] = '\0';

    sprintf(str4, "%s%s\n", str, str2);

    printf("%d\n", value);
    printf("%s\n", str2);

    return 0;
}