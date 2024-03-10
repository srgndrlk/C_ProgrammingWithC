#include <stdio.h>
#define TAX 0.05

int main(void){
  float wage,net_wage;
  printf("Enter a wage Number");
scanf("%1f",&wage);

net_wage=wage-wage*TAX;
printf("Net wage : %6.6f", net_wage);

return 0;
}