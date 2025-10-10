// File: src/week4_3_struct_database.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    struct Student *students;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for n Student records
    students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Error: memory allocation failed.\n");
        return 1;
    }

    // Read student information
    for (i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name); // or use fgets() for full names
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
        printf("Enter grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display all student records
    printf("\n=== Student Database ===\n");
    printf("%-5s %-20s %-10s %-10s\n", "No.", "Name", "ID", "Grade");
    printf("--------------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-5d %-20s %-10d %-10.2f\n", i + 1, students[i].name, students[i].id, students[i].grade);
    }

    // Free allocated memory
    free(students);

    return 0;
}
