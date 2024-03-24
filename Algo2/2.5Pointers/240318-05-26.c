#include <stdio.h>
#include <stdlib.h>

float AverageOf(float array[], int n);

int main() {
float averege = 0;
float array1[] = {10, 20, 30, 40, 50};
averege = AverageOf(array1, 5);
printf("averege: %f", averege);
return 0;}

float AverageOf(float array[], int n) {
float *p_array, sum = 0; p_array = array;

for (int i = 0; i < n; i++) {sum += *(p_array + i);}

return (sum / n);}
