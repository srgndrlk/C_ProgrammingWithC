#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {printf("Hello 17 Strings! \n");

char text1[]={"Helloo "};
printf("%s",text1);
printf(" \n ");

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

size_t length = strlen(alphabet);
printf("strlen:%d\n",length);

printf("sizeOF:%d\n", sizeof(alphabet));

char text2[]={"text2 "};
strcat(text2, alphabet);
printf("strcat:%s\n", text2);

strcpy(text2, alphabet);
printf("strcpy:%s\n", text2);

printf("text1,alphabet=strcmp:%d\n", strcmp(text1, alphabet));
printf("text1,text2=strcmp:%d\n", strcmp(text1, text2));

//strrev

printf("strrev",strrev(alphabet));

return 0;}