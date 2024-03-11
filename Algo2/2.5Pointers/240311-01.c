#include <stdio.h>
#include <stdlib.h>

int main(){

printf("char          : %d byte\n",sizeof(char));
printf("short         : %d byte\n",sizeof(short));
printf("int           : %d byte\n",sizeof(int));
printf("long          : %d byte\n",sizeof(long));
printf("unsigned char : %d byte\n",sizeof(unsigned char));
printf("unsigned short: %d byte\n",sizeof(unsigned short));
printf("unsigned int  : %d byte\n",sizeof(unsigned int));
printf("unsigned long : %d byte\n",sizeof(unsigned long));
printf("float         : %d byte\n",sizeof(float));
printf("double        : %d byte\n",sizeof(double));
printf("long double   : %d byte\n",sizeof(long double));
}