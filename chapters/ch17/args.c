#include <stdio.h>

int main(int argc, char *argv[]) {
    for (size_t i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            switch (argv[i][1]) {
                case 'a':
                    printf("-a option\n");
                    break;
                case 's':
                    printf("-s option\n");
                    break;
                default:
                    printf("unknown option: -%c\n", argv[i][1]);
                    break;
            }
        }
    }

    return 0;
}