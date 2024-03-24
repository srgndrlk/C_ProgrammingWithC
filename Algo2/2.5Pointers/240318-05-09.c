#include <stdio.h>
int main(){

int *p; int **pp; int value=1903;
p=&value; pp=&p;

printf("Variables Values::::::::::: \n");

printf("content:value %d \n",value);
printf("content:*p d: %d \n",*p);
printf("content:**pp d: %d \n",**pp);

printf("Variables Address::::::::::: \n");

//printf("addresss:&int1 d: %d \n",&int1);
printf("address:p d: %d \n",p);
printf("addresss:&p d: %d \n",&p);
printf("address:pp d: %d \n",pp);
return 0;}