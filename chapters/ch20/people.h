#ifndef PERSON_H
#define PERSON_H

#define NAME_LEN 100
#define GENDER_LABEL_LEN 100
#define EXIT_AGE -1

enum
{
    GENDER_MALE,
    GENDER_FEMALE,
    GENDER_OTHERS,
};

typedef struct
{
    char name[NAME_LEN];
    int age;
    int gender;
} Person;

int input_person(Person *p);
void print_person(Person *p);

#endif
