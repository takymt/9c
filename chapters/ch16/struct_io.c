#include <stdio.h>
#include <string.h>
#define PEOPLE_COUNT 3

typedef struct {
  char name[64];
  int age;
  int sex;
} Person;

void input_people(Person people[]);
void print_people(const Person people[]);

int main(void) {
    Person people[PEOPLE_COUNT];

    input_people(people);
    print_people(people);

    return 0;
}

void input_people(Person people[]) {
    for (size_t i = 0; i < PEOPLE_COUNT; i++) {
        printf("%zu人目の情報を入力して下さい\n", i + 1);
        printf("name: ");
        scanf("%63s", people[i].name);
        printf("age: ");
        scanf("%d", &(people[i].age));
        printf("sex(0: male, 1: female, 2: other): ");
        scanf("%d", &(people[i].sex));
        printf("\n");
    }

    return;
}

void print_people(const Person people[]){
    const char *sex;

    for (int i = 0; i < PEOPLE_COUNT; i++) {
        switch (people[i].sex) {
            case 0:
                sex = "male";
                break;
            case 1:
                sex = "female";
                break;
            case 2:
                sex = "other";
                break;
            default:
                sex = "invalid";
                break;
        }

        printf("=== %d人目 ===\n", i + 1);
        printf("name: %s\n", people[i].name);
        printf("age : %d\n", people[i].age);
        printf("sex : %s\n", sex);
        printf("\n");
    }

    return;
}