#include <stdio.h>

enum renk { mavi=7, turuncu, mor=12 };

int main(void){
  enum renk e1, e2, e3;

  e1 = mavi;
  e2 = turuncu;
  e3 = mor;

  printf("%d %d %d\n", e1, e2, e3);
  printf("%d %d %d", mavi, turuncu, mor);  

  return 0;}

