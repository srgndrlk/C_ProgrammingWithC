#include <stdio.h>
int main() {printf(" Welcome to Short Hand IF\n");

int a=-5;
int result;

result=(0<a)?a:-1;
printf("0<a result is %d",result);
printf("\n");

// result=(condition)? if true do this:if not do that;

/* doenst work because of strinf 
//char word[]=(0>a)?"true":"wrong";
char word[] = (0 > a) ? "true" : "wrong";
printf("0>a result is %s",word);
*/

return 0;}