#include <stdio.h>

int ekok (int a, int b) {
static int temp=1 ;

if( temp%b == 0 && temp % a == 0) return temp ;

temp++;

ekok (a ,b);
return temp ; }

int main(){int a, b, s;

printf ("Enter a 2 positive whole Number : ");
scanf ("%d%d",&a,&b);

 if (a>b)s = ekok(a,b) ;
else s=ekok(b,a) ;

 printf("Ekok for entered numbers: %d" , s ) ;
return 0 ;} 