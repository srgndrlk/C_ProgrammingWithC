#include <stdio.h>
#include <stdlib.h>
int main() { printf(" Welcome to  MultiArray!\n");

int x[3][4] = {11,34,42,60,   72,99,10,50,   80,66,21,38};
// first 4 number first row  second 4 number second row ...
int y[3][4] = {11,34,42,60,
               72,99,10,50,
               80,66,21,38};
            


int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
matrix[0][0] = 9;

printf("%d \n", matrix[0][0]); 


int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}



return 0;}