#include <stdio.h>
int main() {printf(" Welcome to  Variables \n");

int num1 = 5;             // Integer ,whole number
float float_num2 = 5.99;   // Floating number
char my_letter = 'D';       // just one letter or charachter 
char word1[] = "Hello!"; // words
int numbers1[] = {25, 50, 75, 100};
numbers1[0] = 33;


printf("%d", num1); 
printf("\n");
printf("%i ", num1);
printf("\n");
printf("%f ", float_num2);
printf("\n");
printf("%c ", my_letter);
printf("\n");
printf("%s", word1);
printf("\n");

printf("%d\n", num1);
printf("My Fav num1 :%d", num1);

const float PI = 3.14;
printf("it can not change read only %f ",PI);

printf("\n");

printf("numbers1 lists[0] first:%d \n", numbers1[0]);
printf("numbers1 lists[3] last:%d", numbers1[3]);

return 0;}