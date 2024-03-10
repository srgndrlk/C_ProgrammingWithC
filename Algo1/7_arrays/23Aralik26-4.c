#include <stdio.h>
#include <stdlib.h>
int main() { printf("Hello 15_MultiArray!\n");

int students[3][4] = {77,68,86,73,
96,87,89,78,
70,90,86,81};

int ort[3][1]={};

// en düşük ,büyük not ve ortalama

int enk,enb;

//just for show
for (int i = 0; i < 3; i++){printf("\n %d.Student:",i);
for (int j = 0; j < 4; j++){printf(" [%d]:%d",j,students[i][j]);}}



for (int i = 0; i < 3; i++){
enk=students[i][1];
printf(" i enk:%d",enk);     
for (int j = 0; j < 4; j++){
    if (enk<students[i][j];)
    {
enk=students[i][j];
    printf(" enk eşitlendi:%d\n",students[i][j]);
    }
    else{}
    
    
    }}
    printf(" final enk:%d",enk);     






return 0;}