#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[64];
    double height;
    double weight;
    int enrollment_year;
    int clas;
};

int main(void) {
    struct student student1;
    struct student student2;
    size_t max_str_len = strlen("enrollment_year");

    student1.id = 123;
    strcpy(student1.name, "MARIO");
    student1.height = 172.5;
    student1.weight = 63.4;
    student1.enrollment_year = 10;
    student1.clas = 3;

    printf("%-*s: %d\n", (int)max_str_len, "id", student1.id);
    printf("%-*s: %s\n", (int)max_str_len, "name", student1.name);
    printf("%-*s: %.1f\n", (int)max_str_len, "height", student1.height);
    printf("%-*s: %.1f\n", (int)max_str_len, "weight", student1.weight);
    printf("%-*s: %d\n", (int)max_str_len, "enrollment_year", student1.enrollment_year);
    printf("%-*s: %d\n", (int)max_str_len, "clas", student1.clas);

    student2 = student1;
    printf("\n");
    printf("%-*s: %d\n", (int)max_str_len, "student2.id", student2.id);

    return 0;
}