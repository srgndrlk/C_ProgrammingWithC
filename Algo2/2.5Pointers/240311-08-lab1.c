#include <stdio.h>

int main(void){

int m=17;
int *ab=&m;

printf("m address:                %d\n", &m);    
printf("m variable value:         %d\n", m);

printf("ab address:               %d\n", &ab);    
printf("ab variable value:        %d\n", ab);
printf("*ab variable point value: %d\n", *ab);

m=35;

printf("ab address:               %d\n", &ab);    
printf("ab variable value:        %d\n", ab);
printf("*ab variable point value: %d\n", *ab);
printf("m variable value:         %d\n", m);

*ab=8;

printf("ab address:               %d\n", &ab);    
printf("ab variable value:        %d\n", ab);
printf("*ab variable point value: %d\n", *ab);
printf("m variable value:         %d\n", m);

return 0;}