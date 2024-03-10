#include <stdio.h>
#include <stdlib.h>

int main(){
int i, j, N, temp;

printf("N degerini gixiniz: ");
scanf("%d", &N);  printf("\n");

int dizi [N];
int temp [N];
for (i=0; i<N; i++) {
printf("%d. savivi giriniz: ", i+1);
scanf("%d",&dizi[i]);
}

int x =0;
int selectedValue;

for ( i = 0; i < N-1; i++)
{
// ilk sayıyı kaydet
// bütün elemanlar ile kıyasla 
// eğer hepsinden küçükse ilk sıraya koy
// ilk sıraya koyunca ilk sıra x variable ı ++
// bu sayede sonraki sayı ikinci sıraya geçer
// ilk x value is 0

selectedValue=dizi[i];
for (int  k = 0; k < N-1; k++)
{
if (selectedValue<dizi[k])
{
    /* code */
else if (selectedValue>dizi[k])
{
    /* code */
}


}


}


printf("\n");
for (i=0; i<N; i++) {printf("%d \t", temp[i]);}  //  N listesini gösteriyor 
printf("\n");
return 0;

}



