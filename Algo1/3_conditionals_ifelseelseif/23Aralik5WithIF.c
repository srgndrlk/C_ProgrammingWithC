
#include <stdio.h>
int main() {printf(" SwitchCase-İSLEM!");

printf(" \n");
float x=1;
float y=2;

char islem; 

printf("harf giriniz");scanf("%c",&islem); 
printf("your harf is:%c \n",islem);

if (islem == 's'){printf("sum of :%f",x+y); }
else if (islem=='i'){printf("minus:%f",x-y); }
else if (islem=='d'){printf("division:%f",x/y); }
else if (islem=='m'){printf("mmulti:%f",x*y); }
else {printf("what did you do");}


return 0;}
