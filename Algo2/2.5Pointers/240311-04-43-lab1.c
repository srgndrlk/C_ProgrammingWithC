#include <stdio.h>

int main(void){

int a,b,c;
a=20;

int *d;
d=&a;
// alternative declaraetion int*d=&a;

printf("a variable value: %d\n", a);
printf("d variable value: %d\n\n", d);

printf("*d variable value: %d\n\n", *d);  

printf("a address: %d\n", &a);    
printf("b address: %d\n", &b);    
printf("c address: %d\n", &c);    
printf("d address: %d\n", &d);    


return 0;}