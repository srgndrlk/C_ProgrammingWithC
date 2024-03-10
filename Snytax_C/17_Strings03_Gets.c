#include <stdio.h>
#include <stdlib.h>
int main() {printf("Hello 17 Strings! \n");

char text1[9]={"Helloo "};
printf(text1);
printf(" \n ");


char text2[50];


printf("enter a text2 ");
char gets(text2);

strcat(text1,text2);
printf("combined text\n");
printf(text1);
printf(" \n ");


return 0;}