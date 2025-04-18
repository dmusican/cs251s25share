#include <stdio.h>

// Play with arrays and make things happen
int main() {
    // Step 1
    int a[3];
    for (int i = 0; i < 3; i++) {
        a[i] = i;
    }

    for (int i = 0; i < 3; i++) {
        printf("a[%i] = %i\n", i, a[i]);
    }
}
