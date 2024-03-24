#include <stdio.h>

int main(void){  

int array[5]={2,4,6,8,10};
int *p;
p=array;

printf("*p value : %d\n", *p);

printf("*(p+1) value : %d\n", *(p+1));
printf("*(p+2) value : %d\n", *(p+2));
printf("*(p+3) value : %d\n", *(p+3));
printf("*(p+4) value : %d\n", *(p+4));
printf("*(p+5) value : %d\n", *(p+5));

return 0;   }