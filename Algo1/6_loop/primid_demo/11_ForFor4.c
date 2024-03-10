#include <stdio.h>
int main() {printf("Hello 11_ForForForForForForFor!");

int i,z;

for ( i = 1; i < 10; i=i+2)
{
printf("\n");
printf(" i:%d ",i);

for ( z = 1; z <= i; z++)
{
printf("*");
}

}




return 0;}