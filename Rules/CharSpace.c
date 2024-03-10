
#include <stdio.h>
int main() {printf("CharSpace -!");

printf(" \n");
char calculate; 

printf(" enter");
scanf(" %c",&calculate); // must be one space &c before beacuse some IDE doesnt work
printf("your is:%c \n",calculate);

if (calculate == '*'){printf("mult "); }
else {printf("what did you do");}


return 0;}
