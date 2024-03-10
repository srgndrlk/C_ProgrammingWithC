#include <stdio.h>

#include <stdlib.h>

enum eBloumler {

programcilik=1,donanim,
muhasebe,motor,buro};



int main(){
enum eBloumler bolum_degiskeni;
bolum_degiskeni=donanim;
printf("Bolum:%d\n",bolum_degiskeni);
bolum_degiskeni+=2;
printf("Yeni Bolum:%d\n",bolum_degiskeni);
return 0;}