// 2 number sum minus multiply division 

#include <stdio.h>

int main() 
{float x,y,sum,min,mul,divi;
  printf("İki sayı giriniz");
  scanf("%f %f",&x,&y);
  sum=x+y;
  min=x-y;
  mul=x*y;
  divi=x/y;
  printf("sum:%f min:%f mul:%f divi:%f ",sum,min,mul,divi);
  return 0;
}