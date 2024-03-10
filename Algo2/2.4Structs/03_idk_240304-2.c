#include <stdio.h>

struct demo {
  int age;
  char name;
} mn;

struct demo func(void);

int main(void){

  mn = func();
  printf("age:%d \n ad:%c", mn.age, mn.ad);

  return 0;}

struct demo func(void){
  struct demo mn;

  mn.age = 21;
  mn.ad= 'A';

  return mn;}

  // i dont know . this is look more compliacted then object orianted programming