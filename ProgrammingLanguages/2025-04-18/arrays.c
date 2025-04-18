#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    // Let's another variable for this thing
    int b[3]; // makes a whole new array
    // This is a failed attempt at a copy
    // b = a;
    // To copy, could just loop and copy every item
    // one by one, or can do...
    // copy into b, from a, number of bytes
    memcpy(b, a, sizeof(int)*3);


    for (int i = 0; i < 3; i++) {
        printf("b[%i] = %i\n", i, b[i]);
    }

}
