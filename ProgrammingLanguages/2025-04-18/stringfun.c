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
    // char word[3];
    // word[0] = 'h';
    // word[1] = 'i';
    // word[2] = '\0';
    // printf("%s\n", word);

    char *word = "hello";
    printf("%s\n", word);
    // word[0] = 'b';  // bad bad bad
    // If you want to modify, you need to copy
    // Make more memory to hold a copy
    // Stack or heap?
    // Go with heap, allocate more than I need
    char *word2 = malloc(sizeof(char) * 1000);
    strcpy(word2, "hello");
    word2[0] = 'b';
    printf("%s\n", word2);
    printf("%lu\n", strlen(word2));
}
