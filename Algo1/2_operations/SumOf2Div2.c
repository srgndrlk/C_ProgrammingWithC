#include <stdio.h>

int main() 
{float x,y,ort;
  printf("İki sayı giriniz");
  scanf("%f %f",&x,&y);
  ort=(x+y)/2;
  printf("Sonuc=%.10f",ort);
  return 0;
}