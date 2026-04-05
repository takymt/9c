#include <stdio.h>

typedef struct {
    int id;
    char name[64];
    double height;
    double weight;
} Student;

void print_students(Student students[], size_t count);

int main(void) {
    Student students[] = {
        { .id = 1, .name = "MARIO", .height = 172.5, .weight = 65.0 },
        { .id = 2, .name = "PEACH", .height = 162.7, .weight = 55.2 },
    };

    print_students(students, 2);

    return 0;
}

void print_students(Student students[], size_t count) {
    for (size_t i = 0; i < count; i++) {
        printf("id: %d\n", students[i].id);
        printf("name: %s\n", students[i].name);
        printf("height: %.1f\n", students[i].height);
        printf("weight: %.1f\n", students[i].weight);
    }

    return;
}
