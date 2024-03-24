#include <stdio.h>
#include <stdlib.h>

int* FindMin(int array1[], int size) ;

int main(){    
int array1[5] = {4, 7, -3, -5, 9} ;
int *p, k;

for(k=0; k<5; k++)
printf("%d \t %d \t %p\n", k, array1[k], &array1[k]);

p = FindMin(array1,5);
printf("\nMinimum value : %d\n", *p);
printf("Minimum address : %p \n",  p);
return 0;}

int* FindMin(int array1[], int size){   
int i; int ek, *pek;
ek = array1[0];

for (i = 1; i < size; i++) { 
if ((*(array1+i)) < ek) { 
ek = *(array1+i);
pek = (array1 + i); } }
return pek;}