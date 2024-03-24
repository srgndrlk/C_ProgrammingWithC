#include <stdio.h>
int main(void){
    enum bool {
        false=0,
        true=1
    };

    enum bool isTrue;
    isTrue=true;
    if(isTrue==true){printf("True\n");} return 0;}
