#include <stdio.h>

int main() {
  float hour,ank_ist=453,ort;

  printf("Saat sayı giriniz");
  scanf("%f",&hour);

  ort=ank_ist/hour;
  printf("Ort:%f Hour:%f",ort,hour);
  
  return 0;
}