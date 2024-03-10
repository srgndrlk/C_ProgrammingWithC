#include <stdio.h>

struct yap {
int id;
char cd;
} yd;

void fonk(struct yap *yp);

int main(void){
struct yap *yp;
yd.id = 21;
yd.cd = 'A';
yp = &yd;

fonk(yp);

printf("%d %c", yd.id, yd.cd);
return 0;}

void fonk(struct yap *yp){
yp->id += 5;
yp->cd += 5;
printf("%d %c\n", yp->id, yp->cd);
}