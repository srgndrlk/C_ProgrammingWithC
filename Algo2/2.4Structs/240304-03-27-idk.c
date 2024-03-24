#include <stdio.h>

struct yap {

int id;
char cd;
} yd;

void func(struct yap yd);

int main(void){

struct yap yd;
yd.id = 21;
yd.cd = 'A';

func(yd);

printf("%d %c", yd.id, yd.cd);

return 0;}

void func(struct yap yd){
yd.id += 5;
yd.cd += 5;
printf("func: %d %c\n", yd.id, yd.cd);
}

