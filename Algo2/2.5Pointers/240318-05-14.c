#include <stdio.h>
int main(){

char   *pk,k='A';
int    *pt,t=22;
double *pg,g=5.5;
pk=&k; pt=&t; pg=&g;

printf("addreess :pk: %p ,pt: %p ,pg: %p \n",pk,pt,pg);
printf("content  :*pk: %c ,*pt: %d ,*pg:%f \n",*pk,*pt,*pg);
printf("addreess :pk: %d ,pt: %d ,pg: %d \n",pk,pt,pg);
printf(" \n");
pk++;
pt--;
pg=pg+10;
printf("addreess :pk: %p ,pt: %p ,pg:%p \n",pk,pt,pg);
printf("content  :*pk: %c ,*pt: %d ,*pg:%f \n",*pk,*pt,*pg);
printf("addreess :pk: %d ,pt: %d ,pg: %d \n",pk,pt,pg);
return 0;}