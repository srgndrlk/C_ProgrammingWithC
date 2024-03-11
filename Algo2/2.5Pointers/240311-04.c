#include <stdio.h>

int main(void){

int *k, m; // int bir işaretçi ve değişken bildirimi​
m= 159;
k = &m;    // m değişken adresini k işaretçisine atar.
// İşaretçi kullanarak m değişken değerini ekrana yazar.
printf("m: %d\n", m);
printf("&m: %d\n", &m);
printf("*k: %d\n", *k);
printf("k: %d\n", k);

printf("&k: %d\n", &k);
printf("&k p: %p\n", &k);

return 0;}