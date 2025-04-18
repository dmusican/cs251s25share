#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Slow way to make a string, but it works
    char word[3];
    word[0] = 'h';
    word[1] = 'i';
    // word[2] = '\0';
    char word2[3];
    word2[0] = 'a';
    word2[1] = 'b';

    printf("%s\n", word);
}
