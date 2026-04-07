#include <stdio.h>

void caesar_crypto(const char *finame, const char *foname, int key) {
    FILE *fi, *fo;
    int value;

    fi = fopen(finame, "rb");
    if (fi == NULL) return;

    fo = fopen(foname, "wb");
    if (fo == NULL) {
        fclose(fi);
        return;
    };

    while ((value = getc(fi)) != EOF) {
        putc((value ^ key), fo);
    }

    fclose(fi);
    fclose(fo);
}