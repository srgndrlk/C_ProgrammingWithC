#include <stdio.h>

int main(void){  
int *ip, id;
id = 274;
ip = &id;

printf("id variable value: %d\n", id);
// changing variable value by pointer 
(*ip)++;
printf("id variable value: %d", id);
return 0;   }