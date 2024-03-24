#include <stdio.h>
#include <ctype.h>
void main() { 
char s[80],*p;
p=&s[0];

printf("Enter a Word with lowercase letters =");
scanf("%s",s);
while(*p) printf("%c",toupper(*p++));
 }