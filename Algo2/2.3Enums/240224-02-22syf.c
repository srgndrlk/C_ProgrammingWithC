#include <stdio.h>
#include <stdlib.h>

enum eAreas {programming=1,
hardware,
accounting,
motor,
office
};

int main(){

enum eAreas area_variable;
area_variable=hardware;
printf("Area:%d\n",area_variable);

area_variable+=2;
printf("New Area :%d\n",area_variable);

return 0;}