#include <stdio.h>

int main(void) {
enum mainColors {
red, blue, yellow
};

enum mainColors pixel; 
pixel = blue;
if (pixel == red) {  printf("Red\n"); } 
else if (pixel == blue) {   printf("Blue\n");     }
else { printf("Yellow\n");     }

return 0;
}
