#include <stdlib.h>
#include <stdio.h>

int main(){

char harf;
printf("Harf girin:");
scanf("%c",&harf);

if (('a' <= harf && harf <= 'z')||('A'<=harf && harf <='Z'))
{
printf("%c: harfi Alfabede",harf);
printf("\n ASCII value of '%c' is %d", harf, harf);
}
else
{
printf("%c: harf değil",harf);
printf("\n ASCII value of '%c' is %d", harf, harf);
}






    return 0;
}