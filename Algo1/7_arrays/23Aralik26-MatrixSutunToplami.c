#include <stdio.h>
int main() {printf("Hello Lab! \n");

int a[5][4] = {1,1,1,1,  2,2,2,2,   3,3,3,3,   4,4,4,4,   5,5,5,5};
int b[5][1]={};

for (int i = 0; i < 5; i++)
{
   for (int j = 0; j < 4; j++)
   {
 b[i][1]=b[i][1]+a[i][j];
 printf(" b:%d",b[i][1]);
   }
   printf("\n");
}

for (int k = 0; k < 5; k++)
{
   printf(" b[%d][1]=%d\n",k,b[k][1]);
}



return 0;}