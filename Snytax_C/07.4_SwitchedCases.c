#include <stdio.h>
#include <stdlib.h>
int main() {printf(" Welcome to Swithced Cases!");

char kr;
printf("Enter a letter :");
kr=getchar();
printf("kr=%c \n",kr);


switch (kr){
case 'a': //single qutotion mark 
printf("a entered");break;

case 'b':printf("b entered");break;
case 'c':printf("c entered");break;
case 'd':printf("d entered");break;
case 'e':printf("e entered");break;

case 'f':printf("%c entered",kr);break;

default:printf("what did you dooooo:");break;
}


return 0;}