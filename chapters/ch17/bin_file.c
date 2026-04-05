#include <stdio.h>

int main(void) {
    FILE *file;
    int buf = 100;
    int buf_r;

    file = fopen("chapters/ch17/test.dat", "w+b");
    if (file == NULL) {
        return 1;
    }

    fwrite(&buf, sizeof(buf), 1, file);

    rewind(file);
    fread(&buf_r, sizeof(buf_r), 1, file);

    fclose(file);

    printf("%d\n", buf_r);

    return 0;
}