#include <stdio.h>
#include <stdlib.h>

int main(){

int dizi [10];
int x;

for (int i=0; i<10; i++) {
printf("%d. savivi giriniz: ", i+1);
scanf("%d",&dizi[i]);
}

printf("\n");

for (int i=0; i<10; i++) {
    printf("%d \t", dizi[i]);}  
printf("\n");



 int  enbuyuk=dizi[0];
  for (int i = 1; i < 10; i++)
  {
    if (dizi[i]>enbuyuk)
    {
        enbuyuk=dizi[i];
    }
    printf("Enbuyukdeğer: %d ",enbuyuk);
    
  }
  





return 0;
}



