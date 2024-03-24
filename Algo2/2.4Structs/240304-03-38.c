#include <stdio.h>
#include <stdlib.h>

struct Student{
int No;
char Name[50];
char Surname[50];
int Gender;
int Field;
float Averega; };

void StudentBilgisiYazdir(struct Student Student1){ 
printf(" No: %d \n Name: %s \n ", Student1.No,Student1.Name);}

int main(){
struct Student Student_test;
Student_test.No = 1000;
strcpy(Student_test.Name, "test");
StudentInfoPrint(Student_test);
return 0;}