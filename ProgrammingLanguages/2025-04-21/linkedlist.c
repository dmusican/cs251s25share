#include <stdio.h>

typedef struct LinkedList {
    int value;
    struct LinkedList *next;
} LinkedList;

int main() {
    LinkedList *list = NULL;
    for (int i=0; i < 5; i++) {
        list = insertFrontLL(list, i);
    }
