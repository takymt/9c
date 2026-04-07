#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 100
#define GENDER_LABEL_LEN 100

enum {
    GENDER_MALE,
    GENDER_FEMALE,
    GENDER_OTHERS,
};

typedef struct {
    char name[NAME_LEN];
    int age;
    int gender;
} Person;

int input_person(Person *p) {
    printf("名前を入力してください: ");
    scanf("%99s", p->name);

    printf("年齢を入力してください（終了は -1）: ");
    scanf("%d", &p->age);

    if (p->age == -1) {
        return 0;
    }

    printf("性別を入力してください: ");
    scanf("%d", &p->gender);

    return 1;
}

void print_person(const Person *p) {
    char gender_label[GENDER_LABEL_LEN];

    if (p->gender == GENDER_MALE) {
        strcpy(gender_label, "男性");
    } else if (p->gender == GENDER_FEMALE) {
        strcpy(gender_label, "女性");
    } else {
        strcpy(gender_label, "その他");
    }

    printf("名前: %s\n", p->name);
    printf("性別: %s\n", gender_label);
    printf("年齢: %d\n", p->age);
    printf("\n");
}

int main(void) {
    Person *people = NULL;
    size_t count = 0;

    while (1) {
        Person person;

        printf("---- %zu人目の入力 ----\n", count + 1);

        if (!input_person(&person)) {
            break;
        }

        Person *new_people = (Person*)realloc(people, sizeof(Person) * (count + 1));
        if (new_people == NULL) {
            printf("メモリ確保に失敗しました。\n");
            free(people);
            return 1;
        }

        people = new_people;
        people[count] = person;
        count++;
    }

    printf("\n=== 入力されたデータ一覧 ===\n");
    for (size_t i = 0; i < count; i++) {
        printf("---- %zu人目 ----\n", i + 1);
        print_person(&people[count]);
    }

    free(people);

    return 0;
}