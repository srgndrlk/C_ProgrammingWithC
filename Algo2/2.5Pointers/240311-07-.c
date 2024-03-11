#include <stdio.h>

main(){
int a = 20, b, c;
int *d = &a;
printf("\n\nTemel pointer tanimlama :\n");
printf(" a, b, ve c birer int tamsayi ve a = 10");
// d bir pointer ve %p ile pointer adresini yazdiriyoruz 
printf("\n\n d pointer ve a nin adresini tutuyor : %p\n",  d); 
printf("\n *d ile a'nin degerine ulasiyoruz a = %i\n",   *d); 
printf("\n &a ile a'nin pointer adresine ulasiyoruz a = %p\n",   &a); 
printf("\n &b ile b'nin pointer adresine ulasiyoruz : %p\n",   &b);
printf("\n &c  ile c'nin pointer adresine ulasiyoruz : %p\n",   &c);
printf("\n &d ile d'nin pointer adresine ulasiyoruz : %p\n\n", &d);}