#include <stdio.h>

int main() {printf(" Welcome to  continue!");
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue;  // it is just skips 4 
    }
    printf("%d\n", i);
  }   
  
  return 0;
}

