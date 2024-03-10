#include <stdio.h>
#include <stdlib.h>

int main() {

int dizi[5];

for (int i = 0; i < 5; i++)
{
dizi[i]=i*3;
}
for (int i = 0; i < 5; i++)
{
printf("%d. dizi eleman değeri %d \n",i,dizi[i]);
}
return 0;
}