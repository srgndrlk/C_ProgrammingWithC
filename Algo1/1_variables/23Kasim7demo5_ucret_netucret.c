#include <stdio.h>
#define TAX 0.05

int main(void) 
{float ucret,net_ucret;
scanf("%1f",&ucret);

net_ucret=ucret-ucret*TAX;
printf("Net ucret : %6.6f", net_ucret);  //printf("Net ucret : %6.2f", net_ucret);


  return 0;
}