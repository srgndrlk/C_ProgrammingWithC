#include <stdio.h>

int main(void){  

int array[5]={2,4,6,8,10};
int *p;
p=array;

printf("*p value : %d\n", *p);

printf(" Ways 1 Normal Way\n");
for (int i = 0; i <= 3; i++){
printf("i:%d array[i] value : %d\n", i,array[i]);
}
printf(" Ways 2 Pointer Offset\n");
for (int i = 0; i <= 3; i++){
printf("i:%d *(p+i) value : %d\n",i, *(p+i));
}
printf(" Ways 2 Array Pointer Offset\n");
for (int i = 0; i <= 3; i++){
printf("i:%d *(array+i) value : %d\n",i, *(array+i));
}


return 0;   }