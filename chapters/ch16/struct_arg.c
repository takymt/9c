#include <stdio.h>

typedef struct {
    int id;
    char name[64];
    double height;
    double weight;
} Student;

void print_student(const Student *student);

int main(void) {
    Student student = {
        .id = 1,
        .name = "MARIO",
        .height = 172.5,
        .weight = 65.2,
    };

    print_student(&student);

    return 0;
}

void print_student(const Student *student) {
    printf("id    : %d\n", student->id);
    printf("name  : %s\n", student->name);
    printf("height: %.1f\n", student->height);
    printf("weight: %.1f\n", student->weight);

    return;
}