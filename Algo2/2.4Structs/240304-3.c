#include <stdio.h>
#include <stdlib.h>

struct OgrNot {

  int No;
    int Vize;
      int Test[2];
        int Final;

} ;



int main()

{

struct OgrNot ogr;

ogr.No=12345;
ogr.Vize=40;
ogr.Test[0]=60;
ogr.Test[1]=65;
ogr.Final=80;


    printf("Student Number: %d\n", ogr.No);
    printf("Midterm Exam Score: %d\n", ogr.Vize);
    printf("Test 1 Score: %d\n", ogr.Test[0]);
    printf("Test 2 Score: %d\n", ogr.Test[1]);
    printf("Final Exam Score: %d\n", ogr.Final);


  return 0; 
  }

