#include <stdio.h>
int main() {printf("11 aralık \n!");

int sayi,top=0;
   printf("bir sayi giriniz");
   scanf("%d",&sayi);
while (sayi!=0)
{

   top +=sayi;
      printf("bir sayi giriniz");
   scanf("%d",&sayi);
}
printf("Top:%d",top);


return 0;}

/*0 girilene kadar tekrar tekrar sayi istiyor ve 0 girince önceden girilen
her sayiyi topluyor
int sayi,top=0;
while (sayi!=0)
{
   printf("bir sayi giriniz");
   scanf("%d",&sayi);
   top +=sayi;
}
printf("Top:%d",top);*/