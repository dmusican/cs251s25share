#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

// idea, but bad code
int doit(function f, int a, int b) {
    f(a, b);
}

int main() {
    int answer = doit(add, 3, 5);
    printf("%i\n", answer);

    answer = doit(multiply, 3, 5);
    printf("%i\n", answer);
}
}
