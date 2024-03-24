#include <stdio.h>
#include <stdlib.h>

int main(){
int int1 =33;
printf("content:int1 %d \n",int1);
printf("addresss:&int1 d: %d \n",&int1);
printf("addresss:&int1 p: %p \n",&int1);
int *p_int1;
p_int1=&int1;

printf("addresss:p_int1 p: %p \n",p_int1);
printf("addresss:p_int1 d: %d \n",p_int1);
}