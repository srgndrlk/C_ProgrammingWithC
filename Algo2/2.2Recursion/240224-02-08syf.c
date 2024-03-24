#include <stdio.h>

int func (int num){
int res = 0 ;

if (num <= 0 ){printf (" \n error ! \n") ;}
else if (num == 1 ){return num;}
else {res = num * func (num -1); return res ;}

return -1;}

int main () {

int num = 5 ;
int fact = func(num);

if(fact > 0){printf(" \n[%d ] in factoriel : [%d ] \n",num, fact);
return 0;}
}