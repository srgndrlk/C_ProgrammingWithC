#include <stdio.h>

#include <string.h>

struct yap {

  char cdizi[40];

} yd;

void fonk(struct yap yd);

int main(void)

{  strcpy (yd.cdizi, "Bilgisayar");

  fonk(yd);

  printf("%s", yd.cdizi);

  return 0; }

void fonk(struct yap yd)

{  strcpy (yd.cdizi, "Programlama");

  printf("%s\n", yd.cdizi);}

