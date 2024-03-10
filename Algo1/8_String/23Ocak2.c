#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {printf("Hello ! \n");

char cumle[100];

printf("cümle giriniz");
gets(cumle);

cumle[0]=toupper(cumle[0]);
for (int i = 0; i < strlen(cumle); i++)
{
if (cumle[i]==' ')
{
    cumle[i+1]=toupper(cumle[i+1]);
}

}

printf(cumle);




return 0;}