#include <stdio.h>
#include <stdlib.h>
#include "people.h"

int main(void) {
    Person *people = NULL;
    int count = 0;

    while (1) {
        Person person;

        printf("---- %d人目の入力 ----\n", count + 1);

        if (!input_person(&person)) {
            break;
        }

        Person *new_people = (Person*)realloc(people, sizeof(Person) * (count + 1));
        if (new_people == NULL) {
            printf("メモリの割り当てに失敗しました。\n");
            free(people);
            return 1;
        }

        people = new_people;
        people[count] = person;
        count++;
    }

    printf("\n=== 入力されたデータ一覧 ===\n");
    for (int i = 0; i < count; i++) {
        printf("---- %d人目 ----\n", i + 1);
        print_person(&people[i]);
    }

    free(people);

    return 0;
}