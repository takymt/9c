#include <stdio.h>

typedef struct {
    int id;
    char name[64];
    int avg;
} Student;

void create_students(Student students[], size_t count);
void write_students(FILE *file, const Student students[], size_t count);

int main(void) {
    FILE *file;
    Student students[4];

    create_students(students, 4);

    file = fopen("chapters/ch17/students.csv", "w");
    if (file == NULL) {
        return 1;
    }

    write_students(file, students, 4);

    fclose(file);
    return 0;
}

void create_students(Student students[], size_t count) {
    if (count < 4) {
        return;
    }

    students[0] = (Student){ .id = 1, .name = "野比のび太", .avg = 0};
    students[1] = (Student){ .id = 2, .name = "源静香", .avg = 90};
    students[2] = (Student){ .id = 3, .name = "剛田武", .avg = 40};
    students[3] = (Student){ .id = 4, .name = "骨川スネ夫", .avg = 70};
}

void write_students(FILE *file, const Student students[], size_t count) {
    fprintf(file, "id,name,avg\n");

    for (size_t i = 0; i < count; i++) {
        fprintf(file, "%d,%s,%d\n", students[i].id, students[i].name, students[i].avg);
    }
}