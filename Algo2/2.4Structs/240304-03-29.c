#include <stdio.h>
#include <string.h>

struct yap {
char cArray[40];
} yd;

void fonk(struct yap yd);

int main(void){
strcpy (yd.cArray, "Computer");

fonk(yd);

printf("%s", yd.cArray);

return 0;}

void fonk(struct yap yd){  
strcpy (yd.cArray, "Programming");
printf("%s\n", yd.cArray);
}

