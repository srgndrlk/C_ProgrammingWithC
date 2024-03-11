#include <stdio.h>

int main() {
int *p;
p = NULL; 
int *p2;

printf("p pointer value: %p\n", p);
printf("p2 pointer value : %p\n", p2);

if (p) {printf("p pointer is Not NULL...\n");} 
else {printf("p pointer is NULL...\n");}

return 0;
}
