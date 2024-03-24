#include <stdio.h>

void hanoiKuleleri (char kaynak,char temp,char hedef , int n){
    if (n == 0){return ; }

// (S ,D,T, n-1) (K,H,G, n-1)
hanoiKuleleri (kaynak,hedef, temp, n-1) ;
 // move the bottom most di sk from ‘ kaynak ’ to ‘ hede f ’ o f the current problem​
printf(" \n%d di sk (%c -> %c ) " ,n ,kaynak, hedef) ;
// (T, S ,D, n-1)
hanoiKuleleri ( temp , kaynak , hedef , n-1) ; }

int main(void){
    int n ;
printf ("\nNumber o f Disks \n  : ") ;
scanf ( "%d", &n) ;

hanoiKuleleri ('S' , 'T' , 'D' , n) ;
 printf (" \n") ;

return 0 ; } 