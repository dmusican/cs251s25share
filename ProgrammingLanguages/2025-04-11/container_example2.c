// container_example2.c

#include <stdio.h>
#include <stdlib.h>

struct Container {
   int value;
};

int main() {
   struct Container *w1 = malloc(sizeof(struct Container));
   struct Container *w2 = malloc(sizeof(struct Container));
   (*w1).value = 1;
   w2 = w1;
   printf("%i %i\n",(*w1).value,(*w2).value);
   (*w2).value = 2;
   printf("%i %i\n",(*w1).value,(*w2).value);
}
