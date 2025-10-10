
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    struct Student s1, s2;

    strcpy(s1.name, "janis");
    s1.id = 101;
    s1.grade = 89.5;

    strcpy(s2.name, "badass");
    s2.id = 102;
    s2.grade = 92.3;


    printf("Name: %-20s | ID: %d | Grade: %.2f\n", s1.name, s1.id, s1.grade);
    printf("Name: %-20s | ID: %d | Grade: %.2f\n", s2.name, s2.id, s2.grade);

    return 0;
}
