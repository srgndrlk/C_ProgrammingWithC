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





int value;
int c=0;
int t=0;
int tek[N];
int cift[N];

for (int i = 0; i < N; i++)
{
    value=dizi[i];
    if (value%2==0)
    {
    cift[c]=dizi[i];
    c++;
    }
    if (value%2==1)
    {
    tek[t]=dizi[i];
    t++;
    }

}



printf("\n");
for (i=0; i<t; i++) {
printf(" tek[%d]=%d ",i, tek[i]); 
}
printf("\n");
for (i=0; i<c; i++) {
printf(" cift[%d]=%d ",i, cift[i]); 
}

return 0;}



