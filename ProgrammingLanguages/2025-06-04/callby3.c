#include <stdio.h>
#include <stdlib.h>

void foo(int *x) {
   x = NULL;
}

int main() {
   int a = 5;
   printf("%i\n",a);

   int *z;
   z = &a;
   foo(z);
   printf("%i\n", *z);
}
