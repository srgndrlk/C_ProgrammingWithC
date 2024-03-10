#include <stdio.h>
int main() {


// -40 ,50 sdflksd -40,-1 çok soğuk ,0,9 soğuk,10 19 ılık ,2029 sıcak ,30+çok sıcak
int x=-44;

  for (x = -44; x < 33; x++) {
printf("%d\n", x);
if (30<=x) {printf("çok sıcak");}
else if ((20<=x) && (x<30))  {printf("sıcak");}
else if ((10<=x) && (x<20))  {printf("ılık");}
else if ((0<=x) && (x<10))  {printf("soğuk");}
else if ((-40<=x) && (x<0))  {printf("çok soğuk");}
}

return 0;}