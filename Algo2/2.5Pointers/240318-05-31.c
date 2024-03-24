#include <stdlib.h>
#include <stdio.h>

// void f1(int n);
// void f2(int &n);

int main(){

int x =55;

printf("x: %d \n",x);

f1(x);
printf("after func x: %d \n",x);

f2(&x);
printf("after func2 x: %d \n",x);

return 0;}

void f1(int n){
    n=66;
    printf("n inside of func: %d \n",n);
}
void f2(int *n){
    *n=77;
    printf("n inside of func2: %d \n",*n);
}

