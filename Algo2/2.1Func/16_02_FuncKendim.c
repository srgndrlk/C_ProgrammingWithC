#include <stdio.h>
int main() {printf("Hello Functions! \n");

void func(){printf("Hello");}

func();
func();

int x;
printf(" SayiGir=");
scanf("%d",&x);
printf(" Sayiniz: %d ",x);


void tekrar(int x){
for (int i = 0; i <= x; i++)
{
printf("i:%d",i);
printf("tekrar \n");
}

}
tekrar(x);

return 0;}

