#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // BAD BAD BAD
    // // Slow way to make a string, but it works
    // char word[2];
    // word[0] = 'h';
    // word[1] = 'i';
    // // word[2] = '\0';  B

    // Better: correct, but long, and idiomatic
    char word[3];
    word[0] = 'h';
    word[1] = 'i';
    word[2] = '\0';
    printf("%s\n", word);
}
