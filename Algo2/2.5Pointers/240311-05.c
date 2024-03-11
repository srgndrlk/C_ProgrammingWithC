#include <stdio.h>

int main(void){
  int *k, m; // int bir işaretçi ve değişken bildirimi​
  m = 159;
  k = &m;    // m değişken adresini ip işaretçisine atar.
  // Değişken adını kullanarak m değişken değerini ekrana yazar.
  printf("m variable value: %d\n", m);
  // İşaretçi kullanarak m değişken değerini ekrana yazar.
  printf("k points to m value with *k: %d\n", *k);
  // Değişken referansını kullanarak m değişken adresini ekrana yazar.
  printf("m variable address: %p\n", &m);
  // İşaretçi adını kullanarak m değişken adresini ekrana yazar.
  printf( "k have m adress inside: %p", k);
  return 0;}