#include <stdio.h>

struct yap {
  int id1;  int id2;  int id3; 
  double dd;
  char cd1;  char cd2;  char cd3;
  } yap1;

union one {
  int id1;  int id2;  int id3;
  double dd;
  char cd1;  char cd2;  char cd3;
} one1;

int main(void){
  printf("Struct Size: %d\n", sizeof(yap1));
  printf("Combined Size : %d\n\n", sizeof(one1));

  printf("yd.id1 Size : %d\n", sizeof(yap1.id1));  printf("+%d", sizeof(yap1.dd));   printf("+%d", sizeof(yap1.cd2));
  printf("one1.id1 Size : %d\n", sizeof(one1.id1));

  return 0;}


