#include <stdio.h>

int main() {printf(" Welcome to Break!");
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break; // it stops when it comes to 4 
    }
    printf("%d\n", i);
  }
   
  return 0;
}