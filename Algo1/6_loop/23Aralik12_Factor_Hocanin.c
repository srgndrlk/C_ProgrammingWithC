#include <stdio.h>
int main() {printf("Hello Aralik12_Factor!");

int i,sayi;
int fac=1;
printf("Sayi giriniz");
scanf("%d",&sayi); 
printf("your number is:%d ",sayi); 

for (i=sayi ; 0<i ; i--)
{
printf(" i:%d ", i);
fac=fac*i;
printf(" fac:%d\n", fac);

}

printf(" final fac:%d\n", fac);



return 0;}