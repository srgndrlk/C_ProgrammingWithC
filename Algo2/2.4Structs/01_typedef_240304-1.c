#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    int No;
    char Name[15];
    char SurName[15];
    bool Gender;
} Student;

int main() {
    Student student1;
    student1.No = 1234;
    strcpy(student1.Name, "Barış");
    strcpy(student1.SurName, "Manço");

    // Printing student information
    printf("Student Number: %d\n", student1.No);
    printf("Student Name: %s\n", student1.Name);
    printf("Student Surname: %s\n", student1.SurName);

    return 0;
}
