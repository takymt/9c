#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "MARIO""MARIO";

    char str2[] = "MARIO";
    char str3[] = "LUISI";

    strcat(str2, str3);

    printf("%s\n", str);
    return 0;
}