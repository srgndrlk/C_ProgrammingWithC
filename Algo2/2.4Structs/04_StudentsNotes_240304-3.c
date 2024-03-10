#include <stdio.h>
#include <stdlib.h>

struct StudentNote {
int No;
int MiddleTest;
int Test[2];
int Final;
};

int main(){

struct StudentNote student1;

student1.No=12345;
student1.MiddleTest=40;
student1.Test[0]=60;
student1.Test[1]=65;
student1.Final=80;

printf("Student Number: %d\n", student1.No);
printf("Midterm Exam Score: %d\n", student1.MiddleTest);
printf("Test 1 Score: %d\n", student1.Test[0]);
printf("Test 2 Score: %d\n", student1.Test[1]);
printf("Final Exam Score: %d\n", student1.Final);

return 0;}