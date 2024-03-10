#include <stdio.h>

struct deneme {

  int yas;

  char ad;

} mn;

struct deneme fonk(void);

int main(void)

{

  mn = fonk();

  printf("yas:%d \n ad:%c", mn.yas, mn.ad);

  return 0; }

struct deneme fonk(void)

{   struct deneme mn;

  mn.yas = 21;

  mn.ad= 'A';

  return mn; }