#include <stdio.h>
#include <stdlib.h>

int main(){

int dizi [10];

for (int i=0; i<10; i++) {
printf("%d. savivi giriniz: ", i+1);
scanf("%d",&dizi[i]);
}

printf("\n");

for (int i=0; i<10; i++) {
    printf("%d \t", dizi[i]);}  

printf("\n");


return 0;
}



