// stack-vs-heap.c
#include <stdio.h>
#include <stdlib.h>

double fun1(int x) {
    return x * 0.5;
}

double fun2(int *y) {
    *y = *y * 2;
    return *y * 1.5;
}

int main() {
    int x = 4;
    printf("x = %i\n",x);
    double a = fun1(x);
    printf("x = %i\n",x);
    printf("a = %g\n",a);

    int *z = malloc(sizeof(int));
    *z = 8;
    printf("z = %i\n",*z);
    double b = fun2(z);
    printf("z = %i\n",*z);
    printf("b = %g\n",b);
    free(z);
}
