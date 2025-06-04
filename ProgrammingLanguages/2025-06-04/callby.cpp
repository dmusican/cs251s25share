#include <stdio.h>

void foo(int &x) {
   x = 6;
}

int main() {
   int a = 5;
   printf("%i\n",a);
   foo(a);
   printf("%i\n",a);
}
