#include <stdio.h>

struct yap {

  int id;

  char cd;

} yd;

void fonk(struct yap yd);

int main(void)

{

  struct yap yd;

  yd.id = 21;

  yd.cd = 'A';

  fonk(yd);

  printf("%d %c", yd.id, yd.cd);

  return 0;

}

void fonk(struct yap yd)

{

  yd.id += 5;

  yd.cd += 5;

  printf("%d %c\n", yd.id, yd.cd);}

