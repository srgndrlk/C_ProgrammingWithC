#include <stdio.h>
int main() {printf("Hello Aralik12_Factor!");

int i;
int fac=1;
printf("Sayi giriniz");
scanf("%d",&i); 
printf("your number is:%d ",i); // sanırım ayrı olarak sayi diye alıp

for (0<i; i--) // for ın içinde sayi ile i eşitleyip
{
printf(" i:%d\n", i);
fac=fac*i;
printf(" fac:%d\n", fac);
}

printf(" final fac:%d\n", fac);



return 0;}