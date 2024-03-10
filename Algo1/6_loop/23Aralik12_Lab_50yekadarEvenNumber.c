#include <stdio.h>
int main() {printf("Hello Aralik12_Lab!");

int i;
int top=0;

for ( i = 0; i <= 50; i++)
{
printf("i:%d\n", i);

if (i%2==0)
{
top=top+i;
printf("top:%d\n", top);
}

}

// alternatif fikir. i yi birer birer değilde ikişer olarak arttırmak i=i+2;

return 0;}