#include <stdio.h>

int main(void){  
int *ip;
int iArray[5] = { 0,1,2,3,4  };

printf("pointer address &ip: %d\n\n", &ip);

ip = &iArray[4];

printf("Pointer value address ip: %d\n", ip);
printf("Pointer point variable value *ip: %d\n\n", *ip);

ip-=2; // ip -= (4 * sizeof (int));

printf("Pointer value address ip: %d\n", ip);
printf("Pointer point variable value *ip: %d\n\n", *ip);

return 0;}