#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // BAD BAD BAD
    // Slow way to make a string, but it works
    char *word = malloc(sizeof(char)*2);
    word[0] = 'h';
    word[1] = 'i';
    word[2] = 'x';

    printf("%lu\n", strlen(word));
}
