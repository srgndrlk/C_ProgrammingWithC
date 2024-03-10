
#include <stdio.h>
int main() {printf(" SwitchCase-İSLEM!");

printf(" \n");
float x=1;
float y=2;

char islem = 'm'; 

switch (islem){
case 's':printf("s:%f",x+y); //sum
break;

case 'n':printf("n:%f",x-y); //minus
break;

case 'd':printf("d:%f",x/y); // division
break;

case 'm':printf("m:%f",x*y); // multi
break;

default:printf("default");
    break;
}


return 0;}
// ödev bunu iç içe if else ile