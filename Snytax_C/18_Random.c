#include <stdio.h>
#include <stdlib.h>

#include <time.h> //for srand 
int main() {printf("Hello Random! \n");

int a;
a = rand();
printf("%d",a);
// it gives same number over over again


printf("\n");

srand(time(NULL)); // Initialize random seed with current time
int b;
b = rand();
printf("%d", b);

printf(" %d", b%25);
// a = rand() % 11;     for between 1 and 10 values 


return 0;}