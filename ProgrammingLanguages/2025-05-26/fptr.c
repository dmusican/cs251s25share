#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}

// idea, but bad code
// int doit(function f, int a, int b) {
//     f(a, b);
// }
// I have to say "f is a function of two
// integer parameters"
// I have to say "it returns an int"
// I have to say "f is a pointer"
int doit(int *f(int, int),
         int a, int b) {
    f(a, b);
}

int main() {
    int answer = doit(add, 3, 5);
    printf("%i\n", answer);

    answer = doit(multiply, 3, 5);
    printf("%i\n", answer);
}
}
