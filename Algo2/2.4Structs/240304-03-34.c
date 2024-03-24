#include <stdio.h>
#include <string.h>

struct yap2 {char cArray[30];};

struct yap1 {
char cArray1[15];
char cArray2[15];
int id;
struct yap2 yd2;
} yd1;

int main(void){
strcpy (yd1.cArray1, "Algorithm and ");
strcpy (yd1.cArray2, "Programming II");
yd1.id = 35;
strcpy (yd1.yd2.cArray, "Manisa Celal Bayar Universitesi");
printf("%s %s %d\n", yd1.cArray1, yd1.cArray2, yd1.id);
printf("%s", yd1.yd2.cArray);
return 0;}