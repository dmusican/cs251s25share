// container_example.c
#include <stdio.h>

struct Container {
   int value;
};

int main() {
   struct Container w1;
   struct Container w2;
   w1.value = 1;
   w2 = w1;
   printf("%i %i\n", w1.value, w2.value);
   w2.value = 2;
   printf("%i %i\n", w1.value, w2.value);
}
