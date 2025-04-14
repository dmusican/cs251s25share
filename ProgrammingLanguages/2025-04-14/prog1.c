#include <stdio.h>
#include <stdlib.h>

int main() {
    int *x;
    x = malloc(sizeof(int));
    *x = 6;
    printf("%i\n", *x);
    int *y;
    y = x;
    printf("%i\n", *y);
    *x = 12;
    printf("%i\n", *x);
    printf("%i\n", *y);
    // x = (int*)19;
    // printf("%i\n", *x);

    int b = 7;
    int *z = &b;
    *z = 9;
    printf("%i\n", b);
    printf("%p\n", z);
    printf("%i\n", *z);
}
