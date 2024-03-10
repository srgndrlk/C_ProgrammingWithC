#include <stdio.h>
#include <stdlib.h>
int main() {printf("Hello dfksdlfj! \n");

char metin1[50],metin2[50];

printf("metin1 giriniz");
gets(metin1);

printf("metin22 giriniz");
gets(metin2);

strcat(metin1,metin2);
printf("birleştirilmiş metin\n");
printf(metin1);
printf(" \n ");


return 0;}