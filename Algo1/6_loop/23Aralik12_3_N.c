#include <stdio.h>

int main(){ printf("\n");

int n,i;
int top=0;
printf(" EnterNumber=");
scanf("%d",&n); //x nin önündeki adresi belirtiyor

for ( i = 0; i<=n; i++)
{
top=top+(i*i);
printf(" top:%d ",top);
}
printf("final top:%d ",top);



return 0;
}

// doğla sayıların sırayla karelerini topluyor