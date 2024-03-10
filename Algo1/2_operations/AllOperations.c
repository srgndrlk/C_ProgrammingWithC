//  iki sayının sum minus multiply division 

#include <stdio.h>

int main() 
{float x,y,toplam,min,mul,divi;
  printf("İki sayı giriniz");
  scanf("%f %f",&x,&y);
  toplam=x+y;
  min=x-y;
  mul=x*y;
  divi=x/y;
  printf("topl:%f min:%f mul:%f divi:%f ",toplam,min,mul,divi);
  return 0;
}