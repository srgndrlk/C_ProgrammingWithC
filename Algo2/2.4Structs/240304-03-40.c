#include <stdio.h>
#include <stdlib.h>

typedef struct{
char Plate[50]; char Model[50];char color[50];
} carFeatures;
typedef struct{carFeatures features;
char time[12];
} Car;
typedef struct{Car Cars[1000];
int CarAmount;
} AutoPart;
AutoPart BaharAutoPart = {0};

int main(){ AddCar(); AddCar();
ListCars();
return 0;}

void AddCar(){ Car arc;
printf("\n Enter a Car Infos ...\n");
printf("Plate: ");gets(arc.features.Plate);
printf("Model: ");gets(arc.features.Model);
printf("color: ");gets(arc.features.color);
printf(" Time: ");gets(arc.time);
BaharAutoPart.Cars[BaharAutoPart.CarAmount] = arc;
BaharAutoPart.CarAmount++;
}
void ListCars(){int i;
printf("\n**********Cars in AutoPart**********\n");

for (i = 0; i < BaharAutoPart.CarAmount; i++)    {
printf("%d. Car Plate: %s\n", i, BaharAutoPart.Cars[i].features.Plate);}}