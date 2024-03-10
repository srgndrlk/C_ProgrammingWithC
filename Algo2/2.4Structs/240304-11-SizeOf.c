#include <stdio.h>

struct yap {
  int id1;  int id2;  int id3; 
  double dd;
  char cd1;  char cd2;  char cd3;
  } yd;

union bir {
  int id1;  int id2;  int id3;
  double dd;
  char cd1;  char cd2;  char cd3;
} bd;
int main(void){
  printf("Struct Size: %d\n", sizeof(yd));
  printf("Combined Size : %d", sizeof(bd));
  return 0;}