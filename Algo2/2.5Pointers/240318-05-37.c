#include <stdlib.h>
#include <stdio.h>
int main(){
int a =10,b=20;

printf("a= %d, b= %d\n",a,b);

func(&a,&b);

printf("a= %d, b= %d\n",a,b);
return 0;}

void func(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;}