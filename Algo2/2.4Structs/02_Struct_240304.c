#include <stdio.h>
#include <stdbool.h>

struct Student {
    int No;
    char Name[50];
    char Surname[50];
    bool Gender; 
    float CommonAverage;
};

int main() {
    struct Student student1;

    printf("Enter a Student Info Student No\n");
    scanf("%d", &student1.No);

    printf("Enter a Student Info Name\n");
    scanf("%s", student1.Name);

    printf("Enter a Student Info Surname\n");
    scanf("%s", student1.Surname);

    printf("Enter a Student Info Gender (0 for Woman, 1 for Man)\n");
    scanf("%d", &student1.Gender); 

    printf("Enter a Student Info CommonAverage\n");
    scanf("%f", &student1.CommonAverage);

    // Example of usage:
    printf("Student No: %d\n", student1.No);
    printf("Name: %s\n", student1.Name);
    printf("Surname: %s\n", student1.Surname);
    printf("Gender: %s\n", student1.Gender ? "Male" : "FeMale");
    printf("CommonAverage : %.2f\n", student1.CommonAverage);

    return 0;
}
