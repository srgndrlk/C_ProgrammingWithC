#include <stdio.h>

int main(){

int int1 =33;
int *p_int1;
p_int1=&int1;

printf("addresss:&int1 d: %d \n",&int1);
printf("addresss:p_int1 d: %d \n",p_int1);

printf("content:int1 %d \n",int1);
printf("addresss:*p_int1 d: %d \n",*p_int1);

*p_int1=44;

printf("addresss:&int1 d: %d \n",&int1);
printf("addresss:p_int1 d: %d \n",p_int1);

printf("content:int1 %d \n",int1);
printf("addresss:*p_int1 d: %d \n",*p_int1);
return 0;}