#include <stdio.h>

 int carpmaIslemi(int x, int y);

 int main() {
    int sayi1 = 15;    int sayi2 = 6;

    int sonuc = carpmaIslemi(sayi1, sayi2);
    printf("%d * %d = %d\n", sayi1, sayi2, sonuc);

    return 0;}

 int carpmaIslemi(int x, int y) {

    if (y == 0)        return 0;

    return x + carpmaIslemi(x, y - 1);}