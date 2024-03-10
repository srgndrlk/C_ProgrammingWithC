#include <stdio.h>
#include <stdlib.h>

int main(){
int i, j, N;

printf("N degerini gixiniz: ");
scanf("%d", &N);  printf("\n");

int dizi [N];
for (i=0; i<N; i++) {
printf("%d. savivi giriniz: ", i+1);
scanf("%d",&dizi[i]);
}

printf("\n");
for (i=0; i<N; i++) {
printf("i:%d dizi:%d ",i, dizi[i]); 
int kare=dizi[i]*dizi[i];
printf("karesi:%d \n",kare);
}

return 0;}



