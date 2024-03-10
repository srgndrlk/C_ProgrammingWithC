#include <stdio.h>

int main() {
float x = 5;
float y = 3;

printf(" x+y:%f ", x + y);
printf("\n");
printf(" x-y:%f ", x - y);
float multiply = (float) x * y;
float division = (float) x / y;

// Using modulus operator correctly
float mod = (float)((int)x % (int)y); // and it is annoying when first time useing .

printf("\n multiply x*y:");  printf("%f", multiply); 
printf("\n division x/y:");  printf("%f", division); 
printf("\n mod x y:");  printf("%f", mod); 

return 0;
}