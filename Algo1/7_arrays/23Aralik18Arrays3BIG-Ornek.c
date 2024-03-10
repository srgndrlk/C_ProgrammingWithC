#include <stdio.h>
#include <stdlib.h>


int main()
{
int i, j, N, temp;
printf("N degerini gixiniz: ");
scanf("%d", &N); 
printf("\n");

int dizi [N];
for (i=0; i<N; i++) {
printf("%d. savivi giriniz: ", i+1);
scanf("%d",&dizi[i]);
}
// bundan önceki kısım sadece Scanf ile liste almak için

for (i=0; i<N-1; i++) {
    for(j=0; j<N-i-1; j++)
        if(dizi[j]>dizi[j+1]) {
            temp=dizi[j];
            dizi[j]=dizi[j+1];
            dizi[j+1]=temp;
}
// küçükten büyüğe doğru sıralıyor
}
printf("\n");
for (i=0; i<N; i++) {printf("%d \t", dizi[i]);}  //  N listesini gösteriyor 
printf("\n");
return 0;

}



