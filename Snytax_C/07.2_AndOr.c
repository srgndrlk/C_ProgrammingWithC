#include <stdio.h>
int main() {printf(" Welcome to AndOr  ");

// && And both of them must be 1 for 1 
// || Or just one of them must 1 for 1 

int x=5,y=6,And,Or;

And = 1 && (x==y);  
Or = !(0) || (x==y); 
printf("1And0=%d 1Or0=%d",And,Or);

return 0;}