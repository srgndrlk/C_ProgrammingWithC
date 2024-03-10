#include <stdio.h>
int main() {printf("Hello Lab! \n");

int dizi[2][3] = {5,3,1
                ,2,4,6};
int enk=dizi[0][0];
int sutun,satir;
  printf("ilk enk value= %d \n",enk);

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 3;j++)
{
    if (enk<dizi[i][j])
    {
       printf("enk %d den küçük \n",dizi[i][j]);

    }
    else {enk=dizi[i][j];
    printf("enk eşitlendi %d \n",dizi[i][j]);
    satir=i;
    sutun=j;
    }
    
}

}
  printf("\nEn Küçük Sayi %d",enk);
  printf("\nSatırı%d Sütünu %d",satir,sutun);


return 0;}