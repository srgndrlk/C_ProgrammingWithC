#include <stdio.h>

void fonk1(char cd);
char fonk2(char cd1);

int main(void){    
char cd1 = 87; /* 'W' 01010111 */
char cd2;
printf("Karakter değeri: %c %d  ", cd1, cd1);  
fonk1(cd1);
cd2 = fonk2(cd1);
printf("Karakter değeri: %c %d  ", cd2, cd2); /* 'u' 01110101 */
fonk1(cd2);
return 0; }

void fonk1(char cd){   
int id;

for (id=128; id>0; id/=2) {
if (cd&id) printf("1 ");
else printf("0 ");}

printf("\n"); }

char fonk2(char cd1){  
struct yap1 {    char cd1:4;    char cd2:4;  };

union bir1 {    char cd1;
struct yap1 yd1;
} bd1;

char cd2;
bd1.cd1 = cd1;             // 1​
cd2 = bd1.yd1.cd1;         // 2​
bd1.yd1.cd1 = bd1.yd1.cd2; // 3​
bd1.yd1.cd2 = cd2;         // 4​
return bd1.cd1; }

