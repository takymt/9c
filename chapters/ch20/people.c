#include <stdio.h>
#include <stdlib.h>
#include "people.h"

int input_person(Person *p) {
    printf("名前を入力してください: ");
    scanf("%99s", p->name);

    printf("年齢を入力してください（終了は -1）: ");
    scanf("%d", &p->age);
    if (p->age == EXIT_AGE) {
        return 0;
    }

    printf("性別を入力してください（男性は0、女性は1、無回答は2）: ");
    scanf("%d", &p->gender);

    return 1;
}

void print_person(Person *p) {
    char gender_label[GENDER_LABEL_LEN];

    if (p->gender == GENDER_MALE) {
        strcpy(gender_label, "男性");
    } else if (p->gender == GENDER_FEMALE) {
        strcpy(gender_label, "女性");
    } else {
        strcpy(gender_label, "無回答");
    }

    printf("名前: %s\n", p->name);
    printf("年齢: %d\n", p->age);
    printf("性別: %s\n", gender_label);
    printf("\n");
}