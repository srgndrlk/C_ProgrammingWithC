#include <stdio.h>
#include <stdlib.h>
int main() {printf("Hello örnek 25 aralik! \n");

int a[2][3]={5,3,7,   0,1,3};
int b[2][3]={1,2,3  ,4,5,6};
int c[2][3];

printf("A matrisi: \n");

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 3; i++)
{
printf(" %4d ",a[i][j]);
}
}

// B ve C var ama yazasım yok


return 0;}